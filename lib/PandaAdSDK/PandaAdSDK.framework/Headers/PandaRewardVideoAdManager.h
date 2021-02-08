//
//  PandaRewardVideoAdManager.h
//  PandaAdSDK
//
//  Created by wangye on 2020/11/10.
//  Copyright © 2020 com.futurefleet. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@class PandaRewardVideoAdManager;

@protocol PandaRewardVideoAdManagerDelegate <NSObject>

@optional
/**
 *  加载成功
 */
- (void)PandaAdRewardVideoAdDidLoadWithManager:(PandaRewardVideoAdManager *)manager;
/**
 *  加载失败
 */
- (void)PandaAdRewardVideoAdDidFailWithError:(id)error;
/**
 *  下载成功
 */
- (void)PandaAdRewardVideoAdDidDownLoadVideo;
/**
 *  点击广告
 */
- (void)PandaAdRewardVideoAdDidClick;
/**
 *  曝光回调
 */
- (void)PandaAdRewardVideoAdDidBecomeVisible;
/**
 *  视频播放完成
 */
- (void)PandaAdRewardVideoAdDidPlayFinishWithError:(id)error;
/**
 * 播放完成点击关闭
 */
- (void)PandaAdRewardVideoAdDidClose;

@end

@interface PandaRewardVideoAdManager : NSObject

@property (nonatomic,weak) id <PandaRewardVideoAdManagerDelegate> delegate;

/**
 *  初始化
 *  熊猫出行广告初始化
 *  plcId - 广告位id，熊猫提供
 *  rootVc - 需要播放的控制器
 */
- (void)initRewardVideoAdWithPlcId:(NSString *)plcId
                          delegate:(id)delegate
                            rootvc:(UIViewController *)rootvc;

@end
