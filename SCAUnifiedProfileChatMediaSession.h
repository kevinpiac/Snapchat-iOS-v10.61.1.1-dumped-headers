//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCAUnifiedProfileBaseEvent.h"

@class NSNumber;

@interface SCAUnifiedProfileChatMediaSession : SCAUnifiedProfileBaseEvent
{
    NSNumber *mediaViewCount;
    NSNumber *mediaViewCountUnique;
    NSNumber *loadingScreenCount;
    NSNumber *timeViewedSec;
    long long chatMediaOpenSource;
}

- (void).cxx_destruct;
- (id)asDictionary;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (long long)getChatMediaOpenSource;
- (id)getEventName;
- (long long)getEventQoS;
- (long long)getLoadingScreenCount;
- (long long)getMediaViewCount;
- (long long)getMediaViewCountUnique;
- (double)getPerUserSamplingRate;
- (double)getTimeViewedSec;
- (id)init;
- (void)setChatMediaOpenSource:(long long)arg1;
- (void)setLoadingScreenCount:(long long)arg1;
- (void)setMediaViewCount:(long long)arg1;
- (void)setMediaViewCountUnique:(long long)arg1;
- (void)setTimeViewedSec:(double)arg1;

@end

