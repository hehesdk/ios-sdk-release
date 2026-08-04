//
//  HHNativeAdView.h
//  HeheSDK
//

#import <UIKit/UIKit.h>

#import <HeheSDK/HHNativeAdMaterial.h>

NS_ASSUME_NONNULL_BEGIN

@class HHNativeAdView;

/// 原生广告回调协议。
@protocol HHNativeAdViewDelegate <NSObject>
@optional
/// 原生广告加载成功（可在本 View 内添加自渲染子视图）。
- (void)nativeAdViewDidLoad:(HHNativeAdView *)nativeAdView;
/// 原生广告加载失败。
- (void)nativeAdView:(HHNativeAdView *)nativeAdView didFailWithError:(NSError *)error;
/// 原生广告曝光上报完成。
- (void)nativeAdViewDidImpression:(HHNativeAdView *)nativeAdView;
/// 原生广告点击。
- (void)nativeAdViewDidClick:(HHNativeAdView *)nativeAdView;
/// 点击后离开 App。
- (void)nativeAdViewDidLeaveApp:(HHNativeAdView *)nativeAdView;
@end

/// 原生广告根容器（自渲染模式）。
/// App 将本 View 加入视图树后，SDK 自动完成曝光检测与点击 landing，无需 register。
@interface HHNativeAdView : UIView

/// 广告位 ID。
@property (nonatomic, copy, readonly) NSString *placementID;
/// 原生广告代理。
@property (nonatomic, weak, nullable) id<HHNativeAdViewDelegate> delegate;
/// 原生广告是否已加载就绪。
@property (nonatomic, assign, readonly, getter=isReady) BOOL ready;
/// 自渲染素材（load 成功且 ready 后可用）。
@property (nonatomic, readonly, nullable) HHNativeAdMaterial *adMaterial;
/// 是否已调用 `destroy` 销毁。
@property (nonatomic, assign, readonly, getter=isDestroyed) BOOL destroyed;

/**
 * @brief 创建原生广告根容器。
 * @param placementID 广告位 ID。
 */
- (instancetype)initWithPlacementID:(NSString *)placementID
    NS_SWIFT_NAME(init(placementID:));

/// 禁止使用默认初始化。
- (instancetype)initWithFrame:(CGRect)frame NS_UNAVAILABLE;
- (instancetype)initWithCoder:(NSCoder *)coder NS_UNAVAILABLE;
/// 禁止使用 `new` 创建实例。
+ (instancetype)new NS_UNAVAILABLE;

/// 请求原生广告。
- (void)loadAd NS_SWIFT_NAME(loadAd());

/**
 * @brief 销毁原生广告资源。
 * @note App 在页面退出、视图移除、切换广告位等场景可主动调用。
 *       销毁后 `isDestroyed` 为 YES，不可再 `loadAd`，需重新创建 `HHNativeAdView`。
 */
- (void)destroy NS_SWIFT_NAME(destroy());

@end

NS_ASSUME_NONNULL_END
