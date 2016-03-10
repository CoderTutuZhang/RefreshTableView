//
//  ViewController.m
//  RefreshTableView
//
//  Created by 张兔兔 on 16/3/10.
//  Copyright (c) 2016年 张兔兔. All rights reserved.
//

#import "ViewController.h"

@interface ViewController ()
//{
//    NSArray *testData;
//}
@property (nonatomic,strong) NSMutableArray * testData;
@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    
    self.testData = [NSMutableArray array];
    for (int i = 0; i < 20; i++) {
        [self.testData addObject:[NSString stringWithFormat:@"测试数据-%d",i+1]];
    }
    
    [_refreshTableView setRefreshDelegate:self];
    
    
}


- (NSInteger)tableView:(UITableView *)tableView numberOfRowsInSection:(NSInteger)section
{
    return self.testData.count;
}
- (UITableViewCell *)tableView:(UITableView *)tableView cellForRowAtIndexPath:(NSIndexPath *)indexPath
{
    UITableViewCell *cell = [[UITableViewCell alloc] initWithStyle:UITableViewCellStyleDefault reuseIdentifier:nil];
    cell.textLabel.text = self.testData[indexPath.row];
    return cell;
}

- (void)refreshTableViewTopRefresh:(RefreshTableView *)tableView
{
    
    NSTimer *timer = [NSTimer scheduledTimerWithTimeInterval:5 target:self selector:@selector(timerTimeOut) userInfo:nil repeats:NO];
    [timer timeInterval];
}

- (void)refreshTableViewBottomRefresh:(RefreshTableView *)tableView
{
    
    NSTimer *timer = [NSTimer scheduledTimerWithTimeInterval:5 target:self selector:@selector(timerTimeOut) userInfo:nil repeats:NO];
    
    [timer timeInterval];
}

- (void)timerTimeOut
{
    [_refreshTableView loadOver];
}
@end
