//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, SCChatDraft;

@interface SCChatConversationMetadataBuilder : NSObject
{
    NSDictionary *_messageMetadata;
    SCChatDraft *_chatDraft;
}

+ (id)chatConversationMetadata;
+ (id)chatConversationMetadataFromExistingChatConversationMetadata:(id)arg1;
- (void).cxx_destruct;
- (id)build;
- (id)withChatDraft:(id)arg1;
- (id)withMessageMetadata:(id)arg1;

@end
