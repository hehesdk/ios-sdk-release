// swift-tools-version:5.7
import PackageDescription

// Binary artifacts are hosted on GitHub Releases for tag 0.2.2.
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
            url: "https://github.com/hehesdk/ios-sdk-release/releases/download/0.2.2/HeheSDK-0.2.2.xcframework.zip",
            checksum: "a65da8d6d9347fe5464667b695f122a02078d44225cc47b2918ce7f4c5dabb71"
        ),
        .binaryTarget(
            name: "HeheAdMobAdapter",
            url: "https://github.com/hehesdk/ios-sdk-release/releases/download/0.2.2/HeheAdMobAdapter-0.2.2.xcframework.zip",
            checksum: "e523ffc0803d3d83bb1d42922a615979a28f50ae5c2f5bd66dbf039b78f33575"
        ),
        .binaryTarget(
            name: "HeheMaxAdapter",
            url: "https://github.com/hehesdk/ios-sdk-release/releases/download/0.2.2/HeheMaxAdapter-0.2.2.xcframework.zip",
            checksum: "19795f25866b7d65f3e71c7b51a901af6b8b9f7b3f272b6c00682d243396663c"
        ),
        .binaryTarget(
            name: "HeheTopOnAdapter",
            url: "https://github.com/hehesdk/ios-sdk-release/releases/download/0.2.2/HeheTopOnAdapter-0.2.2.xcframework.zip",
            checksum: "e74e3f5e6c4a398a04bbc2b3ebb9b8c00f285ede34464db5b469aa66a9f64ac5"
        ),
        .binaryTarget(
            name: "HeheTradPlusAdapter",
            url: "https://github.com/hehesdk/ios-sdk-release/releases/download/0.2.2/HeheTradPlusAdapter-0.2.2.xcframework.zip",
            checksum: "4d50884791eff3e1ae9b6f4c857d561005cb8a0337997b9842e1b87fb6e6d229"
        ),
    ]
)
