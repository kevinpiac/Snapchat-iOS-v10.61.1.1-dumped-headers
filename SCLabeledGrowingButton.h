//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCGrowingButton.h"

@class UILabel;

@interface SCLabeledGrowingButton : SCGrowingButton
{
    UILabel *_label;
}

- (void).cxx_destruct;
- (struct CGRect)_labelFrame;
- (void)configureLabelWithText:(id)arg1;
- (void)dealloc;
@property(readonly, nonatomic) UILabel *label; // @synthesize label=_label;
- (void)layoutSubviews;
- (void)removeFromSuperview;
- (void)setAlpha:(double)arg1;
- (void)setHidden:(_Bool)arg1;

@end
