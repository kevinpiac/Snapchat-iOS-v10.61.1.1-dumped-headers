//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIImageView;

@interface SCCognacChatDockAvatarView : UIView
{
    UIImageView *_bodyView;
    UIImageView *_leftHandView;
    UIImageView *_rightHandView;
    UIView *_blurView;
}

- (void).cxx_destruct;
- (void)_animateWithCompletion:(CDUnknownBlockType)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)setAvatar:(id)arg1 completion:(CDUnknownBlockType)arg2;

@end

