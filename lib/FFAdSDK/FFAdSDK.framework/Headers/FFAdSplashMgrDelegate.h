//
//  FFAdSplashMgrDelegate.h
//  FFAdSDKDemo
//
//  Created by tudd on 2019/1/24.
//  Copyright © 2019 com.fengfei. All rights reserved.
//

@class FFAdSplashMgr;

@protocol FFAdSplashMgrDelegate <NSObject>

@optional
/**
 *  开屏广告成功展示
 */
- (void)splashAdDidLoadData:(FFAdSplashMgr *)splashAd;

/**
 *  开屏广告展示失败
 */
- (void)splashAdFailToLoad:(FFAdSplashMgr *)splashAd withError:(NSObject *)error;

/**
 *  开屏广告曝光回调
 */
- (void)splashAdExposured:(FFAdSplashMgr *)splashAd;

/**
 *  开屏广告点击回调
 */
- (void)splashAdClicked:(FFAdSplashMgr *)splashAd;

/**
 *  开屏广告关闭回调
 */
- (void)splashAdClosed:(FFAdSplashMgr *)splashAd;

/**
 *  落地页关闭
 */
- (void)splashAdDissmissDetal;



@end
