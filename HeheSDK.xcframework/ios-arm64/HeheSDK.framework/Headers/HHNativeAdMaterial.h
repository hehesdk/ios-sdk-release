//
//  HHNativeAdMaterial.h
//  HeheSDK
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

/// 原生广告自渲染素材（仅提供远程 URL 与文案，由 App 自行布局与下载图片）。
@interface HHNativeAdMaterial : NSObject

/// 标题。
@property (nonatomic, copy, readonly) NSString *title;
/// 描述（可选）。
@property (nonatomic, copy, readonly, nullable) NSString *desc;
/// 图标远程 URL。
@property (nonatomic, copy, readonly) NSString *iconURL;
/// 主图远程 URL（可选）。
@property (nonatomic, copy, readonly, nullable) NSString *imageURL;
/// 行动号召文案。
@property (nonatomic, copy, readonly) NSString *ctaText;
/// 评分（0~5，0 表示无评分）。
@property (nonatomic, assign, readonly) CGFloat rating;

@end

NS_ASSUME_NONNULL_END
