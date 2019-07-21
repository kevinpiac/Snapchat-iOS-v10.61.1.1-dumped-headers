//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCDocObjectChangeRequest-Protocol.h"

@class NSArray, NSString, SCConversationGroupCreationInfo, SCConversationGroupVideoChatInfo;

@interface SCConversationGroupMetadataChangeRequest : NSObject <SCDocObjectChangeRequest>
{
    long long _rowid;
    int _requestType;
    _Bool _notificationStatus;
    _Bool _storyMuted;
    _Bool _isLocalGroup;
    _Bool _temporary;
    _Bool _mentionNotificationStatus;
    NSString *_groupId;
    NSString *_groupName;
    NSString *_groupMobId;
    unsigned long long _version;
    SCConversationGroupCreationInfo *_creationInfo;
    double _lastInteractionTimestampInEpochSecs;
    NSArray *_orderedParticipants;
    NSArray *_exParticipants;
    SCConversationGroupVideoChatInfo *_videoChatInfo;
    NSArray *_blockedParticipantExceptions;
    NSArray *_lastMessageMetadatas;
}

+ (id)changeRequestForConversationGroupMetadata:(id)arg1;
+ (id)creationRequestWithConversationGroupMetadata:(id)arg1;
+ (id)deletionRequestForConversationGroupMetadata:(id)arg1;
- (void).cxx_destruct;
- (id)_conversationGroupMetadata;
@property(copy, nonatomic) NSArray *blockedParticipantExceptions; // @synthesize blockedParticipantExceptions=_blockedParticipantExceptions;
- (void)createTableWithSQLite:(struct sqlite3 *)arg1;
@property(copy, nonatomic) SCConversationGroupCreationInfo *creationInfo; // @synthesize creationInfo=_creationInfo;
@property(copy, nonatomic) NSArray *exParticipants; // @synthesize exParticipants=_exParticipants;
@property(copy, nonatomic) NSString *groupId; // @synthesize groupId=_groupId;
@property(copy, nonatomic) NSString *groupMobId; // @synthesize groupMobId=_groupMobId;
@property(copy, nonatomic) NSString *groupName; // @synthesize groupName=_groupName;
- (id)initWithRowid:(long long)arg1 groupId:(id)arg2 groupName:(id)arg3 groupMobId:(id)arg4 version:(unsigned long long)arg5 creationInfo:(id)arg6 lastInteractionTimestampInEpochSecs:(double)arg7 orderedParticipants:(id)arg8 exParticipants:(id)arg9 videoChatInfo:(id)arg10 blockedParticipantExceptions:(id)arg11 notificationStatus:(_Bool)arg12 storyMuted:(_Bool)arg13 isLocalGroup:(_Bool)arg14 temporary:(_Bool)arg15 lastMessageMetadatas:(id)arg16 mentionNotificationStatus:(_Bool)arg17;
@property(nonatomic) _Bool isLocalGroup; // @synthesize isLocalGroup=_isLocalGroup;
@property(nonatomic) double lastInteractionTimestampInEpochSecs; // @synthesize lastInteractionTimestampInEpochSecs=_lastInteractionTimestampInEpochSecs;
@property(copy, nonatomic) NSArray *lastMessageMetadatas; // @synthesize lastMessageMetadatas=_lastMessageMetadatas;
@property(nonatomic) _Bool mentionNotificationStatus; // @synthesize mentionNotificationStatus=_mentionNotificationStatus;
@property(nonatomic) _Bool notificationStatus; // @synthesize notificationStatus=_notificationStatus;
@property(copy, nonatomic) NSArray *orderedParticipants; // @synthesize orderedParticipants=_orderedParticipants;
@property(nonatomic) _Bool storyMuted; // @synthesize storyMuted=_storyMuted;
@property(nonatomic) _Bool temporary; // @synthesize temporary=_temporary;
@property(nonatomic) unsigned long long version; // @synthesize version=_version;
@property(copy, nonatomic) SCConversationGroupVideoChatInfo *videoChatInfo; // @synthesize videoChatInfo=_videoChatInfo;
- (const char *)table;
- (id)transactWithSQLite:(struct SQLiteConnection *)arg1 flatbuffers:(struct FlatBufferBuilder *)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

