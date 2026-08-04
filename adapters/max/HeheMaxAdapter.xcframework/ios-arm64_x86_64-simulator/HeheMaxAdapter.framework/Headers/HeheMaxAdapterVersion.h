//
//  HeheMaxAdapterVersion.h
//  HeheMaxAdapter
//

#ifndef HeheMaxAdapterVersion_h
#define HeheMaxAdapterVersion_h

#import "HeheAdapterVersion.h"

/// MAX Adapter 逻辑版本（Core.Rev）。
#undef HEHE_ADAPTER_VERSION
#define HEHE_ADAPTER_VERSION @"0.2.1.0"

/// MAX 要求五段式展示时的 adapterVersion 字符串（0.2.1.0 → 0.2.1.0.0）。
#define HEHE_MAX_ADAPTER_VERSION_FIVE @"0.2.1.0.0"

/// 后台配置的 iOS Adapter 类名。
#define HEHE_MAX_ADAPTER_CLASS_NAME @"HeheMaxMediationAdapter"

#endif /* HeheMaxAdapterVersion_h */
