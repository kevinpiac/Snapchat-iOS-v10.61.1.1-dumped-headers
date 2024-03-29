//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCConversationStorage-Protocol.h"

@class NSSet, NSString, SCConversationDocObjectGrapheneLogger, SCLazy;
@protocol SCChatExternalAPIProvider, SCGroupManager, SCPerforming;

@interface SCConversationDocObjectStorage : NSObject <SCConversationStorage>
{
    id <SCPerforming> _performer;
    NSString *_username;
    id <SCGroupManager> _groupManager;
    NSSet *_allConversationIds;
    SCLazy *_lazyDocObjectContext;
    SCConversationDocObjectGrapheneLogger *_grapheneLogger;
    id <SCChatExternalAPIProvider> _externalAPIProvider;
}

- (void).cxx_destruct;
- (void)_checkTranslationWithV3Messages:(id)arg1 docMessages:(id)arg2;
- (void)_clientLoggingWithName:(id)arg1 success:(_Bool)arg2 parameters:(id)arg3;
- (void)_createSimpleTicketWithTitle:(id)arg1;
- (void)_deleteAllGroups:(id)arg1;
- (void)_deleteGroupById:(id)arg1 transactionContext:(id)arg2;
- (id)_getChatConversationFromDocConversation:(id)arg1;
- (id)_getGroupById:(id)arg1;
- (id)_mediaContentMetadatasAfterStateCorrection;
- (id)_messagesAfterStateCorrection;
- (void)_putGroup:(id)arg1 transactionContext:(id)arg2;
- (void)_putMediaMetadatasFromConversation:(id)arg1 transactionContext:(id)arg2;
- (void)_putMessagesFromConversation:(id)arg1 transactionContext:(id)arg2;
- (_Bool)_shouldHandleGroupStorage;
- (id)allConversationIds;
- (id)allConversationMetadatas;
- (id)allGroups;
- (id)allMediaReferences;
- (id)allPendingSnapUpdates;
- (void)checkAndCorrectStatesWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)clearWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)conversationById:(id)arg1;
- (id)conversationDictionary_DEPRECATED;
- (id)docContext;
- (id)initWithPerformer:(id)arg1;
- (void)putConversations:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)removeConversationById:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)removeExpiredMessagesWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)setLazyDocObjectContext:(id)arg1 groupManager:(id)arg2 username:(id)arg3 externalAPIProvider:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

