//
//  PBShopActiveWebViewController.h
//  PandaAdSDK
//
//  Created by wangye on 2021/2/24.
//  Copyright © 2021 com.futurefleet. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>

@interface PBShopActiveWebViewController : UIViewController

/**
 *  title - 头部标题
 *  webViewHeight - webView高度，内部webView.frame = CGRectMake(0, 0, ScreenWidth, webViewHeight)
*/
- (instancetype)initWithUrlStr:(NSString *)urlStr
                         title:(NSString *)title
                     iconColor:(UIColor *)iconColor
                 webViewHeight:(CGFloat)webViewHeight;

@end
