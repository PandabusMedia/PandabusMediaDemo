//
//  FFAdSplashMgr.h
//  FFAdSDK
//
//  Created by tudd on 2019/1/24.
//  Copyright © 2019 com.fengfei. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "FFAdSplashMgrDelegate.h"

@interface FFAdSplashMgr : NSObject
/**
 * 初始化
 * @param appId - 媒体 ID
 * placementId - 广告位 ID
 * totalFetchDelay -  广告请求总超时时长,建议此值大>3s
 * window - keywindow
 * bottomView - 自定义view,可为空！
 * rootvc - mainVC
 */
+ (instancetype)initWithAppId:(NSString *)appId
                  placementId:(NSString *)placementId
              totalFetchDelay:(NSTimeInterval)totalFetchDelay
                   withWindow:(UIWindow *)window
               withBottomView:(UIView *)bottomView
                     delegate:(id<FFAdSplashMgrDelegate>)delegate
                       rootvc:(UIViewController *)rootvc;

/**
 * 初始化
 * @param appId - 媒体 ID
 * placementId - 广告位 ID
 * totalFetchDelay -  广告请求总超时时长,建议此值大>3s
 * window - keywindow
 * bottomView - 自定义view可为空,可配合isFullScr使用.
 * isFullScr - 是否是全屏，默认是NO, 如果设置了YES,请把bottomView背景做成半透明,广告会全屏展示，可优化收入相关数据.
 * rootvc - mainVC
 */
+ (instancetype)initWithAppId:(NSString *)appId
                  placementId:(NSString *)placementId
              totalFetchDelay:(NSTimeInterval)totalFetchDelay
                   withWindow:(UIWindow *)window
               withBottomView:(UIView *)bottomView
                    isFullScr:(BOOL)isFullScr
                 defaultColor:(UIColor *)defaultColor
                     delegate:(id<FFAdSplashMgrDelegate>)delegate
                       rootvc:(UIViewController *)rootvc;

@property (nonatomic, strong) UIImage     *imagePlaceHodler;/**< 广告图片的缺省图,可为空*/
@property (nonatomic, strong) NSString    *clickUrl;  /**< 跳转url */
@property (nonatomic, strong) NSString    *clickType; /**< 点击type区分，如若需要自己跳转，请后台配置参数 */
@property (nonatomic, weak, readonly) id<FFAdSplashMgrDelegate> delegate;
@property (nonatomic, strong) NSString      *source;
@property (nonatomic, assign) BOOL          isUNION;


@end
