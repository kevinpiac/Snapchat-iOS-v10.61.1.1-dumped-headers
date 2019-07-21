//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "LSAAudioPlayerProtocol-Protocol.h"

@class LSAAudioPlayer, LSAAudioToolboxPlayer, LSAScenariumAudioPlayer, NSArray, NSString;

@interface LSAAudioPlayerBridge : NSObject <LSAAudioPlayerProtocol>
{
    NSArray *_allPlayers;
    LSAScenariumAudioPlayer *_scenariumAudioPlayer;
    LSAAudioPlayer *_audioPlayer;
    LSAAudioToolboxPlayer *_audioToolboxPlayer;
}

- (void).cxx_destruct;
- (void)_invokeSelectorOnAllPlayers:(SEL)arg1 completion:(CDUnknownBlockType)arg2;
- (void)activateWithCompletion:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic) LSAAudioPlayer *audioPlayer; // @synthesize audioPlayer=_audioPlayer;
@property(readonly, nonatomic) LSAAudioToolboxPlayer *audioToolboxPlayer; // @synthesize audioToolboxPlayer=_audioToolboxPlayer;
- (void)deactivateWithCompletion:(CDUnknownBlockType)arg1;
- (id)init;
- (void)muteAllSoundsWithCompletion:(CDUnknownBlockType)arg1;
- (void)resumeAllSoundsWithCompletion:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic) LSAScenariumAudioPlayer *scenariumAudioPlayer; // @synthesize scenariumAudioPlayer=_scenariumAudioPlayer;
- (void)suspendAllSoundsWithCompletion:(CDUnknownBlockType)arg1;
- (void)unmuteAllSoundsWithCompletion:(CDUnknownBlockType)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

