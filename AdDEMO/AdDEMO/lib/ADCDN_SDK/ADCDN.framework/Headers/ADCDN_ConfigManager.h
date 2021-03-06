//
//  ADCDN_ConfigManager.h
//  ADCDN
//
//  Created by 彭双塔 on 2019/9/27.
//  Copyright © 2019 pst. All rights reserved.
//

#import <Foundation/Foundation.h>
/** 是否关闭Block */
typedef void (^ADCDN_GameBoxSwitchStatusBlock)(BOOL isClose);

@interface ADCDN_ConfigManager : NSObject

/**
 *  提供单例类方法
 *  详解：appId - 媒体 ID
 */
+(instancetype _Nullable)shareManagerWithAppId:(NSString *_Nullable)appId;
/**
 *  获取ADCDN的版本
 */
-(NSString *_Nullable)getSDKVersion;

/**
 * 当前APP的版本是否关闭了游戏场景
 * YES 关闭
 * NO 打开
 */
-(void)getGameBoxSwitchStatus:(ADCDN_GameBoxSwitchStatusBlock _Nullable )gameBoxSwitchStatusBlock;
@end

