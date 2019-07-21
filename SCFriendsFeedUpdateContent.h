//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class SCFriendsFeedChatUpdateContent, SCFriendsFeedCognacUpdateContent, SCFriendsFeedGroupUpdateContent;

@interface SCFriendsFeedUpdateContent : NSObject <NSCopying>
{
    unsigned long long _subtype;
    SCFriendsFeedCognacUpdateContent *_cognacUpdateContent_cognacUpdateContent;
    SCFriendsFeedGroupUpdateContent *_groupUpdateContent_groupUpdateContent;
    SCFriendsFeedChatUpdateContent *_chatUpdateContent_chatUpdateContent;
}

+ (id)chatUpdateContentWithChatUpdateContent:(id)arg1;
+ (id)cognacUpdateContentWithCognacUpdateContent:(id)arg1;
+ (id)groupUpdateContentWithGroupUpdateContent:(id)arg1;
- (void).cxx_destruct;
- (id)asChatUpdateContent;
- (id)asCognacUpdateContent;
- (id)asGroupUpdateContent;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;
- (id)internalInit;
- (_Bool)isEqual:(id)arg1;
- (_Bool)isSameSubtype:(id)arg1;
- (void)matchCognacUpdateContent:(CDUnknownBlockType)arg1 groupUpdateContent:(CDUnknownBlockType)arg2 chatUpdateContent:(CDUnknownBlockType)arg3;
- (unsigned long long)subtype;
- (id)xLogObjectInfo;

@end

