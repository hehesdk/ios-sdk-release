// swift-tools-version:5.7
import PackageDescription

let package = Package(
    name: "HeheSDK",
    platforms: [
        .iOS(.v13),
    ],
    products: [
        .library(
            name: "HeheSDK",
            targets: ["HeheSDK"]
        ),
    ],
    targets: [
        .binaryTarget(
            name: "HeheSDK",
            path: "HeheSDK.xcframework"
        ),
    ]
)
