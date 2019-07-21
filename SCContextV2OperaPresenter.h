//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCContextV2Presenter.h"

#import "SCCaptureWorkflowResultDelegate-Protocol.h"
#import "SCContextCardFrameProvider-Protocol.h"
#import "SCContextMessagingControllerDelegate-Protocol.h"
#import "SCOperaContextMenuController-Protocol.h"

@class NSString, SCContextMessagingController, SCContextSession;
@protocol NavigationDelegate, SCOperaImageProvider;

@interface SCContextV2OperaPresenter : SCContextV2Presenter <SCContextCardFrameProvider, SCContextMessagingControllerDelegate, SCCaptureWorkflowResultDelegate, SCOperaContextMenuController>
{
    SCContextSession *_legacyContextSession;
    SCContextMessagingController *_contextCardsMessagingController;
    SCContextMessagingController *_swipeUpMessagingController;
    id <SCOperaImageProvider> _imageProvider;
    CDUnknownBlockType _cardsAboveKeyboardExpansionStateListener;
    _Bool _cardsAboveKeyboardExpansionState;
    id <NavigationDelegate> _navigationDelegate;
}

- (void).cxx_destruct;
- (id)_contextCardsMessagingControllerWithParent:(id)arg1;
- (id)_createMessagingControllerWithParent:(id)arg1;
- (void)_logChatFieldPresented;
- (id)_swipeUpMessagingController;
- (void)captureWorkflowDidDismissWithDidSendSnap:(_Bool)arg1;
@property(nonatomic) _Bool cardsAboveKeyboardExpansionState; // @synthesize cardsAboveKeyboardExpansionState=_cardsAboveKeyboardExpansionState;
- (void)contextActionsHandler:(id)arg1 wantsToRegisterExpansionStateListener:(CDUnknownBlockType)arg2;
- (_Bool)contextActionsHandlerCardsShouldBeCollapsed:(id)arg1;
- (void)contextActionsHandlerWantsToExpandFromCollapsedState:(id)arg1;
- (void)contextActionsHandlerWantsToOpenReplyCamera:(id)arg1 triggerInfo:(id)arg2;
- (_Bool)contextIsPresented;
- (id)createSwipeUpViewController;
- (void)didDismissCardsWithTriggerInfo:(id)arg1;
- (void)didPresentCardsWithTriggerInfo:(id)arg1;
- (struct CGRect)getChatCardFrame;
- (id)initWithSession:(id)arg1 legacySession:(id)arg2 viewController:(id)arg3 imageProvider:(id)arg4;
- (void)launchChatWithTriggerInfo:(id)arg1;
- (void)launchReplyCameraWithTriggerInfo:(id)arg1;
- (void)messagingControllerDidFinishPresentingSnapAccessoryView:(id)arg1;
- (void)messagingControllerDidLeaveFullScreen:(id)arg1;
- (void)messagingControllerDidWillBeginPresentingSnapAccessoryView:(id)arg1;
- (void)messagingControllerWantsToCollapseCardsAboveKeyboard:(id)arg1;
- (void)messagingControllerWillTransitionToFullScreen:(id)arg1;
@property(nonatomic) __weak id <NavigationDelegate> navigationDelegate; // @synthesize navigationDelegate=_navigationDelegate;
- (id)swipeUpContentViewController;
- (id)topMostPresentedViewController;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

