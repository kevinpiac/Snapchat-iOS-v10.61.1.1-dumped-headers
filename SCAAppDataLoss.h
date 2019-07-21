//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCAUserTrackedEvent.h"

@class NSDate, NSNumber;

@interface SCAAppDataLoss : SCAUserTrackedEvent
{
    NSNumber *rejectedEventCount;
    NSNumber *overflowedEventCount;
    NSNumber *overflowedCriticalEventCount;
    NSNumber *overflowedP0EventCount;
    NSDate *firstFailureTs;
}

- (void).cxx_destruct;
- (id)asDictionary;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)getEventName;
- (long long)getEventQoS;
- (id)getFirstFailureTs;
- (long long)getOverflowedCriticalEventCount;
- (long long)getOverflowedEventCount;
- (long long)getOverflowedP0EventCount;
- (double)getPerUserSamplingRate;
- (long long)getRejectedEventCount;
- (void)setFirstFailureTs:(id)arg1;
- (void)setOverflowedCriticalEventCount:(long long)arg1;
- (void)setOverflowedEventCount:(long long)arg1;
- (void)setOverflowedP0EventCount:(long long)arg1;
- (void)setRejectedEventCount:(long long)arg1;

@end
