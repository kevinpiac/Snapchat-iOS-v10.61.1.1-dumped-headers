//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "SCOperaSubscribeButtonViewObject-Protocol.h"

@class NSString, UIImageView, UILabel, UITapGestureRecognizer;
@protocol SCOperaSubscribeButtonViewDelegate;

@interface SCOperaSubscribeButtonCondensedView : UIView <SCOperaSubscribeButtonViewObject>
{
    UITapGestureRecognizer *_tapGesture;
    UIView *_titleLabelContainer;
    _Bool _isLabelAnimating;
    _Bool _isSubscribeAnimationActive;
    UIImageView *_imageView;
    UILabel *_titleLabel;
    _Bool _isSubscribed;
    id <SCOperaSubscribeButtonViewDelegate> _delegate;
}

+ (double)largestExpectedWidth;
+ (double)smallestExpectedWidth;
- (void).cxx_destruct;
- (void)_animateImageViewToImage:(id)arg1;
- (void)_animateTitleLabelToOriginX:(double)arg1 delay:(double)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_growAndShrinkImage;
- (void)_subscribeButtonViewTapped;
@property(nonatomic) __weak id <SCOperaSubscribeButtonViewDelegate> delegate; // @synthesize delegate=_delegate;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1 isSubscribed:(_Bool)arg2;
- (_Bool)isAnimating;
@property(nonatomic) _Bool isSubscribed; // @synthesize isSubscribed=_isSubscribed;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)updateIsSubscribedWithNoAnimations:(_Bool)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

