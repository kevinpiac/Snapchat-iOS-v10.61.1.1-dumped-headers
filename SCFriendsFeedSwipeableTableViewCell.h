//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCFeedTableViewCell.h"

#import "SCFeedComponentViewDelegate-Protocol.h"
#import "SCFeedIconViewDelegate-Protocol.h"
#import "SCFeedStoryViewDelegate-Protocol.h"
#import "SCPannableCell-Protocol.h"

@class NSString, UIImageView, UIView;
@protocol SCFeedComponentBaseView;

@interface SCFriendsFeedSwipeableTableViewCell : SCFeedTableViewCell <SCFeedComponentViewDelegate, SCPannableCell, SCFeedStoryViewDelegate, SCFeedIconViewDelegate>
{
    UIImageView *_swipeBackgroundIconView;
    UIView<SCFeedComponentBaseView> *_feedComponentView;
}

- (void).cxx_destruct;
- (void)_bounceRepeatedlyAfterDelays:(id)arg1;
- (void)_bounceWithCompletion:(CDUnknownBlockType)arg1;
- (void)_bounceWithMagnitude:(long long)arg1 completion:(CDUnknownBlockType)arg2;
- (double)_bounceXOffsetWithMagnitude:(long long)arg1;
- (void)bounce;
- (void)bounceRepeatedlyIfNecessary;
- (_Bool)delayedTapGestureRecognizerShouldBegin;
- (id)dismissBaseView;
- (struct CGRect)dismissBaseViewFrame;
- (id)dismissFeedIconView;
- (_Bool)doubleTapGestureRecognizerShouldBegin;
- (void)endPanning:(_Bool)arg1;
@property(retain, nonatomic) UIView<SCFeedComponentBaseView> *feedComponentView; // @synthesize feedComponentView=_feedComponentView;
- (void)handlePressOnBitmoji;
- (void)handlePressOnCallingButton:(id)arg1;
- (void)handlePressOnCognacButton:(id)arg1;
- (void)handlePressOnReplyButton;
- (void)handlePressOnRetryButton:(id)arg1;
- (void)handlePressOnSnapButton;
- (void)handlePressOnStoryIcon;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)layoutSubviews;
- (_Bool)longPressGestureRecognizerShouldBegin;
- (void)panOverWithOffset:(double)arg1 isDragging:(_Bool)arg2;
- (void)prepareForReuse;
- (void)resetNextVC:(id)arg1;
- (void)setAnimationHandler:(id)arg1;
- (void)setHighlighted:(_Bool)arg1 animated:(_Bool)arg2;
- (void)setImageDownloader:(id)arg1;
- (void)setViewModel:(id)arg1;
- (_Bool)tapGestureRecognizerShouldBegin;
- (void)updateFriendMojiView;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
