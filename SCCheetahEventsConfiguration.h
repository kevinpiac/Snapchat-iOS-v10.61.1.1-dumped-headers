//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class SCUserSession;

@interface SCCheetahEventsConfiguration : NSObject
{
    float _rankingMinimumVisibleFraction;
    float _adsMinimumVisibleFraction;
    float _adsFullyVisibleFraction;
    SCUserSession *_userSession;
    double _rankingImpressionTimeInterval;
    double _adsImpressionTimeInterval;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) float adsFullyVisibleFraction; // @synthesize adsFullyVisibleFraction=_adsFullyVisibleFraction;
@property(readonly, nonatomic) double adsImpressionTimeInterval; // @synthesize adsImpressionTimeInterval=_adsImpressionTimeInterval;
@property(readonly, nonatomic) float adsMinimumVisibleFraction; // @synthesize adsMinimumVisibleFraction=_adsMinimumVisibleFraction;
- (id)initWithUserSession:(id)arg1 rankingMinimumVisibleFraction:(float)arg2 rankingImpressionTimeInterval:(double)arg3 adsMinimumVisibleFraction:(float)arg4 adsFullyVisibleFraction:(float)arg5 adsImpressionTimeInterval:(double)arg6;
- (_Bool)isEqual:(id)arg1;
@property(readonly, nonatomic) double rankingImpressionTimeInterval; // @synthesize rankingImpressionTimeInterval=_rankingImpressionTimeInterval;
@property(readonly, nonatomic) float rankingMinimumVisibleFraction; // @synthesize rankingMinimumVisibleFraction=_rankingMinimumVisibleFraction;
@property(readonly, nonatomic) SCUserSession *userSession; // @synthesize userSession=_userSession;

@end
