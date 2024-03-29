//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface SCSnapAdsRenditionSelectionExperimentSettings : NSObject
{
    _Bool _enableStreaming;
    _Bool _enableCapping;
    _Bool _enableDowngrading;
    _Bool _overwriteStreaming;
    long long _treatmentType;
    long long _latencyImprovementThresholdMs;
    long long _maximumLatencyAllowedMs;
    long long _minimumLatencyForDowngradingMs;
}

@property(readonly, nonatomic) _Bool enableCapping; // @synthesize enableCapping=_enableCapping;
@property(readonly, nonatomic) _Bool enableDowngrading; // @synthesize enableDowngrading=_enableDowngrading;
@property(readonly, nonatomic) _Bool enableStreaming; // @synthesize enableStreaming=_enableStreaming;
- (float)getLatencyImprovementThresholdSec;
- (float)getMaximumLatencyAllowedSec;
- (float)getMinimumLatencyForDowngradingSec;
- (id)initWithConfigAdapter:(id)arg1 adType:(unsigned long long)arg2;
- (id)initWithEnableCapping:(_Bool)arg1 enableDowngrading:(_Bool)arg2 enableStreaming:(_Bool)arg3 treatmentType:(long long)arg4 latencyImprovementThresholdMs:(long long)arg5 maximumLatencyAllowedMs:(long long)arg6 minimumLatencyForDowngradingMs:(long long)arg7;
@property(readonly, nonatomic) long long latencyImprovementThresholdMs; // @synthesize latencyImprovementThresholdMs=_latencyImprovementThresholdMs;
@property(readonly, nonatomic) long long maximumLatencyAllowedMs; // @synthesize maximumLatencyAllowedMs=_maximumLatencyAllowedMs;
@property(readonly, nonatomic) long long minimumLatencyForDowngradingMs; // @synthesize minimumLatencyForDowngradingMs=_minimumLatencyForDowngradingMs;
@property(readonly, nonatomic) _Bool overwriteStreaming; // @synthesize overwriteStreaming=_overwriteStreaming;
@property(readonly, nonatomic) long long treatmentType; // @synthesize treatmentType=_treatmentType;

@end

