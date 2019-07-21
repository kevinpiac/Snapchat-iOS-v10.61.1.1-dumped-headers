//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCAlertViewActionButton.h"

@class NSString, SCLoadingIndicatorView, UIImageView, UIView;

@interface SCChangeableButton : SCAlertViewActionButton
{
    _Bool _shouldPresentHighlightedStyle;
    UIView *_assetView;
    NSString *_buttonTitle;
    UIImageView *_actionView;
    UIImageView *_reverseActionView;
    SCLoadingIndicatorView *_loadingView;
    NSString *_actionButtonTitle;
    NSString *_reverseActionTitle;
    NSString *_loadingButtonTitle;
    NSString *_reverseLoadingTitle;
    NSString *_actionDisabledTitle;
    NSString *_reverseDisabledTitle;
    unsigned long long _style;
    struct CGSize _buttonSize;
}

+ (id)_borderColorWithButtonStyle:(unsigned long long)arg1;
+ (id)_fillColorWithButtonStyle:(unsigned long long)arg1;
+ (id)_fontForButtonStyle:(unsigned long long)arg1;
+ (id)_highlightBorderColorWithButtonStyle:(unsigned long long)arg1;
+ (id)_highlightFillColorWithButtonStyle:(unsigned long long)arg1;
+ (id)_highlightTextColorWithButtonStyle:(unsigned long long)arg1;
+ (unsigned long long)_kerningWithStyle:(unsigned long long)arg1;
+ (double)_textHeightWithTitle:(id)arg1 style:(unsigned long long)arg2;
+ (id)_uiColorWithButtonStyle:(unsigned long long)arg1;
- (void).cxx_destruct;
- (void)_updateShouldPresentHighlightedStyle:(_Bool)arg1;
@property(copy, nonatomic) NSString *actionButtonTitle; // @synthesize actionButtonTitle=_actionButtonTitle;
@property(copy, nonatomic) NSString *actionDisabledTitle; // @synthesize actionDisabledTitle=_actionDisabledTitle;
@property(retain, nonatomic) UIImageView *actionView; // @synthesize actionView=_actionView;
@property(retain, nonatomic) UIView *assetView; // @synthesize assetView=_assetView;
- (id)attributedHighlightTitle;
- (id)attributedTitle;
@property(readonly, nonatomic) struct CGSize buttonSize; // @synthesize buttonSize=_buttonSize;
@property(copy, nonatomic) NSString *buttonTitle; // @synthesize buttonTitle=_buttonTitle;
- (id)initWithState:(unsigned long long)arg1 config:(id)arg2;
@property(copy, nonatomic) NSString *loadingButtonTitle; // @synthesize loadingButtonTitle=_loadingButtonTitle;
@property(retain, nonatomic) SCLoadingIndicatorView *loadingView; // @synthesize loadingView=_loadingView;
@property(copy, nonatomic) NSString *reverseActionTitle; // @synthesize reverseActionTitle=_reverseActionTitle;
@property(retain, nonatomic) UIImageView *reverseActionView; // @synthesize reverseActionView=_reverseActionView;
@property(copy, nonatomic) NSString *reverseDisabledTitle; // @synthesize reverseDisabledTitle=_reverseDisabledTitle;
@property(copy, nonatomic) NSString *reverseLoadingTitle; // @synthesize reverseLoadingTitle=_reverseLoadingTitle;
- (void)setAssetViewWithSpacing:(double)arg1;
- (void)setButtonState:(unsigned long long)arg1;
- (void)setEnabled:(_Bool)arg1;
@property(nonatomic) unsigned long long style; // @synthesize style=_style;
- (void)updateColor;
- (void)updateTitle;

@end
