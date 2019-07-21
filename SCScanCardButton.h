//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIButton.h>

@class NSMutableDictionary, NSString, UIView;

@interface SCScanCardButton : UIButton
{
    NSMutableDictionary *_backgroundColors;
    NSMutableDictionary *_borderColors;
    unsigned long long _style;
    NSString *_title;
    double _titleSize;
    UIView *_assetView;
}

+ (id)keyForControlState:(unsigned long long)arg1;
- (void).cxx_destruct;
- (id)_attributedDisabledTitleForCurrentStyle;
- (id)_attributedHighlightTitleForCurrentStyle;
- (id)_attributedTitleForCurrentStyle;
- (id)_borderColorForCurrentStyle;
- (void)_commonInitWithStyle:(unsigned long long)arg1 title:(id)arg2 titleFontSize:(double)arg3;
- (id)_disableColorForCurrentStyle;
- (id)_fillColorForCurrentStyle;
- (id)_fontForCurrentStyle;
- (id)_highlightBorderColorForCurrentStyle;
- (id)_highlightFillColorForCurrentStyle;
- (id)_highlightTextColorForCurrentStyle;
- (unsigned long long)_kerningForCurrentStyle;
- (void)_setBackgroundColor:(id)arg1 forState:(unsigned long long)arg2;
- (void)_setBorderColor:(id)arg1 forState:(unsigned long long)arg2;
- (void)_setupButtonForCurrentStyle;
- (id)_textColorForCurrentStyle;
- (id)_textColorForDisabledStyle;
@property(retain, nonatomic) UIView *assetView; // @synthesize assetView=_assetView;
- (id)initWithStyle:(unsigned long long)arg1 title:(id)arg2;
- (id)initWithStyle:(unsigned long long)arg1 title:(id)arg2 titleFontSize:(double)arg3;
- (void)setAssetViewWithSpacing:(double)arg1;
- (void)setHighlighted:(_Bool)arg1;
- (void)setSelected:(_Bool)arg1;
@property(nonatomic) unsigned long long style; // @synthesize style=_style;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(nonatomic) double titleSize; // @synthesize titleSize=_titleSize;
- (void)updateButtonWithStyle:(unsigned long long)arg1 title:(id)arg2;

@end

