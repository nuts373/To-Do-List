//
//  ChecklistItem.h
//  Checklists
//
//  Created by Nuts on 2016/12/9.
//  Copyright © 2016年 Nuts. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface ChecklistItem : NSObject
@property (nonatomic, copy) NSString *text;
@property (nonatomic, assign) BOOL checked;
- (void)toggleChecked;
@end