//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSCondition;
@protocol OS_dispatch_group;

@interface SCAsyncDecoder : NSObject
{
    CDUnknownBlockType _completionBlock;
    // Error parsing type: Ai, name: _completed
    NSCondition *_completedCondition;
    NSObject<OS_dispatch_group> *_dispatchGroup;
}

- (void).cxx_destruct;
- (void)awaitCompletion;
- (id)initWithPath:(id)arg1 type:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (_Bool)isCompleted;
- (void)waitForCompletionOnQueue:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;

@end

