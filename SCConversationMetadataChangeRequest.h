//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCDocObjectChangeRequest-Protocol.h"

@class NSArray, NSData, NSString, SCConversationGroupInfo, SCConversationLastOpenTimestampInfo, SCConversationOneOnOneInfo;

@interface SCConversationMetadataChangeRequest : NSObject <SCDocObjectChangeRequest>
{
    long long _rowid;
    int _requestType;
    BOOL _loadStatus;
    BOOL _historyLoadStatus;
    BOOL _visibility;
    _Bool _notificationStatus;
    _Bool _hasPendingSnapUpdates;
    _Bool _earlierContentExists;
    _Bool _isCognacNotificationMuted;
    NSString *_id;
    NSArray *_sequenceStates;
    NSArray *_releaseStates;
    double _lastInteractionTimestampInEpochSecs;
    double _lastClearedTimestampInEpochSecs;
    NSArray *_lastMessageMetadatas;
    SCConversationLastOpenTimestampInfo *_lastOpenTimestampInfo;
    NSData *_chatDraftData;
    SCConversationOneOnOneInfo *_oneOnOneInfo;
    SCConversationGroupInfo *_groupInfo;
    NSArray *_stickerUsages;
    NSArray *_pendingSnapUpdates;
    NSArray *_unknownMessageTyes;
    NSData *_failedMessages;
}

+ (id)changeRequestForConversationMetadata:(id)arg1;
+ (id)creationRequestWithConversationMetadata:(id)arg1;
+ (id)deletionRequestForConversationMetadata:(id)arg1;
- (void).cxx_destruct;
- (id)_conversationMetadata;
@property(copy, nonatomic) NSData *chatDraftData; // @synthesize chatDraftData=_chatDraftData;
- (void)createTableWithSQLite:(struct sqlite3 *)arg1;
@property(nonatomic) _Bool earlierContentExists; // @synthesize earlierContentExists=_earlierContentExists;
@property(copy, nonatomic) NSData *failedMessages; // @synthesize failedMessages=_failedMessages;
@property(copy, nonatomic) SCConversationGroupInfo *groupInfo; // @synthesize groupInfo=_groupInfo;
@property(nonatomic) _Bool hasPendingSnapUpdates; // @synthesize hasPendingSnapUpdates=_hasPendingSnapUpdates;
@property(nonatomic) BOOL historyLoadStatus; // @synthesize historyLoadStatus=_historyLoadStatus;
@property(copy, nonatomic) NSString *id; // @synthesize id=_id;
- (id)initWithRowid:(long long)arg1 id:(id)arg2 sequenceStates:(id)arg3 releaseStates:(id)arg4 loadStatus:(BOOL)arg5 historyLoadStatus:(BOOL)arg6 lastInteractionTimestampInEpochSecs:(double)arg7 lastClearedTimestampInEpochSecs:(double)arg8 lastMessageMetadatas:(id)arg9 lastOpenTimestampInfo:(id)arg10 visibility:(BOOL)arg11 chatDraftData:(id)arg12 notificationStatus:(_Bool)arg13 oneOnOneInfo:(id)arg14 groupInfo:(id)arg15 stickerUsages:(id)arg16 pendingSnapUpdates:(id)arg17 hasPendingSnapUpdates:(_Bool)arg18 unknownMessageTyes:(id)arg19 failedMessages:(id)arg20 earlierContentExists:(_Bool)arg21 isCognacNotificationMuted:(_Bool)arg22;
@property(nonatomic) _Bool isCognacNotificationMuted; // @synthesize isCognacNotificationMuted=_isCognacNotificationMuted;
@property(nonatomic) double lastClearedTimestampInEpochSecs; // @synthesize lastClearedTimestampInEpochSecs=_lastClearedTimestampInEpochSecs;
@property(nonatomic) double lastInteractionTimestampInEpochSecs; // @synthesize lastInteractionTimestampInEpochSecs=_lastInteractionTimestampInEpochSecs;
@property(copy, nonatomic) NSArray *lastMessageMetadatas; // @synthesize lastMessageMetadatas=_lastMessageMetadatas;
@property(copy, nonatomic) SCConversationLastOpenTimestampInfo *lastOpenTimestampInfo; // @synthesize lastOpenTimestampInfo=_lastOpenTimestampInfo;
@property(nonatomic) BOOL loadStatus; // @synthesize loadStatus=_loadStatus;
@property(nonatomic) _Bool notificationStatus; // @synthesize notificationStatus=_notificationStatus;
@property(copy, nonatomic) SCConversationOneOnOneInfo *oneOnOneInfo; // @synthesize oneOnOneInfo=_oneOnOneInfo;
@property(copy, nonatomic) NSArray *pendingSnapUpdates; // @synthesize pendingSnapUpdates=_pendingSnapUpdates;
@property(copy, nonatomic) NSArray *releaseStates; // @synthesize releaseStates=_releaseStates;
@property(copy, nonatomic) NSArray *sequenceStates; // @synthesize sequenceStates=_sequenceStates;
@property(copy, nonatomic) NSArray *stickerUsages; // @synthesize stickerUsages=_stickerUsages;
@property(copy, nonatomic) NSArray *unknownMessageTyes; // @synthesize unknownMessageTyes=_unknownMessageTyes;
@property(nonatomic) BOOL visibility; // @synthesize visibility=_visibility;
- (const char *)table;
- (id)transactWithSQLite:(struct SQLiteConnection *)arg1 flatbuffers:(struct FlatBufferBuilder *)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
