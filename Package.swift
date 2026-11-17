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
            url: "https://res.wooymoon.com/sdk/release/ios/HeheSDK-0.2.11.xcframework.zip",
            checksum: "863f10b0abba3794d863812196417a2b55736494273b679fc8f04f0af656840e"
        ),
        .binaryTarget(
            name: "HeheAdMobAdapter",
            url: "https://res.wooymoon.com/sdk/release/ios/HeheAdMobAdapter-0.2.11.xcframework.zip",
            checksum: "244752bb7271c7e87e94975721a131dac3926a82e97c0e6ad8dc480d62bd86d7"
        ),
        .binaryTarget(
            name: "HeheMaxAdapter",
            url: "https://res.wooymoon.com/sdk/release/ios/HeheMaxAdapter-0.2.11.xcframework.zip",
            checksum: "1a622c1b7ca19b39cd636db8a4c1ce0406fa4e1fcd9d3d8b4f624413415823e7"
        ),
        .binaryTarget(
            name: "HeheTopOnAdapter",
            url: "https://res.wooymoon.com/sdk/release/ios/HeheTopOnAdapter-0.2.11.xcframework.zip",
            checksum: "33b8f3b2ed02fef85ccb8dde017723606475f95ddbf26e41e0ec85957f6195f3"
        ),
        .binaryTarget(
            name: "HeheTradPlusAdapter",
            url: "https://res.wooymoon.com/sdk/release/ios/HeheTradPlusAdapter-0.2.11.xcframework.zip",
            checksum: "46ef1219ed453b653088d9818b2f5e740a5a9e4eb1c893823965a1cac54fb64d"
        ),
    ]
)
