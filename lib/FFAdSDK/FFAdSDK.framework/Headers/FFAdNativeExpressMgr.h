//
//  FFAdNativeExpressMgr.h
//  FFAdSDK
//
//  Created by tudd on 2019/3/25.
//  Copyright © 2019 com.fengfei. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "FFAdNativeExpressDelegate.h"

@class FFAdNativeExpressDelegate;

@interface FFAdNativeExpressMgr : NSObject

@property (nonatomic, assign) BOOL  isShowFeedBack;

@property (nonatomic, strong) NSString    *source;
@property (nonatomic, assign) BOOL        isUNION;


/**
 *  step1.
 *  构造方法
 *  详解：appId - 媒体 ID
 *       placementId - 广告位 ID
 *       adSize - 广告展示的宽高(广点通生效)
 */
+ (instancetype)initWithAppId:(NSString *)appId
                  placementId:(NSString *)placementId
                       adSize:(CGSize)size
                     delegate:(id<FFAdNativeExpressAdDelegete>) delegate;


@end
