//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCBitmojiAvatarBuilderRouting-Protocol.h"

@class NSString, SCAvatarBuilderCreateFlowCoordinator, SCBitmojiService, SCBitmojiUserAvatarDataProvider, SCExperimentManager, SCSessionRequestManager;
@protocol SCBitmojiAvatarBuilderDismissalDelegate, SCDownloadableContentManaging;

@interface SCBitmojiAvatarBuilderRouter : NSObject <SCBitmojiAvatarBuilderRouting>
{
    SCBitmojiUserAvatarDataProvider *_bitmojiAvatarDataProvider;
    SCBitmojiService *_bitmojiService;
    SCExperimentManager *_experimentManager;
    SCSessionRequestManager *_requestManager;
    id <SCDownloadableContentManaging> _downloadableContentManager;
    id <SCBitmojiAvatarBuilderDismissalDelegate> _dismissalDelegate;
    SCAvatarBuilderCreateFlowCoordinator *_flowCoordinator;
    _Bool _isOSCompatible;
    _Bool _isLiveMirrorCompatible;
}

- (void).cxx_destruct;
- (unsigned long long)_avatarBuilderTypeForFlowMode:(unsigned long long)arg1;
- (id)_flowModeToSource:(unsigned long long)arg1;
- (_Bool)_isDeviceLiveMirrorCompatible;
- (_Bool)_isOSWebBuilderCompatible;
- (void)_logBitmojiAppInstalledWithFlowMode:(unsigned long long)arg1;
- (void)_logFunnelBeginTapEventWithPage:(unsigned long long)arg1 flowMode:(unsigned long long)arg2;
- (void)_presentCreateFlowFromViewController:(id)arg1 page:(unsigned long long)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_presentEditFlowFromViewController:(id)arg1 withPage:(unsigned long long)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_presentSnapchatAvatarBuilderWithFlowMode:(unsigned long long)arg1 page:(unsigned long long)arg2 bitmojiAvatarBuilderRouterDelegate:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (unsigned long long)_sourceToFlowMode:(id)arg1;
- (unsigned long long)avatarBuilderTypeForEditAction:(unsigned long long)arg1;
- (id)initWithBitmojiAvatarDataProvider:(id)arg1 bitmojiService:(id)arg2 experimentManager:(id)arg3 downloadableContentManager:(id)arg4 dismissalDelegate:(id)arg5;
- (void)launchAvatarBuilderWithFlowMode:(unsigned long long)arg1 page:(unsigned long long)arg2 bitmojiAvatarBuilderRouterDelegate:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)prepareBitmojiAvatarBuilderWithFlowMode:(unsigned long long)arg1 completion:(CDUnknownBlockType)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

