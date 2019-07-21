//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCAMediaPlayerEventBase.h"

@class NSNumber, SCACreativeTools;

@interface SCAMediaPlayerRunningEvent : SCAMediaPlayerEventBase
{
    NSNumber *loopCount;
    NSNumber *playbackDurationMs;
    NSNumber *restartDelayMs;
    long long failureType;
    SCACreativeTools *creativeTools;
}

- (void).cxx_destruct;
- (id)asDictionary;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)getCreativeTools;
- (id)getEventName;
- (long long)getEventQoS;
- (long long)getFailureType;
- (long long)getLoopCount;
- (double)getPerUserSamplingRate;
- (long long)getPlaybackDurationMs;
- (long long)getRestartDelayMs;
- (id)init;
- (void)setCreativeTools:(id)arg1;
- (void)setFailureType:(long long)arg1;
- (void)setLoopCount:(long long)arg1;
- (void)setPlaybackDurationMs:(long long)arg1;
- (void)setRestartDelayMs:(long long)arg1;

@end

