//
//  PandaRewardVideoViewController.m
//  AdDEMO
//
//  Created by wangye on 2020/11/10.
//  Copyright © 2020 com.pandabus.ios. All rights reserved.
//

#import "PandaRewardVideoViewController.h"
#import <PandaAdSDK/PandaRewardVideoAdManager.h>

@interface PandaRewardVideoViewController ()<PandaRewardVideoAdManagerDelegate>

@property (nonatomic,strong)PandaRewardVideoAdManager * manager;

@end

@implementation PandaRewardVideoViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    // Do any additional setup after loading the view.
    
    self.view.backgroundColor = [UIColor whiteColor];
    
    UIButton * btn = [[UIButton alloc]initWithFrame:CGRectMake(100, 100, 100, 100)];
    [btn addTarget:self action:@selector(loadClick) forControlEvents:UIControlEventTouchUpInside];
    btn.backgroundColor = [UIColor redColor];
    [btn setTitle:@"加载" forState:UIControlStateNormal];
    [self.view addSubview:btn];
    
}

- (void)loadClick {
    
    self.manager = [[PandaRewardVideoAdManager alloc]init];
    
    [self.manager initRewardVideoAdWithPlcId:@"" delegate:self rootvc:self];
    
}

/**
 *  加载成功
 */
- (void)PandaAdRewardVideoAdDidLoadWithManager:(PandaRewardVideoAdManager *)manager {
    NSLog(@"加载成功");
}
/**
 *  加载失败
 */
- (void)PandaAdRewardVideoAdDidFailWithError:(id)error {
    NSLog(@"加载失败");
}
/**
 *  下载成功
 */
- (void)PandaAdRewardVideoAdDidDownLoadVideo {
    NSLog(@"下载成功");
}
/**
 *  点击广告
 */
- (void)PandaAdRewardVideoAdDidClick {
    NSLog(@"点击广告");
}
/**
 *  曝光回调
 */
- (void)PandaAdRewardVideoAdDidBecomeVisible {
    NSLog(@"曝光回调");
}
/**
 *  视频播放完成
 */
- (void)PandaAdRewardVideoAdDidPlayFinishWithError:(id)error {
    NSLog(@"视频播放完成");
}
/**
 * 播放完成点击关闭
 */
- (void)PandaAdRewardVideoAdDidClose {
    NSLog(@"播放完成点击关闭");
}

/*
#pragma mark - Navigation

// In a storyboard-based application, you will often want to do a little preparation before navigation
- (void)prepareForSegue:(UIStoryboardSegue *)segue sender:(id)sender {
    // Get the new view controller using [segue destinationViewController].
    // Pass the selected object to the new view controller.
}
*/

@end
