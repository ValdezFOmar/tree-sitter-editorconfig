import random
import sys
import time
from collections.abc import Iterable
from pathlib import Path
from pathlib import PurePosixPath as UrlPath
from urllib.parse import urlparse

import bs4
import requests


def print_error(r: requests.Response) -> None:
    print(f'Error downloading: {r.url}', file=sys.stderr)
    print(f'Status code: {r.status_code}', file=sys.stderr)
    print(f'Reason: {r.reason}', file=sys.stderr)


def get_html(url: str) -> bs4.BeautifulSoup:
    response = requests.get(url)
    if not response.ok:
        print_error(response)
        sys.exit(1)
    response.encoding = 'utf-8'
    return bs4.BeautifulSoup(response.text, 'html.parser')


def transform_urls(urls: Iterable[str]) -> list[str]:
    url_paths = (
        url.path for url in map(urlparse, urls) if url.netloc == 'github.com' and url.path != '/'
    )

    new_urls: list[str] = []

    for path in url_paths:
        if not path.endswith('.editorconfig'):
            continue
        file_path = '/'.join(filter(lambda p: p and p != 'blob', path.split('/')))
        if not file_path:
            continue
        new_urls.append(f'https://raw.githubusercontent.com/{file_path}')

    return new_urls


def download(url: str, file: Path) -> None:
    print(f'downloading {url}')
    response = requests.get(url)
    if not response.ok:
        print_error(response)
        return
    with open(file, 'wb') as f:
        f.write(response.content)
        f.write(b'\n# vim: set ft=editorconfig:\n')


def main() -> int:
    configs_list = 'https://github.com/editorconfig/editorconfig/wiki/Projects-Using-EditorConfig'

    a_tags = get_html(configs_list).find_all('a', string='source', href=True)

    output_dir = Path(__file__).parent.parent / 'editorconfig-files'
    output_dir.mkdir(parents=True, exist_ok=True)
    wait_time = 0.5

    for url in transform_urls(tag['href'] for tag in a_tags):
        repo_name = url.split('/')[-3]
        time.sleep(wait_time + wait_time * random.random())
        download(url, output_dir / (repo_name + '.editorconfig'))

    return 0


if __name__ == '__main__':
    sys.exit(main())
