//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UILabel.h>

@class NSAttributedString, UIFont;

@interface SIGLabel : UILabel
{
    unsigned long long _typographicalStyle;
    NSAttributedString *_attributedString;
}

- (void).cxx_destruct;
- (void)_setTextUnchecked:(id)arg1;
@property(retain, nonatomic) NSAttributedString *attributedString; // @synthesize attributedString=_attributedString;
- (void)setText:(id)arg1;
- (void)setTextAlignment:(long long)arg1;
@property(nonatomic) unsigned long long typographicalStyle; // @synthesize typographicalStyle=_typographicalStyle;

// Remaining properties
@property(retain, nonatomic) UIFont *font; // @dynamic font;

@end
