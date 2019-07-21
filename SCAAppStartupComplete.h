//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCAUserTrackedEvent.h"

@class NSNumber, NSString;

@interface SCAAppStartupComplete : SCAUserTrackedEvent
{
    NSNumber *latencyMillis;
    long long cameraStartType;
    long long cameraDirection;
    NSString *powerMode;
    NSString *splits;
    NSString *startType;
    NSString *startSubType;
    NSString *userAction;
    NSString *memInfo;
    NSString *cpuInfo;
    NSString *analyticsVersion;
    NSString *channelId;
    NSString *cameraSdk;
}

- (void).cxx_destruct;
- (id)asDictionary;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)getAnalyticsVersion;
- (long long)getCameraDirection;
- (id)getCameraSdk;
- (long long)getCameraStartType;
- (id)getChannelId;
- (id)getCpuInfo;
- (id)getEventName;
- (long long)getEventQoS;
- (long long)getLatencyMillis;
- (id)getMemInfo;
- (double)getPerUserSamplingRate;
- (id)getPowerMode;
- (id)getSplits;
- (id)getStartSubType;
- (id)getStartType;
- (id)getUserAction;
- (id)init;
- (void)setAnalyticsVersion:(id)arg1;
- (void)setCameraDirection:(long long)arg1;
- (void)setCameraSdk:(id)arg1;
- (void)setCameraStartType:(long long)arg1;
- (void)setChannelId:(id)arg1;
- (void)setCpuInfo:(id)arg1;
- (void)setLatencyMillis:(long long)arg1;
- (void)setMemInfo:(id)arg1;
- (void)setPowerMode:(id)arg1;
- (void)setSplits:(id)arg1;
- (void)setStartSubType:(id)arg1;
- (void)setStartType:(id)arg1;
- (void)setUserAction:(id)arg1;

@end
