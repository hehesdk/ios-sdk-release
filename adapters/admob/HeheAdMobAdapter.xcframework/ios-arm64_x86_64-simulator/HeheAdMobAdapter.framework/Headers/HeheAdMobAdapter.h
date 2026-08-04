//
//  HeheAdMobAdapter.h
//  HeheAdMobAdapter
//
//  AdMob Custom Event 入口（GADMediationAdapter）。
//  后台类名请配置为：HeheAdMobAdapter
//

#import <Foundation/Foundation.h>
#import <GoogleMobileAds/GoogleMobileAds.h>

NS_ASSUME_NONNULL_BEGIN

/// AdMob ↔ HeheSDK 自定义事件适配器入口。
@interface HeheAdMobAdapter : NSObject <GADMediationAdapter>
@end

NS_ASSUME_NONNULL_END
