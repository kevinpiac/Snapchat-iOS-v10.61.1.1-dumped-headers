//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSString, SCGradientView, SCNetworkImageView, SCShapeView, UIButton, UIImageView, UILabel;
@protocol SCCognacAppActiveCardViewDelegate;

@interface SCCognacAppActiveCardView : UIView
{
    SCShapeView *_maskView;
    UIView *_bannerContainerView;
    SCNetworkImageView *_coverImageView;
    SCNetworkImageView *_logoImageView;
    SCGradientView *_presenceGradientView;
    UILabel *_presenceLabel;
    UIButton *_notNowButton;
    UIImageView *_notNowButtonImageView;
    UIImageView *_notNowButtonHighlightedImageView;
    UILabel *_notNowButtonLabel;
    UIButton *_joinButton;
    UILabel *_joinButtonLabel;
    id <SCCognacAppActiveCardViewDelegate> _delegate;
}

- (void).cxx_destruct;
- (struct CGRect)_bannerContainerViewFrame;
- (void)_forwardAnimateTouchDownForButton:(id)arg1;
- (void)_handleTouchCancelForButton:(id)arg1;
- (void)_handleTouchDownForButton:(id)arg1;
- (void)_handleTouchUpInsideForButton:(id)arg1;
- (void)_handleTouchUpOutsideForButton:(id)arg1;
- (struct CGRect)_joinButtonFrame;
- (void)_layoutView:(id)arg1 withFrame:(struct CGRect)arg2;
- (struct CGRect)_notNowButtonFrame;
- (void)_reverseAnimateTouchDownForButton:(id)arg1;
- (id)bannerView;
@property(nonatomic) __weak id <SCCognacAppActiveCardViewDelegate> delegate; // @synthesize delegate=_delegate;
- (id)initWithFrame:(struct CGRect)arg1 imageDownloader:(id)arg2 appCoverImageURL:(id)arg3 appLogoImageURL:(id)arg4;
- (void)layoutSubviews;
@property(copy, nonatomic) NSString *presenceText;

@end

