//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCScalingButton.h"

#import "SCProfileHeaderAvatarViewDelegate-Protocol.h"
#import "SCStoriesModelUpdateListener-Protocol.h"
#import "SCTraceEnabled-Protocol.h"

@class NSString, SCBitmojiAvatarViewModel, SCBitmojiManager, SCCircularBadgeView, SCDisposableObserverLifecycle, SCProfileHeaderAvatarView, SCShapeView, SCUserSession, Story, UIView;

@interface SCBitmojiProfileView : SCScalingButton <SCStoriesModelUpdateListener, SCTraceEnabled, SCProfileHeaderAvatarViewDelegate>
{
    SCDisposableObserverLifecycle *_observerLifecycle;
    _Bool _badged;
    _Bool _showingBitmoji;
    _Bool _shouldRedisplayBadgeCount;
    _Bool _didRedisplayBadgeCount;
    SCProfileHeaderAvatarView *_profileHeaderAvatarView;
    long long _badgeStyle;
    UIView *_profileContentView;
    SCShapeView *_badgeView;
    SCCircularBadgeView *_circleBadgeIconView;
    SCBitmojiManager *_bitmojiManager;
    CDUnknownBlockType _badgeFlipHandler;
    long long _currentBadgeCount;
    SCUserSession *_userSession;
    SCBitmojiAvatarViewModel *_bitmojiAvatarViewModel;
    Story *_displayedStory;
    NSString *_bitmojiSelfieId;
    NSString *_bitmojiAvatarId;
    double _avatarViewInset;
}

- (void).cxx_destruct;
- (void)_animateBadgeIn;
- (void)_animateBadgeOut:(CDUnknownBlockType)arg1;
- (id)_badgeColor;
- (id)_badgePathForStyle:(long long)arg1;
- (id)_bitmojiAvaterViewConfiguration:(id)arg1;
- (void)_handleStoryOnMainThread:(id)arg1 numFailedStories:(long long)arg2;
- (void)_refreshAvatarViewForStoryUpdates;
- (void)_refreshBitmoji;
- (void)_updateAvatarViewWithConfiguration:(id)arg1;
- (void)_updateCircleBadgeIconWithCount:(unsigned long long)arg1;
- (void)applicationWillEnterForeground:(id)arg1;
@property(nonatomic) double avatarViewInset; // @synthesize avatarViewInset=_avatarViewInset;
@property(copy, nonatomic) CDUnknownBlockType badgeFlipHandler; // @synthesize badgeFlipHandler=_badgeFlipHandler;
@property(readonly, nonatomic) long long badgeStyle; // @synthesize badgeStyle=_badgeStyle;
@property(retain, nonatomic) SCShapeView *badgeView; // @synthesize badgeView=_badgeView;
@property(retain, nonatomic) NSString *bitmojiAvatarId; // @synthesize bitmojiAvatarId=_bitmojiAvatarId;
@property(retain, nonatomic) SCBitmojiAvatarViewModel *bitmojiAvatarViewModel; // @synthesize bitmojiAvatarViewModel=_bitmojiAvatarViewModel;
@property(retain, nonatomic) SCBitmojiManager *bitmojiManager; // @synthesize bitmojiManager=_bitmojiManager;
@property(retain, nonatomic) NSString *bitmojiSelfieId; // @synthesize bitmojiSelfieId=_bitmojiSelfieId;
@property(retain, nonatomic) SCCircularBadgeView *circleBadgeIconView; // @synthesize circleBadgeIconView=_circleBadgeIconView;
@property(nonatomic) long long currentBadgeCount; // @synthesize currentBadgeCount=_currentBadgeCount;
@property(nonatomic) _Bool didRedisplayBadgeCount; // @synthesize didRedisplayBadgeCount=_didRedisplayBadgeCount;
@property(nonatomic) __weak Story *displayedStory; // @synthesize displayedStory=_displayedStory;
- (id)initWithFrame:(struct CGRect)arg1 bitmojiManager:(id)arg2 userSession:(id)arg3;
- (_Bool)isAccessibilityElement;
@property(readonly, nonatomic, getter=isBadged) _Bool badged; // @synthesize badged=_badged;
@property(nonatomic, getter=isShowingBitmoji) _Bool showingBitmoji; // @synthesize showingBitmoji=_showingBitmoji;
- (void)layoutSubviews;
- (id)newBadgeView;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
@property(retain, nonatomic) UIView *profileContentView; // @synthesize profileContentView=_profileContentView;
@property(readonly, nonatomic) SCProfileHeaderAvatarView *profileHeaderAvatarView; // @synthesize profileHeaderAvatarView=_profileHeaderAvatarView;
- (void)removeInFlightAnimation;
- (void)sendToPostToStory;
- (void)setBadged:(_Bool)arg1 badgeCount:(long long)arg2 animated:(_Bool)arg3;
@property(nonatomic) _Bool shouldRedisplayBadgeCount; // @synthesize shouldRedisplayBadgeCount=_shouldRedisplayBadgeCount;
@property(retain, nonatomic) SCUserSession *userSession; // @synthesize userSession=_userSession;
- (void)storiesModelDidUpdateWithParams:(id)arg1;
- (void)updateVisibleBadgeWithCount:(long long)arg1 animated:(_Bool)arg2;
- (_Bool)willHandleDisplayedStoryUploadSuccess:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

