//
//  HeheAdMobNativeAd.h
//  HeheAdMobAdapter
//

#import <Foundation/Foundation.h>
#import <GoogleMobileAds/GoogleMobileAds.h>

NS_ASSUME_NONNULL_BEGIN

/// AdMob 原生 ↔ HHNativeAdView 桥接。
@interface HeheAdMobNativeAd : NSObject <GADMediationNativeAd>

/**
 * @brief 按 AdMob 配置加载原生广告。
 */
- (void)loadNativeAdForAdConfiguration:(GADMediationNativeAdConfiguration *)adConfiguration
                     completionHandler:(GADMediationNativeLoadCompletionHandler)completionHandler;

@end

NS_ASSUME_NONNULL_END
