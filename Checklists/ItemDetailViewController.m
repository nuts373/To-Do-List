//
//  AddItemViewControllerTableViewController.m
//  Checklists
//
//  Created by Nuts on 2016/12/9.
//  Copyright © 2016年 Nuts. All rights reserved.
//

#import "ItemDetailViewController.h"
#import "ChecklistItem.h"
@interface ItemDetailViewController ()

@end

@implementation ItemDetailViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    
    if (self.itemToEdit != nil){
        self.title = @"Edit Item";
        self.textField.text = self.itemToEdit.text;
        self.doneBarButton.enabled = YES;
    }
    
    // Uncomment the following line to preserve selection between presentations.
    // self.clearsSelectionOnViewWillAppear = NO;
    
    // Uncomment the following line to display an Edit button in the navigation bar for this view controller.
    // self.navigationItem.rightBarButtonItem = self.editButtonItem;
}

- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}
- (void)viewWillAppear:(BOOL)animated
{
    [super viewWillAppear:animated];
    
    [self.textField becomeFirstResponder];
    
}

- (BOOL)textField:(UITextField *)theTextField
        shouldChangeCharactersInRange:(NSRange)range
        replacementString:(NSString *)string
{
    NSString *newText = [theTextField.text
                         stringByReplacingCharactersInRange:range
                         withString:string];
    self.doneBarButton.enabled = ([newText length] > 0);
    return YES;
}

#pragma mark - Table view data source

- (NSIndexPath *)tableView:(UITableView *)tableView
  willSelectRowAtIndexPath:(NSIndexPath *)indexPath
{
    return nil;
}
- (IBAction)cancel;
{
    [self.delegate addItemViewControllerDidCancel:self];
}
- (IBAction)done;
{
    if (self.itemToEdit == nil){
        ChecklistItem *item = [[ChecklistItem alloc] init];
        item.text = self.textField.text;
        item.checked = NO;
    
        [self.delegate addItemViewController:self didFinishAddingItem:item];
    }else{
        self.itemToEdit.text = self.textField.text;
        [self.delegate addItemViewController:self didFinishEditingItem:self.itemToEdit];
    }
}

@end
