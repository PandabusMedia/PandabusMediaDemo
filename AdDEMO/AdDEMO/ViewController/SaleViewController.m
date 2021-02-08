//
//  SaleViewController.m
//  AdDEMO
//
//  Created by wangye on 2020/11/10.
//  Copyright © 2020 com.pandabus.ios. All rights reserved.
//

#import "SaleViewController.h"
#import <PandaAdSDK/PBADMarketingActivityManager.h>
#import <PandaAdSDK/PBADAvtivityListViewController.h>

@interface SaleViewController ()

@end

@implementation SaleViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    // Do any additional setup after loading the view.
    
    self.view.backgroundColor = [UIColor whiteColor];
    
    UIButton * btnUp = [[UIButton alloc]initWithFrame:CGRectMake(20, 300, 100, 100)];
    [btnUp addTarget:self action:@selector(loadUpClick) forControlEvents:UIControlEventTouchUpInside];
    btnUp.backgroundColor = [UIColor redColor];
    [btnUp setTitle:@"加载活动" forState:UIControlStateNormal];
    [self.view addSubview:btnUp];
    
    UIButton * btnDown = [[UIButton alloc]initWithFrame:CGRectMake(180, 300, 100, 100)];
    [btnDown addTarget:self action:@selector(loadDownClick) forControlEvents:UIControlEventTouchUpInside];
    btnDown.backgroundColor = [UIColor redColor];
    [btnDown setTitle:@"跳转列表" forState:UIControlStateNormal];
    [self.view addSubview:btnDown];
    
}

- (void)loadUpClick {
    
    [PBADMarketingActivityManager initWithAppId:@"" splashPlcId:@"" rewardVideoPlcId:@"" userId:@"" superController:self isHome:NO marketingShowCode:@"" titleColor:[UIColor whiteColor] backColor:[UIColor blackColor] complete:^(PBADMarketingActivityModel * _Nonnull dataModel, BOOL success, NSError * _Nonnull error) {
        
    }];
    
}

- (void)loadDownClick {
    
    PBADAvtivityListViewController *controller = [[PBADAvtivityListViewController alloc] initWithNibName:@"PBADAvtivityListViewController" bundle:nil];
    controller.appId = @"营销中心Id";
    controller.userId = @"app用户id";
    controller.titleStr = @"优惠活动";
    controller.splashPlcId = @"广告位id";
    controller.backColor = [UIColor whiteColor];
    controller.titleColor = [UIColor blackColor];
    controller.hidesBottomBarWhenPushed = YES;
    [self.navigationController  pushViewController:controller animated:YES];
    
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
