//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCChatMessageSending-Protocol.h"

@class NSString;
@protocol SCNativeMessagingSessionManaging;

@interface SCArroyoMessageSender : NSObject <SCChatMessageSending>
{
    id <SCNativeMessagingSessionManaging> _nativeSessionManager;
}

- (void).cxx_destruct;
- (void)_prepareAndSendMessageContent:(id)arg1 forConversationId:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)_sendPreparedMessageToConversationUUID:(id)arg1 clientResolutionId:(long long)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)initWithNativeSessionManager:(id)arg1;
- (id)nativeConversationManager;
- (void)sendMessageContentContainer:(id)arg1 toConversationId:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

