//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCAUserTrackedEvent.h"

@class NSNumber;

@interface SCAStoryStoryManagementView : SCAUserTrackedEvent
{
    NSNumber *timeViewed;
    long long storyType;
}

- (void).cxx_destruct;
- (id)asDictionary;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)getEventName;
- (long long)getEventQoS;
- (double)getPerUserSamplingRate;
- (long long)getStoryType;
- (double)getTimeViewed;
- (id)init;
- (void)setStoryType:(long long)arg1;
- (void)setTimeViewed:(double)arg1;

@end
