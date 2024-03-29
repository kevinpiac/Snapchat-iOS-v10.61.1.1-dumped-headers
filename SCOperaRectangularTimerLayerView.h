//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UILabel.h>

#import "SCOperaTimerLayerView-Protocol.h"

@class NSString;

@interface SCOperaRectangularTimerLayerView : UILabel <SCOperaTimerLayerView>
{
    _Bool _innerTimerVisible;
    double _innerTimerMaxValue;
    double _innerTimerCurrentValue;
    double _outerTimerMaxValue;
    double _outerTimerCurrentValue;
}

+ (id)layerViewWithFrame:(struct CGRect)arg1;
- (void)drawRect:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
@property(nonatomic) double innerTimerCurrentValue; // @synthesize innerTimerCurrentValue=_innerTimerCurrentValue;
@property(nonatomic) double innerTimerMaxValue; // @synthesize innerTimerMaxValue=_innerTimerMaxValue;
@property(nonatomic) _Bool innerTimerVisible; // @synthesize innerTimerVisible=_innerTimerVisible;
- (struct CGSize)intrinsicContentSize;
- (void)layoutSubviews;
@property(nonatomic) double outerTimerCurrentValue; // @synthesize outerTimerCurrentValue=_outerTimerCurrentValue;
@property(nonatomic) double outerTimerMaxValue; // @synthesize outerTimerMaxValue=_outerTimerMaxValue;
- (void)setPercentOffset:(double)arg1;
- (unsigned long long)timerShape;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

