//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCOperaPlaybackObserving-Protocol.h"

@class AVPlayer, FBKVOController, NSNotificationCenter, NSString, SCObservable, SCOperaConfiguration, SCPublishSubject, SCQueuePlayer;
@protocol SCPerforming;

@interface SCOperaPlayerQueueManager : NSObject <SCOperaPlaybackObserving>
{
    SCOperaConfiguration *_configuration;
    SCQueuePlayer *_player;
    FBKVOController *_kvoController;
    NSNotificationCenter *_notificationCenter;
    id _timeObserverToken;
    id <SCPerforming> _timerObserverPerformer;
    id _closeToEndObserver;
    id _startToDisplayObserver;
    SCPublishSubject *_playbackLifecycleEventObserver;
}

- (void).cxx_destruct;
- (CDStruct_1b6d18a9)_audioDuration;
- (void)_automaticallyMinimizeStallingIfNecessary:(id)arg1;
- (void)_clearCloseToEndNotificationIfNecessary;
- (void)_clearKVOObserversForPlayerItem:(id)arg1;
- (void)_clearObserversForCurrentItem:(id)arg1;
- (void)_clearStartToDisplayObserverIfNecessary;
- (void)_clearTimeObserverTokenIfNecessary;
- (void)_observeEndOfPlaybackForPlayerItem:(id)arg1;
- (void)_observeProgressOfPlayer;
- (void)_observerStatusForPlayer;
- (void)_observerStatusForPlayerItem:(id)arg1;
- (void)_observersForPlayerItem:(id)arg1;
- (void)_playerStatusDidChange;
- (void)_setupPlayer;
- (void)advance;
- (void)dealloc;
- (void)didReceiveMediaServicesWereResetNotification;
- (void)enableCloseToEndCallback:(CDUnknownBlockType)arg1;
- (id)initWithKVOController:(id)arg1 configuration:(id)arg2 notificationCenter:(id)arg3;
- (void)insertItem:(id)arg1;
@property(readonly, nonatomic) SCObservable *playbackLifecycleEventObserver; // @synthesize playbackLifecycleEventObserver=_playbackLifecycleEventObserver;
@property(readonly, nonatomic) AVPlayer *player; // @synthesize player=_player;
- (void)promoteItem:(id)arg1;
- (void)removeAll;
- (void)removeItem:(id)arg1;
- (void)schedulePlaybackAtTime:(CDStruct_1b6d18a9)arg1 startingPlayingCallback:(CDUnknownBlockType)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

