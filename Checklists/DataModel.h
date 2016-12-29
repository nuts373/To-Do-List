//
//  DataModel.h
//  Checklists
//
//  Created by Nuts on 2016/12/20.
//  Copyright © 2016年 Nuts. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface DataModel : NSObject

@property (nonatomic, strong) NSMutableArray *lists;

- (void)saveChecklists;
- (NSInteger)indexOfSelectedChecklist;
- (void)setIndexOfSelectedChecklist:(NSInteger)index;
- (void)sortChecklists;
+ (NSInteger)nextChecklistItemId;

@end
