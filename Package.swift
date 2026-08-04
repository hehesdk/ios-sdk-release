// swift-tools-version:5.7
import PackageDescription

// Binary artifacts are hosted at https://res.wooymoon.com/sdk/release/ios/ (not GitHub Releases).
// Selecting one Adapter product downloads Core + that Adapter zip only (not all adapters).
let package = Package(
    name: "HeheSDK",
    platforms: [
        .iOS(.v13),
    ],
    products: [
        .library(name: "HeheSDK", targets: ["HeheSDK"]),
        // Adapter products already include Core — do not also add HeheSDK product.
        .library(name: "HeheAdMobAdapter", targets: ["HeheAdMobAdapter", "HeheSDK"]),
        .library(name: "HeheMaxAdapter", targets: ["HeheMaxAdapter", "HeheSDK"]),
        .library(name: "HeheTopOnAdapter", targets: ["HeheTopOnAdapter", "HeheSDK"]),
        .library(name: "HeheTradPlusAdapter", targets: ["HeheTradPlusAdapter", "HeheSDK"]),
    ],
    targets: [
        .binaryTarget(
            name: "HeheSDK",
            url: "https://res.wooymoon.com/sdk/release/ios/HeheSDK-0.2.3.xcframework.zip",
            checksum: "5ef4d7ae2793c66083c9c00407a106c916b3821e35623d773392bb7a07376554"
        ),
        .binaryTarget(
            name: "HeheAdMobAdapter",
            url: "https://res.wooymoon.com/sdk/release/ios/HeheAdMobAdapter-0.2.3.xcframework.zip",
            checksum: "c419c4f813bf403ef03697c1cf35351d99b54e7fed7fec4c7bf3b6a1544bcefc"
        ),
        .binaryTarget(
            name: "HeheMaxAdapter",
            url: "https://res.wooymoon.com/sdk/release/ios/HeheMaxAdapter-0.2.3.xcframework.zip",
            checksum: "bc0f9c72478d2c4318bb6f3ab4313c0d6c354b88d5d7736813991421129adbbf"
        ),
        .binaryTarget(
            name: "HeheTopOnAdapter",
            url: "https://res.wooymoon.com/sdk/release/ios/HeheTopOnAdapter-0.2.3.xcframework.zip",
            checksum: "60d03c75f6dec7e0009b9a64c3dd158f2d7f5de53ac360f9c9c7a7c5d5c7ea63"
        ),
        .binaryTarget(
            name: "HeheTradPlusAdapter",
            url: "https://res.wooymoon.com/sdk/release/ios/HeheTradPlusAdapter-0.2.3.xcframework.zip",
            checksum: "8587da262ddf33230555dc12593d894ff11099cd6bc8b8d89750bce9b91f932a"
        ),
    ]
)
