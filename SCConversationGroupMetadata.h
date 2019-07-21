//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCDocObject.h"

#import "NSCopying-Protocol.h"

@class NSArray, NSString, SCConversationGroupCreationInfo, SCConversationGroupVideoChatInfo;

@interface SCConversationGroupMetadata : SCDocObject <NSCopying>
{
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

+ (id)immutableObjectParse:(const void *)arg1 bufferSize:(unsigned long long)arg2;
+ (struct SCDocObjectClassFunctionPointer)objectClassFunctionPointer;
+ (const char *)table;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSArray *blockedParticipantExceptions; // @synthesize blockedParticipantExceptions=_blockedParticipantExceptions;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, copy, nonatomic) SCConversationGroupCreationInfo *creationInfo; // @synthesize creationInfo=_creationInfo;
@property(readonly, copy, nonatomic) NSArray *exParticipants; // @synthesize exParticipants=_exParticipants;
@property(readonly, copy, nonatomic) NSString *groupId; // @synthesize groupId=_groupId;
@property(readonly, copy, nonatomic) NSString *groupMobId; // @synthesize groupMobId=_groupMobId;
@property(readonly, copy, nonatomic) NSString *groupName; // @synthesize groupName=_groupName;
- (unsigned long long)hash;
- (id)initWithGroupId:(id)arg1 groupName:(id)arg2 groupMobId:(id)arg3 version:(unsigned long long)arg4 creationInfo:(id)arg5 lastInteractionTimestampInEpochSecs:(double)arg6 orderedParticipants:(id)arg7 exParticipants:(id)arg8 videoChatInfo:(id)arg9 blockedParticipantExceptions:(id)arg10 notificationStatus:(_Bool)arg11 storyMuted:(_Bool)arg12 isLocalGroup:(_Bool)arg13 temporary:(_Bool)arg14 lastMessageMetadatas:(id)arg15 mentionNotificationStatus:(_Bool)arg16;
- (_Bool)isEqual:(id)arg1;
@property(readonly, nonatomic) _Bool isLocalGroup; // @synthesize isLocalGroup=_isLocalGroup;
@property(readonly, nonatomic) double lastInteractionTimestampInEpochSecs; // @synthesize lastInteractionTimestampInEpochSecs=_lastInteractionTimestampInEpochSecs;
@property(readonly, copy, nonatomic) NSArray *lastMessageMetadatas; // @synthesize lastMessageMetadatas=_lastMessageMetadatas;
@property(readonly, nonatomic) _Bool mentionNotificationStatus; // @synthesize mentionNotificationStatus=_mentionNotificationStatus;
@property(readonly, nonatomic) _Bool notificationStatus; // @synthesize notificationStatus=_notificationStatus;
@property(readonly, copy, nonatomic) NSArray *orderedParticipants; // @synthesize orderedParticipants=_orderedParticipants;
@property(readonly, nonatomic) _Bool storyMuted; // @synthesize storyMuted=_storyMuted;
@property(readonly, nonatomic) _Bool temporary; // @synthesize temporary=_temporary;
@property(readonly, nonatomic) unsigned long long version; // @synthesize version=_version;
@property(readonly, copy, nonatomic) SCConversationGroupVideoChatInfo *videoChatInfo; // @synthesize videoChatInfo=_videoChatInfo;

@end
