//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCTCallButtonsDelegate-Protocol.h"
#import "SCTDrawerHeightListener-Protocol.h"
#import "SCTFullscreenBottomPaneDelegate-Protocol.h"
#import "SCTFullscreenStateProvider-Protocol.h"
#import "SCTLocalMediaViewListener-Protocol.h"
#import "SCTV3ELMShrinkTarget-Protocol.h"
#import "SCTV3FullscreenAnimationsProvider-Protocol.h"
#import "SCTV3FullscreenLayoutDelegate-Protocol.h"
#import "SCTV3FullscreenRubberBandRegionsListener-Protocol.h"
#import "UIGestureRecognizerDelegate-Protocol.h"

@class NSArray, NSOrderedSet, NSString, NSTimer, SCGrowingButton, SCTCallButtons, SCTFullscreenBottomPane, SCTLocalMediaView, SCTSingleTaskPerformer, SCTV3FullscreenLayout, UIPanGestureRecognizer, UITapGestureRecognizer, UIView;
@protocol SCTFullscreenCallingServices, SCTV3ChatServices, SCTV3FullscreenBarProtocol, SCTalkUIController;

@interface SCTV3FullscreenController : NSObject <SCTV3FullscreenRubberBandRegionsListener, SCTV3FullscreenLayoutDelegate, SCTFullscreenBottomPaneDelegate, SCTCallButtonsDelegate, SCTLocalMediaViewListener, UIGestureRecognizerDelegate, SCTV3FullscreenAnimationsProvider, SCTFullscreenStateProvider, SCTDrawerHeightListener, SCTV3ELMShrinkTarget>
{
    id <SCTalkUIController> _talkUIController;
    id <SCTV3ChatServices> _chatServices;
    id <SCTV3FullscreenBarProtocol> _fullscreenBarController;
    id <SCTFullscreenCallingServices> _callingServices;
    SCTV3FullscreenLayout *_fullscreenLayout;
    UIView *_fullscreenLayoutContainer;
    UIView *_localIssuePane;
    SCTLocalMediaView *_localMediaView;
    unsigned long long _localMediaLocation;
    SCTSingleTaskPerformer *_panGestureAnimationsPerformer;
    unsigned long long _panGestureState;
    _Bool _isDraggingInDismissalState;
    UIPanGestureRecognizer *_fullscreenPanGestureRecognizer;
    UITapGestureRecognizer *_fullscreenTapGestureRecognizer;
    UITapGestureRecognizer *_elmTapGestureRecognizer;
    NSOrderedSet *_existingPreviews;
    NSArray *_gridOnDragGestureBegan;
    long long _fullscreenDismissedType;
    NSTimer *_hideBottomPaneTimer;
    _Bool _groupConversation;
    _Bool _trainBeingPaused;
    NSString *_trainToken;
    _Bool _fullscreenWidgetsHidden;
    SCGrowingButton *_caretButton;
    SCTCallButtons *_callButtons;
    SCTFullscreenBottomPane *_fullscreenBottomPane;
}

- (void).cxx_destruct;
- (void)_addParticipantsJoiningFullscreen:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_animateViewAlpha:(id)arg1 targetAlpha:(double)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_animationsForPanGestureState:(unsigned long long)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_caretPressed:(id)arg1;
- (void)_enterFullscreenWithPreviews:(id)arg1 attachingLocalMediaView:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (id)_existingPreviewsForUsername:(id)arg1;
- (void)_exitFullscreenWithPreviews:(id)arg1 gestureRelated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (_Bool)_fullscreenCallingMedia:(long long)arg1;
- (_Bool)_fullscreenCallingState:(long long)arg1;
- (_Bool)_isUsernameInJoiningParticipants:(id)arg1 participants:(id)arg2;
- (void)_pan:(id)arg1;
- (id)_participantsJoiningFullscreen:(id)arg1;
- (id)_participantsLeavingFullscreen:(id)arg1;
- (id)_participantsLeavingGroup:(id)arg1;
- (void)_prepareDismissCaret;
- (void)_prepareFullscreenLayout;
- (void)_prepareLocalIssuePane;
- (void)_preparePreviewsTargetRectDragOffsets:(long long)arg1;
- (id)_previewsToAdd:(id)arg1;
- (id)_previewsToRemove:(id)arg1;
- (void)_releaseLocalMediaView;
- (void)_removeFullscreenLayout;
- (void)_removeParticipantsLeavingFullscreen:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (_Bool)_shouldEnterFullscreen:(id)arg1;
- (_Bool)_shouldEnterFullscreenAutomatically:(id)arg1;
- (_Bool)_shouldExitFullscreen:(id)arg1;
- (void)_tapFullscreen:(id)arg1;
- (void)_tapLocalMedia:(id)arg1;
- (void)_updateLocalMediaLocation:(unsigned long long)arg1;
- (void)_updateWidgetsVisibilityState:(unsigned long long)arg1;
- (void)_updateWidgetsVisibilityState:(unsigned long long)arg1 completion:(CDUnknownBlockType)arg2;
- (struct CGRect)_videoViewPositionForUsername:(id)arg1;
- (id)animationsForState:(id)arg1;
@property(retain, nonatomic) SCTCallButtons *callButtons; // @synthesize callButtons=_callButtons;
@property(retain, nonatomic) SCGrowingButton *caretButton; // @synthesize caretButton=_caretButton;
- (void)didPressEndCallButton:(id)arg1;
- (void)didPressJoinCall:(unsigned long long)arg1 button:(id)arg2;
- (void)didPressStartCall:(unsigned long long)arg1 button:(id)arg2;
@property(retain, nonatomic) SCTFullscreenBottomPane *fullscreenBottomPane; // @synthesize fullscreenBottomPane=_fullscreenBottomPane;
- (void)fullscreenBottomPaneButtonPressed:(id)arg1;
- (void)fullscreenBottomPaneChatPressed:(id)arg1;
@property(nonatomic) _Bool fullscreenWidgetsHidden; // @synthesize fullscreenWidgetsHidden=_fullscreenWidgetsHidden;
- (_Bool)gestureRecognizer:(id)arg1 shouldRequireFailureOfGestureRecognizer:(id)arg2;
- (void)handleStateChangedReason:(long long)arg1;
- (id)initWithChatServices:(id)arg1 callingServices:(id)arg2 fullscreenBarController:(id)arg3 talkUIController:(id)arg4 groupConversation:(_Bool)arg5;
- (_Bool)isFullscreenActivated;
- (id)localMediaView;
- (void)localMediaView:(id)arg1 didMoveToSuperview:(id)arg2;
- (void)localMediaView:(id)arg1 willMoveToSuperview:(id)arg2;
- (void)mediaChangedInLocalMediaView:(id)arg1;
- (void)onDrawerDraggingEnded;
- (void)onDrawerDraggingStarted;
- (void)onDrawerHeightChange:(double)arg1 targetHeight:(double)arg2;
- (void)previewCoveringInput:(_Bool)arg1 caller:(id)arg2;
- (void)reattachLocalMediaViewAfterShrinking;
- (id)shrunkLocalMediaMeasurements;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

