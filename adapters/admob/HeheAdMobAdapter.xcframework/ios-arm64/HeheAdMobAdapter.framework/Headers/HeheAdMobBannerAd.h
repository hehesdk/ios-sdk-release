//
//  HeheAdMobBannerAd.h
//  HeheAdMobAdapter
//

#import <Foundation/Foundation.h>
#import <GoogleMobileAds/GoogleMobileAds.h>

NS_ASSUME_NONNULL_BEGIN

/// AdMob Banner ↔ HHBannerAd 桥接。
@interface HeheAdMobBannerAd : NSObject <GADMediationBannerAd>

/**
 * @brief 按 AdMob 配置加载 Banner。
 * @param adConfiguration AdMob Banner 配置。
 * @param completionHandler 加载完成回调。
 */
- (void)loadBannerForAdConfiguration:(GADMediationBannerAdConfiguration *)adConfiguration
                   completionHandler:(GADMediationBannerLoadCompletionHandler)completionHandler;

@end

NS_ASSUME_NONNULL_END
