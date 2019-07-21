//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class SCPreviewCaptionTextView, UIColor;

@interface SCPreviewCaptionBackgroundView : UIView
{
    SCPreviewCaptionTextView *_captionTextView;
    struct CGRect _textRect;
    UIColor *_textBackgroundColor;
    double _textBackgroundCornerRadius;
}

- (void).cxx_destruct;
- (void)_addBackgroundAndBoxShadowLayers:(struct CGRect)arg1;
- (void)_removeBackgroundAndBoxShadowLayers;
- (void)_updateBackgroundLayers;
- (void)drawRect:(struct CGRect)arg1;
- (id)initWithCaptionTextView:(id)arg1;
@property(copy, nonatomic) UIColor *textBackgroundColor; // @synthesize textBackgroundColor=_textBackgroundColor;
@property(nonatomic) double textBackgroundCornerRadius; // @synthesize textBackgroundCornerRadius=_textBackgroundCornerRadius;
@property(readonly, nonatomic) struct CGRect textRect; // @synthesize textRect=_textRect;
- (void)updateFrame;

@end

