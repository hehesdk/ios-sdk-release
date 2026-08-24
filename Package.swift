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
            url: "https://res.wooymoon.com/sdk/release/ios/HeheSDK-0.2.7.xcframework.zip",
            checksum: "d514c330ef307ce33c8512b71838c709c36ee22a73467662274a655dba0fd074"
        ),
        .binaryTarget(
            name: "HeheAdMobAdapter",
            url: "https://res.wooymoon.com/sdk/release/ios/HeheAdMobAdapter-0.2.7.xcframework.zip",
            checksum: "731a3530f785e38ad7ff9e233224e27d2ed676e871e415cdcd5b798dd7bcfef6"
        ),
        .binaryTarget(
            name: "HeheMaxAdapter",
            url: "https://res.wooymoon.com/sdk/release/ios/HeheMaxAdapter-0.2.7.xcframework.zip",
            checksum: "aea983bddc213e1faab6ce4f4f9aecb36198f128da9aa3f7688203543a9c348f"
        ),
        .binaryTarget(
            name: "HeheTopOnAdapter",
            url: "https://res.wooymoon.com/sdk/release/ios/HeheTopOnAdapter-0.2.7.xcframework.zip",
            checksum: "69565edc96a48d495e58a598225551e06be620a16628017ca1b3866919cbf8e4"
        ),
        .binaryTarget(
            name: "HeheTradPlusAdapter",
            url: "https://res.wooymoon.com/sdk/release/ios/HeheTradPlusAdapter-0.2.7.xcframework.zip",
            checksum: "95a28086bed8997df53572129343be01fb6c280c2d2259d97c573e91bd04367a"
        ),
    ]
)
