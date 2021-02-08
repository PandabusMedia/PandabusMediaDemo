//
//  FFAdFullScreenVideoDelegate.h
//  FFAdSDK
//
//  Created by tudd on 2019/10/22.
//  Copyright © 2019 com.fengfei. All rights reserved.
//

@class FFAdFullScreenVideoMgr;

@protocol FFAdFullScreenVideoDelegate <NSObject>

@optional

/**
 * 全屏视频加载成功
 */
- (void)ffFullscreenVideoMaterialMetaAdDidLoad:(FFAdFullScreenVideoMgr *_Nullable)fullscreenVideomgr;

/**
 *  全屏视频加载失败
 @param error : the reason of error
 */
- (void)ffFullscreenVideoAd:(FFAdFullScreenVideoMgr *_Nullable)fullscreenVideomgr didFailWithError:(NSObject *_Nullable)error;

/**
 *  全屏视频视频加载成功
 */
- (void)ffFullscreenVideoAdVideoDataDidLoad:(FFAdFullScreenVideoMgr *_Nullable)fullscreenVideomgr;


/**
 * 全屏视频展示
 */
- (void)ffFullscreenVideoAdVisible:(FFAdFullScreenVideoMgr *_Nullable)fullscreenVideomgr;

/**
 *  全屏视频曝光
 */
- (void)ffFullscreenVideoAdDidExpose:(FFAdFullScreenVideoMgr *_Nullable)fullscreenVideomgr;

/**
 *  全屏视频点击
 */
- (void)ffFullscreenVideoAdDidClick:(FFAdFullScreenVideoMgr *_Nullable)fullscreenVideomgr;


/**
 * 全屏视频关闭
 */
- (void)ffFullscreenVideoAdDidClose:(FFAdFullScreenVideoMgr *_Nullable)fullscreenVideomgr;


/**
 * 全屏视频播放完毕
 @param error : the reason of error
 */
- (void)ffFullscreenVideoAdDidPlayFinish:(FFAdFullScreenVideoMgr *_Nullable)fullscreenVideomgr didFailWithError:(NSError *_Nullable)error;

/**
 * 全屏视频点击跳过
 */
- (void)ffFullscreenVideoAdDidClickSkip:(FFAdFullScreenVideoMgr *_Nullable)fullscreenVideomgr;


@end
