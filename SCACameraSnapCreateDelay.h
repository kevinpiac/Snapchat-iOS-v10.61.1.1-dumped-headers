//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCAUserTrackedEvent.h"

@class NSNumber, SCASharedCameraMetricParams;

@interface SCACameraSnapCreateDelay : SCAUserTrackedEvent
{
    NSNumber *latencyMillis;
    NSNumber *contentDurationMillis;
    NSNumber *zslCapture;
    SCASharedCameraMetricParams *sharedCameraMetricParams;
}

- (void).cxx_destruct;
- (id)asDictionary;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (long long)getContentDurationMillis;
- (id)getEventName;
- (long long)getEventQoS;
- (long long)getLatencyMillis;
- (double)getPerUserSamplingRate;
- (id)getSharedCameraMetricParams;
- (_Bool)getZslCapture;
- (void)setContentDurationMillis:(long long)arg1;
- (void)setLatencyMillis:(long long)arg1;
- (void)setSharedCameraMetricParams:(id)arg1;
- (void)setZslCapture:(_Bool)arg1;

@end

