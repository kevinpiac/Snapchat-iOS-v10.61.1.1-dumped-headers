//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class SCFriendsFeedActiveMessageData, SCFriendsFeedConversationVersion;

@interface SCFriendsFeedVersionedActiveMessageData : NSObject <NSCopying>
{
    _Bool _syncRequired;
    SCFriendsFeedActiveMessageData *_activeMessageData;
    SCFriendsFeedConversationVersion *_conversationVersion;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) SCFriendsFeedActiveMessageData *activeMessageData; // @synthesize activeMessageData=_activeMessageData;
@property(readonly, copy, nonatomic) SCFriendsFeedConversationVersion *conversationVersion; // @synthesize conversationVersion=_conversationVersion;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;
- (id)initWithActiveMessageData:(id)arg1 conversationVersion:(id)arg2 syncRequired:(_Bool)arg3;
- (_Bool)isEqual:(id)arg1;
@property(readonly, nonatomic) _Bool syncRequired; // @synthesize syncRequired=_syncRequired;

@end

