//
//  HeheTradPlusAdapterVersion.h
//  HeheTradPlusAdapter
//

#ifndef HeheTradPlusAdapterVersion_h
#define HeheTradPlusAdapterVersion_h

#import "HeheAdapterVersion.h"

/// TradPlus Adapter 逻辑版本（Core.Rev）。
#undef HEHE_ADAPTER_VERSION
#define HEHE_ADAPTER_VERSION @"0.2.1.0"

/// 后台配置：Banner 适配器类名。
#define HEHE_TRADPLUS_BANNER_ADAPTER_CLASS_NAME @"HeheTradPlusBannerAdapter"
/// 后台配置：插屏适配器类名。
#define HEHE_TRADPLUS_INTERSTITIAL_ADAPTER_CLASS_NAME @"HeheTradPlusInterstitialAdapter"
/// 后台配置：激励适配器类名。
#define HEHE_TRADPLUS_REWARDED_ADAPTER_CLASS_NAME @"HeheTradPlusRewardedAdapter"
/// 后台配置：原生适配器类名。
#define HEHE_TRADPLUS_NATIVE_ADAPTER_CLASS_NAME @"HeheTradPlusNativeAdapter"

#endif /* HeheTradPlusAdapterVersion_h */
