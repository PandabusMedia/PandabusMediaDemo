//
//  FFAdDrawExpressView.h
//  FFAdSDK
//
//  Created by tudd on 2020/11/16.
//  Copyright © 2020 com.fengfei. All rights reserved.
//

#import <UIKit/UIKit.h>

@class FFAdNativeAdRelated,FFAdNativeAd;

NS_ASSUME_NONNULL_BEGIN

@interface FFAdDrawExpressView : UIView

/// 标题
@property (nonatomic, strong) UILabel   *titleLabel;
/// 描述
@property (nonatomic, strong) UILabel   *descriptionLabel;
/// 活动按钮
@property (nonatomic, strong) UIButton  *creativeButton;

@property (nonatomic, strong) FFAdNativeAdRelated *nativeAdRelatedView;
/// 刷新数据
- (void)refreshUIWithModel:(FFAdNativeAd *)model;


@end

NS_ASSUME_NONNULL_END
