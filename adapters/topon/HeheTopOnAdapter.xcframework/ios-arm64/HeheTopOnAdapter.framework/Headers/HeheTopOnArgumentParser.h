//
//  HeheTopOnArgumentParser.h
//  HeheTopOnAdapter
//
//  从 TopOn ATAdMediationArgument / ATAdInitArgument 解析 Hehe 参数。
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@class HeheAdapterParameters;
@class ATAdMediationArgument;
@class ATAdInitArgument;

NS_ASSUME_NONNULL_BEGIN

/// TopOn 参数解析工具。
@interface HeheTopOnArgumentParser : NSObject

/**
 * @brief 从初始化参数解析 Hehe 参数。
 * @param initArgument TopOn 初始化参数。
 */
+ (HeheAdapterParameters *)parametersFromInitArgument:(nullable ATAdInitArgument *)initArgument;

/**
 * @brief 从广告加载参数解析 Hehe 参数。
 * @param argument TopOn 广告加载参数。
 */
+ (HeheAdapterParameters *)parametersFromMediationArgument:(nullable ATAdMediationArgument *)argument;

/**
 * @brief 根据 TopOn bannerSize / 参数映射 Hehe Banner 尺寸。
 * @param argument TopOn 广告加载参数。
 * @param fallback 参数未指定尺寸时的默认值。
 */
+ (NSInteger)bannerSizeFromArgument:(nullable ATAdMediationArgument *)argument
                           fallback:(NSInteger)fallback;

/**
 * @brief 透传 TopOn GDPR / 个性化设置到 HeheSDK。
 */
+ (void)applyPrivacyFromTopOnSDK;

@end

NS_ASSUME_NONNULL_END
