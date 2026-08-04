//
//  HeheTopOnAdapterVersion.h
//  HeheTopOnAdapter
//

#ifndef HeheTopOnAdapterVersion_h
#define HeheTopOnAdapterVersion_h

#import "HeheAdapterVersion.h"

/// TopOn Adapter 逻辑版本（Core.Rev）。
#undef HEHE_ADAPTER_VERSION
#define HEHE_ADAPTER_VERSION @"0.2.2.0"

/// 后台配置：初始化适配器类名。
#define HEHE_TOPON_INIT_ADAPTER_CLASS_NAME @"HeheTopOnInitAdapter"
/// 后台配置：基础适配器类名（可不填后台，由各样式 Adapter 引用）。
#define HEHE_TOPON_BASE_ADAPTER_CLASS_NAME @"HeheTopOnBaseAdapter"
/// 后台配置：Banner 适配器类名。
#define HEHE_TOPON_BANNER_ADAPTER_CLASS_NAME @"HeheTopOnBannerAdapter"
/// 后台配置：插屏适配器类名。
#define HEHE_TOPON_INTERSTITIAL_ADAPTER_CLASS_NAME @"HeheTopOnInterstitialAdapter"
/// 后台配置：激励适配器类名。
#define HEHE_TOPON_REWARDED_ADAPTER_CLASS_NAME @"HeheTopOnRewardedAdapter"
/// 后台配置：原生适配器类名。
#define HEHE_TOPON_NATIVE_ADAPTER_CLASS_NAME @"HeheTopOnNativeAdapter"

#endif /* HeheTopOnAdapterVersion_h */
