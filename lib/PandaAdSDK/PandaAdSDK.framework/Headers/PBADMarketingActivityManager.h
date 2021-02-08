//
//  PBMarketingActivityManager.h
//  PandaAdSDK
//
//  Created by Sun on 2020/11/10.
//  Copyright © 2020 com.futurefleet. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import <PandaAdSDK/PBADMarketingActivityModel.h>
NS_ASSUME_NONNULL_BEGIN

@interface PBADMarketingActivityManager : NSObject
/**
 *  加载营销活动
 *  AppId - 营销中心appId(注意不是广告appId，字母数字组合，由熊猫提供。)
 *  splashPlcId - 营销中心开屏广告位id，由熊猫提供
 *  rewardVideoPlcId - 营销中心激励视频广告位id，由熊猫提供
 *  userId - app的用户id，用于区分用户的标识
 *  superController - 加载营销活动的VC
 *  marketingShowCode - 用于区分显示活动位置的code，不同位置加载传不同的showcode，熊猫提供
 *  titleColor - 导航栏title以及icon颜色
 *  backColor - 导航栏背景颜色
 */
+ (void)initWithAppId:(NSString *)appId
          splashPlcId:(NSString *)splashPlcId
     rewardVideoPlcId:(NSString *)rewardVideoPlcId
               userId:(NSString *)userId
      superController:(UIViewController *)superController
               isHome:(BOOL)isHome
    marketingShowCode:(NSString *)showCode
           titleColor:(UIColor *)titleColor
            backColor:(UIColor *)backColor
             complete:(void (^)(PBADMarketingActivityModel *dataModel,BOOL success,NSError * error))complete;

@end

NS_ASSUME_NONNULL_END
