//
//  FFAdStickVideoView.h
//  FFAdSDK
//
//  Created by tudd on 2019/5/23.
//  Copyright © 2019 com.fengfei. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface FFAdStickVideoView : UIView

/**
 * 是否渲染完毕
 */
@property (nonatomic, assign, readonly) BOOL isReady;

/**
 * 是否是视频模板广告
 */
@property (nonatomic, assign, readonly) BOOL isVideoAd;

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
 * 视频模板广告时长，单位 ms
 */
- (CGFloat)videoDuration;

/**
 * 视频模板广告已播放时长，单位 ms
 */
- (CGFloat)videoPlayTime;

//- (instancetype)initWithFrame:(CGRect)frame with:(id)obj;

- (void)setViewFrame:(CGRect)frame;
@end


