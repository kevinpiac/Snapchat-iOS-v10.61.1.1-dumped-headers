//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UILabel;

@interface SCShakeSeparatorView : UIView
{
    UIView *_leftLine;
    UIView *_rightLine;
    UILabel *_label;
}

- (void).cxx_destruct;
- (void)_setupLabel;
- (id)_setupLine;
- (void)_setupLines;
- (void)_updateConstraintsForLine:(id)arg1 leftAligned:(_Bool)arg2;
- (id)initWithFrame:(struct CGRect)arg1;
- (struct CGSize)intrinsicContentSize;
@property(readonly, nonatomic) UILabel *label; // @synthesize label=_label;
- (void)updateConstraints;

@end
