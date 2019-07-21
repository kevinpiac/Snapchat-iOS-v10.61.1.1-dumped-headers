//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCCaptureLauncher-Protocol.h"
#import "SCCaptureWorkflowDelegate-Protocol.h"

@class NSString, SCScopeExposer;

@interface SCScopeExposerLensExplorerTryLensCaptureLauncher : NSObject <SCCaptureWorkflowDelegate, SCCaptureLauncher>
{
    SCScopeExposer *_lensExplorerTryLensCaptureScopeExposer;
    _Bool _isCaptureLaunched;
}

- (void).cxx_destruct;
- (void)didDismissCaptureFlow;
- (id)initWithLensExplorerTryLensCaptureScopeExposer:(id)arg1;
- (id)launchCaptureWithCameraFeatureProvider:(struct SCFeatureProvider *)arg1 cameraViewConfigurationController:(id)arg2 cameraViewContainer:(id)arg3 captureWorkflowResultDelegate:(id)arg4 lensDataProvider:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

