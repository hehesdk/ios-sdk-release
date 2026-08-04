// swift-tools-version:5.7
import PackageDescription

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
        .binaryTarget(name: "HeheSDK", path: "HeheSDK.xcframework"),
        .binaryTarget(name: "HeheAdMobAdapter", path: "adapters/admob/HeheAdMobAdapter.xcframework"),
        .binaryTarget(name: "HeheMaxAdapter", path: "adapters/max/HeheMaxAdapter.xcframework"),
        .binaryTarget(name: "HeheTopOnAdapter", path: "adapters/topon/HeheTopOnAdapter.xcframework"),
        .binaryTarget(name: "HeheTradPlusAdapter", path: "adapters/tradplus/HeheTradPlusAdapter.xcframework"),
    ]
)
