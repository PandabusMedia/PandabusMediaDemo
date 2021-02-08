//
//  PandaConfigManager.h
//  PandaAdSDK
//
//  Created by wangye on 2020/11/9.
//  Copyright © 2020 com.futurefleet. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface PandaConfigManager : NSObject

@property (nonatomic, copy)NSString * appId;

+ (instancetype)defaultClient;

/**
*  初始化
*  熊猫出行广告初始化
*  appId - 应用 ID
*/
+ (void)initSDKWithAppId:(NSString *)appId;

/**
*  初始化
*  熊猫出行广告初始化
*  appId - 应用 ID
*  新接入此SDK项目忽略此方法，用上面的初始化方法
*/

+ (void)initSDKWithAppId:(NSString *)appId
                cityCode:(NSString *)cityCode;

@end
