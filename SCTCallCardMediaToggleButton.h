//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCTRoundCornerButton.h"

@class UIColor, UIImage;

@interface SCTCallCardMediaToggleButton : SCTRoundCornerButton
{
    UIImage *_normalImage;
    UIImage *_selectedImage;
    UIColor *_normalBorderColor;
    UIColor *_normalBackgroundColor;
    UIColor *_selectedBorderColor;
    UIColor *_selectedBackgroundColor;
}

- (void).cxx_destruct;
- (void)_updateColors;
- (void)_updateHighlightImage;
- (id)initWithType:(unsigned long long)arg1;
- (void)setHighlighted:(_Bool)arg1;
- (void)setSelected:(_Bool)arg1;

@end

