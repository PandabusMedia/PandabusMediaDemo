//
//  FFAdRewardBrandCtrl.h
//  FFAdSDK
//
//  Created by tudd on 2019/11/29.
//  Copyright © 2019 com.fengfei. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "FFAdGWebViewCtrl.h"

@class FFAdRewardBrandCtrl;
@class FFAdItemDataModel;

@protocol FFAdRewardBrandDelegate <NSObject>

@optional

/**
 * 广告加载失败
 */
- (void)ffRewadVideoAd:(FFAdRewardBrandCtrl * _Nullable)controller didFailWithError:(NSObject *_Nullable)error;
/**
 * 广告视频加载成功
 */
- (void)ffRewadVideoVideoDataDidLoad:(FFAdRewardBrandCtrl * _Nullable)controller;

/**
 * 广告视频播放失败
 */
- (void)ffRewadVideoVideoPlayFailed:(FFAdRewardBrandCtrl * _Nullable)controller error:(NSObject * _Nullable)error;

/**
 * 广告视频曝光
 */
- (void)ffRewadVideoAdVisible:(FFAdRewardBrandCtrl * _Nullable)controller;

/**
 * 广告视频点击
 */
- (void)ffRewadVideoAdDidClick:(FFAdRewardBrandCtrl * _Nullable)controller;

/**
 *  广告视频关闭
 */
- (void)ffRewadVideoAdClose:(FFAdRewardBrandCtrl * _Nullable)controller;


/**
 * 广告视频播放完事儿
 */
- (void)ffRewadVideoAdDidPlayFinish:(FFAdRewardBrandCtrl * _Nullable)controller;

/**
 *  广告视频播点击跳过
 */
- (void)ffRewadVideoAddDidClickSkip:(FFAdRewardBrandCtrl * _Nullable)controller;

@end

@interface FFAdRewardBrandCtrl : UIViewController

/**
 * @param
 * orientationT 横竖屏
 * needReward 是否需要激励（区分激励/全屏视频）
 */
- (instancetype _Nonnull)initWith:(OrientationType)orientationT
                       needReward:(BOOL)needReward
                         delegate:(id<FFAdRewardBrandDelegate> _Nullable)delegate;

@property (nonatomic, strong, nullable) FFAdItemDataModel *itemModel;   /**< 广告数据 */
@property (nonatomic, assign, readonly) BOOL isAdValid; /**< 是否可用 */
//@property (nonatomic, strong, nullable) NSString *testUrl;   /**< 广告数据 */

@end

