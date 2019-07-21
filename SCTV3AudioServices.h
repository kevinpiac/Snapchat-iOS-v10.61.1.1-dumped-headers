//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCSecretFeatureCheckerListener-Protocol.h"
#import "SCTCKAudioServices-Protocol.h"
#import "SCTV3AudioServices-Protocol.h"

@class NSDate, NSMutableDictionary, NSMutableSet, NSString, SCAudioConfigurationToken, SCSecretFeatureChecker, SCSoundServices;
@protocol SCTIdentityServices;

@interface SCTV3AudioServices : NSObject <SCSecretFeatureCheckerListener, SCTV3AudioServices, SCTCKAudioServices>
{
    SCSoundServices *_soundServices;
    id <SCTIdentityServices> _identityServices;
    SCAudioConfigurationToken *_audioConfigurationToken;
    NSDate *_lastAudioConfigurationChange;
    SCSecretFeatureChecker *_secretFeatureChecker;
    long long _secretFeatureMode;
    _Bool _monitoringSecretFeature;
    NSMutableDictionary *_visibleNotificationIdsForConvoId;
    NSMutableSet *_visibleConvoIds;
    NSMutableSet *_incomingRingtoneConvoIds;
    NSMutableSet *_outgoingRingtoneConvoIds;
}

- (void).cxx_destruct;
- (void)_applicationDidBecomeActive;
- (_Bool)_canRingInConvoId:(id)arg1;
- (CDUnknownBlockType)_configRequest:(unsigned long long)arg1 callkitRelated:(_Bool)arg2 proximityEnabled:(_Bool)arg3 speakers:(_Bool)arg4;
- (id)_generateRingingSituationMessage:(_Bool)arg1 incoming:(_Bool)arg2 bestFriend:(_Bool)arg3;
- (void)_updateAudioSessionConfiguration:(unsigned long long)arg1 callkitRelated:(_Bool)arg2 proximityEnabled:(_Bool)arg3 speakers:(_Bool)arg4;
- (void)_updateAudioSessionConfiguration:(unsigned long long)arg1 callkitRelated:(_Bool)arg2 proximityEnabled:(_Bool)arg3 speakers:(_Bool)arg4 completion:(CDUnknownBlockType)arg5;
- (void)_updateRingingIfNeeded;
@property(retain, nonatomic) SCAudioConfigurationToken *audioConfigurationToken;
- (void)callKitDidActivateAudioSession:(id)arg1;
- (void)callKitWillDeactivateAudioSession:(id)arg1;
- (void)dealloc;
- (id)initWithSoundServices:(id)arg1 identityServices:(id)arg2;
- (id)lockRingingWithLabel:(id)arg1;
- (void)playSound:(unsigned long long)arg1;
- (void)processConvoId:(id)arg1 visibilityChanged:(_Bool)arg2;
- (void)processIncomingCallNotificationRemoved:(id)arg1;
- (void)processIncomingCallNotificationShown:(id)arg1;
- (void)releaseCallKitAudioSession;
- (void)requestCallKitAudioSessionWithProximityEnabled:(_Bool)arg1 speakers:(_Bool)arg2;
- (void)secretFeatureChecker:(id)arg1 didCheckSecretFeatureMode:(long long)arg2;
- (_Bool)shouldIgnoreVolumeChanges;
- (void)startRingingInConvoId:(id)arg1 incoming:(_Bool)arg2;
- (void)stopRingingInConvoId:(id)arg1;
- (void)unlockRingingWithToken:(id)arg1;
- (void)updateAudioSessionConfiguration:(unsigned long long)arg1 proximitySensor:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

