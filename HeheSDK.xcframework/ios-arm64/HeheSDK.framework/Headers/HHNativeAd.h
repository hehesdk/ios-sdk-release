//
//  HHNativeAd.h
//  HeheSDK
//

#import <UIKit/UIKit.h>

#import <HeheSDK/HHNativeAdMaterial.h>

NS_ASSUME_NONNULL_BEGIN

@class HHNativeAd;

/// 原生广告回调协议。
@protocol HHNativeAdDelegate <NSObject>
@optional
/// 原生广告加载成功。
- (void)nativeAdDidLoad:(HHNativeAd *)nativeAd;
/// 原生广告加载失败。
- (void)nativeAd:(HHNativeAd *)nativeAd didFailWithError:(NSError *)error;
/// 原生广告曝光上报完成。
- (void)nativeAdDidImpression:(HHNativeAd *)nativeAd;
/// 原生广告点击。
- (void)nativeAdDidClick:(HHNativeAd *)nativeAd;
/// 点击后离开 App。
- (void)nativeAdDidLeaveApp:(HHNativeAd *)nativeAd;
@end

/// 原生广告对象（自渲染模式）。
@interface HHNativeAd : NSObject

/// 广告位 ID。
@property (nonatomic, copy, readonly) NSString *placementID;
/// 原生广告代理。
@property (nonatomic, weak, nullable) id<HHNativeAdDelegate> delegate;
/// 原生广告是否已加载就绪。
@property (nonatomic, assign, readonly, getter=isReady) BOOL ready;

/**
 * @brief 创建原生广告对象。
 * @param placementID 广告位 ID。
 */
- (instancetype)initWithPlacementID:(NSString *)placementID
    NS_SWIFT_NAME(init(placementID:));

/// 禁止使用默认初始化。
- (instancetype)init NS_UNAVAILABLE;
/// 禁止使用 `new` 创建实例。
+ (instancetype)new NS_UNAVAILABLE;

/// 请求原生广告。
- (void)loadAd NS_SWIFT_NAME(loadAd());

/// 自渲染素材（load 成功且 ready 后可用）。
@property (nonatomic, readonly, nullable) HHNativeAdMaterial *adMaterial;

/**
 * @brief 注册广告容器视图；整容器可点击，SDK 负责曝光检测与点击 landing。
 * @param containerView App 搭建的原生广告根容器。
 */
- (void)registerViewForInteraction:(UIView *)containerView
    NS_SWIFT_NAME(registerViewForInteraction(_:));

/// 销毁原生广告资源。
- (void)destroy NS_SWIFT_NAME(destroy());

@end

NS_ASSUME_NONNULL_END
