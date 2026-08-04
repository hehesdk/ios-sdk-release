# HeheSDK

Hehe iOS 广告 SDK（Core + 可选聚合适配器）。

当前版本：`0.2.1`

## CocoaPods

```ruby
platform :ios, '13.0'
use_frameworks!

target 'YourApp' do
  # 仅 Core（直连 Hehe）
  # pod 'HeheAdSDK', '0.2.1'

  # 或按聚合选型只选一个 Adapter Subspec（自动含 Core）
  pod 'HeheAdSDK/AdMob', '0.2.1'
  # pod 'HeheAdSDK/MAX', '0.2.1'
  # pod 'HeheAdSDK/TopOn', '0.2.1'   # 依赖 TPNiOS（新 TopOn 平台）
  # pod 'HeheAdSDK/TradPlus', '0.2.1'
end
```

Git Tag（trunk 未推或先验证仓库时）：

```ruby
pod 'HeheAdSDK/AdMob', :git => 'https://github.com/hehesdk/ios-sdk-release.git', :tag => '0.2.1'
```

> 不要同时集成多个 Adapter Subspec。
> TopOn 请使用新平台账号对应的 `TPNiOS`（本 Subspec 已声明）；旧 Taku 的 `AnyThinkiOS` 会报错 20003。

## Swift Package Manager

Xcode → **File → Add Package Dependencies**：

```
https://github.com/hehesdk/ios-sdk-release
```

可选 Product：

| Product | 说明 |
| --- | --- |
| `HeheSDK` | 仅 Core |
| `HeheAdMobAdapter` | Core + AdMob Adapter（另需官方 GMA Package） |
| `HeheMaxAdapter` | Core + MAX Adapter（另需官方 AppLovin Package） |
| `HeheTopOnAdapter` | Core + TopOn Adapter（聚合 SDK 请用 CocoaPods/手动引入） |
| `HeheTradPlusAdapter` | Core + TradPlus Adapter（聚合 SDK 请用 CocoaPods/手动引入） |

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
