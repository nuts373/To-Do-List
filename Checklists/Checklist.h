//
//  Checklist.h
//  Checklists
//
//  Created by Nuts on 2016/12/19.
//  Copyright © 2016年 Nuts. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface Checklist : NSObject <NSCoding>

@property (nonatomic, copy) NSString *name;
@property (nonatomic, strong) NSMutableArray *items;
@property (nonatomic, copy) NSString *iconName;

- (int)countUncheckedItems;

@end
