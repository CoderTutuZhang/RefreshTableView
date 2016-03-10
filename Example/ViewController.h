//
//  ViewController.h
//  RefreshTableView
//
//  Created by 张兔兔 on 16/3/10.
//  Copyright (c) 2016年 张兔兔. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "RefreshTableView.h"

@interface ViewController : UIViewController<UITableViewDataSource, UITableViewDelegate, RefreshTableViewDelegate>

@property (nonatomic) IBOutlet RefreshTableView *refreshTableView;


@end


