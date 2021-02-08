//
//  FFAdNativeMgr.h
//  FFAdSDK
//
//  Created by tudd on 2019/2/27.
//  Copyright © 2019 com.fengfei. All rights reserved.
//

#import <Foundation/Foundation.h>

@class FFAdNativeMgr,FFAdNativeView;

@protocol FFAdNativeViewDelegate <NSObject>

@optional

/**
 *  原生广告加载广告数据成功回调，返回为FFAdNativeAd对象的数组，为自渲染数据
 */
- (void)ffNativeAdLoadSuccess:(FFAdNativeMgr *)nativeAd nativeAdArray:(NSArray *)nativeAdArray;

/**
 *  原生广告加载广告数据成功回调，返回对象为模板view;
 */
- (void)ffNativeAdLoadSuccess:(FFAdNativeMgr *)nativeAd epxressArray:(NSArray *)epxressArray;

/**
 *  原生广告加载广告数据失败回调
 */
- (void)ffNativeAdLoadFail:(FFAdNativeMgr *)nativeAd error:(NSObject *)error;


@end


@interface FFAdNativeMgr : NSObject<NSCopying>

/**
 * 自渲染2.0视图(拥有所有自渲染权限⚠️)
 * @param appId appid  (必传字段)
 * placementId 广告位id (必传字段)
 * delegate delegate(必传字段)
*/
+ (instancetype)initWithAppId:(NSString *)appId
                  placementId:(NSString *)placementId
                     delegate:(id<FFAdNativeViewDelegate>)delegate;

/**
 * 自渲染2.0视图(没有自渲染权限⚠️)
 * @param appId appid  (必传字段)
 * placementId 广告位id (必传字段)
 * delegate delegate(必传字段)
 * viewSize: 必传字段, 建议和网盟平台配置相同尺寸;
*/
+ (instancetype)initWithAppId:(NSString *)appId
                  placementId:(NSString *)placementId
                     delegate:(id<FFAdNativeViewDelegate>)delegate
                     viewSize:(CGSize)viewSize;


@end
 
