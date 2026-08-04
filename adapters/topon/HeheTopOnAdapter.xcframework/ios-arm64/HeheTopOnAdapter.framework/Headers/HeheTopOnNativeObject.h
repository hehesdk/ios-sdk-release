//
//  HeheTopOnNativeObject.h
//  HeheTopOnAdapter
//

#import <AnyThinkSDK/AnyThinkSDK.h>

@class HHNativeAdView;

NS_ASSUME_NONNULL_BEGIN

/// TopOn 自定义原生广告对象（Express：整页使用 HHNativeAdView）。
@interface HeheTopOnNativeObject : ATCustomNetworkNativeAd

/// Hehe 原生广告视图。
@property (nonatomic, strong, nullable) HHNativeAdView *heheNativeView;
/// TopOn 下发的原生渲染配置。
@property (nonatomic, strong, nullable) ATNativeAdRenderConfig *renderConfiguration;

@end

NS_ASSUME_NONNULL_END
