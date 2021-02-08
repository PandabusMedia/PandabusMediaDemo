//
//  FFAdFullScreenVideoMgr.h
//  FFAdSDK
//
//  Created by tudd on 2019/10/22.
//  Copyright © 2019 com.fengfei. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "FFAdFullScreenVideoDelegate.h"

@interface FFAdFullScreenVideoMgr : NSObject

/**
 *  step1.
 *  构造方法
 *  详解：appId - 媒体 ID
 *       placementId - 广告位 ID
 *       delegate - 代理
 */
+ (instancetype)initWithAppId:(NSString *)appId
                  placementId:(NSString *)placementId
                     delegate:(id<FFAdFullScreenVideoDelegate>)delegate;

@property (nonatomic, getter=isAdValid, readonly) BOOL adValid;

/**
 * 展示
 @param rootViewController : root view controller for displaying ad.
 @return : whether it is successfully displayed.
 */
- (BOOL)showAdFromRootViewController:(UIViewController *)rootViewController;


@end
