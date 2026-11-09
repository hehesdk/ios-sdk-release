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
            url: "https://res.wooymoon.com/sdk/release/ios/HeheSDK-0.2.10.xcframework.zip",
            checksum: "788b33c788ede06f7006faee03aaa516c005c66a605e055a3e3e485b66b16dab"
        ),
        .binaryTarget(
            name: "HeheAdMobAdapter",
            url: "https://res.wooymoon.com/sdk/release/ios/HeheAdMobAdapter-0.2.10.xcframework.zip",
            checksum: "2cd3f39603a0e0d49a6a533b6564d2717eab79b258345b0e7ab767404e1beb63"
        ),
        .binaryTarget(
            name: "HeheMaxAdapter",
            url: "https://res.wooymoon.com/sdk/release/ios/HeheMaxAdapter-0.2.10.xcframework.zip",
            checksum: "a06937715674cc49666c0e9c0a85443f06443209d8118390fde8911ad04fb826"
        ),
        .binaryTarget(
            name: "HeheTopOnAdapter",
            url: "https://res.wooymoon.com/sdk/release/ios/HeheTopOnAdapter-0.2.10.xcframework.zip",
            checksum: "1c77d40361f68642d5b33857eb0302013980fa8721a156ff2f1b6c6a5b0ee6ea"
        ),
        .binaryTarget(
            name: "HeheTradPlusAdapter",
            url: "https://res.wooymoon.com/sdk/release/ios/HeheTradPlusAdapter-0.2.10.xcframework.zip",
            checksum: "f336333f179b27b3d56969c85c3931a0dda7844979706b028073511e4c3d5202"
        ),
    ]
)
