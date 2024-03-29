//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCLensLiveLensPreviewCameraPresenter.h"

#import "SCCaptureWorkflowResultDelegate-Protocol.h"

@class NSString, SCScopedAccess, SCUserSession;

@interface SCLiveLensPreviewCameraPresenterImpl : SCLensLiveLensPreviewCameraPresenter <SCCaptureWorkflowResultDelegate>
{
    SCScopedAccess *_captureLauncher;
    SCUserSession *_userSession;
}

- (void).cxx_destruct;
- (void)captureWorkflowDidDismissWithDidSendSnap:(_Bool)arg1;
- (void)captureWorkflowDidSaveSnapToMemories;
- (id)initWithLensDataFetcher:(id)arg1 defaultErrorMessagePresenter:(id)arg2 loggingConfiguration:(id)arg3 captureLauncher:(id)arg4 userSession:(id)arg5;
- (void)presentCameraViewControllerFromViewController:(id)arg1 withLens:(id)arg2 replyParameters:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

