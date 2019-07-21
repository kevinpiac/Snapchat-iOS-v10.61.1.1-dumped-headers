//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIButton.h>

@class SCCognacChatDockPresenceInfo, UIView;

@interface SCCognacChatDockBadgeView : UIButton
{
    UIView *_shadowView;
    SCCognacChatDockPresenceInfo *_presenceInfo;
    struct CGSize _badgeSize;
}

- (void).cxx_destruct;
- (void)_animateFromOldPresenceInfo:(id)arg1 newPresenceInfo:(id)arg2 animationDelay:(double)arg3 pulse:(_Bool)arg4;
- (void)_performAppearAnimationWithAnimationDelay:(double)arg1 presenceInfo:(id)arg2;
- (void)_performHideAnimation;
- (void)_performScaleAnimationWithDelay:(double)arg1;
- (void)_updateTitleWithPresenceInfo:(id)arg1;
@property(readonly, nonatomic) struct CGSize badgeSize; // @synthesize badgeSize=_badgeSize;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)setPresenceInfo:(id)arg1 animationDelay:(double)arg2 pulse:(_Bool)arg3;

@end

