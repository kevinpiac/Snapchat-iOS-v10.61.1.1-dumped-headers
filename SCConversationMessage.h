//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCDocObject.h"

#import "NSCopying-Protocol.h"

@class NSArray, NSString, SCConversationMessageContent, SCConversationMessageOneOnOneInfo, SCConversationMessageSendMediaTaskInfo, SCConversationMessageStateSummary, SCConversationMessageType, SCConversationReplyMedias;

@interface SCConversationMessage : SCDocObject <NSCopying>
{
    BOOL _sendStatus;
    _Bool _markedToDeleteByServer;
    NSString *_consistentId;
    NSString *_conversationId;
    unsigned long long _groupVersion;
    NSString *_messageSender;
    double _messageTimestampInEpochSecs;
    double _sentTimestampInEpochSecs;
    SCConversationMessageType *_messageType;
    NSArray *_knownSequences;
    NSArray *_messageStates;
    SCConversationMessageSendMediaTaskInfo *_mediaSendTaskInfo;
    SCConversationMessageOneOnOneInfo *_oneOnOneInfo;
    SCConversationMessageContent *_content;
    SCConversationReplyMedias *_replyMedias;
    SCConversationMessageStateSummary *_stateSummary;
}

+ (id)immutableObjectParse:(const void *)arg1 bufferSize:(unsigned long long)arg2;
+ (struct SCDocObjectClassFunctionPointer)objectClassFunctionPointer;
+ (const char *)table;
- (void).cxx_destruct;
- (id)_expirationDateIfExpiring;
- (id)_expirationDateIfExpiringForOneOnOneRetention;
- (_Bool)_hasMessageParcel;
- (_Bool)_isErasableType;
- (_Bool)_isExpiredForOneOnOneMessage;
- (_Bool)_isExpiredUsingExpirationTime;
- (_Bool)_isReleasedByAtleastOneRecipient;
- (_Bool)_isReleasedForOneOnOneMessage;
- (_Bool)_isSentToSelfInOneOnOne;
- (id)_messageStateByParticipant:(id)arg1;
- (id)_snapStateByParticipant:(id)arg1;
- (id)batchedMedias;
- (id)broadcastSnapSignature;
- (_Bool)canBeReplayed;
- (_Bool)canBeSaved;
- (_Bool)canDelete;
- (id)chatLastOpenParticipant;
- (id)chatMedia;
- (id)chatOldestOpenTimestamp;
- (id)checkAndCorrectSendStatus;
- (id)checkAndCorrectSnapState;
- (id)checkAndCorrectStates;
- (long long)compareRecentness:(id)arg1;
@property(readonly, copy, nonatomic) NSString *consistentId; // @synthesize consistentId=_consistentId;
@property(readonly, copy, nonatomic) SCConversationMessageContent *content; // @synthesize content=_content;
@property(readonly, copy, nonatomic) NSString *conversationId; // @synthesize conversationId=_conversationId;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)expirationDate;
- (_Bool)failedToSend;
- (id)getMediaCardAddresses;
- (id)getMediaCardUrls;
@property(readonly, nonatomic) unsigned long long groupVersion; // @synthesize groupVersion=_groupVersion;
- (_Bool)hasMediaCards;
- (unsigned long long)hash;
- (id)initWithConsistentId:(id)arg1 conversationId:(id)arg2 groupVersion:(unsigned long long)arg3 messageSender:(id)arg4 messageTimestampInEpochSecs:(double)arg5 sentTimestampInEpochSecs:(double)arg6 messageType:(id)arg7 sendStatus:(BOOL)arg8 knownSequences:(id)arg9 messageStates:(id)arg10 mediaSendTaskInfo:(id)arg11 oneOnOneInfo:(id)arg12 content:(id)arg13 replyMedias:(id)arg14 markedToDeleteByServer:(_Bool)arg15 stateSummary:(id)arg16;
- (_Bool)isBroadcastSnap;
- (_Bool)isCashMessage;
- (_Bool)isEqual:(id)arg1;
- (_Bool)isErasableBy:(id)arg1;
- (_Bool)isErased;
- (_Bool)isExpired;
- (_Bool)isExpiring;
- (_Bool)isForwardable;
- (_Bool)isGroupMessage;
- (_Bool)isMapSnapMessage;
- (_Bool)isMediaContentMessage;
- (_Bool)isMemoryStoryMessage;
- (_Bool)isMessageOnBirthday:(id)arg1;
- (_Bool)isMissedVideoCallMessage;
- (_Bool)isOpenedBy:(id)arg1;
- (_Bool)isOpenedByAtleastOneRecipient;
- (_Bool)isParticipantLeftMessage;
- (_Bool)isPlayableSnapBy:(id)arg1;
- (_Bool)isPreservableType;
- (_Bool)isPreserved;
- (_Bool)isPreservedBy:(id)arg1;
- (_Bool)isReadBy:(id)arg1;
- (_Bool)isReceivedOneOnOneSnapSentToSelf;
- (_Bool)isReleased;
- (_Bool)isReleasedBy:(id)arg1;
- (_Bool)isReplayed;
- (_Bool)isSaved;
- (_Bool)isSavedBy:(id)arg1;
- (_Bool)isScreenshotted;
- (_Bool)isSearchDynamicStoriesMessage;
- (_Bool)isSearchStoryMessage;
- (_Bool)isSendingOrCanBeRetried;
- (_Bool)isSendingOrHasFailed;
- (_Bool)isSent;
- (_Bool)isSentBy:(id)arg1;
- (_Bool)isSilentMessage;
- (_Bool)isSnapMessage;
- (_Bool)isSnapchatterMessage;
- (_Bool)isStickerMessage;
- (_Bool)isStoryContentMessage;
- (_Bool)isStoryReplyMessage;
- (_Bool)isStorySnapMessage;
- (_Bool)isTextMessage;
- (_Bool)isTextStoryReplyMessage;
- (_Bool)isUnexpiredOneOnOneSnap;
- (_Bool)isUnread;
- (_Bool)isUpdateMessage;
- (_Bool)isUpdateMessageFrom:(id)arg1;
- (_Bool)isViewedOneOnOneOrSentGroupSnapBy:(id)arg1;
- (_Bool)isViewing;
- (id)iterToken;
@property(readonly, copy, nonatomic) NSArray *knownSequences; // @synthesize knownSequences=_knownSequences;
@property(readonly, nonatomic) _Bool markedToDeleteByServer; // @synthesize markedToDeleteByServer=_markedToDeleteByServer;
- (id)mediaCardAttributes;
- (id)mediaIdsFromMediaList;
- (id)mediaListExceptSnapMedia;
- (id)mediaSendTaskId;
@property(readonly, copy, nonatomic) SCConversationMessageSendMediaTaskInfo *mediaSendTaskInfo; // @synthesize mediaSendTaskInfo=_mediaSendTaskInfo;
@property(readonly, copy, nonatomic) NSString *messageSender; // @synthesize messageSender=_messageSender;
@property(readonly, copy, nonatomic) NSArray *messageStates; // @synthesize messageStates=_messageStates;
- (id)messageTimestampForOrdering;
@property(readonly, nonatomic) double messageTimestampInEpochSecs; // @synthesize messageTimestampInEpochSecs=_messageTimestampInEpochSecs;
@property(readonly, copy, nonatomic) SCConversationMessageType *messageType; // @synthesize messageType=_messageType;
@property(readonly, copy, nonatomic) SCConversationMessageOneOnOneInfo *oneOnOneInfo; // @synthesize oneOnOneInfo=_oneOnOneInfo;
- (id)parcelData;
- (id)recipient;
- (BOOL)replayStateForViewer:(id)arg1;
@property(readonly, copy, nonatomic) SCConversationReplyMedias *replyMedias; // @synthesize replyMedias=_replyMedias;
@property(readonly, nonatomic) BOOL sendStatus; // @synthesize sendStatus=_sendStatus;
- (_Bool)sending;
@property(readonly, nonatomic) double sentTimestampInEpochSecs; // @synthesize sentTimestampInEpochSecs=_sentTimestampInEpochSecs;
- (id)sequenceNumber;
- (_Bool)shouldHideSendState;
- (_Bool)shouldRetryMediaSendTask;
- (_Bool)shouldShowReplayAnimation;
- (_Bool)shouldShowUnreadChatIcon;
- (id)snapLastOpenParticipant;
- (id)snapNewestOpenTimestamp;
- (id)snapOldestOpenTimestamp;
@property(readonly, copy, nonatomic) SCConversationMessageStateSummary *stateSummary; // @synthesize stateSummary=_stateSummary;
- (id)text;
- (id)textAttributes;
- (id)textMessageSignature;
- (_Bool)timeToSendHasExpired;
- (_Bool)wouldBeExpiredIfNotSaved;

@end

