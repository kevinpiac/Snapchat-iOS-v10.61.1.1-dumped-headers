//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSString;

@interface SCFriendsFeedChatMessage : NSObject <NSCopying>
{
    unsigned long long _subtype;
    NSString *_activeChat_actionPerformer;
    _Bool _activeChat_hasUnreadChats;
    _Bool _activeChat_isChatMention;
    _Bool _groupNameChange_hasUnreadChats;
    _Bool _participantChange_hasUnreadChats;
    long long _participantChange_groupChangeType;
}

+ (id)activeChatWithActionPerformer:(id)arg1 hasUnreadChats:(_Bool)arg2 isChatMention:(_Bool)arg3;
+ (id)groupNameChangeWithHasUnreadChats:(_Bool)arg1;
+ (id)participantChangeWithHasUnreadChats:(_Bool)arg1 groupChangeType:(long long)arg2;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;
- (id)internalInit;
- (_Bool)isEqual:(id)arg1;
- (void)matchActiveChat:(CDUnknownBlockType)arg1 groupNameChange:(CDUnknownBlockType)arg2 participantChange:(CDUnknownBlockType)arg3;

@end

