# HeheSDK

Hehe iOS 广告 SDK（Core + 可选聚合适配器）。

当前版本：`0.2.3`

## CocoaPods

```ruby
platform :ios, '13.0'
use_frameworks!

target 'YourApp' do
  # 仅 Core（直连 Hehe）
  # pod 'HeheAdSDK', '0.2.3'

  # 或按聚合选型只选一个 Adapter Subspec（自动含 Core）
  pod 'HeheAdSDK/AdMob', '0.2.3'
  # pod 'HeheAdSDK/MAX', '0.2.3'
  # pod 'HeheAdSDK/TopOn', '0.2.3'   # 依赖 TPNiOS（新 TopOn 平台）
  # pod 'HeheAdSDK/TradPlus', '0.2.3'
end
```

Git Tag（trunk 未推或先验证仓库时）：

```ruby
pod 'HeheAdSDK/AdMob', :git => 'https://github.com/hehesdk/ios-sdk-release.git', :tag => '0.2.3'
```

> 不要同时集成多个 Adapter Subspec。
> TopOn 请使用新平台账号对应的 `TPNiOS`（本 Subspec 已声明）；旧 Taku 的 `AnyThinkiOS` 会报错 20003。

## Swift Package Manager

Xcode → **File → Add Package Dependencies**：

```
https://github.com/hehesdk/ios-sdk-release
```

选 **一个** Adapter Product 即可（已含 Core，不要再勾 `HeheSDK`）：

| Product | 说明 |
| --- | --- |
| `HeheSDK` | 仅 Core |
| `HeheAdMobAdapter` | Core + AdMob（另需官方 GMA Package） |
| `HeheMaxAdapter` | Core + MAX（另需官方 AppLovin Package） |
| `HeheTopOnAdapter` | Core + TopOn（聚合 SDK 请用 CocoaPods/手动引入） |
| `HeheTradPlusAdapter` | Core + TradPlus（聚合 SDK 请用 CocoaPods/手动引入） |

> **按需下载**：`Package.swift` 使用 CDN 远程 binary zip（`https://res.wooymoon.com/sdk/release/ios/`）。  
> 勾选 `HeheAdMobAdapter` 时，SPM 只会拉取 `HeheSDK-*.zip` + `HeheAdMobAdapter-*.zip`，不会拉 MAX/TopOn/TradPlus 的 zip。  
> 发布时必须把 `releases/*-${VERSION}.xcframework.zip` 上传到 CDN，**文件名与 checksum 保持一致**（不要用 GitHub Releases 下载链接）。

> CocoaPods 仍使用仓库内 `vendored_frameworks`（`HeheSDK.xcframework` / `adapters/`），与 SPM 远程 zip 并行。

## 后台类名速查

| 平台 | 类名 |
| --- | --- |
| AdMob | `HeheAdMobAdapter` |
| MAX | `HeheMaxMediationAdapter` |
| TopOn | `HeheTopOnBannerAdapter` / `HeheTopOnInterstitialAdapter` / `HeheTopOnRewardedAdapter` / `HeheTopOnNativeAdapter`（Init: `HeheTopOnInitAdapter`） |
| TradPlus | `HeheTradPlusBannerAdapter` / `HeheTradPlusInterstitialAdapter` / `HeheTradPlusRewardedAdapter` / `HeheTradPlusNativeAdapter` |

Custom 参数 JSON：

```json
{"appKey":"<Hehe AppKey>","placementId":"<Hehe PlacementId>"}
```

## 系统要求

- iOS 13.0+
- Xcode 15+

## License

MIT — 见 [LICENSE](LICENSE)
