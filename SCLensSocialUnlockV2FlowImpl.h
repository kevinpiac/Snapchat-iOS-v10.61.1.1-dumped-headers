//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCLensLiveLensPreviewCameraPresenterDelegate-Protocol.h"
#import "SCLensSocialUnlockV2Flow-Protocol.h"

@class NSString;
@protocol SCLensLiveLensPreviewCameraPresenterProtocol, SCLensSocialUnlockV2FlowDelegate, SCLensUnlockerProtocol;

@interface SCLensSocialUnlockV2FlowImpl : NSObject <SCLensLiveLensPreviewCameraPresenterDelegate, SCLensSocialUnlockV2Flow>
{
    id <SCLensLiveLensPreviewCameraPresenterProtocol> _liveLensPreviewCameraPresenter;
    id <SCLensUnlockerProtocol> _lensUnlocker;
    long long _socialUnlockType;
    _Bool _smartUnlockEnabled;
    _Bool _isLiveLensPreviewPresented;
    id <SCLensSocialUnlockV2FlowDelegate> _delegate;
}

- (void).cxx_destruct;
- (id)_loadingPlaceholderLens;
- (void)_presentWithLens:(id)arg1 replyParameters:(id)arg2 baseViewController:(id)arg3;
- (id)_topViewControllerForViewController:(id)arg1;
- (void)_unlockLensAfterUse:(id)arg1;
- (id)initWithLensUnlocker:(id)arg1 liveLensPreviewCameraPresenter:(id)arg2 socialUnlockType:(long long)arg3 smartUnlockEnabled:(_Bool)arg4;
- (void)lensCameraPresenter:(id)arg1 didUseLens:(id)arg2;
- (void)lensCameraPresenterDidComplete:(id)arg1;
- (_Bool)shouldStartUnlockFlowForDeepLinkURL:(id)arg1 deepLinkUnlockPolicy:(id)arg2;
- (_Bool)startUnlockFlowWithDeepLinkURL:(id)arg1 replyParameters:(id)arg2 baseViewController:(id)arg3 delegate:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

