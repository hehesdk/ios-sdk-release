//
//  HeheAdMobInterstitialAd.h
//  HeheAdMobAdapter
//

#import <Foundation/Foundation.h>
#import <GoogleMobileAds/GoogleMobileAds.h>

NS_ASSUME_NONNULL_BEGIN

/// AdMob 插页 ↔ HHInterstitialAd 桥接。
@interface HeheAdMobInterstitialAd : NSObject <GADMediationInterstitialAd>

/**
 * @brief 按 AdMob 配置加载插页。
 */
- (void)loadInterstitialForAdConfiguration:(GADMediationInterstitialAdConfiguration *)adConfiguration
                         completionHandler:(GADMediationInterstitialLoadCompletionHandler)completionHandler;

@end

NS_ASSUME_NONNULL_END
