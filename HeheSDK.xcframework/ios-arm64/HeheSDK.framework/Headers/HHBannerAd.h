//
//  HHBannerAd.h
//  HeheSDK
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

typedef NS_ENUM(NSInteger, HHBannerAdSize) {
    /// 320x50 Banner。
    HHBannerAdSize320x50 = 0,
    /// 320x100 Banner。
    HHBannerAdSize320x100 = 1,
    /// 300x250 Banner。
    HHBannerAdSize300x250 = 2,
};

@class HHBannerAd;

/// Banner 广告回调协议。
@protocol HHBannerAdDelegate <NSObject>
@optional
/// Banner 加载成功。
- (void)bannerAdDidLoad:(HHBannerAd *)bannerAd;
/// Banner 加载失败。
- (void)bannerAd:(HHBannerAd *)bannerAd didFailWithError:(NSError *)error;
/// Banner 曝光上报完成。
- (void)bannerAdDidImpression:(HHBannerAd *)bannerAd;
/// Banner 点击。
- (void)bannerAdDidClick:(HHBannerAd *)bannerAd;
/// 点击后离开 App。
- (void)bannerAdDidLeaveApp:(HHBannerAd *)bannerAd;
/// 用户主动关闭 Banner。
- (void)bannerAdDidClose:(HHBannerAd *)bannerAd;
@end

/// Banner 广告对象。
@interface HHBannerAd : UIView

/// 广告位 ID。
@property (nonatomic, copy, readonly) NSString *placementID;
/// Banner 固定尺寸类型。
@property (nonatomic, assign, readonly) HHBannerAdSize bannerSize;
/// Banner 代理。
@property (nonatomic, weak, nullable) id<HHBannerAdDelegate> delegate;
/// 自动刷新间隔（秒），0 表示不刷新。
@property (nonatomic, assign) NSTimeInterval refreshInterval;

/**
 * @brief 创建 Banner 对象。
 * @param placementID 广告位 ID。
 * @param bannerSize 固定尺寸类型。
 * @note 加载成功后只需 `addSubview:` 到容器，SDK 会按 bannerSize 在父视图中居中，无需手动设置 frame。
 */
- (instancetype)initWithPlacementID:(NSString *)placementID
                         bannerSize:(HHBannerAdSize)bannerSize;

/// 禁止使用默认初始化。
- (instancetype)init NS_UNAVAILABLE;
/// 禁止使用 `new` 创建实例。
+ (instancetype)new NS_UNAVAILABLE;

/// 请求 Banner 广告。
- (void)loadAd NS_SWIFT_NAME(loadAd());

/// 销毁 Banner 资源。
- (void)destroy NS_SWIFT_NAME(destroy());

@end

NS_ASSUME_NONNULL_END
