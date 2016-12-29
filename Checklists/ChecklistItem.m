//
//  ChecklistItem.m
//  Checklists
//
//  Created by Nuts on 2016/12/9.
//  Copyright © 2016年 Nuts. All rights reserved.
//

#import "ChecklistItem.h"
#import "DataModel.h"

@implementation ChecklistItem

- (void)toggleChecked
{
    self.checked = !self.checked;
}
- (id)initWithCoder:(NSCoder *)aDecoder
{
    if ((self = [super init])){
        self.text = [aDecoder decodeObjectForKey:@"Text"];
        self.checked = [aDecoder decodeBoolForKey:@"Checked"];
        self.dueDate = [aDecoder decodeObjectForKey:@"DueDate"];
        self.shouldRemind = [aDecoder decodeBoolForKey:@"ShouldRemind"];
        self.itemId = [aDecoder decodeIntegerForKey:@"ItemID"];
        
    }
    return self;
}

- (void)encodeWithCoder:(NSCoder *)aCoder
{
    [aCoder encodeObject:self.text forKey:@"Text"];
    [aCoder encodeBool:self.checked forKey:@"Checked"];
    [aCoder encodeObject:self.dueDate forKey:@"DueDate"];
    [aCoder encodeBool:self.shouldRemind forKey:@"shouldRemind"];
    [aCoder encodeInteger:self.itemId forKey:@"ItemID"];
}
- (id)init
{
    if (self = [super init]){
        self.itemId = [DataModel nextChecklistItemId];
    }
    return self;
}
@end
