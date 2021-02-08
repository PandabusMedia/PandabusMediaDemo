//
//  PandaSplashAdManager.h
//  PandaAdSDK
//
//  Created by wangye on 2020/11/2.
//  Copyright © 2020 com.futurefleet. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@protocol PandaSplashAdManagerDelegate <NSObject>

@optional
/**
 *  开屏广告成功加载
 */
- (void)PBSplashAdDidLoadData;

/**
 *  开屏广告展示失败
 */
- (void)PBSplashAdFailToLoad:(id)error;

/**
 *  开屏广告曝光回调
 */
- (void)PBSplashAdExposured;

/**
 *  开屏广告点击回调
 */
- (void)PBSplashAdClicked;

/**
 *  开屏广告关闭回调
 */
- (void)PBSplashAdClosed;

/**
 *  落地页关闭
 */
- (void)PBSplashAdDissmissDetail;

@end


@interface PandaSplashAdManager : NSObject

@property (nonatomic,weak) id <PandaSplashAdManagerDelegate> delegate;

+ (instancetype)defaultClient;

/**
*  初始化
*  熊猫出行广告初始化
*  PlcId - 广告位id，熊猫提供
*  totalFetchDelay - 超时时间，默认3秒
*  bottomView - [可选]，兜底图，防止开屏广告材料还没拉取到，会有白屏展示，建议：兜底可以设置为启动图。
*  logoView -
    广告发起请求并展示在Window中, 同时在屏幕底部设置应用自身的Logo页面或是自定义View
    详解：[可选]，发起拉取广告请求,并将获取的广告以半屏形式展示在传入的Window的上半部，剩余部分展示传入的logoView
    请注意:1.logoView需设置好宽高，所占的空间不能过大，并保证高度不超过屏幕高度的 25%。2.Splash广告只支持竖屏
    logoView 自定义底部View，可以在此View中设置应用Logo
*  window - keyWindow
*  rootVc - mainVC(keyWindow.rootVc)
*/
- (void)initSplashAdWithPlcId:(NSString *)plcId
              TotalFetchDelay:(int)totalFetchDelay
                       window:(UIWindow *)window
                   bottomView:(UIView *)bottomView
                     logoView:(UIView *)logoView
                     delegate:(id)delegate
                       rootvc:(UIViewController *)rootvc;

@end

