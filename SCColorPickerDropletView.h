//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCDrawingDropletView.h"

@class SCShapeView, UIColor;

@interface SCColorPickerDropletView : SCDrawingDropletView
{
    UIColor *_color;
    SCShapeView *_borderView;
}

- (void).cxx_destruct;
- (void)_setupBorderView;
- (id)borderShapeLayer;
@property(retain, nonatomic) SCShapeView *borderView; // @synthesize borderView=_borderView;
@property(retain, nonatomic) UIColor *color; // @synthesize color=_color;
- (id)initWithColorDropletView:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)setCurrentPath:(id)arg1;

@end

