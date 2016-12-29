//
//  AllListsViewController.h
//  Checklists
//
//  Created by Nuts on 2016/12/17.
//  Copyright © 2016年 Nuts. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "ListDetailViewController.h"

@class DataModel;

@interface AllListsViewController : UITableViewController
                            <ListDetailViewControllerDelegate,
                                UINavigationControllerDelegate>

@property (nonatomic, strong) DataModel *dataModel;



@end
