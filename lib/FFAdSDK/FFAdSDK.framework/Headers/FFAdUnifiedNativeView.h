//
//  FFAdUnifiedNativeView.h
//  FFAdSDK
//
//  Created by tudd on 2019/7/17.
//  Copyright © 2019 com.fengfei. All rights reserved.
//

#import <UIKit/UIKit.h>

@class FFAdNativeAd;
@class FFAdUnifiedNativeView;

@protocol FFAdUnifiedNativeViewDelegate <NSObject>

@optional

/**
 * 广告渲染成功
 */
- (void)ffUnifiedNativeAdViewRenderSuccess:(FFAdUnifiedNativeView *)unifiedNativeAdView;

/**
 * 广告曝光回调
 * @param unifiedNativeAdView FFAdUnifiedNativeView 实例
 */
- (void)ffUnifiedNativeAdViewWillExpose:(FFAdUnifiedNativeView *)unifiedNativeAdView;


/**
 * 广告点击回调
 * @param unifiedNativeAdView FFAdUnifiedNativeView 实例
 */
- (void)ffUnifiedNativeAdViewDidClick:(FFAdUnifiedNativeView *)unifiedNativeAdView;

/**
 * 广告关闭回调
 * @param unifiedNativeAdView FFAdUnifiedNativeView 实例
 */
- (void)ffUnifiedNativeExpressViewClosed:(FFAdUnifiedNativeView *)unifiedNativeAdView;

/**
 * 广告详情页关闭回调
 * @param unifiedNativeAdView FFAdUnifiedNativeView 实例
 */
- (void)ffUnifiedNativeAdDetailViewClosed:(FFAdUnifiedNativeView *)unifiedNativeAdView;

/**
 * 广告详情页面即将展示回调
 * @param unifiedNativeAdView FFAdUnifiedNativeView 实例
 */
- (void)ffUnifiedNativeAdDetailViewWillPresentScreen:(FFAdUnifiedNativeView *)unifiedNativeAdView;


@end



@interface FFAdUnifiedNativeView : UIView

/**
 * 绑定的数据对象（必传字段) [super funciton]❗️)
 * 使用方式请见demo
 */
@property (nonatomic, strong) FFAdNativeAd *nativeAd;

/**
 自渲染 视图配置方法(调用方式: 在子类中调用[super funciton]❗️)
 @param clickableViews 可点击的视图数组，此数组内的广告元素才可以响应广告对应的点击事件(必传字段)
 @param delegate delegate(必传字段)
 @param presentVc present Vc(必传字段)
 */
- (void)registerAdView:(NSArray<UIView *> *)clickableViews
              delegate:(id <FFAdUnifiedNativeViewDelegate>)delegate
             presentVc:(UIViewController *)presentVc;


@property (nonatomic, weak, readonly)id<FFAdUnifiedNativeViewDelegate> unifiedNativeDelegate;

@end
