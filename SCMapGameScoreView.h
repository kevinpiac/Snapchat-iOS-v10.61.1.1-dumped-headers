//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSString, UIFont, UIImageView, UILabel;

@interface SCMapGameScoreView : UIView
{
    UIImageView *_backgroundImageView;
    UIImageView *_iconImageView;
    UIImageView *_textImageView;
    UILabel *_textLabel;
}

- (void).cxx_destruct;
- (id)_textImageWithSize:(struct CGSize)arg1;
@property(copy, nonatomic) UIFont *font;
- (id)initWithFrame:(struct CGRect)arg1;
- (struct CGSize)intrinsicContentSize;
- (void)layoutSubviews;
@property(copy, nonatomic) NSString *text;

@end

