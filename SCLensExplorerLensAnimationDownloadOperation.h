//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSOperation.h>

@class NSMutableArray, NSString, SCFuture, SCLensExplorerLensItem, SCPromise, SCQueuePerformer;
@protocol SCRequestManager;

@interface SCLensExplorerLensAnimationDownloadOperation : NSOperation
{
    id <SCRequestManager> _requestManager;
    SCPromise *_promise;
    NSMutableArray *_images;
    SCQueuePerformer *_performer;
    _Bool _isExecuting;
    _Bool _isFinished;
    NSString *_name;
    SCLensExplorerLensItem *_lensExplorerItem;
    SCFuture *_downloadResult;
}

- (void).cxx_destruct;
- (void)_setIsExecuting:(_Bool)arg1;
- (void)_setIsFinished:(_Bool)arg1;
- (void)cancel;
- (void)completeOperation;
@property(readonly, nonatomic) SCFuture *downloadResult; // @synthesize downloadResult=_downloadResult;
- (id)initWithRequestManager:(id)arg1 lensExplorerItem:(id)arg2 performer:(id)arg3;
- (_Bool)isAsynchronous;
- (_Bool)isConcurrent;
- (_Bool)isExecuting;
- (_Bool)isFinished;
@property(readonly, nonatomic) SCLensExplorerLensItem *lensExplorerItem; // @synthesize lensExplorerItem=_lensExplorerItem;
- (void)main;
- (id)name;
- (void)start;

@end

