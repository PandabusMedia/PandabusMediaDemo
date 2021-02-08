//
//  FFAdBannerView.h
//  FFAdSDK
//
//  Created by tudd on 2018/12/28.
//  Copyright © 2018 com.fengfei. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "FFAdBannerViewDelegate.h"

@interface FFAdBannerView : UIView

/**
 *  类方法
 * @params
 * @appId - 应用 id
 * @placementId 广告id
 * @delegate - delegate
 */
+ (instancetype)initAdViewWithAppId:(NSString *)appid
                        placementId:(NSString *)placementId
                           delegate:(id<FFAdBannerViewDelegate>) delegate;

/**
 *  类方法
 * @params
 * @appId - 应用 id
 * @placementId 广告id
 * @delegate - delegate
 * @size - banner view size
 */
+ (instancetype)initAdViewWithAppId:(NSString *)appid
                        placementId:(NSString *)placementId
                           delegate:(id<FFAdBannerViewDelegate>)delegate
                               size:(CGSize)size;


@end
