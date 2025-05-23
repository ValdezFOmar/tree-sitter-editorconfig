// swift-tools-version:5.3
import PackageDescription

let package = Package(
    name: "TreeSitterEditorconfig",
    products: [
        .library(name: "TreeSitterEditorconfig", targets: ["TreeSitterEditorconfig"]),
    ],
    dependencies: [
        .package(url: "https://github.com/tree-sitter/swift-tree-sitter", from: "0.8.0"),
    ],
    targets: [
        .target(
            name: "TreeSitterEditorconfig",
            dependencies: [],
            path: ".",
            sources: [
                "src/parser.c",
                "src/scanner.c",
            ],
            resources: [
                .copy("queries")
            ],
            publicHeadersPath: "bindings/swift",
            cSettings: [.headerSearchPath("src")]
        ),
        .testTarget(
            name: "TreeSitterEditorconfigTests",
            dependencies: [
                "SwiftTreeSitter",
                "TreeSitterEditorconfig",
            ],
            path: "bindings/swift/TreeSitterEditorconfigTests"
        )
    ],
    cLanguageStandard: .c11
)
