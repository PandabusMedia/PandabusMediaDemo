//
//  FFAdDrawVideoMgr.h
//  FFAdSDK
//
//  Created by tudd on 2019/6/26.
//  Copyright © 2019 com.fengfei. All rights reserved.
//

#import <Foundation/Foundation.h>

@class FFAdDrawVideoMgr,FFAdNativeAd;

@protocol FFAdDrawVideoDelegate <NSObject>

@optional

/**
 * @param adsManager FFAdDrawVideoMgr
 * nativeAdDataArray 广告数据
 * 成功回调
 */
- (void)ffNativeAdsManagerSuccessToLoad:(FFAdDrawVideoMgr * _Nullable)adsManager
                              nativeAds:(NSArray<FFAdNativeAd *> *_Nullable)nativeAdDataArray;

/**
 * @param adsManager FFAdDrawVideoMgr
 * error 错误信息
 * 失败回调
 */
- (void)ffNativeAdsManager:(FFAdDrawVideoMgr * _Nullable)adsManager
          didFailWithError:(NSObject *_Nullable)error;

@end


@interface FFAdDrawVideoMgr : NSObject


/**
 * 初始化
 * @param appId 应用id
 * placementId: 广告位id
 * size: 广告位大小(推荐使用屏幕size)
 * delegate: 代理
 */
+ (instancetype _Nullable)initWithAppId:(NSString *_Nullable)appId
                  placementId:(NSString *_Nullable)placementId
                       adSize:(CGSize)size
                     delegate:(id<FFAdDrawVideoDelegate> _Nullable)delegate;
@property (nonatomic, strong,nullable) NSString  *source;
@property (nonatomic, assign) BOOL               isUNION;


@end
