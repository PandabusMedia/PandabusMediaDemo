//
//  FFAdInfosFlowMgr.h
//  FFAdSDK
//
//  Created by tudd on 2020/3/4.
//  Copyright © 2020 com.fengfei. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import "InfosDefines.h"

NS_ASSUME_NONNULL_BEGIN

@class FFAdInfoFlowData;
@protocol FFAdInfoFlowData;

@protocol FFAdInfosFlowDelegate <NSObject>

@optional

/**
 * 讯息流数据s加载 成功
*/
- (void)ffInfosFlowLoadSuccess:(NSArray<FFAdInfoFlowData> *)nativeList;

/**
 * 讯息流数据加载 失败
*/
- (void)ffInfosFlowLoadFail:(NSObject *)error;

/**
 * 讯息流曝光
*/
- (void)ffInfoFlowExposure;

/**
 * 讯息流点击
 */
- (void)ffInfoFlowClicked;

/**
 * 讯息流落地页关闭
 */
- (void)ffInfoFlowDismissDetail;

@end

@interface FFAdInfosFlowMgr : NSObject

/**
 * 信息流资讯 初始化 方法
 * @param appId appid  (必传字段)
 *        delegate delegate(必传字段)
*/

+ (instancetype)initWithAppId:(NSString *)appId
                     delegate:(id<FFAdInfosFlowDelegate>)delegate;
/**
 * 信息流资讯 加载数据 方法
 * @param channelId channel  (必传字段)
 *        proid proid
 *        action action(必传字段)
*/
- (void)loadInfosFlow:(NSString *)channelId proid:(NSString *)proid action:(ActionType )action;

/**
 * 信息流资讯曝光方法，必须调用否则影响收益⚠️
 @param view view 广告view  (必传字段)
 *      bindData bindData 广告view绑定的数据(必传字段)
 *        bindData bindData 广告view绑定的数据(必传字段)
*/
- (void)onExposeBindView:(UIView *)view bindData:(FFAdInfoFlowData *)bindData;

/**
 * 信息流资讯 点击 方法
 @param view view 广告view  (必传字段)
 *      bindData bindData 广告view绑定的数据(必传字段)
*/
- (void)onClickHandler:(UIView *)view bindData:(FFAdInfoFlowData *)bindData;


@end

NS_ASSUME_NONNULL_END
