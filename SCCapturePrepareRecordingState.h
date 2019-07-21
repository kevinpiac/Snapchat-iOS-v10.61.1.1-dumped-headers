//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCCaptureBaseState.h"

@class SCQueuePerformer;
@protocol SCCaptureStateDelegate;

@interface SCCapturePrepareRecordingState : SCCaptureBaseState
{
    id <SCCaptureStateDelegate> _delegate;
    SCQueuePerformer *_performer;
}

- (void).cxx_destruct;
- (void)captureStillImageWithResource:(id)arg1 captureConfiguration:(id)arg2 completionHandler:(CDUnknownBlockType)arg3 context:(id)arg4;
- (void)didBecomeCurrentState:(id)arg1 resource:(id)arg2 context:(id)arg3;
- (id)initWithPerformer:(id)arg1 bookKeeper:(id)arg2 delegate:(id)arg3;
- (void)startRecordingWithResource:(id)arg1 audioConfiguration:(id)arg2 outputSettings:(id)arg3 maxDuration:(double)arg4 fileURL:(id)arg5 captureSessionID:(id)arg6 completionHandler:(CDUnknownBlockType)arg7 context:(id)arg8;
- (unsigned long long)stateId;
- (void)stopRecordingWithResource:(id)arg1 context:(id)arg2;

@end

