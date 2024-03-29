//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "AVAudioPlayerDelegate-Protocol.h"
#import "SCAudioSessionListener-Protocol.h"

@class AVAudioPlayer, NSData, NSString, NSURL;
@protocol SCAudioPlayerDelegate, SCAudioSession;

@interface SCAudioPlayer : NSObject <SCAudioSessionListener, AVAudioPlayerDelegate>
{
    id <SCAudioSession> _audioSession;
    _Bool _observingAudioSession;
    _Bool _audioSessionDeactivated;
    _Bool _audioSessionInterrupted;
    _Bool _applicationBackgrounded;
    unsigned long long _userCommand;
    AVAudioPlayer *_audioPlayer;
    _Bool _isPlaying;
    float _volume;
    id <SCAudioPlayerDelegate> _delegate;
    NSURL *_audioURL;
    NSData *_audioData;
}

- (void).cxx_destruct;
- (void)_applicationDidBecomeActive:(id)arg1;
- (void)_applicationWillResignActive:(id)arg1;
- (void)_audioSessionActivated:(id)arg1;
- (void)_audioSessionWillDeactivate:(id)arg1;
- (void)_observeAudioSessionAndApplicationNotifications;
- (void)_pause;
- (void)_play;
- (void)_resetAudioPlayer;
- (void)_resetOnError:(id)arg1;
- (void)_setupAudioPlayer:(id)arg1 error:(id)arg2;
- (void)_setupAudioPlayerWithAudioData:(id)arg1;
- (void)_setupAudioPlayerWithAudioURL:(id)arg1;
- (_Bool)_shouldPlay;
- (void)_teardownAudioPlayer;
- (void)_unobserveAudioSessionAndApplicationNotifications;
@property(retain, nonatomic) NSData *audioData; // @synthesize audioData=_audioData;
- (void)audioPlayerDecodeErrorDidOccur:(id)arg1 error:(id)arg2;
- (void)audioSession:(id)arg1 didEndInterruption:(_Bool)arg2;
- (void)audioSessionDidBeginInterruption:(id)arg1;
- (void)audioSessionMediaServicesWereReset:(id)arg1;
@property(retain, nonatomic) NSURL *audioURL; // @synthesize audioURL=_audioURL;
- (void)dealloc;
@property(nonatomic) __weak id <SCAudioPlayerDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) _Bool hasAudioSource;
- (id)initWithAudioSession:(id)arg1;
@property(readonly, nonatomic) _Bool isPlaying; // @synthesize isPlaying=_isPlaying;
- (void)pause;
- (void)play;
@property(readonly, nonatomic) double playbackPercentage;
@property(nonatomic) float volume; // @synthesize volume=_volume;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

