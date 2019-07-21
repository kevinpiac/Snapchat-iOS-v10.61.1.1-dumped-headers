//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface SCSessionBuilder : NSObject
{
    NSString *_type;
    NSString *_name;
    double _startTime;
    double _endTime;
    NSString *_referrer;
    long long _exitEvent;
    NSString *_previousSessionName;
    double _lastGPSOnTime;
    double _totalGPSOnTime;
    double _lastCameraOnTime;
    double _totalCameraOnTime;
}

+ (id)withSession:(id)arg1;
- (void).cxx_destruct;
- (id)build;
- (id)setEndTime:(double)arg1;
- (id)setExitEvent:(long long)arg1;
- (id)setLastCameraOnTime:(double)arg1;
- (id)setLastGPSOnTime:(double)arg1;
- (id)setName:(id)arg1;
- (id)setPreviousSessionName:(id)arg1;
- (id)setReferrer:(id)arg1;
- (id)setStartTime:(double)arg1;
- (id)setTotalCameraOnTime:(double)arg1;
- (id)setTotalGPSOnTime:(double)arg1;
- (id)setType:(id)arg1;

@end

