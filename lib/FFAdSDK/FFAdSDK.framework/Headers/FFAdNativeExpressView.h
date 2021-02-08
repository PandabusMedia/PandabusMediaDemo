//
//  FFAdNativeExpressView.h
//  FFAdSDK
//
//  Created by tudd on 2019/3/25.
//  Copyright © 2019 com.fengfei. All rights reserved.
//

#import <UIKit/UIKit.h>

typedef NS_ENUM(NSInteger,StyleColor) {
    dark,
    light
};

@interface FFAdNativeExpressView : UIView
/*
 *  viewControllerForPresentingModalView
 *  详解：[必选]开发者需传入用来弹出目标页的ViewController，一般为当前ViewController
 */
@property (nonatomic, weak) UIViewController *controller;

/**
 *[必选]
 *原生模板广告渲染
 */
- (void)render;

/**
 * 暗黑模式适配1 [可选]
 * @params style 暗黑/普通
 * lightBg 普通背景颜色
 * lightTitle 普通标题颜色
 * darkBg 暗黑背景颜色
 * darkTitle 暗黑标题颜色
 */
- (void)setDefault:(StyleColor)style
           lightBg:(UIColor *)lightBg
        lightTitle:(UIColor *)lightTitle
            darkBg:(UIColor *)darkBg
         darkTitle:(UIColor *)darkTitle;

/**
 * 暗黑模式适配2[可选]
 * @params  style 暗黑/普通
 *          colorArr 颜色数组
 * 例 [titleColor,viewBgColor,adTagColor,apptitleColor,buttonBgColor,buttonTitleColor]
 *    [标题颜色, 背景颜色, 广告标识颜色, app标题颜色，下载按钮背景, 下载按钮标题颜色]
 * 注意事项,数组顺序不能变,必须count ≥ 6
 */
- (void)viewConfig:(StyleColor)style colorArr:(NSArray *)colorArr;

@end
