//
//  PBShopWebViewController.h
//  PandaTravel
//
//  Created by wangye on 2020/11/5.
//  Copyright © 2020 易通创新科技（大连）有限公司. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@interface PBShopWebViewController : UIViewController
/**
 *  urlStr - 商城链接url，熊猫提供
 *  title - 头部标题
 *  webViewHeight - webView高度，内部webView.frame = CGRectMake(0, 0, ScreenWidth, webViewHeight)
*/
- (instancetype)initWithUrlStr:(NSString *)urlStr title:(NSString *)title webViewHeight:(CGFloat)webViewHeight;

@end

