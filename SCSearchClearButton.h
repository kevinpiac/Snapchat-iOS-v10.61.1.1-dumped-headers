//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIControl.h>

@class UIColor, UIImageView, UIView;

@interface SCSearchClearButton : UIControl
{
    long long _buttonMode;
    UIColor *_highlightTint;
    UIView *_containerView;
    UIImageView *_imageView;
    UIImageView *_highlightedImageView;
    UIImageView *_highlightedImageViewMask;
}

- (void).cxx_destruct;
- (void)_animateView:(id)arg1 toScale:(double)arg2 withDuration:(double)arg3 delay:(double)arg4 showingClearButton:(_Bool)arg5 completion:(CDUnknownBlockType)arg6;
@property(nonatomic) long long buttonMode; // @synthesize buttonMode=_buttonMode;
@property(retain, nonatomic) UIView *containerView; // @synthesize containerView=_containerView;
@property(retain, nonatomic) UIColor *highlightTint; // @synthesize highlightTint=_highlightTint;
@property(retain, nonatomic) UIImageView *highlightedImageView; // @synthesize highlightedImageView=_highlightedImageView;
@property(retain, nonatomic) UIImageView *highlightedImageViewMask; // @synthesize highlightedImageViewMask=_highlightedImageViewMask;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1 highlightTint:(id)arg2;
- (void)layoutSubviews;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)setButtonMode:(long long)arg1 animated:(_Bool)arg2;
- (void)setHighlighted:(_Bool)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;

@end

