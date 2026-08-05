// swift-tools-version:5.7
import PackageDescription

// CDN: https://res.wooymoon.com/sdk/release/ios/
// 只勾选一个 Adapter Product（已含 Core）；勿再勾 HeheSDK。
let package = Package(
    name: "HeheSDK",
    platforms: [
        .iOS(.v13),
    ],
    products: [
        .library(name: "HeheSDK", targets: ["HeheSDK"]),
        .library(name: "HeheAdMobAdapter", targets: ["HeheAdMobAdapter", "HeheSDK"]),
        .library(name: "HeheMaxAdapter", targets: ["HeheMaxAdapter", "HeheSDK"]),
        .library(name: "HeheTopOnAdapter", targets: ["HeheTopOnAdapter", "HeheSDK"]),
        .library(name: "HeheTradPlusAdapter", targets: ["HeheTradPlusAdapter", "HeheSDK"]),
    ],
    targets: [
        .binaryTarget(
            name: "HeheSDK",
            url: "https://res.wooymoon.com/sdk/release/ios/HeheSDK-0.2.5.xcframework.zip",
            checksum: "e13b4f36400297ea955e1f2f37997e55b7def4723ff6ae8db97b4755df5c756f"
        ),
        .binaryTarget(
            name: "HeheAdMobAdapter",
            url: "https://res.wooymoon.com/sdk/release/ios/HeheAdMobAdapter-0.2.5.xcframework.zip",
            checksum: "24f359d6c83e80d493623a134325031f7f9f56b00b933cb083cef9bc5978eb19"
        ),
        .binaryTarget(
            name: "HeheMaxAdapter",
            url: "https://res.wooymoon.com/sdk/release/ios/HeheMaxAdapter-0.2.5.xcframework.zip",
            checksum: "819340c76f5528a33e82e6476fffd1a6abb97f5e2e87923196f41a7aec94b587"
        ),
        .binaryTarget(
            name: "HeheTopOnAdapter",
            url: "https://res.wooymoon.com/sdk/release/ios/HeheTopOnAdapter-0.2.5.xcframework.zip",
            checksum: "4d60c1816a885bb5dd6602262893c33ecf2c1aa60ccb9c8b37d56b03ff5737a6"
        ),
        .binaryTarget(
            name: "HeheTradPlusAdapter",
            url: "https://res.wooymoon.com/sdk/release/ios/HeheTradPlusAdapter-0.2.5.xcframework.zip",
            checksum: "6535831369e90239756bfc76e0802174db7440151f019df29ec0f5b9dde52a9e"
        ),
    ]
)
