//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class SCNetworkImageView, UILabel;

@interface SCCognacFriendsFeedButtonView : UIView
{
    struct CGSize _buttonLabelSize;
    UIView *_buttonImageBackgroundView;
    SCNetworkImageView *_buttonImageView;
    UILabel *_buttonLabel;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) SCNetworkImageView *buttonImageView; // @synthesize buttonImageView=_buttonImageView;
@property(readonly, nonatomic) UILabel *buttonLabel; // @synthesize buttonLabel=_buttonLabel;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)setIconImage:(id)arg1 highlighted:(_Bool)arg2;

@end

