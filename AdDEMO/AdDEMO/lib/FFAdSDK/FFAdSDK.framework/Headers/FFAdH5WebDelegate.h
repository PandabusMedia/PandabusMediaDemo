//
//  FFAdH5WebDelegate.h
//  FFAdSDK
//
//  Created by tudd on 2019/11/5.
//  Copyright © 2019 com.fengfei. All rights reserved.
//


@class FFAdGWebViewCtrl;

@protocol FFAdH5WebDelegate <NSObject>
@optional

/**
 * webView页面加载成功
 * @param h5WebCtrl FFAdGWebViewCtrl 实例
 */
- (void)ffPageOnLoadFinished:(FFAdGWebViewCtrl *)h5WebCtrl;

/**
 * webView 页面加载失败
 * @param h5WebCtrl FFAdGWebViewCtrl 实例
 * errMsg: 失败原因
 */
- (void)ffPageOnLoadFailed:(FFAdGWebViewCtrl *)h5WebCtrl errMsg:(NSString *)errMsg;

/**
 * webView 页面关闭
 * @param h5WebCtrl FFAdGWebViewCtrl 实例
*/
- (void)ffPageOnClose:(FFAdGWebViewCtrl *)h5WebCtrl;



@end
