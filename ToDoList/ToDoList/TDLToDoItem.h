//
//  TDLToDoItem.h
//  ToDoList
//
//  Created by EricCortez on 2/23/14.
//  Copyright (c) 2014 EricCortez. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface TDLToDoItem : NSObject

@property NSString *itemName;

@property BOOL completed;

@property (readonly) NSDate *creationDate;

@end
