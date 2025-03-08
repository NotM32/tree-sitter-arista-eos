// swift-tools-version:5.3
import PackageDescription

let package = Package(
    name: "TreeSitterAristaEOS",
    products: [
        .library(name: "TreeSitterAristaEOS", targets: ["TreeSitterAristaEOS"]),
    ],
    dependencies: [
        .package(url: "https://github.com/ChimeHQ/SwiftTreeSitter", from: "0.8.0"),
    ],
    targets: [
        .target(
            name: "TreeSitterAristaEOS",
            dependencies: [],
            path: ".",
            sources: [
                "src/parser.c",
                // NOTE: if your language has an external scanner, add it here.
            ],
            resources: [
                .copy("queries")
            ],
            publicHeadersPath: "bindings/swift",
            cSettings: [.headerSearchPath("src")]
        ),
        .testTarget(
            name: "TreeSitterAristaEOSTests",
            dependencies: [
                "SwiftTreeSitter",
                "TreeSitterAristaEOS",
            ],
            path: "bindings/swift/TreeSitterAristaEOSTests"
        )
    ],
    cLanguageStandard: .c11
)
