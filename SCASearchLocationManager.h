//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCAUserTrackedEvent.h"

@class NSNumber;

@interface SCASearchLocationManager : SCAUserTrackedEvent
{
    NSNumber *horizontalAccuracyInMeters;
    NSNumber *verticalAccuracyInMeters;
    NSNumber *ageInSeconds;
    long long pageType;
}

- (void).cxx_destruct;
- (id)asDictionary;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (double)getAgeInSeconds;
- (id)getEventName;
- (long long)getEventQoS;
- (long long)getHorizontalAccuracyInMeters;
- (long long)getPageType;
- (double)getPerUserSamplingRate;
- (long long)getVerticalAccuracyInMeters;
- (id)init;
- (void)setAgeInSeconds:(double)arg1;
- (void)setHorizontalAccuracyInMeters:(long long)arg1;
- (void)setPageType:(long long)arg1;
- (void)setVerticalAccuracyInMeters:(long long)arg1;

@end
