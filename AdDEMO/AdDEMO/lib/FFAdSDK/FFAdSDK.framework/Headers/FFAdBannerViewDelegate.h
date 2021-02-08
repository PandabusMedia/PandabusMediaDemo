//
//  FFAdViewDelegate.h
//  FFAdSDK
//
//  Created by tudd on 2018/12/28.
//  Copyright © 2018 com.fengfei. All rights reserved.
//

#import <Foundation/Foundation.h>
//#import "FFAdCommDefine.h"
@class FFAdBannerView;

@protocol FFAdBannerViewDelegate<NSObject>

@optional
/**
 *  banner 广告加载成功
 */
- (void)ffBannerViewDidReceived:(UIView *)bannerView;

/**
 *  banner 广告载入失败
 */
- (void)ffBannerViewFailToReceived:(NSObject *)error;

/**
 *  banner 曝光回调
 */
- (void)ffBannerViewWillExposure;

/**
 *  banner 点击回调
 */
- (void)ffBannerViewClicked;

/**
 *  banner 关闭回调
 */
- (void)ffBannerViewWillClose;

/**
 *  banner 详情页关闭回调
 */
- (void)ffBannerViewDismissDetail:(UIView *)bannerView;


@end
