//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCOperaLayerView-Protocol.h"

@protocol SCOperaTimerLayerView <SCOperaLayerView>
- (double)innerTimerCurrentValue;
- (double)innerTimerMaxValue;
- (_Bool)innerTimerVisible;
- (double)outerTimerCurrentValue;
- (double)outerTimerMaxValue;
- (void)setInnerTimerCurrentValue:(double)arg1;
- (void)setInnerTimerMaxValue:(double)arg1;
- (void)setInnerTimerVisible:(_Bool)arg1;
- (void)setOuterTimerCurrentValue:(double)arg1;
- (void)setOuterTimerMaxValue:(double)arg1;
- (void)setPercentOffset:(double)arg1;
- (unsigned long long)timerShape;
@end

