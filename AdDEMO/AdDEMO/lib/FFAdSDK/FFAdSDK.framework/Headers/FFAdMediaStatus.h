//
//  FFSDKDefines.h
//  FFAdSDK
//
//  Created by tudd on 2019/5/23.
//  Copyright © 2019 com.fengfei. All rights reserved.
//

#import <Foundation/Foundation.h>

/**
 *  视频播放器状态
 *
 *  播放器只可能处于以下状态中的一种
 *
 */
typedef NS_ENUM(NSUInteger, FFMediaPlayerStatus) {
    FFMediaPlayerStatusInitial = 0,         // 初始状态
    FFMediaPlayerStatusLoading = 1,         // 加载中
    FFMediaPlayerStatusStarted = 2,         // 开始播放
    FFMediaPlayerStatusPaused = 3,          // 用户行为导致暂停
    FFMediaPlayerStatusStoped = 4,          // 播放停止
    FFMediaPlayerStatusError = 5,           // 播放出错
};
