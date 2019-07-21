//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCGroupManagerAPI-Protocol.h"

@class NSString, SCSessionRequestManager;

@interface SCGroupManagerAPI : NSObject <SCGroupManagerAPI>
{
    SCSessionRequestManager *_sessionRequestManager;
}

- (void).cxx_destruct;
- (_Bool)_isErrorResponse:(id)arg1;
- (void)addToGroupWithGroupId:(id)arg1 participantIds:(id)arg2 successBlock:(CDUnknownBlockType)arg3 failureBlock:(CDUnknownBlockType)arg4 callbackQueue:(id)arg5;
- (void)createGroupInviteWithGroupInviteId:(id)arg1 groupInviteType:(long long)arg2 groupId:(id)arg3 successBlock:(CDUnknownBlockType)arg4 failureBlock:(CDUnknownBlockType)arg5 callbackQueue:(id)arg6;
- (void)createGroupsWithMischiefRequest:(id)arg1 successBlock:(CDUnknownBlockType)arg2 failureBlock:(CDUnknownBlockType)arg3 callbackQueue:(id)arg4;
- (void)deleteGroupInvitesWithGroupId:(id)arg1 groupInviteType:(long long)arg2 successBlock:(CDUnknownBlockType)arg3 failureBlock:(CDUnknownBlockType)arg4 callbackQueue:(id)arg5;
- (void)fetchGroupWithConversationId:(id)arg1 mischiefRequest:(id)arg2 successBlock:(CDUnknownBlockType)arg3 failureBlock:(CDUnknownBlockType)arg4 callbackQueue:(id)arg5;
- (id)initWithSessionRequestManager:(id)arg1;
- (void)joinDolphinGroupWithGroupId_DEPRECATED:(id)arg1 successBlock:(CDUnknownBlockType)arg2 failureBlock:(CDUnknownBlockType)arg3 callbackQueue:(id)arg4;
- (void)joinGroupWithGroupInviteId:(id)arg1 groupId:(id)arg2 successBlock:(CDUnknownBlockType)arg3 failureBlock:(CDUnknownBlockType)arg4 callbackQueue:(id)arg5;
- (void)leaveGroupWithGroupId:(id)arg1 successBlock:(CDUnknownBlockType)arg2 failureBlock:(CDUnknownBlockType)arg3 callbackQueue:(id)arg4;
- (void)updateGroupBlockedParticipantExceptionsWithGroupId:(id)arg1 newBlockedParticipantExceptions:(id)arg2 successBlock:(CDUnknownBlockType)arg3 failureBlock:(CDUnknownBlockType)arg4 callbackQueue:(id)arg5;
- (void)updateGroupMentionNotificationWithGroupId:(id)arg1 notificationOn:(_Bool)arg2 requestManager:(id)arg3 successBlock:(CDUnknownBlockType)arg4 failureBlock:(CDUnknownBlockType)arg5 callbackQueue:(id)arg6;
- (void)updateGroupMuteStateTo:(_Bool)arg1 forGroupId:(id)arg2;
- (void)updateGroupNameWithGroupId:(id)arg1 groupName:(id)arg2 successBlock:(CDUnknownBlockType)arg3 failureBlock:(CDUnknownBlockType)arg4 callbackQueue:(id)arg5;
- (void)updateGroupNotificationWithGroupId:(id)arg1 notificationOn:(_Bool)arg2 successBlock:(CDUnknownBlockType)arg3 failureBlock:(CDUnknownBlockType)arg4 callbackQueue:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
