//
//  FFAdInfoFlowData.h
//  FFAdSDK
//
//  Created by tudd on 2020/3/4.
//  Copyright © 2020 com.fengfei. All rights reserved.
//

#import "FFAdBaseModel.h"

NS_ASSUME_NONNULL_BEGIN

typedef NS_ENUM(NSInteger, ViewType) {
    titleimg = 1,   // 图文
    bigimg,         // 大图
    slideimg,       // 多图
    ad,             // 广告
    singletitle,    // 置顶
};

/**
 * 内容联盟list data
 */
@interface FFAdInfoFlowData : FFAdBaseModel

@property (nonatomic, strong) NSString  *title;     /**< 文章标题 */
@property (nonatomic, strong) NSString  *id;        /**< 文章ID */
@property (nonatomic, strong) NSString  *thumbnail; /**< 图片地址 */
@property (nonatomic, assign) ViewType  viewType;   /**< 显示type */
@property (nonatomic, strong) NSString  *view;      /**< 显示样式 */
@property (nonatomic, strong) NSArray   *iimage;    /**< viewType == slideimg时展示的图片列表*/
@property (nonatomic, strong) NSString  *appid;     /**< appid  */
@property (nonatomic, strong) NSString  *adid;      /**< 广告位id */
@property (nonatomic, assign) NSInteger index;      /**< 广告索引 */
@property (nonatomic, strong) NSString  *source;    /**< 来源 */
@property (nonatomic, assign) CGFloat   contentH;     /**< 内容content height */

@end

/**
 * 内容联盟channel data
*/
@interface FFAdInfoChannelData : FFAdBaseModel

@property (nonatomic, strong) NSString *cname;      /**< channel name */
@property (nonatomic, strong) NSString *cid;      /**< channel id */

@end



NS_ASSUME_NONNULL_END
