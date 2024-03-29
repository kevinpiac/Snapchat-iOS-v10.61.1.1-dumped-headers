//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCAUserTrackedEvent.h"

@class NSNumber, NSString;

@interface SCAAppBadFrame : SCAUserTrackedEvent
{
    NSNumber *totalFrameCount;
    NSNumber *totalDroppedFrameCount;
    NSNumber *badFrameDurationMs;
    NSNumber *pageDurationBucket;
    NSNumber *pageDurationSec;
    NSNumber *eventDurationMs;
    NSNumber *badFrameThresholdMs;
    NSNumber *eventVisitNum;
    NSNumber *frameBucket0;
    NSNumber *frameBucket1;
    NSNumber *frameBucket2;
    NSNumber *frameBucket3;
    NSNumber *frameBucket4;
    NSNumber *frameBucket5;
    NSNumber *frameBucket6;
    NSNumber *frameBucket7;
    NSNumber *frameBucket8;
    NSString *attribution;
    NSString *prev_attribution;
    NSString *uiEventName;
}

- (void).cxx_destruct;
- (id)asDictionary;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)getAttribution;
- (long long)getBadFrameDurationMs;
- (long long)getBadFrameThresholdMs;
- (long long)getEventDurationMs;
- (id)getEventName;
- (long long)getEventQoS;
- (long long)getEventVisitNum;
- (long long)getFrameBucket0;
- (long long)getFrameBucket1;
- (long long)getFrameBucket2;
- (long long)getFrameBucket3;
- (long long)getFrameBucket4;
- (long long)getFrameBucket5;
- (long long)getFrameBucket6;
- (long long)getFrameBucket7;
- (long long)getFrameBucket8;
- (long long)getPageDurationBucket;
- (long long)getPageDurationSec;
- (double)getPerUserSamplingRate;
- (id)getPrev_attribution;
- (long long)getTotalDroppedFrameCount;
- (long long)getTotalFrameCount;
- (id)getUiEventName;
- (void)setAttribution:(id)arg1;
- (void)setBadFrameDurationMs:(long long)arg1;
- (void)setBadFrameThresholdMs:(long long)arg1;
- (void)setEventDurationMs:(long long)arg1;
- (void)setEventVisitNum:(long long)arg1;
- (void)setFrameBucket0:(long long)arg1;
- (void)setFrameBucket1:(long long)arg1;
- (void)setFrameBucket2:(long long)arg1;
- (void)setFrameBucket3:(long long)arg1;
- (void)setFrameBucket4:(long long)arg1;
- (void)setFrameBucket5:(long long)arg1;
- (void)setFrameBucket6:(long long)arg1;
- (void)setFrameBucket7:(long long)arg1;
- (void)setFrameBucket8:(long long)arg1;
- (void)setPageDurationBucket:(long long)arg1;
- (void)setPageDurationSec:(long long)arg1;
- (void)setPrev_attribution:(id)arg1;
- (void)setTotalDroppedFrameCount:(long long)arg1;
- (void)setTotalFrameCount:(long long)arg1;
- (void)setUiEventName:(id)arg1;

@end

