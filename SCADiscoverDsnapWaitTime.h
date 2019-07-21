//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCAUserNotTrackedEvent.h"

@class SCADiscoverView, SCAOperaView, SCAPerformanceTimer;

@interface SCADiscoverDsnapWaitTime : SCAUserNotTrackedEvent
{
    SCADiscoverView *discoverView;
    SCAOperaView *operaView;
    SCAPerformanceTimer *performanceTimer;
}

- (void).cxx_destruct;
- (id)asDictionary;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)getDiscoverView;
- (id)getEventName;
- (long long)getEventQoS;
- (id)getOperaView;
- (double)getPerUserSamplingRate;
- (id)getPerformanceTimer;
- (void)setDiscoverView:(id)arg1;
- (void)setOperaView:(id)arg1;
- (void)setPerformanceTimer:(id)arg1;

@end

