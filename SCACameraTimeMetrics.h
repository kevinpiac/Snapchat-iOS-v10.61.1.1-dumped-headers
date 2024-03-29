//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"
#import "NamedEvent-Protocol.h"

@class NSNumber, NSString;

@interface SCACameraTimeMetrics : NSObject <NamedEvent, NSCopying>
{
    NSNumber *cameraVisibleTimeMs;
    NSNumber *cameraOpenTimeMs;
    NSNumber *cameraLeakedTimeMs;
    NSString *cameraOptimizationTimeMap;
    NSString *cameraUsageAttributionMap;
}

- (void).cxx_destruct;
- (id)asDictionary;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (long long)getCameraLeakedTimeMs;
- (long long)getCameraOpenTimeMs;
- (id)getCameraOptimizationTimeMap;
- (id)getCameraUsageAttributionMap;
- (long long)getCameraVisibleTimeMs;
- (id)getEventName;
- (long long)getEventQoS;
- (double)getPerEventSamplingRate;
- (double)getPerUserSamplingRate;
- (void)setCameraLeakedTimeMs:(long long)arg1;
- (void)setCameraOpenTimeMs:(long long)arg1;
- (void)setCameraOptimizationTimeMap:(id)arg1;
- (void)setCameraUsageAttributionMap:(id)arg1;
- (void)setCameraVisibleTimeMs:(long long)arg1;

@end

