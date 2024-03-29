//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class SCChatConversationV3, SCChatMessageV3;

@interface SCChatMergedMessageConversationResult : NSObject <NSCopying>
{
    SCChatMessageV3 *_updatedMessage;
    SCChatConversationV3 *_updatedConversation;
}

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;
- (id)initWithUpdatedMessage:(id)arg1 updatedConversation:(id)arg2;
- (_Bool)isEqual:(id)arg1;
@property(readonly, copy, nonatomic) SCChatConversationV3 *updatedConversation; // @synthesize updatedConversation=_updatedConversation;
@property(readonly, copy, nonatomic) SCChatMessageV3 *updatedMessage; // @synthesize updatedMessage=_updatedMessage;

@end

