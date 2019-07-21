//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCExperimentContext.h"

@class NSString;

@interface SCSendToRecentsRankingExperimentContext : SCExperimentContext
{
    _Bool _shouldUseAst;
    NSString *_recentAstVersionId;
    long long _recentInitialSize;
    long long _recentMaxSize;
    long long _recentViewMoreIncrement;
    long long _recentsTsLowerBoundIntervalDays;
}

- (void).cxx_destruct;
- (id)experimentName;
@property(readonly, copy, nonatomic) NSString *recentAstVersionId; // @synthesize recentAstVersionId=_recentAstVersionId;
@property(readonly, nonatomic) long long recentInitialSize; // @synthesize recentInitialSize=_recentInitialSize;
@property(readonly, nonatomic) long long recentMaxSize; // @synthesize recentMaxSize=_recentMaxSize;
@property(readonly, nonatomic) long long recentViewMoreIncrement; // @synthesize recentViewMoreIncrement=_recentViewMoreIncrement;
@property(readonly, nonatomic) long long recentsTsLowerBoundIntervalDays; // @synthesize recentsTsLowerBoundIntervalDays=_recentsTsLowerBoundIntervalDays;
- (void)setupParameters;
@property(readonly, nonatomic) _Bool shouldUseAst; // @synthesize shouldUseAst=_shouldUseAst;

@end

