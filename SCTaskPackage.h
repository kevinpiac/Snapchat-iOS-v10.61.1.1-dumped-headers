//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;

@interface SCTaskPackage : NSObject
{
    NSMutableArray *_afterStartupUrgentPriorityTasks;
    NSMutableArray *_afterStartupHighPriorityTasks;
    NSMutableArray *_afterStartupDefaultPriorityTasks;
}

- (void).cxx_destruct;
- (void)addTask:(id)arg1 priority:(unsigned long long)arg2;
- (_Bool)containsTaskToBeExecuted;
- (id)init;
- (id)nextTask;
- (unsigned long long)nextTaskPriority;

@end

