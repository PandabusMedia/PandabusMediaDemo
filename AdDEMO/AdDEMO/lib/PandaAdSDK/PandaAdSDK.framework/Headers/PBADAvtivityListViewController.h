//
//  PBADAvtivityListViewController.h
//  PandaAdSDK
//
//  Created by wangye on 2020/12/15.
//  Copyright © 2020 com.futurefleet. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface PBADAvtivityListViewController : UIViewController

/**
 *  营销中心appId(注意不是广告appId，字母数字组合，由熊猫提供。)
 */
@property (nonatomic, copy) NSString * appId;

/**
 *  app的用户id，用于区分用户的标识
 */
@property (nonatomic, copy) NSString * userId;
/**
 *  title，默认为“优惠活动”
 */
@property (nonatomic, copy) NSString * titleStr;
/**
 *  splashPlcId，开屏广告位id
 */
@property (nonatomic, copy) NSString * splashPlcId;

/**
*  导航栏 titleColor
*/
@property (nonatomic, strong) UIColor * titleColor;
/**
*  导航栏 backColor
*/
@property (nonatomic, strong) UIColor * backColor;

@end
