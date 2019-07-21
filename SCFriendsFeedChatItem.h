//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSString, SCFriendsFeedChatMessageState, SCFriendsFeedUpdateContent;

@interface SCFriendsFeedChatItem : NSObject <NSCopying>
{
    long long _type;
    NSString *_senderUsername;
    SCFriendsFeedChatMessageState *_chatMessageState;
    SCFriendsFeedUpdateContent *_updateContent;
    NSString *_senderUserId;
    NSString *_chatMessageId;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *chatMessageId; // @synthesize chatMessageId=_chatMessageId;
@property(readonly, copy, nonatomic) SCFriendsFeedChatMessageState *chatMessageState; // @synthesize chatMessageState=_chatMessageState;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;
- (id)initWithType:(long long)arg1 senderUsername:(id)arg2 chatMessageState:(id)arg3 updateContent:(id)arg4 senderUserId:(id)arg5 chatMessageId:(id)arg6;
- (_Bool)isEqual:(id)arg1;
@property(readonly, copy, nonatomic) NSString *senderUserId; // @synthesize senderUserId=_senderUserId;
@property(readonly, copy, nonatomic) NSString *senderUsername; // @synthesize senderUsername=_senderUsername;
@property(readonly, nonatomic) long long type; // @synthesize type=_type;
@property(readonly, copy, nonatomic) SCFriendsFeedUpdateContent *updateContent; // @synthesize updateContent=_updateContent;
- (id)xLogObjectInfo;

@end
