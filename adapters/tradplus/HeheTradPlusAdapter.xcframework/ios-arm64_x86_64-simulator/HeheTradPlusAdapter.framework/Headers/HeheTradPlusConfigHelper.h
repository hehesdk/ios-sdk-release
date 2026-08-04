//
//  HeheTradPlusConfigHelper.h
//  HeheTradPlusAdapter
//
//  从 TradPlus waterfallItem.config 解析 Hehe 参数。
//

#import <Foundation/Foundation.h>

@class HeheAdapterParameters;
@class TradPlusAdWaterfallItem;

NS_ASSUME_NONNULL_BEGIN

/// TradPlus 参数解析与隐私透传。
@interface HeheTradPlusConfigHelper : NSObject

/**
 * @brief 从 waterfall item.config 解析 Hehe 参数。
 * @param item TradPlus 瀑布流条目。
 */
+ (HeheAdapterParameters *)parametersFromWaterfallItem:(nullable TradPlusAdWaterfallItem *)item;

/**
 * @brief 从 config 字典解析 Hehe 参数。
 * @param config 后台下发参数。
 */
+ (HeheAdapterParameters *)parametersFromConfig:(nullable NSDictionary *)config;

/**
 * @brief 按 TradPlus 同意状态透传隐私到 HeheSDK（若可获取）。
 */
+ (void)applyPrivacyIfAvailable;

@end

NS_ASSUME_NONNULL_END
