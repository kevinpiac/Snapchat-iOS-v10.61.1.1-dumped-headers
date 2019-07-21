//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "NYTPhotoCaptionViewLayoutWidthHinting-Protocol.h"

@class CAGradientLayer, NSAttributedString, NSString, UITextView;

@interface NYTPhotoCaptionView : UIView <NYTPhotoCaptionViewLayoutWidthHinting>
{
    double _preferredMaxLayoutWidth;
    NSAttributedString *_attributedTitle;
    NSAttributedString *_attributedSummary;
    NSAttributedString *_attributedCredit;
    UITextView *_textView;
    CAGradientLayer *_gradientLayer;
}

+ (_Bool)requiresConstraintBasedLayout;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSAttributedString *attributedCredit; // @synthesize attributedCredit=_attributedCredit;
@property(readonly, nonatomic) NSAttributedString *attributedSummary; // @synthesize attributedSummary=_attributedSummary;
@property(readonly, nonatomic) NSAttributedString *attributedTitle; // @synthesize attributedTitle=_attributedTitle;
- (void)commonInit;
- (void)didMoveToSuperview;
@property(retain, nonatomic) CAGradientLayer *gradientLayer; // @synthesize gradientLayer=_gradientLayer;
- (id)initWithAttributedTitle:(id)arg1 attributedSummary:(id)arg2 attributedCredit:(id)arg3;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (struct CGSize)intrinsicContentSize;
- (void)layoutSubviews;
@property(nonatomic) double preferredMaxLayoutWidth; // @synthesize preferredMaxLayoutWidth=_preferredMaxLayoutWidth;
@property(retain, nonatomic) UITextView *textView; // @synthesize textView=_textView;
- (void)setupGradient;
- (void)setupTextView;
- (void)updateTextViewAttributedText;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
