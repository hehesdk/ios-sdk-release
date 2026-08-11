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
            url: "https://res.wooymoon.com/sdk/release/ios/HeheSDK-0.2.6.xcframework.zip",
            checksum: "ec1dd481b815bb1ac01a202646ae1d1a91a6a131507d1f8df5d84685674ca203"
        ),
        .binaryTarget(
            name: "HeheAdMobAdapter",
            url: "https://res.wooymoon.com/sdk/release/ios/HeheAdMobAdapter-0.2.6.xcframework.zip",
            checksum: "a7324f78176c347877dd0c0fd33ee0fa9824a1d84edc7997382e4111f1a53003"
        ),
        .binaryTarget(
            name: "HeheMaxAdapter",
            url: "https://res.wooymoon.com/sdk/release/ios/HeheMaxAdapter-0.2.6.xcframework.zip",
            checksum: "b2b86666a8eabeba777447e65d3890a63b143fb5ddb27498a243f36171fd302d"
        ),
        .binaryTarget(
            name: "HeheTopOnAdapter",
            url: "https://res.wooymoon.com/sdk/release/ios/HeheTopOnAdapter-0.2.6.xcframework.zip",
            checksum: "193707c84100f909ef2e94b51668c9f380830627a603362711adac7b5e1551aa"
        ),
        .binaryTarget(
            name: "HeheTradPlusAdapter",
            url: "https://res.wooymoon.com/sdk/release/ios/HeheTradPlusAdapter-0.2.6.xcframework.zip",
            checksum: "5c1e5039833348acbd67ec4544f883536e1bc3955d7306143805ec2a3ddb6554"
        ),
    ]
)
