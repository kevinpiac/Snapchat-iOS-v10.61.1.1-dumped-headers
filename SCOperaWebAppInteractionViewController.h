//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "SCEventListener-Protocol.h"
#import "SCOperaEventListener-Protocol.h"
#import "SCOperaWebAppAccessoryEventListener-Protocol.h"
#import "SCOperaWebAppChatPreviewControllerDelegate-Protocol.h"
#import "SCOperaWebAppInteractionViewDelegate-Protocol.h"

@class NSString, SCOperaEventListenerAnnouncer, SCOperaWebAppAccessoryEventListenerAnnouncer, SCOperaWebAppAudioAccessoryController, SCOperaWebAppChatAccessoryController, SCOperaWebAppChatPreviewController, SCOperaWebAppInteractionView, SCOperaWebAppLayer, UIView;
@protocol SCOperaWebAppPresenceFrameProvider;

@interface SCOperaWebAppInteractionViewController : UIViewController <SCOperaWebAppInteractionViewDelegate, SCOperaWebAppAccessoryEventListener, SCOperaEventListener, SCEventListener, SCOperaWebAppChatPreviewControllerDelegate>
{
    UIView *_layerView;
    SCOperaEventListenerAnnouncer *_operaEventAnnouncer;
    SCOperaWebAppAccessoryEventListenerAnnouncer *_accessoryEventAnnouncer;
    SCOperaWebAppAudioAccessoryController *_audioAccessoryController;
    SCOperaWebAppChatAccessoryController *_chatAccessoryController;
    SCOperaWebAppChatPreviewController *_chatPreviewController;
    SCOperaWebAppLayer *_layer;
    id <SCOperaWebAppPresenceFrameProvider> _presenceFrameProvider;
}

+ (id)_registeredOperaEvents;
- (void).cxx_destruct;
- (void)_didPan:(id)arg1;
- (void)_initAccessories;
- (void)_setupAccessoriesForFriends;
- (void)_setupViewForNonFriends;
- (_Bool)_shouldShowAccessoryViewForFriends:(id)arg1;
- (void)_updateAccessories;
- (void)_viewDidEnterBackground;
- (id)audioAccessoryController;
- (id)chatAccessoryController;
- (id)chatPreviewController;
- (void)chatPreviewControllerDidFadeOutPreview:(id)arg1;
- (void)chatPreviewControllerDidTapPreview:(id)arg1;
- (void)didTriggerEventWithEventName:(id)arg1 announcerIdentifier:(id)arg2 extraData:(id)arg3;
- (id)initWithOperaEventAnnouncer:(id)arg1 layerView:(id)arg2;
- (void)interactionViewDidClickCloseButton;
- (void)interactionViewDidClickDismissButton;
- (void)interactionViewDidClickInviteButton;
- (void)interactionViewDidClickSettingsButton;
- (_Bool)interactionViewShouldShowAccessoryView:(id)arg1;
@property(retain, nonatomic) SCOperaWebAppLayer *layer; // @synthesize layer=_layer;
- (void)loadView;
- (void)operaViewDidSendEvent:(id)arg1 context:(id)arg2 params:(id)arg3;
- (void)operaWebAppAccessoryControllerDidSendEvent:(id)arg1 params:(id)arg2;
@property(nonatomic) __weak id <SCOperaWebAppPresenceFrameProvider> presenceFrameProvider; // @synthesize presenceFrameProvider=_presenceFrameProvider;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(retain, nonatomic) SCOperaWebAppInteractionView *view; // @dynamic view;

@end

