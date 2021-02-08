//
//  PBADShopActivityModel.h
//  PandaAdSDK
//
//  Created by wangye on 2021/2/1.
//  Copyright © 2021 com.futurefleet. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface PBADShopActivityModel : NSObject
// 跳转链接
@property (nonatomic, copy) NSString *clickUrl;
// 图片url
@property (nonatomic, copy) NSString *imgUrl;
@end

NS_ASSUME_NONNULL_END
