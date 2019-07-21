//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCFeature.h"

#import "SCPreviewFeatureSaveSendPrompt-Protocol.h"
#import "SCSaveSendPromptControllerDelegate-Protocol.h"

@class NSString, SCPreviewConfiguration, SCPreviewView, SCSaveSendPromptController, SCUserSession;
@protocol SCPreviewFeatureSaveSendPromptDelegate, SCSaveSendPromptRecipientProvider;

@interface SCPreviewFeatureSaveSendPromptImpl : SCFeature <SCPreviewFeatureSaveSendPrompt, SCSaveSendPromptControllerDelegate>
{
    SCUserSession *_userSession;
    SCPreviewConfiguration *_configuration;
    SCPreviewView *_previewView;
    SCSaveSendPromptController *_saveSendPromptController;
    id <SCSaveSendPromptRecipientProvider> _saveSendPromptRecipientProvider;
    _Bool _sendToAlreadyShown;
    _Bool _shouldSendWithoutSendToPage;
    _Bool _activated;
    id <SCPreviewFeatureSaveSendPromptDelegate> _delegate;
}

- (void).cxx_destruct;
@property _Bool activated; // @synthesize activated=_activated;
- (void)configureWithView:(id)arg1;
@property(nonatomic) __weak id <SCPreviewFeatureSaveSendPromptDelegate> delegate; // @synthesize delegate=_delegate;
- (id)getRecipientViewModels;
- (id)initWithUserSession:(id)arg1 previewConfiguration:(id)arg2 saveSendPromptRecipientProvider:(id)arg3;
- (_Bool)isMyStorySelected;
- (void)saveSendPromptControllerDidDeselectAllRecipients:(id)arg1;
- (void)saveSendPromptControllerDidHidePrompt;
- (void)saveSendPromptControllerDidSelectRecipient:(id)arg1;
- (void)saveSendPromptControllerDidTapModeButton;
- (id)selectedGroups;
- (id)selectedIndividualRecipients;
- (void)sendToPageDidShow;
@property(nonatomic) _Bool shouldSendWithoutSendToPage; // @synthesize shouldSendWithoutSendToPage=_shouldSendWithoutSendToPage;
- (void)showSaveSendPromptWithSendConfirmationViewModel:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
