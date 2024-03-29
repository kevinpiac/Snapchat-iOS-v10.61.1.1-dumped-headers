//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class SCFriendsFeedActiveCall, SCFriendsFeedCognacContent, SCFriendsFeedTypingContent;

@interface SCFriendsFeedPresenceContent : NSObject <NSCopying>
{
    unsigned long long _subtype;
    SCFriendsFeedActiveCall *_call_activeCallContent;
    SCFriendsFeedTypingContent *_typing_typingContent;
    SCFriendsFeedCognacContent *_cognac_cognacContent;
}

+ (id)callWithActiveCallContent:(id)arg1;
+ (id)cognacWithCognacContent:(id)arg1;
+ (id)typingWithTypingContent:(id)arg1;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;
- (id)internalInit;
- (_Bool)isEqual:(id)arg1;
- (void)matchCall:(CDUnknownBlockType)arg1 typing:(CDUnknownBlockType)arg2 cognac:(CDUnknownBlockType)arg3;

@end

