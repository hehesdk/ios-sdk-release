//
//  HHAdRewardInfo.h
//  HeheSDK
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

/// 激励结果信息（透传 App，不含内部校验字段 reward_time / verify）。
@interface HHAdRewardInfo : NSObject

/// 媒体侧用户 ID（初始化 HHRewardedAd 时传入）。
@property (nonatomic, copy, readonly) NSString *userID;
/// 媒体自定义数据（初始化 HHRewardedAd 时传入，未传时为 nil）。
@property (nonatomic, copy, readonly, nullable) NSString *userCustomData;
/// 奖励名称。
@property (nonatomic, copy, readonly) NSString *name;
/// 奖励数量。
@property (nonatomic, assign, readonly) NSInteger amount;
/// 是否服务端校验发奖（原 server_side_verify，仅透传）。
@property (nonatomic, assign, readonly) BOOL serverSideVerify;
/// 是否可获得激励（verify 成功时为 YES）。
@property (nonatomic, assign, readonly) BOOL canEarnReward;

@end

NS_ASSUME_NONNULL_END
