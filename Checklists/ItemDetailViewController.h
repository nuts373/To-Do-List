//
//  AddItemViewControllerTableViewController.h
//  Checklists
//
//  Created by Nuts on 2016/12/9.
//  Copyright © 2016年 Nuts. All rights reserved.
//

#import <UIKit/UIKit.h>
@class ItemDetailViewController;
@class ChecklistItem;
@protocol ItemDetailViewController <NSObject>

- (void)addItemViewControllerDidCancel:
(ItemDetailViewController *)controller;

- (void)addItemViewController:
(ItemDetailViewController *)controller
          didFinishAddingItem:(ChecklistItem *)item;

- (void)addItemViewController:
(ItemDetailViewController *)controller didFinishEditingItem:(ChecklistItem *)item;

@end


@interface ItemDetailViewController : UITableViewController <UITextFieldDelegate>
@property (weak, nonatomic) IBOutlet UITextField *textField;
@property (weak, nonatomic) IBOutlet UIBarButtonItem *doneBarButton;
@property (nonatomic, weak) id <ItemDetailViewController> delegate;
@property (nonatomic, strong) ChecklistItem *itemToEdit;

@property (nonatomic, weak) IBOutlet UISwitch *switchControl;
@property (nonatomic, weak) IBOutlet UILabel *dueDateLabel;
- (IBAction)cancel;
- (IBAction)done;


@end
