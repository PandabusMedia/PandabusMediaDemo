//
//  FFAdInfoChannelMgr.h
//  FFAdSDK
//
//  Created by tudd on 2020/6/19.
//  Copyright © 2020 com.fengfei. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN
@protocol FFAdInfoChannelData;

@protocol FFAdInfoChannelDelegate <NSObject>

@optional

/**
 * 讯息流数据s加载 成功
*/
- (void)ffInfoChannelSuccess:(NSArray<FFAdInfoChannelData> *)channelArr;
/**
 * 讯息流数据加载 失败
*/
- (void)ffInfoChannelLoadFail:(NSObject *)error;

@end

@interface FFAdInfoChannelMgr : NSObject

/**
 * 信息流资讯 初始化 方法
 * @param proid 内容id  (必传字段)
 *    delegate delegate
*/

+ (instancetype)initWithProid:(NSString *)proid
                     delegate:(id<FFAdInfoChannelDelegate>)delegate;
/**
 * 信息流频道 加载数据 方法
*/
- (void)loadChannelData;

@end

NS_ASSUME_NONNULL_END
