//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class TrophyMetricsContainer;
@protocol SCPerforming;

@interface TrophyMetricsManager : NSObject
{
    id <SCPerforming> _queuePerformer;
    TrophyMetricsContainer *_metricsContainer;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (_Bool)_hasUserAlreadyAchievedTrophiesForActions:(id)arg1;
- (void)addMetricsFromContainer:(id)arg1;
- (void)flushMetrics;
- (id)init;
@property(retain, nonatomic) TrophyMetricsContainer *metricsContainer; // @synthesize metricsContainer=_metricsContainer;

@end

