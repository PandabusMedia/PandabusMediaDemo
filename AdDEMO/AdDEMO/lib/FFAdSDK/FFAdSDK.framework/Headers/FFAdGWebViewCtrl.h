//
//  FFAdGWebViewCtrl.h
//  FFAdSDK
//
//  Created by tudd on 2019/10/10.
//  Copyright © 2019 com.fengfei. All rights reserved.
//  互动游戏用Webview controller

#import <UIKit/UIKit.h>
#import "FFAdH5WebDelegate.h"

typedef NS_ENUM(NSInteger, OrientationType) {
    VERTICAL = 1,   // 竖屏 默认
    HORIZONTAL      // 横屏
};

@interface FFAdGWebViewCtrl : UIViewController

/**
 * htmlUrlStr: h5 互动游戏请求url(必传字段❗️)
 */
@property (nonatomic, strong) NSString  *htmlUrlStr;

/**
 * appId: 应用ID(必传字段❗️)
 */
@property (nonatomic, strong) NSString  *appId;

/**
 * adId: 广告位id(必传字段❗️)
 */

@property (nonatomic, strong) NSString  *adId;

/**
 * orientationT: 横竖屏 ，默认竖屏 (非必传字段❗️)
*/
@property (nonatomic, assign) OrientationType orientationT;

/**
 * delegate: delegate (非必传字段❗️)
*/
@property (nonatomic, weak) id<FFAdH5WebDelegate> delegate;

@end
