//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCTPresencePill.h"

@class SCTChatPresencePillState, SCTPresenceTypingBubbleView, UIView;
@protocol SCTChatPresencePillDelegate;

@interface SCTChatPresencePill : SCTPresencePill
{
    double _stateUpdatedTimeInterval;
    SCTPresenceTypingBubbleView *_typingBubble;
    UIView *_nudgeTextView;
    id <SCTChatPresencePillDelegate> _delegate;
    SCTChatPresencePillState *_state;
    UIView *_mediaView;
}

- (void).cxx_destruct;
- (void)_animateBitmojiToTypingState:(long long)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_animateToState:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (_Bool)_avatarNeededForState:(id)arg1;
- (struct SCTPresenceBitmojiState)_bitmojiStateForState:(id)arg1;
- (id)_colorForPresenceState:(_Bool)arg1;
- (void)_didLoadAvatarView;
- (void)_loadBitmojiView;
- (long long)_mediaStatusFromParticipantState:(id)arg1 connecting:(_Bool)arg2;
- (double)_pillHeightForState:(id)arg1;
- (struct CGSize)_pillSizeForState:(id)arg1;
- (double)_pillWidthForState:(id)arg1;
- (_Bool)_shouldLoadAvatarView;
- (void)_updateColors;
- (void)_updateMediaView:(id)arg1;
- (void)_updateTypingIndicator;
- (void)_updateUIForModeAudio;
- (void)_updateUIForModeNoCall;
- (void)_updateUIForModeNoMedia;
- (void)_updateUIForModeRinging;
- (void)_updateUIForModeVideo;
- (void)animateAvatarUpdateWithCompletion:(CDUnknownBlockType)arg1;
- (void)animateToMode:(unsigned long long)arg1 completion:(CDUnknownBlockType)arg2;
- (void)animateToState:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (double)bitmojiScale;
@property(nonatomic) __weak id <SCTChatPresencePillDelegate> delegate; // @synthesize delegate=_delegate;
- (double)heightForState:(id)arg1;
- (id)init;
@property(readonly, nonatomic) UIView *mediaView; // @synthesize mediaView=_mediaView;
@property(readonly, nonatomic) _Bool needsAvatarUpdate;
- (void)reattachVideoView:(id)arg1;
- (void)setExpansionBitmojiScale:(double)arg1 pillScale:(double)arg2;
- (void)setHorizontalStretch:(double)arg1;
@property(readonly, nonatomic) SCTChatPresencePillState *state; // @synthesize state=_state;
@property(readonly, nonatomic) double timeIntervalSinceStateChange;
- (void)updateLabelText;
- (void)updateMediaViewWithLocalParticipantState:(id)arg1 remoteParticipantState:(id)arg2 fullscreen:(_Bool)arg3;
- (void)updateToState:(id)arg1;
- (double)widthForState:(id)arg1;

@end

