//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCAFeedEventBase.h"

@class NSNumber, NSString;

@interface SCAFeedPageView : SCAFeedEventBase
{
    NSNumber *timeViewedSec;
    long long gesture;
    NSString *sectionInteractions;
}

- (void).cxx_destruct;
- (id)asDictionary;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)getEventName;
- (long long)getEventQoS;
- (long long)getGesture;
- (double)getPerUserSamplingRate;
- (id)getSectionInteractions;
- (double)getTimeViewedSec;
- (id)init;
- (void)setGesture:(long long)arg1;
- (void)setSectionInteractions:(id)arg1;
- (void)setTimeViewedSec:(double)arg1;

@end
