# HeheSDK

Hehe iOS 广告 SDK。

## 集成方式

### CocoaPods

`Podfile`：

```ruby
platform :ios, '13.0'

target 'YourApp' do
  use_frameworks!
  pod 'HeheAdSDK'
end
```

然后执行 `pod install`。

### Swift Package Manager

Xcode：**File → Add Package Dependencies**，填入：

```
https://github.com/hehesdk/ios-sdk-release
```

选择版本规则（如 **Up to Next Major** `1.0.0`），添加到 Target 即可。

代码中：

```objc
#import <HeheSDK/HeheSDK.h>

[[HeheAds shareSDK] initSDK:@"YOUR_APP_KEY"
                 onSuccess:^{ }
                   onError:^(NSError *error) { }];
```

或 Swift：

```swift
import HeheSDK

HeheAds.shareSDK().initSDK("YOUR_APP_KEY", onSuccess: { }, onError: { _ in })
```

## 系统要求

- iOS 13.0+
- Xcode 15+

## License

MIT — 见 [LICENSE](LICENSE)
