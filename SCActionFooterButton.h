//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIControl.h>

@class NSString, UIImage, UIImageView, UILabel, UIView;

@interface SCActionFooterButton : UIControl
{
    _Bool _badged;
    UIImage *_image;
    NSString *_title;
    long long _interfaceStyle;
    UILabel *_titleLabel;
    UILabel *_selectedTitleLabel;
    UIImageView *_imageView;
    UIView *_badgeView;
}

- (void).cxx_destruct;
- (void)_updateSelectionLabel;
- (void)_updateTitleLabel;
@property(retain, nonatomic) UIView *badgeView; // @synthesize badgeView=_badgeView;
@property(retain, nonatomic) UIImage *image; // @synthesize image=_image;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property(nonatomic) long long interfaceStyle; // @synthesize interfaceStyle=_interfaceStyle;
@property(nonatomic, getter=isBadged) _Bool badged; // @synthesize badged=_badged;
- (void)layoutSubviews;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
@property(retain, nonatomic) UILabel *selectedTitleLabel; // @synthesize selectedTitleLabel=_selectedTitleLabel;
- (void)setHighlighted:(_Bool)arg1;
- (void)setSelected:(_Bool)arg1;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)tintColorDidChange;

@end

