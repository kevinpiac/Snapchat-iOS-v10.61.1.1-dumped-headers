//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSString, UILabel;

@interface SCMapOnboardingTitleView : UIView
{
    UILabel *_titleLabel;
    UILabel *_subtitleLabel;
    UIView *_separatorLineView;
    NSString *_title;
    NSString *_subtitle;
}

- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect)arg1;
- (struct CGSize)intrinsicContentSize;
- (void)layoutSubviews;
@property(nonatomic) double preferredMaxLayoutWidth;
@property(copy, nonatomic) NSString *subtitle; // @synthesize subtitle=_subtitle;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;

@end

