//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCExperimentContext.h"

@interface SCAdCreativeStreamingRenditionSelectionExperimentContext : SCExperimentContext
{
    _Bool _enableCappingStreaming;
    _Bool _enableDowngradingStreaming;
    long long _treatmentTypeStreaming;
    long long _latencyImprovementThresholdMsStreaming;
    long long _maximumLatencyAllowedMsStreaming;
    long long _minimumLatencyForDowngradingMsStreaming;
}

@property(readonly, nonatomic) _Bool enableCappingStreaming; // @synthesize enableCappingStreaming=_enableCappingStreaming;
@property(readonly, nonatomic) _Bool enableDowngradingStreaming; // @synthesize enableDowngradingStreaming=_enableDowngradingStreaming;
- (id)experimentName;
@property(readonly, nonatomic) long long latencyImprovementThresholdMsStreaming; // @synthesize latencyImprovementThresholdMsStreaming=_latencyImprovementThresholdMsStreaming;
@property(readonly, nonatomic) long long maximumLatencyAllowedMsStreaming; // @synthesize maximumLatencyAllowedMsStreaming=_maximumLatencyAllowedMsStreaming;
@property(readonly, nonatomic) long long minimumLatencyForDowngradingMsStreaming; // @synthesize minimumLatencyForDowngradingMsStreaming=_minimumLatencyForDowngradingMsStreaming;
- (void)setupParameters;
@property(readonly, nonatomic) long long treatmentTypeStreaming; // @synthesize treatmentTypeStreaming=_treatmentTypeStreaming;

@end
