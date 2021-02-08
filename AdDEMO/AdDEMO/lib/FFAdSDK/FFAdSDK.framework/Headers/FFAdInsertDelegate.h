//
//  FFAdInsertMgrDelegate.h
//  FFAdSDKDemo
//
//  Created by tudd on 2018/12/28.
//  Copyright © 2018 com.fengfei. All rights reserved.
//

#import <Foundation/Foundation.h>

@class FFAdInsertMgr;

@protocol FFAdInsertDelegate<NSObject>

@optional

/**
 *  载成功回调
 */
- (void)insertAdSuccessLoad:(FFAdInsertMgr *)insertMgr;

/**
 *  加载失败回调
 */
- (void)insertAdFailLoad:(FFAdInsertMgr *)insertMgr error:(NSObject *)error;

/**
 *  插屏广告将要展示回调
 *  详解: 插屏广告即将展示回调该函数
 */
- (void)insertAdWillShow:(FFAdInsertMgr *)insertMgr;

/**
 *  插屏广告曝光回调
 */
- (void)insertAdWillExposure:(FFAdInsertMgr *)insertMgr;

/**
 *  插屏广告点击回调
 */
- (void)insertAdClicked:(FFAdInsertMgr *)insertMgr;

/**
 *  插屏广告关闭回调
 */
- (void)insertAdClose:(FFAdInsertMgr *)insertMgr;


/**
 * 详情页 消失 回调
 */
- (void)insertAdDismissDetailVC:(FFAdInsertMgr *)insertMgr;

@end
