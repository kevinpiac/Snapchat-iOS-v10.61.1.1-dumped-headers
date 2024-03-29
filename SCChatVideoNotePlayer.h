//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCAudioSessionListener-Protocol.h"

@class AVPlayer, AVPlayerItem, AVPlayerLayer, NSDictionary, NSString, SCAudioConfigurationToken;
@protocol SCCallStatusProviderForVideoNotePlayer, SCChatVideoNotePlayerDelegate;

@interface SCChatVideoNotePlayer : NSObject <SCAudioSessionListener>
{
    id <SCChatVideoNotePlayerDelegate> _delegate;
    id <SCCallStatusProviderForVideoNotePlayer> _callStatusProvider;
    NSString *_mediaId;
    NSDictionary *_encryptionDict;
    SCAudioConfigurationToken *_audioConfiguration;
    unsigned long long _state;
    AVPlayerLayer *_videoPlayerLayer;
    AVPlayer *_videoPlayer;
    AVPlayerItem *_videoPlayerItem;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (void)_playVideoWithVideoData:(id)arg1;
- (void)addProximitySensorObserverWithCallback:(CDUnknownBlockType)arg1;
- (void)audioSession:(id)arg1 didEndInterruption:(_Bool)arg2;
- (void)audioSessionDidBeginInterruption:(id)arg1;
- (void)audioSessionRouteDidChangeReasonNewDeviceAvailable:(id)arg1;
- (void)audioSessionRouteDidChangeReasonOldDeviceUnavailable:(id)arg1;
- (void)cleanup;
- (_Bool)currentVideoNoteMediaIdEquals:(id)arg1;
- (void)dealloc;
- (void)fadeVolumeWithDuration:(id)arg1;
- (double)getCurrentPlaybackTime;
- (id)getVideoNotePlayerLayer;
- (id)init;
- (_Bool)isPlaying;
- (_Bool)isStopped;
- (void)play;
- (void)playOrStopVideoNoteWithMediaId:(id)arg1 encryptionDict:(id)arg2 delegate:(id)arg3;
- (void)proximityChanged;
- (void)removeProximitySensorObserver;
- (void)reset;
@property(retain, nonatomic) AVPlayer *videoPlayer; // @synthesize videoPlayer=_videoPlayer;
@property(retain, nonatomic) AVPlayerItem *videoPlayerItem; // @synthesize videoPlayerItem=_videoPlayerItem;
@property(retain, nonatomic) AVPlayerLayer *videoPlayerLayer; // @synthesize videoPlayerLayer=_videoPlayerLayer;
- (void)stop;
- (void)updateCallStatusProvider:(id)arg1;
- (void)updateDelegate:(id)arg1;
- (void)videoPlayerDidFinishPlaying:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

