//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "EphemeralMediaDelegate-Protocol.h"
#import "SCLensRemoteAssetsUploadOperationDelegate-Protocol.h"
#import "SCLensRemoteAssetsUploadOperationListener-Protocol.h"
#import "SCMediaSendTask-Protocol.h"

@class NSDate, NSMutableArray, NSString, SCMediaGroupSendTaskWaitingGroup, SCMediaSendTaskConfiguration, SCMediaSendTaskEphemeralMedia, SCMediaSendTaskMediaList, SCMediaSendTaskMetricsProperties, SCMediaSendTaskUploadGroup, SCQueuePerformer, Snap;
@protocol SCLensRemoteAssetsUploadOperation, SCMediaSendTaskDelegate;

@interface SCMediaGroupSendTask : NSObject <EphemeralMediaDelegate, SCLensRemoteAssetsUploadOperationListener, SCLensRemoteAssetsUploadOperationDelegate, SCMediaSendTask>
{
    SCQueuePerformer *_performer;
    NSString *_preferredMessageId;
    SCMediaSendTaskMediaList *_mediaList;
    SCMediaSendTaskEphemeralMedia *_ephemeralMedia;
    id <SCLensRemoteAssetsUploadOperation> _lensAssetsUploadOperation;
    SCMediaSendTaskUploadGroup *_uploadGroup;
    Snap *_snap;
    unsigned long long _type;
    SCMediaSendTaskConfiguration *_configuration;
    NSMutableArray *_usernamesWithUnsentSnap;
    NSMutableArray *_invitePhoneNumbersWithUnsentSnap;
    NSMutableArray *_groupIdsWithUncreatedChatMedia;
    NSMutableArray *_usernamesWithUncreatedChatMedia;
    NSMutableArray *_groupIdsWithUnsentSCCPMessage;
    NSMutableArray *_userIdsWithUnsentSCCPMessage;
    NSMutableArray *_invalidRecipients;
    SCMediaSendTaskMetricsProperties *_metricsProperties;
    _Bool _shouldSendOnUploaded;
    SCMediaGroupSendTaskWaitingGroup *_waitingGroup;
    _Bool _storyAlreadyPosted;
    NSMutableArray *_completionHandlers;
    NSDate *_creationTimestamp;
    NSString *_context;
    _Bool _shouldRetryUploadAfterCreateMediaFailed;
    NSString *_taskId;
    NSString *_feedId;
    id <SCMediaSendTaskDelegate> _delegate;
    long long _taskState;
}

- (void).cxx_destruct;
- (void)__didAddOrUpdateMediaMessage:(id)arg1;
- (void)__didSendUploadedMediaForGroupMessage:(id)arg1 groupId:(id)arg2 success:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;
- (void)__didSendUploadedMediaForMessage:(id)arg1 recipient:(id)arg2 success:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;
- (void)_addOrUpdateMessageWithStatus:(long long)arg1 completion:(CDUnknownBlockType)arg2;
- (id)_addTaskInformationToMetadata:(id)arg1 withSendStatus:(long long)arg2;
- (id)_conversationIdForMessageRecipient;
- (void)_createGroupsWithCompletion:(CDUnknownBlockType)arg1;
- (void)_createMediaOnServerAndSendSCCPMessages;
- (CDUnknownBlockType)_createMediaOnServerFailureBlock;
- (CDUnknownBlockType)_createMediaOnServerSuccessBlock;
- (void)_createSCCPMessagesForRecipients:(id)arg1 groups:(id)arg2;
- (id)_determineMediaProviders;
- (void)_didAddOrUpdateMediaMessage:(id)arg1;
- (void)_didCompleteSend:(_Bool)arg1;
- (void)_didSendUploadedMediaForGroupMessage:(id)arg1 groupId:(id)arg2 success:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;
- (void)_didSendUploadedMediaForMessage:(id)arg1 recipient:(id)arg2 success:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;
- (void)_ephemeralMediaSendDidSucceedForMedia:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_ephemeralMediaUploadDidFailForMedia:(id)arg1;
- (void)_ephemeralMediaUploadDidSucceedForMedia:(id)arg1;
- (id)_generateFeedId;
- (id)_groupIdArray;
- (_Bool)_hasValidMedia;
- (id)_invitePhoneNumers;
- (_Bool)_isExpired;
- (_Bool)_isSending;
- (_Bool)_isValidSingleRecipientTask;
- (void)_logChatChatSend;
- (id)_mediasJsonArrayParams;
- (void)_processCreateMediaOnServerResponse:(id)arg1;
- (void)_send;
- (void)_sendSnapAndPostStory;
- (void)_setPreferredMessageIdIfNecessary;
- (void)_updateRecipients;
- (void)_updateStatus:(unsigned long long)arg1 forElement:(unsigned long long)arg2;
- (void)_updateTaskStateAfterFinishTask;
- (void)addOrUpdateSendToMessageInConversationWithSendStatus:(long long)arg1;
- (id)assetsUploaderForUploadOperation:(id)arg1;
- (void)clearInvalidRecipients;
@property(nonatomic) __weak id <SCMediaSendTaskDelegate> delegate; // @synthesize delegate=_delegate;
- (void)didFailToSend;
- (void)encodeWithCoder:(id)arg1;
- (void)ephemeralMediaSendDidFailForMedia:(id)arg1;
- (void)ephemeralMediaSendDidSucceedForMedia:(id)arg1 snapIdsAndTimestamps:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)ephemeralMediaUploadDidFailForMedia:(id)arg1;
- (void)ephemeralMediaUploadDidStartForMedia:(id)arg1;
- (void)ephemeralMediaUploadDidSucceedForMedia:(id)arg1;
@property(readonly, copy, nonatomic) NSString *feedId; // @synthesize feedId=_feedId;
- (id)fileManagerForUploadOperation:(id)arg1;
- (void)finishDecodingWithPerformer:(id)arg1;
- (id)groups;
- (id)initWithCoder:(id)arg1;
- (id)initWithConfiguration:(id)arg1 performer:(id)arg2;
- (id)initWithConfiguration:(id)arg1 taskType:(unsigned long long)arg2 performer:(id)arg3;
- (id)initWithEphemeralMedia:(id)arg1 lensAssetsUploadOperation:(id)arg2 configuration:(id)arg3 performer:(id)arg4;
- (id)initWithMediaList:(id)arg1 configuration:(id)arg2 performer:(id)arg3;
- (id)invalidRecipientsNameString;
- (_Bool)isRecipientSingleGroup;
- (_Bool)isRecipientSingleGroupOrUser;
- (_Bool)isRecipientSingleUser;
- (_Bool)isSendingOneOnOneSnap;
- (_Bool)isValid;
- (void)lensRemoteAssetsUploadOperation:(id)arg1 didFailUploadingAssetWithId:(id)arg2 effectId:(id)arg3 error:(id)arg4;
- (void)lensRemoteAssetsUploadOperation:(id)arg1 didSucceedUploadingAssetWithId:(id)arg2 effectId:(id)arg3;
- (void)lensRemoteAssetsUploadOperationDidFail:(id)arg1 withError:(id)arg2;
- (void)lensRemoteAssetsUploadOperationDidSucceed:(id)arg1;
- (id)multiSnapBundleId;
- (void)prepareToBeRemoved;
- (void)sendWithCompletionHandler:(CDUnknownBlockType)arg1 context:(id)arg2;
- (void)sendWithCompletionHandler:(CDUnknownBlockType)arg1 isAutoRetry:(_Bool)arg2 context:(id)arg3;
- (id)singleGroupId;
- (id)singleRecipientUsername;
@property(readonly, copy, nonatomic) NSString *taskId; // @synthesize taskId=_taskId;
@property(readonly, nonatomic) long long taskState; // @synthesize taskState=_taskState;
- (void)updateFeedId;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

