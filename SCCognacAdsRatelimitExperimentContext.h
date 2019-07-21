//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCExperimentContext.h"

@interface SCCognacAdsRatelimitExperimentContext : SCExperimentContext
{
    _Bool _adEnabled;
    double _adCapSec;
    double _adDurationSec;
    long long _adCount;
}

@property(readonly, nonatomic) double adCapSec; // @synthesize adCapSec=_adCapSec;
@property(readonly, nonatomic) long long adCount; // @synthesize adCount=_adCount;
@property(readonly, nonatomic) double adDurationSec; // @synthesize adDurationSec=_adDurationSec;
@property(readonly, nonatomic) _Bool adEnabled; // @synthesize adEnabled=_adEnabled;
- (id)experimentName;
- (void)setupParameters;

@end

