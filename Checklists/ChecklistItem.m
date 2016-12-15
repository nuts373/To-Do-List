//
//  ChecklistItem.m
//  Checklists
//
//  Created by Nuts on 2016/12/9.
//  Copyright © 2016年 Nuts. All rights reserved.
//

#import "ChecklistItem.h"

@implementation ChecklistItem

- (void)toggleChecked
{
    self.checked = !self.checked;
}
@end
