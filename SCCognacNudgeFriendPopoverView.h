//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class SCBitmojiAvatarView, SCCognacNudgeFriendViewModel, SCGradientView, UIButton, UILabel;

@interface SCCognacNudgeFriendPopoverView : UIView
{
    SCCognacNudgeFriendViewModel *_viewModel;
    SCBitmojiAvatarView *_bitmojiAvatarView;
    UILabel *_mainLabel;
    UILabel *_subLabel;
    SCGradientView *_gradientView;
    UIButton *_inviteButton;
    UIButton *_dismissButton;
}

- (void).cxx_destruct;
- (void)_initBitmojiAvatarView;
- (void)_initDismissButton;
- (void)_initGradientView;
- (void)_initInviteButton;
- (void)_initMainLabel;
- (void)_initSubLabel;
@property(readonly, nonatomic) UIButton *dismissButton; // @synthesize dismissButton=_dismissButton;
- (void)drawRect:(struct CGRect)arg1;
- (double)heightWithConstrainedWidth:(double)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
@property(readonly, nonatomic) UIButton *inviteButton; // @synthesize inviteButton=_inviteButton;
- (void)layoutSubviews;
- (void)setImageDownloader:(id)arg1;
- (void)updateWithViewModel:(id)arg1;

@end

