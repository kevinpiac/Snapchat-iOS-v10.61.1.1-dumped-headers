//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UILabel.h>

@class UIColor;

@interface SCCaptionStyleLabel : UILabel
{
    double _fontBorderWidth;
    UIColor *_fontBorderColor;
}

- (void).cxx_destruct;
- (void)_setFontColor:(id)arg1;
- (void)_setShadows:(id)arg1 attributeString:(id)arg2;
- (void)drawTextInRect:(struct CGRect)arg1;
- (id)init;
- (void)setCaptionStyle:(id)arg1 isDynamicCaptionStyle:(_Bool)arg2;

@end
