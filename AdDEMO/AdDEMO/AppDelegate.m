//
//  AppDelegate.m
//  AdDEMO
//
//  Created by wangye on 2020/3/17.
//  Copyright © 2020 com.pandabus.ios. All rights reserved.
//

#import "AppDelegate.h"
#import <PandaAdSDK/PandaConfigManager.h>
#import <PandaAdSDK/PandaSplashAdManager.h>
#import "ViewController.h"

// 请求用户提供idfa读取权限, 提高广告体验
//#import <AppTrackingTransparency/ATTrackingManager.h>

@interface AppDelegate ()<PandaSplashAdManagerDelegate>

@property (nonatomic, strong) PandaSplashAdManager * splashManager;

@end

@implementation AppDelegate

- (BOOL)application:(UIApplication *)application didFinishLaunchingWithOptions:(NSDictionary *)launchOptions {
    // Override point for customization after application launch.
    
    self.window = [[UIWindow alloc] initWithFrame:[UIScreen mainScreen].bounds];
    [self.window makeKeyAndVisible];
    
    [PandaConfigManager initSDKWithAppId:@"cheshizhuanyong"];

    ViewController * vc = [[ViewController alloc]init];
    self.window.rootViewController = [[UINavigationController alloc] initWithRootViewController:vc];
    
    //    if (@available(iOS 14, *)) {
    //        [ATTrackingManager requestTrackingAuthorizationWithCompletionHandler:^(ATTrackingManagerAuthorizationStatus status) {
                
                [self loadSplashAd];
                
    //        }];
    //    }
    
    return YES;
}

#pragma mark - 加载开屏广告
-(void)loadSplashAd {
    CGRect frame = [UIScreen mainScreen].bounds;
    // bottomView - [可选]，兜底图，防止开屏广告材料还没拉取到，会有白屏展示，建议：兜底可以设置为启动图。
    UIView *bottomView = [[UIView alloc] initWithFrame:frame];
    UIImageView * bottomImageView = [[UIImageView alloc]initWithFrame:frame];
    bottomImageView.image = [UIImage imageNamed:@"bottomView_image"];
    bottomView.backgroundColor = [UIColor blueColor];
    [bottomView addSubview:bottomImageView];
    
    //logoView -广告发起请求并展示在Window中, 同时在屏幕底部设置应用自身的Logo页面或是自定义View
    CGFloat height = [UIScreen mainScreen].bounds.size.width/(750.0/200.0);
    UIView *logoView = [[UIView alloc]initWithFrame:CGRectMake(0, [UIScreen mainScreen].bounds.size.height - height, [UIScreen mainScreen].bounds.size.width, height)];
    logoView.backgroundColor = [UIColor blackColor];
    UIImageView *logoImageView = [[UIImageView alloc]initWithImage:[UIImage imageNamed:@"logo_image"]];
    
    CGFloat logoImgHeight = logoView.bounds.size.height;
    CGFloat logoImgWidth = logoView.bounds.size.width;
    
    logoImageView.frame = CGRectMake((logoView.frame.size.width - logoImgWidth)/2.0, (logoView.frame.size.height - logoImgHeight)/2.0, logoImgWidth, logoImgHeight);
    [logoView addSubview:logoImageView];
    
    self.splashManager = [PandaSplashAdManager defaultClient];
    [self.splashManager initSplashAdWithPlcId:@"5fbb728c3d8c91515c030a6c" TotalFetchDelay:5 window:self.window bottomView:bottomView logoView:logoView delegate:self rootvc:self.window.rootViewController];
    
}
/**
 *  开屏广告成功加载
 */
- (void)PBSplashAdDidLoadData {
    NSLog(@"PandaAdLOG%s---%@",__FUNCTION__,@"开屏广告成功展示");
}

/**
 *  开屏广告展示失败
 */
- (void)PBSplashAdFailToLoad:(NSError *)error {
    NSLog(@"PandaAdLOG%s---%@ error:%@",__FUNCTION__,@"开屏广告展示失败",error);
}

/**
 *  开屏广告曝光回调
 */
- (void)PBSplashAdExposured {
    NSLog(@"PandaAdLOG%s---%@",__FUNCTION__,@"开屏广告曝光回调");
}

/**
 *  开屏广告点击回调
 */
- (void)PBSplashAdClicked {
    NSLog(@"PandaAdLOG%s---%@",__FUNCTION__,@"开屏广告点击回调");
}

/**
 *  开屏广告关闭回调
 */
- (void)PBSplashAdClosed {
    NSLog(@"PandaAdLOG%s---%@",__FUNCTION__,@"开屏广告关闭回调");
}

/**
 *  落地页关闭
 */
- (void)PBSplashAdDissmissDetail {
    NSLog(@"PandaAdLOG%s---%@",__FUNCTION__,@"开屏详情页关闭回调");
}

@end
