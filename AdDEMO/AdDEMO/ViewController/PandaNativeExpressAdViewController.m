//
//  PandaNativeExpressAdViewController.m
//  AdDEMO
//
//  Created by wangye on 2020/11/10.
//  Copyright © 2020 com.pandabus.ios. All rights reserved.
//

#import "PandaNativeExpressAdViewController.h"
#import <PandaAdSDK/PandaNativeExpressAdManager.h>
@interface PandaNativeExpressAdViewController ()<PandaNativeExpressAdManagerDelegate>

@property (nonatomic,strong) UIView * adUpView;
@property (nonatomic,strong) UIView * adDownView;
@property (nonatomic,strong) PandaNativeExpressAdManager * managerUp;
@property (nonatomic,strong) PandaNativeExpressAdManager * managerDown;

@end

@implementation PandaNativeExpressAdViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    // Do any additional setup after loading the view.
    
    self.view.backgroundColor = [UIColor whiteColor];
    
    self.adUpView = [[UIView alloc]initWithFrame:CGRectMake(10, 100, self.view.frame.size.width - 20, 200)];
    self.adUpView.backgroundColor = [UIColor grayColor];
    [self.view addSubview:self.adUpView];
    
    self.adDownView = [[UIView alloc]initWithFrame:CGRectMake(10, 450, self.view.frame.size.width - 20, 350)];
    self.adDownView.backgroundColor = [UIColor grayColor];
    [self.view addSubview:self.adDownView];
    
    UIButton * btnUp = [[UIButton alloc]initWithFrame:CGRectMake(20, 300, 100, 100)];
    [btnUp addTarget:self action:@selector(loadUpClick) forControlEvents:UIControlEventTouchUpInside];
    btnUp.backgroundColor = [UIColor redColor];
    [btnUp setTitle:@"加载上" forState:UIControlStateNormal];
    [self.view addSubview:btnUp];
    
    UIButton * btnDown = [[UIButton alloc]initWithFrame:CGRectMake(180, 300, 100, 100)];
    [btnDown addTarget:self action:@selector(loadDownClick) forControlEvents:UIControlEventTouchUpInside];
    btnDown.backgroundColor = [UIColor redColor];
    [btnDown setTitle:@"加载下" forState:UIControlStateNormal];
    [self.view addSubview:btnDown];
    
}

- (void)loadUpClick {
    self.managerUp = [[PandaNativeExpressAdManager alloc]init];
    [self.managerUp initNativeExpressAdWithPlcId:@"5fbc7b083d8c910840717290" rootvc:self delegate:self adSize:CGSizeMake(self.adUpView.frame.size.width, 150)];
}

- (void)loadDownClick {
    self.managerDown = [[PandaNativeExpressAdManager alloc]init];
    [self.managerDown initNativeExpressAdWithPlcId:@"5fbcbbdf3d8c91084071729e" rootvc:self delegate:self adSize:CGSizeMake(self.adDownView.frame.size.width, 150)];
}

/**
 *  加载成功
 */
- (void)PandaAdNativeExpressAdSuccessToLoad {
    NSLog(@"加载成功");
}
/**
 *  加载失败
 *  广告拉取失败，禁止多次重试请求广告，避免请求量消耗过大，导致填充率过低，影响系统对您流量的评价从而影响变现效果，得不到广告收益。
 */
- (void)PandaAdNativeExpressAdDidFailWithError:(id)error {
    NSLog(@"加载失败");
}
/**
 *  渲染广告成功
 */
- (void)PandaAdNativeExpressAdRenderSuccessWithView:(UIView *)view manager:(PandaNativeExpressAdManager *)manager {
    NSLog(@"渲染广告成功");
    if ([manager isEqual:self.managerUp]) {
        [self.adUpView addSubview:view];
        self.adUpView.frame = CGRectMake(self.adUpView.frame.origin.x, self.adUpView.frame.origin.y, view.frame.size.width, view.frame.size.height);
    }else if ([manager isEqual:self.managerDown]) {
        [self.adDownView addSubview:view];
        self.adDownView.frame = CGRectMake(self.adDownView.frame.origin.x, self.adDownView.frame.origin.y, view.frame.size.width, view.frame.size.height);
    }
}
/**
 *  渲染广告失败
 */
- (void)PandaAdNativeExpressAdRenderFailWithError:(id)error {
    NSLog(@"渲染广告失败");
}
/**
 *  点击广告
 */
- (void)PandaAdNativeExpressAdDidClick {
    NSLog(@"点击广告");
}
/**
 *  曝光回调
 */
- (void)PandaAdNativeExpressAdDidBecomeVisible {
    NSLog(@"曝光回调");
}
/**
 *  关闭广告回调
 */
- (void)PandaAdNativeExpressAdDidClose {
    NSLog(@"关闭广告回调");
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
