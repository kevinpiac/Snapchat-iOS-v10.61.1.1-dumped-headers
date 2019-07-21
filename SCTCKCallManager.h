//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "CXProviderDelegate-Protocol.h"
#import "SCTCKCallManager-Protocol.h"
#import "SCTCKMetricServices-Protocol.h"

@class CXCallController, CXProvider, NSDictionary, NSMutableDictionary, NSString, SCTCKCall, SCTCKOutgoinCallInfo;
@protocol SCTCKAudioServices, SCTCKCallManagerListener, SCTCKLocationServices, SCTCKNavigationServices, SCTIdentityServices;

@interface SCTCKCallManager : NSObject <CXProviderDelegate, SCTCKCallManager, SCTCKMetricServices>
{
    CXProvider *_provider;
    CXCallController *_callController;
    id <SCTCKNavigationServices> _navigationServices;
    id <SCTCKCallManagerListener> _listener;
    id <SCTCKAudioServices> _callKitAudioServices;
    id <SCTIdentityServices> _identityServices;
    id <SCTCKLocationServices> _locationServices;
    NSMutableDictionary *_calls;
    NSMutableDictionary *_callMetrics;
    _Bool _appStartingUp;
    _Bool _connectingOutgoingCall;
    _Bool _outgoingFromRecentList;
    _Bool _currentSpeakerState;
    _Bool _audioSessionRequested;
    SCTCKOutgoinCallInfo *_pendingOutgoingCall;
    CDUnknownBlockType _audioActivatedCallback;
    SCTCKCall *_callNavigationPending;
    NSDictionary *_transitionTable;
    unsigned long long _callingState;
    unsigned long long _publishedMedia;
}

- (void).cxx_destruct;
- (void)_appDidBecomeActive:(id)arg1;
- (void)_appDidEnterBackground:(id)arg1;
- (void)_appStartupComplete:(id)arg1;
- (void)_appWillResignActive:(id)arg1;
- (void)_callDidEnd:(id)arg1;
- (id)_callForConvoId:(id)arg1;
- (id)_callTitleForConvoId:(id)arg1;
- (void)_dismissCalls;
- (void)_endCall:(id)arg1 reason:(unsigned long long)arg2;
- (void)_handleApplicationLifecycleNotification:(long long)arg1;
- (void)_performAction:(id)arg1;
- (void)_performAction:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_prepareAudioConfigurationStates;
- (void)_prepareCallKit;
- (void)_presentChatForCall:(id)arg1;
- (void)_presentChatIfPending;
- (void)_proximityStateChanged:(id)arg1;
- (void)_releaseCallKit;
- (void)_releaseCallKitAudioSession;
- (void)_reportOutgoingCallIfPending;
- (void)_requestCallKitAudioSessionWithProximityEnabled:(_Bool)arg1;
- (void)_requestCallKitAudioSessionWithProximityEnabled:(_Bool)arg1 speakers:(_Bool)arg2;
- (id)_updateConfigurationForConvoId:(id)arg1 isVideo:(_Bool)arg2;
- (_Bool)callActive;
- (void)callDidEndForHeadlessCallServices:(id)arg1 reason:(unsigned long long)arg2;
- (_Bool)callKitInUse;
@property(retain, nonatomic) SCTCKCall *callNavigationPending; // @synthesize callNavigationPending=_callNavigationPending;
@property(nonatomic) unsigned long long callingState; // @synthesize callingState=_callingState;
- (void)handleActiveChatForConvoId:(id)arg1;
- (void)handleUserActionOnNotification:(id)arg1;
- (id)initWithListener:(id)arg1 callKitAudioServices:(id)arg2 identityServices:(id)arg3 locationServices:(id)arg4;
- (id)metricsForConvoId:(id)arg1;
- (void)onCallEnded;
- (void)onCallWatched;
- (void)onIncomingCallCancelled;
- (void)onIncomingCallReceived;
- (void)onIncomingCallStarted;
- (void)onIncomingCallWatched;
- (void)onOutgoingCallCancelled;
- (void)onOutgoingCallMissed;
- (void)onOutgoingCallRejected;
- (void)onOutgoingCallRequested;
- (void)onOutgoingCallStarted;
- (void)onPublishedMediaOrMuteChanged:(id)arg1 media:(unsigned long long)arg2 muted:(_Bool)arg3;
- (void)outgoingCallConnectedForHeadlessCallServices:(id)arg1 convoId:(id)arg2;
- (void)prepareAudioConfigurationIfNeeded;
- (void)provider:(id)arg1 didActivateAudioSession:(id)arg2;
- (void)provider:(id)arg1 didDeactivateAudioSession:(id)arg2;
- (void)provider:(id)arg1 performAnswerCallAction:(id)arg2;
- (void)provider:(id)arg1 performEndCallAction:(id)arg2;
- (void)provider:(id)arg1 performSetMutedCallAction:(id)arg2;
- (void)provider:(id)arg1 performStartCallAction:(id)arg2;
- (void)providerDidReset:(id)arg1;
@property(nonatomic) unsigned long long publishedMedia; // @synthesize publishedMedia=_publishedMedia;
- (void)reportIncomingCallNotification:(id)arg1 convoId:(id)arg2 isVideo:(_Bool)arg3;
- (void)reportMediaUpdateCallNotification:(id)arg1 convoId:(id)arg2 media:(unsigned long long)arg3;
- (void)reportMediaUpdateForConvoId:(id)arg1 isVideo:(_Bool)arg2;
- (void)reportOutgoingCallToConvoId:(id)arg1 fromPhoneRecentsList:(_Bool)arg2 isVideo:(_Bool)arg3;
- (void)reportOutgoingCallToConvoId:(id)arg1 isVideo:(_Bool)arg2;
- (void)setNavigationServices:(id)arg1;
@property(retain, nonatomic) NSDictionary *transitionTable; // @synthesize transitionTable=_transitionTable;
- (void)updateAudioConfiguration:(long long)arg1;
- (_Bool)validLocation;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

