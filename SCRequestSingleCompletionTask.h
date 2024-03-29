//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCRequestTask.h"

@class NSArray, NSMutableArray;
@protocol SCGraphene, SCNetworkInterceptor;

@interface SCRequestSingleCompletionTask : SCRequestTask
{
    NSMutableArray *_completionQueues;
    NSMutableArray *_completionCallbacks;
    NSArray<SCNetworkInterceptor> *_networkInterceptors;
    id <SCGraphene> _graphene;
}

- (void).cxx_destruct;
- (void)_addCompletionQueue:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (CDUnknownBlockType)completeTask;
- (void)dealloc;
- (id)initWithRequest:(id)arg1 authenticator:(id)arg2 traceFile:(struct SCNetworkTraceFileStruct *)arg3 networkInterceptors:(id)arg4 graphene:(id)arg5 completionQueue:(id)arg6 completionBlock:(CDUnknownBlockType)arg7;
- (void)updateTaskWithTask:(id)arg1;

@end

