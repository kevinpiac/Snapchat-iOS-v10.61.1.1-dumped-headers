//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface SCChatV3ReceiveBuffer : NSObject
{
    NSMutableDictionary *_convToReceiveBufferBatch;
}

- (void).cxx_destruct;
- (id)bufferForConversationId:(id)arg1;
- (id)enqueueMessage:(id)arg1 forConversation:(id)arg2 withGapHandler:(CDUnknownBlockType)arg3;
- (id)forceEnqueueMessages:(id)arg1 forConversation:(id)arg2;
- (id)init;
- (_Bool)needsToFillGapsForConversation:(id)arg1;

@end
