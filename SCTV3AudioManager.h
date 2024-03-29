//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCTCognacSessionWrapperListener-Protocol.h"
#import "SCTV3SessionWrapperListener-Protocol.h"

@class NSMutableDictionary, NSMutableSet, NSString, SCTSingleTaskPerformer, SCTV3SessionWrapper;
@protocol SCTV3AudioServices;

@interface SCTV3AudioManager : NSObject <SCTV3SessionWrapperListener, SCTCognacSessionWrapperListener>
{
    id <SCTV3AudioServices> _audioServices;
    unsigned long long _audioMode;
    _Bool _proximityEnabled;
    _Bool _webrtcAudioProcessingEnabled;
    NSMutableSet *_wrappersEnablingAudio;
    NSMutableSet *_wrappersEnablingProximity;
    NSMutableSet *_wrappersEnablingWebrtcAudioProcessing;
    NSMutableSet *_cognacWrappersEnablingAudio;
    NSMutableSet *_cognacWrappersEnablingWebrtcAudioProcessing;
    NSMutableSet *_convosPausingAudio;
    _Bool _shouldPlayHangUpSound;
    SCTV3SessionWrapper *_lastCallingWrapper;
    NSMutableDictionary *_ringingLockTokens;
    NSMutableDictionary *_ringingWrapperState;
    SCTSingleTaskPerformer *_updatePerformer;
}

- (void).cxx_destruct;
- (void)_performUpdateWithCompletion:(CDUnknownBlockType)arg1;
- (void)_processPlaybackOfRingingSound:(id)arg1 reason:(long long)arg2;
- (void)_processPlaybackOfRingingSoundAfterEnablingAudioIfNeeded;
- (void)_requestRingingLock:(id)arg1;
- (void)_requestRingingUnlock:(id)arg1;
- (_Bool)_shouldLockRinging:(id)arg1;
- (_Bool)_shouldPlayHangupSoundForReason:(long long)arg1;
- (void)cognacSessionWrapper:(id)arg1 changedState:(id)arg2;
- (void)cognacSessionWrapperActivated:(id)arg1;
- (void)cognacSessionWrapperBackgrounded:(id)arg1;
- (void)cognacSessionWrapperDeactivated:(id)arg1;
- (id)initWithAudioServices:(id)arg1;
- (void)pauseAudioProcessingInConvoId:(id)arg1;
- (void)sessionWrapper:(id)arg1 changedState:(id)arg2 reason:(long long)arg3;
- (void)unpauseAudioProcessingInConvoId:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

