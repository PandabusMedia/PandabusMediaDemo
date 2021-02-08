//
//  FFAdPlayerDefine.h
//  FFAdSDK
//
//  Created by tudd on 2019/6/27.
//  Copyright © 2019 com.fengfei. All rights reserved.
//

typedef NS_ENUM(NSInteger, FFAdPlayerPlayState) {
    FFAdPlayerStateFailed    = 1,
    FFAdPlayerStateBuffering,
    FFAdPlayerStatePlaying,
    FFAdPlayerStatePause,
    FFAdPlayerStateStopped,
    FFAdPlayerStateDefalt
};

@class FFAdPlayer;

@protocol FFAdPlayerDelegate <NSObject>

@optional
/**
 * 视频播放状态回调.
 */
- (void)player:(FFAdPlayer *)player stateDidChanged:(FFAdPlayerPlayState)playerState;

/**
 * 视频准备
 */
- (void)playerReadyToPlay:(FFAdPlayer *)player;

/**
 * 视频播放完成
*/
- (void)playerDidPlayFinish:(FFAdPlayer *)player error:(NSError *)error;


@end

