//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCAStoryFeedItemImp.h"

@class NSDate, NSNumber;

@interface SCAStoryFeedItemLongImp : SCAStoryFeedItemImp
{
    NSNumber *impTimeSecs;
    NSNumber *impMinimalVisibleFrac;
    NSNumber *withViewedState;
    long long exitEvent;
    NSDate *impStartTs;
}

- (void).cxx_destruct;
- (id)asDictionary;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)getEventName;
- (long long)getEventQoS;
- (long long)getExitEvent;
- (double)getImpMinimalVisibleFrac;
- (id)getImpStartTs;
- (double)getImpTimeSecs;
- (double)getPerUserSamplingRate;
- (_Bool)getWithViewedState;
- (id)init;
- (void)setExitEvent:(long long)arg1;
- (void)setImpMinimalVisibleFrac:(double)arg1;
- (void)setImpStartTs:(id)arg1;
- (void)setImpTimeSecs:(double)arg1;
- (void)setWithViewedState:(_Bool)arg1;

@end
