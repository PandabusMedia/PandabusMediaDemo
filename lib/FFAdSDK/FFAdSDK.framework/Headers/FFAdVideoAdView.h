//
//  FFAdVideoAdView.h
//  FFAdSDK
//
//  Created by tudd on 2019/6/27.
//  Copyright © 2019 com.fengfei. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "FFAdPlayerDefine.h"

@class FFAdVideoAdView;

@protocol FFAdVideoAdViewDelegate <NSObject>

@optional

/**
 * load失败
 */
- (void)ffVideoAdView:(FFAdVideoAdView * _Nullable)videoAdView didLoadFailWithError:(NSError *_Nullable)error;

/**
 * 播放状态改变
 */
- (void)ffVideoAdView:(FFAdVideoAdView *_Nullable)videoAdView stateDidChanged:(FFAdPlayerPlayState)playerState;

/**
 * 完成播放
 */
- (void)ffPlayerDidPlayFinish:(FFAdVideoAdView * _Nullable)videoAdView;

/**
 * 点击
 */
- (void)ffVideoAdViewDidClick:(FFAdVideoAdView * _Nullable)videoAdView;

/**
 * 曝光
 */
- (void)ffVideoAdViewExpose:(FFAdVideoAdView * _Nullable)videoAdView;

/**
 * 完成播放点击
 */
- (void)ffVideoAdViewFinishViewDidClick:(FFAdVideoAdView * _Nullable)videoAdView;

/**
 * 关闭详情页
 */
- (void)ffVideoAdViewDidCloseOtherController:(FFAdVideoAdView * _Nullable)videoAdView ;

@end


@class BUNativeAd;

@interface FFAdVideoAdView : UIView

@property (nonatomic, weak, nullable) id<FFAdVideoAdViewDelegate> delegate;

/// required. Root view controller for handling ad actions.
@property (nonatomic, weak, readwrite, nullable) UIViewController *rootViewController;

/**
 Whether to allow pausing the video by clicking, default NO. Only for draw video(vertical video ads).
 **/
@property (nonatomic, assign) BOOL drawVideoClickEnable;

@property (nonatomic, strong) BUNativeAd *buNativeAd;

/**
 Support configuration for pause button.
 @param playImg : the image of the button
 @param playSize : the size of the button. Set as cgsizezero to use default icon size.
 */
- (void)playerPlayIncon:(UIImage * _Nullable)playImg playInconSize:(CGSize)playSize;

///// 播放
//- (void)play;
///// 暂停
//- (void)pause;
//

@end
