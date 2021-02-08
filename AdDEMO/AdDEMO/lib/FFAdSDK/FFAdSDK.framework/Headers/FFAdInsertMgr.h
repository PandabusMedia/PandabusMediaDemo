//
//  FFAdInsertMgr.h
//  FFAdSDK
//
//  Created by tudd on 2019/2/27.
//  Copyright © 2019 com.fengfei. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "FFAdInsertDelegate.h"

@interface FFAdInsertMgr : NSObject

/**
 *  类方法
 *  详解：appId - 媒体 ID
 *       placementId - 广告位 ID
 */
+ (instancetype)initWithAppId:(NSString *)appId
                  placementId:(NSString *)placementId
                     delegate:(id<FFAdInsertDelegate>) delegate;

@property (nonatomic, weak, readonly) id<FFAdInsertDelegate> delegate;


/**
 *  展示
 *  详解：currentCtrl - 当前vc
 */
- (void)insertInCurrentCtrl:(UIViewController *)currentCtrl;


@end
