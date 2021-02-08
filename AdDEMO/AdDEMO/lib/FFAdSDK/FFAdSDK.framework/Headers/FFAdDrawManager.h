//
//  FFAdDrawManager.h
//  FFAdSDK
//
//  Created by tudd on 2020/11/16.
//  Copyright © 2020 com.fengfei. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "FFAdVideoAdView.h"
#import "FFAdPlayerDefine.h"
#import "FFAdDrawExpressView.h"

NS_ASSUME_NONNULL_BEGIN

@class FFAdDrawExpressView;

@protocol FFAdDrawManagerDelegate <NSObject>

@optional
/**
 * 模板 竖版视频加载成功
 */
- (void)ffDrawVideoManagerLoadSuccess:(FFAdDrawExpressView *)drawExpressView;

/**
 * 模板 竖版视频加载失败
 */
- (void)ffDrawVideoManagerLoadFailed:(NSObject *)error;

/**
 * 模板 竖版视频播放状态改变
 */
- (void)ffDrawVideoManagerVideoAdView:(FFAdVideoAdView *_Nullable)videoAdView stateDidChanged:(FFAdPlayerPlayState)playerState;

/**
 * 模板 竖版视频 完成播放
 */
- (void)ffDrawVideoManagerVideoPlayFinish:(FFAdVideoAdView * _Nullable)videoAdView;

/**
 * 模板 竖版视频 点击
 */
- (void)ffDrawVideoManagerViewClick:(FFAdVideoAdView * _Nullable)videoAdView;

/**
 * 模板 竖版视频 曝光
 */
- (void)ffDrawVideoManagerViewExpose:(FFAdVideoAdView * _Nullable)videoAdView;

/**
 * 模板 竖版视频 完成播放点击
 */
- (void)ffDrawVideoManagerViewFinishViewDidClick:(FFAdVideoAdView * _Nullable)videoAdView;

/**
 * 模板 竖版视频 关闭详情页
 */
- (void)ffDrawVideoManagerCloseOtherController:(FFAdVideoAdView * _Nullable)videoAdView ;

@end



@interface FFAdDrawManager : NSObject

/**
 * 竖版视频 manager 初始化 方法
 * @param appId appid  (必传字段)
 * placementId 广告位id  (必传字段)
 * superView 广告父容器(必传字段)
 * delegate delegate(必传字段)
*/

+ (instancetype)initWithAppId:(NSString *)appId
                 placementId:(NSString *)placementId
                       rootVc:(UIViewController *)rootVc
                     delegate:(id<FFAdDrawManagerDelegate>)delegate;

@end

NS_ASSUME_NONNULL_END
