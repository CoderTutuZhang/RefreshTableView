//
//  RefreshTableViewDelegate.h
//  refresh
//
//  Created by 张兔兔 on 16/3/10.
//  Copyright (c) 2016年 张兔兔. All rights reserved.
//


#import <Foundation/Foundation.h>
@class RefreshTableView;
@protocol RefreshTableViewDelegate <NSObject>
@optional
- (void)refreshTableViewTopRefresh:(RefreshTableView *)_tableView;
- (void)refreshTableViewBottomRefresh:(RefreshTableView *)_tableView;
@end
