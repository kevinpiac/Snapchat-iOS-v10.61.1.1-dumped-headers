//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class SCChatGroupInviteGroupIntroductionViewModel, SCChatGroupInviteJoinMessageViewModel, SCChatGroupUpdateContentViewModel, SCChatMergedStatusContentViewModel, SCChatSnapContentViewModel, SCChatTextContentViewModel, SCSnapchatterContentViewModel;

@interface SCChatMessageContent : NSObject <NSCopying>
{
    unsigned long long _subtype;
    SCChatGroupUpdateContentViewModel *_groupUpdate_groupUpdateContentViewModel;
    SCChatTextContentViewModel *_textMessage_textContentViewModel;
    SCChatSnapContentViewModel *_snap_snapContentViewModel;
    SCSnapchatterContentViewModel *_snapchatter_snapchatterContentViewModel;
    SCChatMergedStatusContentViewModel *_statusMessage_mergedStatusContentViewModel;
    SCChatGroupInviteGroupIntroductionViewModel *_groupInviteIntroductionMessage_groupInviteGroupIntroductionViewModel;
    SCChatGroupInviteJoinMessageViewModel *_groupInviteJoinMessage_groupInviteJoinMessageViewModel;
}

+ (id)groupInviteIntroductionMessageWithGroupInviteGroupIntroductionViewModel:(id)arg1;
+ (id)groupInviteJoinMessageWithGroupInviteJoinMessageViewModel:(id)arg1;
+ (id)groupUpdateWithGroupUpdateContentViewModel:(id)arg1;
+ (id)snapWithSnapContentViewModel:(id)arg1;
+ (id)snapchatterWithSnapchatterContentViewModel:(id)arg1;
+ (id)statusMessageWithMergedStatusContentViewModel:(id)arg1;
+ (id)textMessageWithTextContentViewModel:(id)arg1;
- (void).cxx_destruct;
- (id)asGroupInviteGroupIntroductionMessage;
- (id)asGroupInviteJoinMessage;
- (id)asGroupUpdate;
- (id)asSnapMessage;
- (id)asSnapchatterMessage;
- (id)asStatusMessage;
- (id)asTextMessage;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;
- (id)internalInit;
- (_Bool)isEqual:(id)arg1;
- (void)matchGroupUpdate:(CDUnknownBlockType)arg1 textMessage:(CDUnknownBlockType)arg2 snap:(CDUnknownBlockType)arg3 snapchatter:(CDUnknownBlockType)arg4 statusMessage:(CDUnknownBlockType)arg5 groupInviteIntroductionMessage:(CDUnknownBlockType)arg6 groupInviteJoinMessage:(CDUnknownBlockType)arg7;

@end
