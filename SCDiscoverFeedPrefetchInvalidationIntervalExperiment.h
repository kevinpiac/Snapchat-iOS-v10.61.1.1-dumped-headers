//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCExperimentContext.h"

@interface SCDiscoverFeedPrefetchInvalidationIntervalExperiment : SCExperimentContext
{
    _Bool _enableIntervalTuning;
    unsigned long long _minsForLastPrefetchInvalid;
}

@property(readonly, nonatomic) _Bool enableIntervalTuning; // @synthesize enableIntervalTuning=_enableIntervalTuning;
- (id)experimentName;
@property(readonly, nonatomic) unsigned long long minsForLastPrefetchInvalid; // @synthesize minsForLastPrefetchInvalid=_minsForLastPrefetchInvalid;
- (void)setupParameters;

@end
