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
            url: "https://res.wooymoon.com/sdk/release/ios/HeheSDK-0.2.8.xcframework.zip",
            checksum: "736c7c8acb10877d650bb1a90d3aaf19aa5bd15f0ef58c1e503f1b4faef6f41a"
        ),
        .binaryTarget(
            name: "HeheAdMobAdapter",
            url: "https://res.wooymoon.com/sdk/release/ios/HeheAdMobAdapter-0.2.8.xcframework.zip",
            checksum: "fecdbd76991986747f23b78f1623cc32e6043d5fd4c9ba66a226a0cac5263a71"
        ),
        .binaryTarget(
            name: "HeheMaxAdapter",
            url: "https://res.wooymoon.com/sdk/release/ios/HeheMaxAdapter-0.2.8.xcframework.zip",
            checksum: "9035c03f3d53718e0f3b4c7644eaf21c489b2a20c6871522bde260b165c37245"
        ),
        .binaryTarget(
            name: "HeheTopOnAdapter",
            url: "https://res.wooymoon.com/sdk/release/ios/HeheTopOnAdapter-0.2.8.xcframework.zip",
            checksum: "44b6f72d6d28227c44ac449a9ed6d8ba5141d32e1b0af31c8d0b926ae022fc73"
        ),
        .binaryTarget(
            name: "HeheTradPlusAdapter",
            url: "https://res.wooymoon.com/sdk/release/ios/HeheTradPlusAdapter-0.2.8.xcframework.zip",
            checksum: "3847cf2e338225a5c94de73d8891f4d2ae073310f13d30c0d717d3ee70284e64"
        ),
    ]
)
