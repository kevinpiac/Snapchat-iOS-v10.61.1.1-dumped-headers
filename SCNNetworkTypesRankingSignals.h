//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, SCNNetworkTypesDeprecatedRankingSignal;

@interface SCNNetworkTypesRankingSignals : NSObject
{
    NSArray *_rankingSignals;
    SCNNetworkTypesDeprecatedRankingSignal *_deprecatedRankingSignal;
}

+ (id)RankingSignalsWithRankingSignals:(id)arg1 deprecatedRankingSignal:(id)arg2;
- (void).cxx_destruct;
@property(readonly, nonatomic) SCNNetworkTypesDeprecatedRankingSignal *deprecatedRankingSignal; // @synthesize deprecatedRankingSignal=_deprecatedRankingSignal;
- (id)description;
- (id)initWithRankingSignals:(id)arg1 deprecatedRankingSignal:(id)arg2;
@property(readonly, nonatomic) NSArray *rankingSignals; // @synthesize rankingSignals=_rankingSignals;

@end

