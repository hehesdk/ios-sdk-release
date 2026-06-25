//
//  HeheAds.h
//  HeheSDK
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

/// HeheSDK 全局入口。
@interface HeheAds : NSObject

/// SDK 是否完成初始化并可用。
@property (nonatomic, assign, readonly, getter=isInitialized) BOOL initialized;

/// SDK 全局单例。
+ (instancetype)shareSDK NS_SWIFT_NAME(shareSDK());

/**
 * @brief 初始化 SDK。
 * @param appKey SSP 分配的应用标识。
 * @param onSuccess 初始化成功回调（主线程）。
 * @param onError 初始化失败回调（主线程）。
 */
- (void)initSDK:(NSString *)appKey
      onSuccess:(void (^)(void))onSuccess
        onError:(void (^)(NSError *error))onError
    NS_SWIFT_NAME(initSDK(_:onSuccess:onError:));

/// GDPR 同意状态设置（建议在 init 前调用）。
- (void)setConsentStatus:(BOOL)consent NS_SWIFT_NAME(setConsentStatus(_:));

/// COPPA 设置（建议在 init 前调用）。
- (void)setIsAgeRestrictedUser:(BOOL)isAgeRestricted NS_SWIFT_NAME(setIsAgeRestrictedUser(_:));

/// CCPA Do Not Sell 设置（建议在 init 前调用）。
- (void)setDoNotSell:(BOOL)doNotSell NS_SWIFT_NAME(setDoNotSell(_:));

/// 设置测试设备 IDFA，用于联调测试广告（建议在 init 前调用）。传 nil 或空串清除。
- (void)setTestDeviceIDFA:(nullable NSString *)idfa NS_SWIFT_NAME(setTestDeviceIDFA(_:));

/// 开启/关闭 SDK 运行日志（默认 NO）。开启后输出 init、广告加载/展示等与 App 集成相关的日志。
- (void)setLogEnabled:(BOOL)enabled NS_SWIFT_NAME(setLogEnabled(_:));

@end

NS_ASSUME_NONNULL_END
