//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSArray;

@interface SCBadFrameStatsSnapshot : NSObject <NSCopying>
{
    NSArray *_badFrameBuckets;
    double _badFrameDurationMs;
    double _eventTime;
    long long _totalFrameCount;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSArray *badFrameBuckets; // @synthesize badFrameBuckets=_badFrameBuckets;
@property(readonly, nonatomic) double badFrameDurationMs; // @synthesize badFrameDurationMs=_badFrameDurationMs;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, nonatomic) double eventTime; // @synthesize eventTime=_eventTime;
- (unsigned long long)hash;
- (id)initWithBadFrameBuckets:(id)arg1 badFrameDurationMs:(double)arg2 eventTime:(double)arg3 totalFrameCount:(long long)arg4;
- (_Bool)isEqual:(id)arg1;
@property(readonly, nonatomic) long long totalFrameCount; // @synthesize totalFrameCount=_totalFrameCount;

@end

