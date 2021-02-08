//
//  MarketingActivityModel.h
//  HengFengBus
//
//  Created by Sun on 2020/7/31.
//  Copyright © 2020 易通创新科技（大连）有限公司. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface PBADMarketingActivityModel : NSObject

/// 活动ID
@property (nonatomic, copy) NSString *activityId;

/// 活动图片
@property (nonatomic, copy) NSString *popImgUrl;

/// 活动连接
@property (nonatomic, copy) NSString *activityUrl;

@property (nonatomic, copy) NSString *activityName;

@end

NS_ASSUME_NONNULL_END
