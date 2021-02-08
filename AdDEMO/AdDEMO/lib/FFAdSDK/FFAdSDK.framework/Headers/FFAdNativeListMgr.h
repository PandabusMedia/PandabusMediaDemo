//
//  FFAdNativeListMgr.h
//  FFAdSDK
//
//  Created by tudd on 2019/12/10.
//  Copyright © 2019 com.fengfei. All rights reserved.
//

#import <Foundation/Foundation.h>

@protocol FFAdNativeListDelegate <NSObject>

@optional
- (void)ffNativeListLoadSuccess:(NSArray *)nativeList;

- (void)ffNativeListLoadFail:(NSObject *)error;

@end

@interface FFAdNativeListMgr : NSObject

/**
 * 自渲染2.0视图 初始化 方法
 @param appId appid  (必传字段)
 @param placementIds 广告位ids array (必传字段)
 @param delegate delegate(必传字段)
*/

+ (instancetype)initWithAppId:(NSString *)appId
                 placementIds:(NSArray *)placementIds
                     delegate:(id<FFAdNativeListDelegate>)delegate;

/**
 * 自渲染2.0视图 获取广告 数组
*/
- (NSArray *)getAds;


@end

