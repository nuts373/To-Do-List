//
//  IconPickerViewController.h
//  Checklists
//
//  Created by Nuts on 2016/12/27.
//  Copyright © 2016年 Nuts. All rights reserved.
//

#import <UIKit/UIKit.h>

@class IconPickerViewController;
@protocol IconPickerViewControllerDelegate <NSObject>

- (void)iconPicker:(IconPickerViewController *)picker
       didPickIcon:(NSString *)iconName;

@end


@interface IconPickerViewController : UITableViewController

@property (nonatomic, weak) id
                            <IconPickerViewControllerDelegate> delegate;

@end
