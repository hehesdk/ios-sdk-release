//
//  HeheMaxMediationAdapter.h
//  HeheMaxAdapter
//
//  AppLovin MAX Custom Adapter 入口。
//  后台 iOS Adapter Class Name 请配置为：HeheMaxMediationAdapter
//

#import <AppLovinSDK/AppLovinSDK.h>
#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

/// AppLovin MAX ↔ HeheSDK 自定义适配器。
@interface HeheMaxMediationAdapter : ALMediationAdapter <MAAdViewAdapter, MAInterstitialAdapter, MARewardedAdapter, MANativeAdAdapter>
@end

NS_ASSUME_NONNULL_END
