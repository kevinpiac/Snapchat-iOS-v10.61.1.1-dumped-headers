//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCTV3ChatServices-Protocol.h"
#import "SCTV3TooltipServicesDelegate-Protocol.h"

@class NSString, SCChatInputDismissFeature, SCChatInputViewController, SCTV3ELMContainerView, SCTV3FullscreenStateListenerAnnouncer, SCTV3TooltipServices, SCTalkV3Manager, UIView;
@protocol SCTCognacChatDockEventListener, SCTV3ClientDependenciesProvider;

@interface SCTV3ChatServices : NSObject <SCTV3TooltipServicesDelegate, SCTV3ChatServices>
{
    id <SCTV3ClientDependenciesProvider> _chatDP;
    SCTalkV3Manager *_talkManager;
    SCChatInputViewController *_chatInputController;
    id <SCTCognacChatDockEventListener> _chatDockEventListener;
    UIView *_localFullscreenPane;
    UIView *_callCardContainer;
    UIView *_callCardDimmedView;
    UIView *_debugMediaStatsView;
    UIView *_presenceBarPane;
    UIView *_callButtonsPane;
    SCTV3ELMContainerView *_elmContainerView;
    UIView *_fullscreenPane;
    UIView *_fullscreenBottomPane;
    UIView *_fullscreenCaretButton;
    UIView *_fullscreenCallButtons;
    unsigned long long _fullscreenBottomPaneType;
    _Bool _keyboardVisibleBeforeELM;
    _Bool _keyboardVisibleBeforeFullscreen;
    _Bool _localMediaPaneResizable;
    _Bool _isLocalMediaPaneSmall;
    unsigned long long _uiStyle;
    _Bool _scrollLockForced;
    SCChatInputDismissFeature *_dismissFeature;
    unsigned long long _TECHDEBT_publishedMedia;
    SCTV3TooltipServices *_tooltipServices;
    SCTV3FullscreenStateListenerAnnouncer *_fullscreenAnnouncer;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) unsigned long long TECHDEBT_publishedMedia; // @synthesize TECHDEBT_publishedMedia=_TECHDEBT_publishedMedia;
- (void)TECHDEBT_publishedMediaChanged:(unsigned long long)arg1;
- (void)TECHDEBT_setCallState:(unsigned long long)arg1;
- (id)_alertBodyForIncompatibleRecipients:(id)arg1 remoteParticipants:(id)arg2;
- (id)_alertTitleForIncompatibleRecipients:(id)arg1 remoteParticipants:(id)arg2;
- (id)_displayNamesFromUsernames:(id)arg1 remoteParticipants:(id)arg2;
- (_Bool)_hasPresentingAccessory;
- (_Bool)_isGroupConvo;
- (void)_offsetInputViewByRatio:(double)arg1;
- (void)_toggleFullscreenBottomPaneToType:(unsigned long long)arg1;
- (void)_toggleFullscreenBottomPaneToType:(unsigned long long)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_updateAddLensTooltipVisiblity;
- (void)_updateFullscreenPaneHierarchy:(unsigned long long)arg1;
- (void)_updateFullscreenPaneLayout;
- (void)_updatePresenceContainerHierarchy:(unsigned long long)arg1;
- (void)_updatePresenceContainerLayout:(long long)arg1;
- (void)_updatePresenceVisibility;
- (void)_updateScrollLockState;
- (void)attachCallButtonsPane:(id)arg1;
- (void)attachCallCardPane:(id)arg1 dimmedView:(id)arg2;
- (void)attachExpandedLocalMediaPane:(id)arg1;
- (void)attachFullscreenPane:(id)arg1 bottomPane:(id)arg2 caretButton:(id)arg3 callButtons:(id)arg4 drawerHeightListener:(id)arg5;
- (void)attachLocalFullscreenPane:(id)arg1;
- (void)attachMediaStatsDebugPane:(id)arg1;
- (void)attachPresenceBarPane:(id)arg1 chatDockEventListener:(id)arg2;
- (void)detachCallButtonsPane;
- (void)detachCallCardPane;
- (void)detachExpandedLocalMediaPane;
- (void)detachFullscreenPane;
- (void)detachLocalFullscreenPane;
- (void)detachMediaStatsDebugPane;
- (void)detachPresenceBarPane;
- (id)displayContextForTooltip:(unsigned long long)arg1;
@property(readonly, nonatomic) SCTV3FullscreenStateListenerAnnouncer *fullscreenAnnouncer; // @synthesize fullscreenAnnouncer=_fullscreenAnnouncer;
- (CDUnknownBlockType)fullscreenDismissalCancelled;
- (CDUnknownBlockType)fullscreenDismissalStarted;
- (id)fullscreenView;
- (void)hideActiveAccessoryIfNeeded;
- (id)initWithChatDP:(id)arg1 talkManager:(id)arg2;
- (void)reportCallIncompatible:(id)arg1;
- (void)resetUI;
- (void)setChatInputController:(id)arg1;
- (void)setExpandedLocalMediaAnimationProgress:(double)arg1;
- (void)setScrollLocked:(_Bool)arg1;
- (void)setUIStyle:(unsigned long long)arg1;
- (void)setupCallButtonsIfNeeded;
@property(readonly, nonatomic) SCTV3TooltipServices *tooltipServices; // @synthesize tooltipServices=_tooltipServices;
- (void)updateFullscreenInputMaybe:(unsigned long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

