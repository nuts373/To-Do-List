//
//  ViewController.h
//  Checklists
//
//  Created by Nuts on 2016/11/29.
//  Copyright © 2016年 Nuts. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "ItemDetailViewController.h"

@class Checklist;

@interface ChecklistViewController : UITableViewController
                <ItemDetailViewController>

@property (nonatomic, strong) Checklist *checklist;

@end

