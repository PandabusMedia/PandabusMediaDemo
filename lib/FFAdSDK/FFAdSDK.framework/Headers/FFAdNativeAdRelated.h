//
//  FFAdNativeAdRelatedView.h
//  FFAdSDK
//
//  Created by tudd on 2019/6/27.
//  Copyright © 2019 com.fengfei. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import "FFAdVideoAdView.h"
#import "FFAdNativeAd.h"


@interface FFAdNativeAdRelated : NSObject

/**
 Promotion label.Need to actively add to the view.
 */
@property (nonatomic, strong, readonly, nullable) UILabel *adLabel;

/**
 Ad logo.Need to actively add to the view.
 */
@property (nonatomic, strong, readonly, nullable) UIImageView *logoImageView;
/**
 Ad logo + Promotion label.Need to actively add to the view.
 */
@property (nonatomic, strong, readonly, nullable) UIImageView *logoADImageView;

/**
 Video ad view. Need to actively add to the view.
 */
@property (nonatomic, strong, readonly, nullable) FFAdVideoAdView *videoAdView;

/**
 required.
 Root view controller for handling ad actions.
 Action method includes 'pushViewController' and 'presentViewController'.
 */
@property (nonatomic, weak, readwrite,nullable) UIViewController *rootViewController;

/**
 step1. 刷新数据源
 */
- (void)refreshData:(FFAdNativeAd *_Nonnull)nativeAd;

/**
 step2. 注册view
 */
- (void)registerContainer:(__kindof UIView *_Nullable)containerView
       withClickableViews:(NSArray<__kindof UIView *> *_Nullable)clickableViews;

@end
