//
//  FFAdStickVideoMgr.h
//  FFAdSDK
//
//  Created by tudd on 2019/5/23.
//  Copyright © 2019 com.fengfei. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "FFAdStickVideoDelegate.h"

@interface FFAdStickVideoMgr : NSObject

/**
 *  非 WiFi 网络，是否自动播放。默认 NO。loadAd 前设置。
 */

@property (nonatomic, assign) BOOL videoAutoPlayOnWWAN;

/**
 *  自动播放时，是否静音。默认 YES。loadAd 前设置。
 */
@property (nonatomic, assign) BOOL videoMuted;

/**
 * 视频最大时间(默认30s)
 * */
@property (nonatomic, assign) NSInteger maxVideoDuration;

@property (nonatomic, strong) NSString      *source;
@property (nonatomic, assign) BOOL          isUNION;


/**
 *  step1.
 *  构造方法
 *  详解：appId - 媒体 ID
 *       placementId - 广告位 ID
 *       adSize - 广告展示的宽高(广点通生效)
 *       delegate: 代理
 */
+ (instancetype)initWithAppId:(NSString *)appId
                  placementId:(NSString *)placementId
                       adSize:(CGSize)size
                     delegate:(id<FFStickVideoAdDelegete>)delegate;

/**
 * step2.
 * isObserve 默认NO;
 * timeout   超时时间(单位秒);
 */
- (void)observeRenderView:(BOOL)isObserve timeout:(NSTimeInterval)timeout;


@end
