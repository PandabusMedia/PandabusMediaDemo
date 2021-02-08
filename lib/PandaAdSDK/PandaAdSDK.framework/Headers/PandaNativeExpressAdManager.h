//
//  PandaNativeExpressAdManager.h
//  PandaAdSDK
//
//  Created by wangye on 2020/11/9.
//  Copyright © 2020 com.futurefleet. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@class PandaNativeExpressAdManager;

@protocol PandaNativeExpressAdManagerDelegate <NSObject>

@optional
/**
 *  加载成功
 */
- (void)PandaAdNativeExpressAdSuccessToLoad;
/**
 *  加载失败
 *  广告拉取失败，禁止多次重试请求广告，避免请求量消耗过大，导致填充率过低，影响系统对您流量的评价从而影响变现效果，得不到广告收益。
 */
- (void)PandaAdNativeExpressAdDidFailWithError:(id)error;
/**
 *  渲染广告成功
 */
- (void)PandaAdNativeExpressAdRenderSuccessWithView:(UIView *)view manager:(PandaNativeExpressAdManager *)manager;
/**
 *  渲染广告失败
 */
- (void)PandaAdNativeExpressAdRenderFailWithError:(id)error;
/**
 *  点击广告
 */
- (void)PandaAdNativeExpressAdDidClick;
/**
 *  曝光回调
 */
- (void)PandaAdNativeExpressAdDidBecomeVisible;
/**
 *  关闭广告回调
 */
- (void)PandaAdNativeExpressAdDidClose;

@end

@interface PandaNativeExpressAdManager : NSObject

@property (nonatomic,weak) id <PandaNativeExpressAdManagerDelegate> delegate;

/**
*  初始化
*  熊猫出行广告初始化
*  plcId - 广告位id，熊猫提供
*  rootvc - 控制器
*  adSize - 广告展示的宽高(部分广告生效)
*/
- (void)initNativeExpressAdWithPlcId:(NSString *)plcId
                              rootvc:(UIViewController *)rootvc
                            delegate:(id)delegate
                              adSize:(CGSize)adSize;


@end

