//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "SCTLocalMediaViewListener-Protocol.h"
#import "SCTV3ELMShrinkTarget-Protocol.h"

@class NSDate, NSString, SCTCallCardIncomingCallAccessory, SCTCallCardMediaToggleButton, SCTFancyButton, SCTLocalMediaView, UILabel, UIPanGestureRecognizer;
@protocol SCTActiveCallCardDelegate, SCTalkUIController;

@interface SCTCallCard : UIView <SCTV3ELMShrinkTarget, SCTLocalMediaViewListener>
{
    id <SCTActiveCallCardDelegate> _delegate;
    id <SCTalkUIController> _talkUIController;
    double _contentHeight;
    double _visibleHeight;
    UIView *_contentView;
    UIView *_dimmedBackgroundView;
    UILabel *_titleLabel;
    UILabel *_messageLabel;
    UILabel *_disclaimerLabel;
    SCTLocalMediaView *_localMediaView;
    SCTCallCardIncomingCallAccessory *_acceptAccessory;
    SCTCallCardIncomingCallAccessory *_rejectAccessory;
    SCTCallCardMediaToggleButton *_audioToggleButton;
    SCTCallCardMediaToggleButton *_videoToggleButton;
    SCTFancyButton *_callEndButton;
    NSDate *_callEstablishedDate;
    long long _publishedMedia;
    UIPanGestureRecognizer *_panGestureRecognizer;
    double _dragStartOffset;
    double _prevDragOffset;
    _Bool _trainBeingPaused;
    _Bool _accessoriesEnabled;
    unsigned long long _mode;
}

- (void).cxx_destruct;
- (void)_animateSubviewsToInCallModeWithCompletion:(CDUnknownBlockType)arg1;
- (void)_animateSubviewsToMessageDisplayModeWithMessageText:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_animateVisibleHeight:(double)arg1 updatingDimmedBackground:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_animateVisibleHeight:(double)arg1 updatingDimmedBackground:(_Bool)arg2 duration:(double)arg3 completion:(CDUnknownBlockType)arg4;
- (void)_attachLocalMediaView;
- (void)_audioToggleButtonPressed;
- (void)_callEndButtonPressed;
- (double)_contentHeightForMode:(unsigned long long)arg1;
- (void)_dismissButtonPressed;
- (void)_initDimmedView;
- (void)_initSubviews;
- (void)_initSubviewsForInCall;
- (void)_initSubviewsForIncomingCall;
- (void)_initSubviewsForMessageDisplay;
- (void)_initSubviewsForOutgoingCall;
- (long long)_isLayoutDirectionRTL;
- (_Bool)_isLocalMediaViewAttached;
- (void)_joinButtonPressed;
- (void)_pan:(id)arg1;
- (void)_performPopupAnimation;
- (void)_remakeConstraintsForDisclaimer;
- (void)_remakeLocalMediaViewConstraints;
- (void)_resetAccessibilityIdentifier;
- (void)_runActiveCallUpdateTimer;
- (void)_setupLabelsForInCallMode;
- (void)_updateActiveCallText;
- (void)_updateDimmedBackgroundAlpha;
- (void)_updateVisibleHeight:(double)arg1;
- (void)_videoToggleButtonPressed;
@property(readonly, nonatomic) SCTCallCardIncomingCallAccessory *acceptAccessory;
- (void)animateToInCallModeWithCompletion:(CDUnknownBlockType)arg1;
- (void)animateToMessageDisplayModeWithMessageText:(id)arg1 completion:(CDUnknownBlockType)arg2;
@property(readonly, nonatomic) SCTCallCardMediaToggleButton *audioToggleButton;
- (id)callEndButton;
@property(readonly, nonatomic) UIView *contentView;
@property(readonly, nonatomic) UIView *dimmedView;
@property(readonly, nonatomic) UILabel *disclaimerLabel;
@property(copy, nonatomic) NSString *disclaimerText;
- (id)expandedLocalMediaShrinkTarget;
- (void)hideWithCompletion:(CDUnknownBlockType)arg1;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (id)initWithDelegate:(id)arg1 talkUIContoller:(id)arg2 mode:(unsigned long long)arg3;
@property(nonatomic, getter=isAccessoriesEnabled) _Bool accessoriesEnabled; // @synthesize accessoriesEnabled=_accessoriesEnabled;
@property(readonly, nonatomic) _Bool isPresented;
- (void)localMediaView:(id)arg1 didMoveToSuperview:(id)arg2;
- (void)localMediaView:(id)arg1 willMoveToSuperview:(id)arg2;
- (void)mediaChangedInLocalMediaView:(id)arg1;
@property(copy, nonatomic) NSString *message;
@property(readonly, nonatomic) UILabel *messageLabel;
@property(readonly, nonatomic) unsigned long long mode; // @synthesize mode=_mode;
- (void)reattachLocalMediaViewAfterShrinking;
@property(readonly, nonatomic) SCTCallCardIncomingCallAccessory *rejectAccessory;
@property(copy, nonatomic) NSString *title;
- (void)showWithCompletion:(CDUnknownBlockType)arg1;
- (id)shrunkLocalMediaMeasurements;
@property(readonly, nonatomic) UILabel *titleLabel;
- (void)updatePublishedMedia:(long long)arg1;
- (void)updateToMessageDisplayModeWithMessageText:(id)arg1;
@property(readonly, nonatomic) SCTCallCardMediaToggleButton *videoToggleButton;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

