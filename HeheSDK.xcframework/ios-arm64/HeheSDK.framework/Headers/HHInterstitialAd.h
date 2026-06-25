//
//  HHInterstitialAd.h
//  HeheSDK
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@class HHInterstitialAd;

/// 插页回调协议。
@protocol HHInterstitialAdDelegate <NSObject>
@optional
/// 插页加载成功。
- (void)interstitialAdDidLoad:(HHInterstitialAd *)interstitialAd;
/// 插页加载失败。
- (void)interstitialAd:(HHInterstitialAd *)interstitialAd didFailWithError:(NSError *)error;
/// 插页展示失败。
- (void)interstitialAd:(HHInterstitialAd *)interstitialAd displayFailWithError:(NSError *)error;
/// 插页即将曝光。
- (void)interstitialAdWillLogImpression:(HHInterstitialAd *)interstitialAd;
/// 插页点击。
- (void)interstitialAdDidClick:(HHInterstitialAd *)interstitialAd;
/// 插页即将关闭。
- (void)interstitialAdWillClose:(HHInterstitialAd *)interstitialAd;
/// 插页已关闭。
- (void)interstitialAdDidClose:(HHInterstitialAd *)interstitialAd;
@end

/// 插页广告对象。
@interface HHInterstitialAd : NSObject

/// 广告位 ID。
@property (nonatomic, copy, readonly) NSString *placementID;
/// 插页代理。
@property (nonatomic, weak, nullable) id<HHInterstitialAdDelegate> delegate;
/// 插页是否可展示。
@property (nonatomic, assign, readonly, getter=isReady) BOOL ready;

/**
 * @brief 创建插页对象。
 * @param placementID 广告位 ID。
 */
- (instancetype)initWithPlacementID:(NSString *)placementID;

/// 禁止使用默认初始化。
- (instancetype)init NS_UNAVAILABLE;
/// 禁止使用 `new` 创建实例。
+ (instancetype)new NS_UNAVAILABLE;

/// 加载插页广告。
- (void)loadAd NS_SWIFT_NAME(loadAd());

/// 在指定控制器上展示插页。
- (void)showAdFromViewController:(UIViewController *)viewController
    NS_SWIFT_NAME(showAdFromViewController(_:));

/// 在 rootViewController 上展示插页。
- (void)showAdFromRootViewController NS_SWIFT_NAME(showAdFromRootViewController());

/// 销毁指定 placement 缓存。
- (void)destroy:(NSArray<NSString *> *)placementIDs NS_SWIFT_NAME(destroy(_:));

@end

NS_ASSUME_NONNULL_END
