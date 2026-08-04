//
//  HeheTopOnInitAdapter.h
//  HeheTopOnAdapter
//
//  TopOn 自定义网络初始化适配器。
//

#import <AnyThinkSDK/AnyThinkSDK.h>

NS_ASSUME_NONNULL_BEGIN

/// 负责幂等初始化 HeheSDK，并向 TopOn 上报 SDK / Adapter 版本。
@interface HeheTopOnInitAdapter : ATBaseInitAdapter

@end

NS_ASSUME_NONNULL_END
