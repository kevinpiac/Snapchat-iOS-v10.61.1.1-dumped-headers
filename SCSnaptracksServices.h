//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class SCAudioPlayer, SCSnaptrackAudioStore;
@protocol SCAudioSession;

@interface SCSnaptracksServices : NSObject
{
    id <SCAudioSession> _audioSession;
    SCAudioPlayer *_audioPlayer;
    SCSnaptrackAudioStore *_snaptrackAudioStore;
}

- (void).cxx_destruct;
@property(nonatomic) __weak SCAudioPlayer *audioPlayer; // @synthesize audioPlayer=_audioPlayer;
@property(nonatomic) __weak id <SCAudioSession> audioSession; // @synthesize audioSession=_audioSession;
- (id)initWithUserSession:(id)arg1;
@property(readonly, nonatomic) SCSnaptrackAudioStore *snaptrackAudioStore; // @synthesize snaptrackAudioStore=_snaptrackAudioStore;

@end

