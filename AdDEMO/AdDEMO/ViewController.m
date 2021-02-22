//
//  ViewController.m
//  AdDEMO
//
//  Created by wangye on 2020/3/17.
//  Copyright © 2020 com.pandabus.ios. All rights reserved.
//

#import "ViewController.h"
#import <PandaAdSDK/PBAdInfoMainCtrl.h>
#import "PandaRewardVideoViewController.h"
#import "PandaNativeExpressAdViewController.h"
#import "SaleViewController.h"
#import <PandaAdSDK/PBShopWebViewController.h>



#import <PandaAdSDK/PandaNativeExpressAdManager.h>
@interface ViewController ()<UITableViewDelegate,UITableViewDataSource,PandaNativeExpressAdManagerDelegate>

@property (nonatomic,strong) UIView * adUpView;
@property (nonatomic,strong) PandaNativeExpressAdManager * managerUp;



@property (nonatomic,strong)UITableView * listView;
@property (nonatomic,strong)NSMutableArray * listArr;

@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    // Do any additional setup after loading the view.
    self.view.backgroundColor = [UIColor whiteColor];
        
    self.title = @"pandabus";
    self.listArr = [NSMutableArray array];
    
    [self.listArr addObjectsFromArray:@[@"资讯信息流",@"激励视频",@"模板信息流",@"营销中心",@"优惠券商城"]];
    
    self.listView = [[UITableView alloc] initWithFrame:CGRectMake(0, 0, self.view.bounds.size.width, self.view.bounds.size.height) style:UITableViewStylePlain];
    self.listView.dataSource = self;
    self.listView.delegate = self;
    self.listView.sectionFooterHeight = 0.f;
    self.listView.sectionHeaderHeight = 0.f;
    self.listView.separatorStyle = UITableViewCellSeparatorStyleNone;
    self.listView.rowHeight = 49.f;
    [self.view addSubview:self.listView];
    
}

- (void)viewWillAppear:(BOOL)animated
{
    [super viewWillAppear:animated];
    self.navigationController.navigationBarHidden = NO;
}

- (NSInteger)tableView:(UITableView *)tableView numberOfRowsInSection:(NSInteger)section
{
    return _listArr.count;
}

- (UITableViewCell *)tableView:(UITableView *)tableView cellForRowAtIndexPath:(NSIndexPath *)indexPath
{
    
    UITableViewCell *cell = [tableView dequeueReusableCellWithIdentifier:@"TabelViewCell"];
    
    if (cell == nil) {
        cell = [[UITableViewCell alloc]initWithStyle:UITableViewCellStyleDefault reuseIdentifier:@"TabelViewCell"];
    }
    
    cell.textLabel.text = _listArr[indexPath.row];
    cell.textLabel.textColor = [UIColor darkTextColor];
    return cell;
    
}

- (void)tableView:(UITableView *)tableView didSelectRowAtIndexPath:(NSIndexPath *)indexPath
{
    
    [tableView deselectRowAtIndexPath:indexPath animated:YES];
    
    UIViewController *ctrl = nil;
    switch (indexPath.row) {
        case 0:
        {
            ctrl = [[PBAdInfoMainCtrl alloc] initWithProid:@""];
        }
            break;
            
        case 1:
        {
            ctrl = [[PandaRewardVideoViewController alloc] init];
        }
            break;
            
        case 2:
        {
            ctrl = [[PandaNativeExpressAdViewController alloc] init];
        }
            break;
            
        case 3:
        {
            ctrl = [[SaleViewController alloc] init];
        }
            break;
            
        case 4:
        {
            ctrl = [[PBShopWebViewController alloc] initWithTitle:@"" webViewHeight:[UIScreen mainScreen].bounds.size.height];
            
        }
            break;
            
        default:
            break;
    }
    ctrl.title = _listArr[indexPath.row];
    [self.navigationController pushViewController:ctrl animated:YES];
}
@end
