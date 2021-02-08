//
//  FFAdNativeAd.h
//  FFAdSDK
//
//  Created by tudd on 2019/11/19.
//  Copyright © 2019 com.fengfei. All rights reserved.
//  自渲染广告数据

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN
typedef NS_ENUM(NSInteger, FFAdModeType) {
    FFAdModeTypeSmallImage = 100,   // 小图
    FFAdModeTypeGroupImage,         // 多图
    FFAdModeTypeLargeImage,         // 大图
    FFAdModeTypeVideoAd,            // 视频
    FFAdModeTypeTemplateAd,         // 模板
};

@class FFAdMaterialData, FFAdImage;

#pragma mark - FFAdNativeAd ---------------------
@interface FFAdNativeAd : NSObject

@property (nonatomic, strong) FFAdMaterialData *data;   // 广告素材

@end


#pragma mark - FFAdMaterialData ---------------------

@interface FFAdMaterialData : NSObject

@property (nonatomic, copy) NSString        *AdTitle;        // 标题
@property (nonatomic, copy) NSString        *AdDescription;  // 描述
@property (nonatomic, copy) NSString        *source;         // 来源
@property (nonatomic, copy) NSString        *buttonText;     // 来源
@property (nonatomic, assign) FFAdModeType  modelType;       // 类型
@property (nonatomic, assign) NSInteger     videoDuration;   // 视频时长
@property (nonatomic, strong) FFAdImage     *icon;           // icon
@property (nonatomic, strong) NSObject      *data;
@property (nonatomic, strong) NSArray<FFAdImage *> *imageAry;//图片url

@end

#pragma mark - FFAdMaterialData ---------------------
@interface FFAdImage : NSObject

@property (nonatomic, copy) NSString    *imageURL; // image address URL
@property (nonatomic, assign) float     width;     // image width
@property (nonatomic, assign) float     height;    // image height

@end

NS_ASSUME_NONNULL_END


