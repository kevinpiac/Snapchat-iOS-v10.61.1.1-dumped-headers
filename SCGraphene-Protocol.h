//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class SCGrapheneMetric;

@protocol SCGraphene <NSObject>
- (void)addHistogram:(SCGrapheneMetric *)arg1 value:(long long)arg2;
- (void)addTimer:(SCGrapheneMetric *)arg1 durationMs:(long long)arg2;
- (void)addTimer:(SCGrapheneMetric *)arg1 durationSec:(double)arg2;
- (void)increment:(SCGrapheneMetric *)arg1;
- (void)increment:(SCGrapheneMetric *)arg1 value:(long long)arg2;
@end

