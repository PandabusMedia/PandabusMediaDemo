//
//  FFAdNativeExpressDelegate.h
//  FFAdSDK
//
//  Created by tudd on 2019/3/25.
//  Copyright © 2019 com.fengfei. All rights reserved.
//

#import "FFAdMediaStatus.h"

@class FFAdNativeExpressMgr;
@class FFAdNativeExpressView;

@protocol FFAdNativeExpressAdDelegete <NSObject>

@optional

#pragma mark - 通用delegate 方法-------
/**
 * 拉取原生模板广告成功
 */
- (void)ffNativeExpressAdSuccessToLoad:(FFAdNativeExpressMgr *)nativeExpressAd views:(NSArray<__kindof FFAdNativeExpressView *> *)views;

/**
 * 拉取原生模板广告失败
 */
- (void)ffNativeExpressAdFailToLoad:(FFAdNativeExpressMgr *)nativeExpressAd error:(NSObject *)error;
/**
 * 原生模板广告曝光回调
 */
- (void)ffNativeExpressAdViewExposure:(FFAdNativeExpressView *)nativeExpressAdView;

/**
 * 原生模板广告点击回调
 */
- (void)ffNativeExpressAdViewClicked:(FFAdNativeExpressView *)nativeExpressAdView;


/**
* 点击原生模板广告以后弹出全屏广告页
*/
- (void)ffNativeExpressAdViewDidPresentScreen:(FFAdNativeExpressView *)nativeExpressAdView;

/**
 * 全屏广告页将要关闭
 */
- (void)ffNativeExpressAdViewDidDissmissScreen:(FFAdNativeExpressView *)nativeExpressAdView;


/**
 * 原生模板广告渲染成功, 此时的 nativeExpressAdView.size.height 根据 size.width 完成了动态更新。
 */
- (void)ffNativeExpressAdViewRenderSuccess:(FFAdNativeExpressView *)nativeExpressAdView;

/**
 * 原生模板广告渲染失败
 */
- (void)ffNativeExpressAdViewRenderFail:(FFAdNativeExpressView *)nativeExpressAdView;

/**
 * 原生模板广告被关闭
 */
- (void)ffNativeExpressAdViewClosed:(FFAdNativeExpressView *)nativeExpressAdView;

@end
