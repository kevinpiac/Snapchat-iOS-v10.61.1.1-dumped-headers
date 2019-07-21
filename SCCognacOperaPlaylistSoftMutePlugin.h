//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCOperaPlaylistEventTrackerPlugin.h"

#import "SCSecretFeatureCheckerListener-Protocol.h"

@class NSString, SCOperaViewController, SCSecretFeatureChecker;

@interface SCCognacOperaPlaylistSoftMutePlugin : SCOperaPlaylistEventTrackerPlugin <SCSecretFeatureCheckerListener>
{
    SCOperaViewController *_operaVC;
    SCSecretFeatureChecker *_secretFeatureChecker;
    long long _secretFeatureMode;
}

- (void).cxx_destruct;
- (void)_updateSoftMute;
- (void)dealloc;
- (id)init;
- (_Bool)isHighPriorityEventListener;
- (void)operaViewDidSendEvent:(id)arg1 context:(id)arg2 params:(id)arg3;
- (id)registeredEventsForOperaSession;
- (void)secretFeatureChecker:(id)arg1 didCheckSecretFeatureMode:(long long)arg2;
- (void)setOperaViewController:(id)arg1;
- (void)setPlaylistItemController:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
