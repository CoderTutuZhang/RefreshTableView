//
//  RefreshTableView.h
//  refresh
//
//  Created by 张兔兔 on 16/3/10.
//  Copyright (c) 2016年 张兔兔. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "RefreshTableViewDelegate.h"

@interface RefreshTableView : UITableView<UIScrollViewDelegate>

@property (nonatomic, weak) NSObject<RefreshTableViewDelegate> *refreshDelegate;

/*  determines whether dragging to top is enable
 *  default is YES
 *  顶部刷新是否开启
 */

@property (nonatomic) bool topRefreshEnabled;


/*  determines whether dragging to bottom is enable
 *  default is YES
 *  底部刷新是否开启
 */

@property (nonatomic) bool bottomRefreshEnabled;


/*  the header and footer view will show titles
 *  you can specify the words by setting following variables
 *  页眉页脚标题设置
 */
@property (nonatomic) NSString *headerNormalTitle;
@property (nonatomic) NSString *headerDraggingTitle;
@property (nonatomic) NSString *headerLoadingTitle;
@property (nonatomic) NSString *footerNormalTitle;
@property (nonatomic) NSString *footerDraggingTitle;
@property (nonatomic) NSString *footerLoadingTitle;

/*  'draggingThredshold' determines the dragging sensitivity of the trigger
 *  拖拉多大的距离会触动刷新事件
 */
@property (nonatomic) int draggingThredshold;

/*  the footer and header views have their background color
 *  obviously, you can specify the attribute
 *  页眉页脚背景颜色设置
 */

@property (nonatomic) UIColor *headerBackgroundColor;
@property (nonatomic) UIColor *footerBackgroundColor;


/*  after updating to the new content, send a 'loadOver' message to stop the widget from loading.
 *  while loading, the tableview will have applicable edges to accommodate header or footer，
 *  and an UIActivityIndicator will be animating.
 *  call 'loadOver',the edges will disappear and the indicator will stop
 */

- (void)loadOver;

@end