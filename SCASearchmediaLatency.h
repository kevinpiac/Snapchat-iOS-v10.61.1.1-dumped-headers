//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCAUserNotTrackedEvent.h"

@class NSNumber;

@interface SCASearchmediaLatency : SCAUserNotTrackedEvent
{
    NSNumber *firstBytesLatencyMilliseconds;
    NSNumber *totalBytesLatencyMilliseconds;
    NSNumber *serverLatencyMilliseconds;
    long long searchMediaType;
    long long mediaType;
    long long searchCacheStatus;
    long long source;
}

- (void).cxx_destruct;
- (id)asDictionary;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)getEventName;
- (long long)getEventQoS;
- (long long)getFirstBytesLatencyMilliseconds;
- (long long)getMediaType;
- (double)getPerUserSamplingRate;
- (long long)getSearchCacheStatus;
- (long long)getSearchMediaType;
- (long long)getServerLatencyMilliseconds;
- (long long)getSource;
- (long long)getTotalBytesLatencyMilliseconds;
- (id)init;
- (void)setFirstBytesLatencyMilliseconds:(long long)arg1;
- (void)setMediaType:(long long)arg1;
- (void)setSearchCacheStatus:(long long)arg1;
- (void)setSearchMediaType:(long long)arg1;
- (void)setServerLatencyMilliseconds:(long long)arg1;
- (void)setSource:(long long)arg1;
- (void)setTotalBytesLatencyMilliseconds:(long long)arg1;

@end

