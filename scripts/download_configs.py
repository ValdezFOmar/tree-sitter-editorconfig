import shutil
import subprocess
import sys
from collections.abc import Iterable
from pathlib import Path
from pathlib import PurePosixPath as UrlPath
from typing import cast

import bs4
import requests
from urllib.parse import urlparse

CONFIGS_URL = 'https://github.com/editorconfig/editorconfig/wiki/Projects-Using-EditorConfig'
OUTPUT_DIR = Path('editorconfig-files')


def get_html(url: str) -> bs4.BeautifulSoup:
    response = requests.get(url)
    if response.status_code != 200:
        print(f'Error downloading {url}', file=sys.stderr)
        sys.exit(1)
    response.encoding = 'utf-8'
    return bs4.BeautifulSoup(response.text, 'html.parser')


def transform_urls(urls: Iterable[str]) -> list[str]:
    url_paths = (
        UrlPath(url.path)
        for url in map(urlparse, urls)
        if url.netloc == 'github.com' and url.path != '/'
    )

    new_urls: list[str] = []

    for path in url_paths:
        if path.parts[-1] != '.editorconfig':
            continue
        file_path = '/'.join(part for part in path.parts if part not in {'/', 'blob'})
        if not file_path:
            continue
        new_urls.append(f'https://raw.githubusercontent.com/{file_path}' )

    return new_urls


def main() -> int:
    a_tags: list[bs4.Tag] = get_html(CONFIGS_URL).find_all('a', string='source')
    urls = transform_urls(cast(str, tag['href']) for tag in a_tags)

    try:
        OUTPUT_DIR.mkdir()
    except FileExistsError:
        shutil.rmtree(OUTPUT_DIR)
        OUTPUT_DIR.mkdir()

    process = subprocess.run(
        ['wget', '--input-file', '-', '--directory-prefix', OUTPUT_DIR, '--wait', '1', '--random-wait'],
        input='\n'.join(urls),
        encoding='utf-8',
    )
    return process.returncode


if __name__ == '__main__':
    sys.exit(main())
