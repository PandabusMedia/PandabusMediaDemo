//
//  FFAdInitConfig.h
//  FFAdSDK
//
//  Created by tudd on 2019/1/15.
//  Copyright © 2019 com.fengfei. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface FFAdInitConfig : NSObject

/**
 * 单例 实例化
*/
+ (FFAdInitConfig *)shareInstace;

/**
 * 请在App启动的时候调用初始化方法;
 * @param appId 应用id, 管理后台可以查到;
 * waring - 必须注册~  否则影响收益！
 * 需要AppDelegate的 - (BOOL)application:didFinishLaunchingWithOptions:内执行
 */
- (void)configWithAppId:(NSString *)appId;

/**
 * 错误日志输出
 * @param isOn 打开错误日志输出；
 */
- (void)loggerSwith:(BOOL)isOn;

/**
 * 测试/正式接口配置
 * @param isTest 默认是NO；
 */
- (void)isTestSwith:(BOOL)isTest;


@end
