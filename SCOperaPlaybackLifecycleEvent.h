//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class AVPlayerItem, NSError;

@interface SCOperaPlaybackLifecycleEvent : NSObject <NSCopying>
{
    unsigned long long _subtype;
    AVPlayerItem *_didBecomeReady_playerItem;
    AVPlayerItem *_didSetToPlay_playerItem;
    AVPlayerItem *_didProgress_playerItem;
    double _didProgress_progress;
    AVPlayerItem *_didPause_playerItem;
    AVPlayerItem *_didStall_playerItem;
    AVPlayerItem *_didEnd_playerItem;
    AVPlayerItem *_didFail_playerItem;
    NSError *_didFail_error;
}

+ (id)didBecomeReadyWithPlayerItem:(id)arg1;
+ (id)didEndWithPlayerItem:(id)arg1;
+ (id)didFailWithPlayerItem:(id)arg1 error:(id)arg2;
+ (id)didPauseWithPlayerItem:(id)arg1;
+ (id)didProgressWithPlayerItem:(id)arg1 progress:(double)arg2;
+ (id)didSetToPlayWithPlayerItem:(id)arg1;
+ (id)didStallWithPlayerItem:(id)arg1;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;
- (id)internalInit;
- (_Bool)isEqual:(id)arg1;
- (void)matchDidBecomeReady:(CDUnknownBlockType)arg1 didSetToPlay:(CDUnknownBlockType)arg2 didProgress:(CDUnknownBlockType)arg3 didPause:(CDUnknownBlockType)arg4 didStall:(CDUnknownBlockType)arg5 didEnd:(CDUnknownBlockType)arg6 didFail:(CDUnknownBlockType)arg7;

@end

