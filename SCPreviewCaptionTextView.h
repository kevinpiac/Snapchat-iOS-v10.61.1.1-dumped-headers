//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITextView.h>

@class SCDynamicCaptionStyle;

@interface SCPreviewCaptionTextView : UITextView
{
    _Bool _showCaptionStyleOptions;
    double _scale;
    double _lineSpacing;
    SCDynamicCaptionStyle *_captionStyle;
}

- (void).cxx_destruct;
- (_Bool)canPerformAction:(SEL)arg1 withSender:(id)arg2;
@property(readonly, nonatomic) __weak SCDynamicCaptionStyle *captionStyle; // @synthesize captionStyle=_captionStyle;
- (id)initWithFrame:(struct CGRect)arg1;
@property(readonly, nonatomic) double lineSpacing; // @synthesize lineSpacing=_lineSpacing;
- (void)paste:(id)arg1;
@property(nonatomic) double scale; // @synthesize scale=_scale;
@property(nonatomic) _Bool showCaptionStyleOptions; // @synthesize showCaptionStyleOptions=_showCaptionStyleOptions;
- (void)setTextViewWithCaptionStyle:(id)arg1 currentFontSize:(double)arg2 isTextEditing:(_Bool)arg3;
- (struct CGRect)textRect;

@end
