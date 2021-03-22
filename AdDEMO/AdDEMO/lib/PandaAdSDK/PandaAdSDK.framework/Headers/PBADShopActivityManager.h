//
//  PBADShopActivityManager.h
//  PandaAdSDK
//
//  Created by wangye on 2021/2/1.
//  Copyright © 2021 com.futurefleet. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import <PandaAdSDK/PBADShopActivityModel.h>

@interface PBADShopActivityManager : NSObject
/**
 *  商城弹窗
 *  AppId - 商城appId(注意不是广告appId，字母数字组合，由熊猫提供。)
 *  userId - app的用户id，用于区分用户的标识
 *  superController - 加载商城的VC
 *  marketingShowCode - 用于区分显示活动位置的code，不同位置加载传不同的showcode，熊猫提供
 *  iconColor - icon颜色
 */
+ (void)initWithAppId:(NSString *)appId
               userId:(NSString *)userId
      superController:(UIViewController *)superController
    marketingShowCode:(NSString *)showCode
            iconColor:(UIColor *)iconColor
             complete:(void (^)(PBADShopActivityModel *dataModel,BOOL success,NSError * error))complete;
@end
