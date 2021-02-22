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
 *  title - 头部标题
 *  webViewHeight - webView高度，内部webView.frame = CGRectMake(0, 0, ScreenWidth, webViewHeight)
*/
- (instancetype)initWithTitle:(NSString *)title webViewHeight:(CGFloat)webViewHeight;

@end

