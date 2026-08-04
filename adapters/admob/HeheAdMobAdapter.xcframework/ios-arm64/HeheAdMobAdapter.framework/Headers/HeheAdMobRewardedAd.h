//
//  HeheAdMobRewardedAd.h
//  HeheAdMobAdapter
//

#import <Foundation/Foundation.h>
#import <GoogleMobileAds/GoogleMobileAds.h>

NS_ASSUME_NONNULL_BEGIN

/// AdMob 激励 ↔ HHRewardedAd 桥接。
@interface HeheAdMobRewardedAd : NSObject <GADMediationRewardedAd>

/**
 * @brief 按 AdMob 配置加载激励广告。
 */
- (void)loadRewardedAdForAdConfiguration:(GADMediationRewardedAdConfiguration *)adConfiguration
                       completionHandler:(GADMediationRewardedLoadCompletionHandler)completionHandler;

@end

NS_ASSUME_NONNULL_END
