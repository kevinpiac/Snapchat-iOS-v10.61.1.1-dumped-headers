//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SIGScaleAnimationButton.h"

@class NSLayoutConstraint, SIGLabel;

@interface SIGActionButton : SIGScaleAnimationButton
{
    NSLayoutConstraint *_bottomAnchorConstraint;
    SIGLabel *_titleLabel;
}

+ (id)actionButtonWithTitle:(id)arg1;
- (void).cxx_destruct;
- (double)_bottomMargin;
- (void)_keyboardWillHide:(id)arg1;
- (void)_keyboardWillShow:(id)arg1;
- (void)_updatePositionRelativeToKeyboardWithDuration:(double)arg1 curve:(long long)arg2;
- (void)didMoveToWindow;
- (id)init;
- (struct CGSize)intrinsicContentSize;
- (void)setEnabled:(_Bool)arg1;
- (void)setTitle:(id)arg1;
- (void)willMoveToSuperview:(id)arg1;

@end

