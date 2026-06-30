//
//  HHRewardedAd.h
//  HeheSDK
//

#import <UIKit/UIKit.h>

#import <HeheSDK/HHAdRewardInfo.h>

NS_ASSUME_NONNULL_BEGIN

@class HHRewardedAd;

/// 激励视频广告回调协议。
@protocol HHRewardedAdDelegate <NSObject>
@optional
/// 激励广告加载成功。
- (void)rewardedAdDidLoad:(HHRewardedAd *)rewardedAd;
/// 激励广告加载失败。
- (void)rewardedAd:(HHRewardedAd *)rewardedAd didFailWithError:(NSError *)error;
/// 激励广告展示失败。
- (void)rewardedAd:(HHRewardedAd *)rewardedAd displayFailWithError:(NSError *)error;
/// 激励广告即将曝光。
- (void)rewardedAdWillLogImpression:(HHRewardedAd *)rewardedAd;
/// 激励广告点击。
- (void)rewardedAdDidClick:(HHRewardedAd *)rewardedAd;
/// 激励广告即将关闭。
- (void)rewardedAdWillClose:(HHRewardedAd *)rewardedAd;
/// 激励广告已关闭。
- (void)rewardedAdDidClose:(HHRewardedAd *)rewardedAd;
/// 激励达成（verify 成功）。
- (void)rewardedAd:(HHRewardedAd *)rewardedAd didRewardWithInfo:(HHAdRewardInfo *)rewardInfo;
/// 激励未达成或 verify 失败。
- (void)rewardedAd:(HHRewardedAd *)rewardedAd didFailToRewardWithError:(NSError *)error;
@end

/// 激励视频广告对象。
@interface HHRewardedAd : NSObject

/// 广告位 ID。
@property (nonatomic, copy, readonly) NSString *placementID;
/// 媒体侧用户 ID（初始化时必填）。
@property (nonatomic, copy, readonly) NSString *userID;
/// 媒体自定义数据（初始化时可选）。
@property (nonatomic, copy, readonly, nullable) NSString *customData;
/// 激励广告代理。
@property (nonatomic, weak, nullable) id<HHRewardedAdDelegate> delegate;
/// 激励广告是否可展示。
@property (nonatomic, assign, readonly, getter=isReady) BOOL ready;

/**
 * @brief 创建激励广告对象。
 * @param placementID 广告位 ID。
 * @param userID 媒体侧用户 ID（必填）。
 * @param customData 自定义数据（可选）。
 */
- (instancetype)initWithPlacementID:(NSString *)placementID
                             userID:(NSString *)userID
                         customData:(nullable NSString *)customData
    NS_SWIFT_NAME(init(placementID:userID:customData:));

/// 禁止使用默认初始化。
- (instancetype)init NS_UNAVAILABLE;
/// 禁止使用 `new` 创建实例。
+ (instancetype)new NS_UNAVAILABLE;

/// 加载激励广告。
- (void)loadAd NS_SWIFT_NAME(loadAd());

/// 在指定控制器上展示激励广告。
- (void)showAdFromViewController:(UIViewController *)viewController
    NS_SWIFT_NAME(showAdFromViewController(_:));

/// 销毁指定 placement 缓存。
- (void)destroy:(NSArray<NSString *> *)placementIDs NS_SWIFT_NAME(destroy(placementIDs:));

@end

NS_ASSUME_NONNULL_END
