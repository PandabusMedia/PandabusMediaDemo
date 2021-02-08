//
//  FFAdStickVideoDelegate.h
//  FFAdSDK
//
//  Created by tudd on 2019/5/23.
//  Copyright © 2019 com.fengfei. All rights reserved.
//

#import "FFAdMediaStatus.h"

@class FFAdStickVideoMgr;
@class FFAdStickVideoView;

@protocol FFStickVideoAdDelegete <NSObject>

@optional
/**
 * 拉取原生模板广告成功
 */
- (void)ffStickVideoAdSuccessToLoad:(FFAdStickVideoMgr *)nativeExpressAd views:(NSArray<__kindof FFAdStickVideoView *> *)views;

/**
 * 拉取原生模板广告失败
 */
- (void)ffStickVideoAdFailToLoad:(FFAdStickVideoMgr *)nativeExpressAd error:(NSObject *)error;

/**
 * 原生模板广告渲染成功, 此时的 nativeExpressAdView.size.height 根据 size.width 完成了动态更新。
 */
- (void)ffStickVideoAdViewRenderSuccess:(FFAdStickVideoView *)nativeExpressAdView;

/**
 * 原生模板广告渲染失败
 */
- (void)ffStickVideoAdViewRenderFail:(FFAdStickVideoView *)nativeExpressAdView;

/**
 * 原生模板广告曝光回调
 */
- (void)ffStickVideoAdViewExposure:(FFAdStickVideoView *)nativeExpressAdView;

/**
 * 原生模板广告点击回调
 */
- (void)ffStickVideoAdViewClicked:(FFAdStickVideoView *)nativeExpressAdView;

/**
 * 原生模板广告被关闭
 */
- (void)ffStickVideoAdViewClosed:(FFAdStickVideoView *)nativeExpressAdView;

/**
 * 原生模板广告点击之后应用进入后台时回调
 */
- (void)ffStickVideoAdViewApplicationWillEnterBackground:(FFAdStickVideoView *)nativeExpressAdView;



#pragma mark - 图片类贴片回调~ 
/**
 * 点击原生模板广告以后弹出全屏广告页
 */
- (void)ffStickVideoAdViewDidPresentScreen:(FFAdStickVideoView *)nativeExpressAdView;

/**
 * 全屏广告页将要关闭
 */
- (void)ffStickVideoAdViewDidDissmissScreen:(FFAdStickVideoView *)nativeExpressAdView;


#pragma mark - 视频类贴片回调~

/**
 * 原生模板贴片广告 player 播放状态更新回调
 */
- (void)ffStickVideoAdView:(FFAdStickVideoView *)nativeExpressAdView playerStatusChanged:(FFMediaPlayerStatus)status;

/**
 * 原生贴片模板详情页 DidPresent 回调
 */
- (void)ffStickVideoAdViewDidPresentVideoVC:(FFAdStickVideoView *)nativeExpressAdView;

/**
 * 原生贴片模板详情页 DidDismiss 回调
 */
- (void)ffStickVideoAdViewDidDismissVideoVC:(FFAdStickVideoView *)nativeExpressAdView;

@end
