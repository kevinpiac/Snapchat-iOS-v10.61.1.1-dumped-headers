//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class SCArroyoGroupFilterer, SCPreviewSnapSenderConfiguration;
@protocol SCSnapSendPreparer, SendSnapNavigationControllerDelegate;

@interface SCPreviewSnapSender : NSObject
{
    SCPreviewSnapSenderConfiguration *_configuration;
    SCArroyoGroupFilterer *_arroyoGroupFilterer;
    id <SendSnapNavigationControllerDelegate> _delegate;
    id <SCSnapSendPreparer> _snapSendPreparer;
}

+ (_Bool)gallerySnapWasPostedToMyStory:(id)arg1;
+ (void)initialize;
- (void).cxx_destruct;
- (id)_constructMessageMetadataFromEphemeralMedia:(id)arg1;
- (void)_performLoggingForSnapRecipients:(id)arg1;
- (id)_postStory:(id)arg1 storiesPostingConfig:(id)arg2 lensAssetsUploadOperation:(id)arg3 businessIds:(id)arg4 captureSessionId:(id)arg5 appStories:(id)arg6 fromPreview:(_Bool)arg7 shouldShowToastWhenPostComplete:(_Bool)arg8;
- (void)_sendGroupChatMessageWithChatMedia:(id)arg1 messageBodyType:(long long)arg2 toRecipientUsernames:(id)arg3 mischiefs:(id)arg4 blizzardEventsForSuccessfulSend:(id)arg5 shouldShowStatusMessage:(_Bool)arg6 attachedURL:(id)arg7 additionalText:(id)arg8 isForwarded:(_Bool)arg9 completion:(CDUnknownBlockType)arg10;
- (void)_sendMediaTaskWithEphemeralMedia:(id)arg1 lensAssetsUploadOperation:(id)arg2 mischiefs:(id)arg3 toRecipientUsernames:(id)arg4 invitedPhoneNumbers:(id)arg5 storiesPostingConfig:(id)arg6 businessIds:(id)arg7 appStoryMetadatas:(id)arg8 fromPreview:(_Bool)arg9 inviteRecipientShown:(long long)arg10 blizzardEventsForSuccessfulSend:(id)arg11 additionalText:(id)arg12 shouldShowStatusMessage:(_Bool)arg13;
- (void)_sendMediaWithEphemeralMedia:(id)arg1 arroyoConversationIds:(id)arg2;
- (void)_showStatusMessage:(_Bool)arg1;
- (id)_storyFraming;
- (void)_updateEphemeralCommonLoggingParameters:(id)arg1 toRecipients:(id)arg2 invitedPhoneNumbers:(id)arg3 storiesPostingConfig:(id)arg4 businessIds:(id)arg5 mischiefs:(id)arg6 fromPreview:(_Bool)arg7 fromSendTo:(_Bool)arg8 inviteRecipientShown:(long long)arg9;
- (id)_userPostedTimestampsWithCount:(unsigned long long)arg1;
@property(nonatomic) __weak id <SendSnapNavigationControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (id)initWithConfiguration:(id)arg1;
- (id)postStory:(id)arg1 storiesPostingConfig:(id)arg2 businessIds:(id)arg3 captureSessionId:(id)arg4 appStories:(id)arg5 fromPreview:(_Bool)arg6 fromSendTo:(_Bool)arg7 shouldShowToastWhenPostComplete:(_Bool)arg8;
- (id)postStory:(id)arg1 storiesPostingConfig:(id)arg2 lensAssetsUploadOperation:(id)arg3 businessIds:(id)arg4 captureSessionId:(id)arg5 appStories:(id)arg6 fromPreview:(_Bool)arg7 fromSendTo:(_Bool)arg8 shouldShowToastWhenPostComplete:(_Bool)arg9;
- (void)sendAdShareMedia:(id)arg1 toRecipientUsernames:(id)arg2 mischiefs:(id)arg3 loggingParameters:(id)arg4 additionalText:(id)arg5;
- (void)sendChatMessageWithChatMedia:(id)arg1 toRecipientUsernames:(id)arg2 mischiefs:(id)arg3 blizzardEventsForSuccessfulSend:(id)arg4 additionalText:(id)arg5 completion:(CDUnknownBlockType)arg6;
- (void)sendDiscoverMedia:(id)arg1 toRecipientUsernames:(id)arg2 mischiefs:(id)arg3 loggingParameters:(id)arg4 additionalText:(id)arg5 isForwarded:(_Bool)arg6;
- (void)sendEphemeralMediaList:(id)arg1 lensAssetsUploadOperation:(id)arg2 toRecipientUsernames:(id)arg3 invitedPhoneNumbers:(id)arg4 storiesPostingConfig:(id)arg5 businessIds:(id)arg6 mischiefs:(id)arg7 appStories:(id)arg8 fromPreview:(_Bool)arg9 fromSendTo:(_Bool)arg10 inviteRecipientShown:(long long)arg11 blizzardEventsForSuccessfulSend:(id)arg12 additionalText:(id)arg13 captureSessionId:(id)arg14;
- (void)sendKhaleesiMessageWithChatMedia:(id)arg1 toRecipientUsernames:(id)arg2 mischiefs:(id)arg3 blizzardEventsForSuccessfulSend:(id)arg4 attachedURL:(id)arg5 additionalText:(id)arg6;
- (void)sendQuickGroupChatMedia:(id)arg1 conversationId:(id)arg2;
@property(nonatomic) __weak id <SCSnapSendPreparer> snapSendPreparer; // @synthesize snapSendPreparer=_snapSendPreparer;

@end

