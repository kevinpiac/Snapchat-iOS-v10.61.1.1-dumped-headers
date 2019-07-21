//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSOperation.h>

@interface SCAsyncBlockOperation : NSOperation
{
    _Bool _finished;
    _Bool _executing;
    CDUnknownBlockType _executionBlock;
}

+ (id)asyncOperationWithExecutionBlock:(CDUnknownBlockType)arg1;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) CDUnknownBlockType executionBlock; // @synthesize executionBlock=_executionBlock;
- (id)initWithExecutionBlock:(CDUnknownBlockType)arg1;
- (_Bool)isAsynchronous;
- (_Bool)isConcurrent;
- (_Bool)isExecuting;
- (_Bool)isFinished;
- (void)start;

@end

