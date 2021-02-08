//
//  FFAdRewardVideoMgr.h
//  FFAdSDK
//
//  Created by tudd on 2019/7/15.
//  Copyright © 2019 com.fengfei. All rights reserved.
//  激励视频

#import <Foundation/Foundation.h>
#import "FFRewardedVideoModel.h"

@class FFAdRewardVideoMgr;

#pragma mark - FFAdRewardVideoDelegate ------
@protocol FFAdRewardVideoDelegate <NSObject>

@optional
/**
 广告数据加载成功回调
 
 @param rewardedVideoAd FFAdRewardVideoMgr 实例
 */
- (void)ffRewardVideoAdDidLoad:(FFAdRewardVideoMgr *)rewardedVideoAd;

/**
 视频数据下载成功回调，已经下载过的视频会直接回调
 
 @param rewardedVideoAd FFAdRewardVideoMgr 实例
 */
- (void)ffRewardVideoAdVideoDidLoad:(FFAdRewardVideoMgr *)rewardedVideoAd;

/**
 视频播放页即将展示回调
 
 @param rewardedVideoAd FFAdRewardVideoMgr 实例
 */
- (void)ffRewardVideoAdVisible:(FFAdRewardVideoMgr *)rewardedVideoAd;

/**
 视频广告曝光回调
 
 @param rewardedVideoAd FFAdRewardVideoMgr 实例
 */
- (void)ffRewardVideoAdDidExposed:(FFAdRewardVideoMgr *)rewardedVideoAd;

/**
 视频播放页关闭回调
 
 @param rewardedVideoAd FFAdRewardVideoMgr 实例
 */
- (void)ffRewardVideoAdDidClose:(FFAdRewardVideoMgr *)rewardedVideoAd;

/**
 视频广告信息点击回调
 
 @param rewardedVideoAd FFAdRewardVideoMgr 实例
 */
- (void)ffRewardVideoAdDidClicked:(FFAdRewardVideoMgr *)rewardedVideoAd;

/**
 视频广告各种错误信息回调
 
 @param rewardedVideoAd FFAdRewardVideoMgr 实例
 @param error 具体错误信息
 */
- (void)ffRewardVideoAd:(FFAdRewardVideoMgr *)rewardedVideoAd didFailWithError:(NSObject *)error;

/**
 视频广告播放达到激励条件回调
 
 @param rewardedVideoAd FFAdRewardVideoMgr 实例
 */
- (void)ffRewardVideoAdDidRewardEffective:(FFAdRewardVideoMgr *)rewardedVideoAd;

/**
 视频广告视频播放完成
 
 @param rewardedVideoAd FFAdRewardVideoMgr 实例
 */
- (void)ffRewardVideoAdDidPlayFinish:(FFAdRewardVideoMgr *)rewardedVideoAd;

@end



#pragma mark - FFAdRewardVideoMgr ------

@interface FFAdRewardVideoMgr : NSObject


/**
 * 初始化
 * @param appId 应用id
 * placementId: 广告位id
 * size: 广告位大小(推荐使用屏幕size)
 * delegate: 代理
 */
+ (instancetype)initWithAppId:(NSString *)appId
                  placementId:(NSString *)placementId
                     delegate:(id<FFAdRewardVideoDelegate>)delegate;

- (BOOL)showAdFromRootViewController:(UIViewController *)rootViewController;

@property (nonatomic, strong) FFRewardedVideoModel *rewardedVideoModel;
/**
 Whether material is effective.
 Setted to YES when data is not empty and has not been displayed.
 Repeated display is not billed.
 */
@property (nonatomic, getter=isAdValid, readonly) BOOL adValid;


@end
