//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableSet, NSString;
@protocol SCPerforming, SCRequestManager;

@interface SCRequestBatch : NSObject
{
    id <SCRequestManager> _networkManager;
    NSMutableSet *_requestBatchEntities;
    _Bool _didSubmitBatch;
    id <SCPerforming> _queuePerformer;
    NSString *_batchId;
}

- (void).cxx_destruct;
- (void)addRequest:(id)arg1 completionQueue:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)addRequest:(id)arg1 successQueue:(id)arg2 failureQueue:(id)arg3 successBlock:(CDUnknownBlockType)arg4 failureBlock:(CDUnknownBlockType)arg5;
- (id)initWithRequestManager:(id)arg1;
- (void)submitBatchWithCompletionQueue:(id)arg1 batchRequestsCompletion:(CDUnknownBlockType)arg2;

@end

