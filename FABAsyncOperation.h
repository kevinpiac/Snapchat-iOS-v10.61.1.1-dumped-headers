//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSOperation.h>

@class NSRecursiveLock;

@interface FABAsyncOperation : NSOperation
{
    _Bool _internalExecuting;
    _Bool _internalFinished;
    CDUnknownBlockType _asyncCompletion;
    NSRecursiveLock *_lock;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType asyncCompletion; // @synthesize asyncCompletion=_asyncCompletion;
- (void)changeValueForKey:(id)arg1 inBlock:(CDUnknownBlockType)arg2;
- (_Bool)checkForCancellation;
- (void)finishWithError:(id)arg1;
- (id)init;
- (_Bool)isAsynchronous;
- (_Bool)isConcurrent;
- (_Bool)isExecuting;
- (_Bool)isFinished;
@property(retain, nonatomic) NSRecursiveLock *lock; // @synthesize lock=_lock;
- (void)lock:(CDUnknownBlockType)arg1;
- (void)markDone;
- (void)markStarted;
- (void)start;
- (void)unlockedMarkComplete;
- (void)unlockedMarkFinished;
- (void)unlockedMarkStarted;

@end

