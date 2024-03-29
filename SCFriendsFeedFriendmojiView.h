//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSTimer, SCFriendsFeedFriendmojiViewModel, UILabel;

@interface SCFriendsFeedFriendmojiView : UIView
{
    UILabel *_friendmojiLabel;
    struct CGSize _displayedFriendmojiSize;
    NSTimer *_streakAnimationTimer;
    SCFriendsFeedFriendmojiViewModel *_viewModel;
}

- (void).cxx_destruct;
- (void)_animateStreakIndicator;
- (void)_startStreakAnimationIfNecessary;
- (void)_updateLabelWithText:(id)arg1 size:(struct CGSize)arg2;
- (id)initWithFrame:(struct CGRect)arg1;
- (struct CGSize)intrinsicContentSize;
- (void)layoutSubviews;
@property(retain, nonatomic) SCFriendsFeedFriendmojiViewModel *viewModel; // @synthesize viewModel=_viewModel;
- (void)willMoveToSuperview:(id)arg1;

@end

