//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface SCUnlockablesStickyCache : NSObject
{
    NSMutableDictionary *_stickyUnlockables;
    NSMutableDictionary *_lastEligibleLocation;
    NSMutableDictionary *_lastEligibleTime;
    int _logContext;
    long long _stickyDistance;
    double _stickyDurationNoLocation;
    double _stickyDuration;
}

- (void).cxx_destruct;
- (id)_log:(id)arg1;
- (void)addUnlockable:(id)arg1 atLocation:(id)arg2 atTime:(double)arg3;
- (void)addUnlockables:(id)arg1 eligibleAtLocation:(id)arg2;
- (id)getAllStickyUnlockables;
- (id)initWithCacheType:(long long)arg1;
- (void)removeUnlockable:(id)arg1;
@property(nonatomic) long long stickyDistance; // @synthesize stickyDistance=_stickyDistance;
@property(nonatomic) double stickyDuration; // @synthesize stickyDuration=_stickyDuration;
@property(nonatomic) double stickyDurationNoLocation; // @synthesize stickyDurationNoLocation=_stickyDurationNoLocation;
- (id)stickyUnlockablesAtLocation:(id)arg1 withEligibleUnlockables:(id)arg2;

@end

