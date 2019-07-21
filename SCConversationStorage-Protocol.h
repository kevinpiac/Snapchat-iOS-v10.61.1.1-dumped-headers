//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSArray, NSDictionary, NSString, SCChatConversationV3;
@protocol SCPerforming;

@protocol SCConversationStorage <NSObject>
+ (id)new;
- (NSArray *)allConversationIds;
- (NSDictionary *)allConversationMetadatas;
- (NSDictionary *)allGroups;
- (NSArray *)allMediaReferences;
- (NSDictionary *)allPendingSnapUpdates;
- (void)checkAndCorrectStatesWithCompletionHandler:(void (^)(_Bool))arg1;
- (void)clearWithCompletionHandler:(void (^)(_Bool))arg1;
- (SCChatConversationV3 *)conversationById:(NSString *)arg1;
- (NSDictionary *)conversationDictionary_DEPRECATED;
- (id)init;
- (id)initWithPerformer:(id <SCPerforming>)arg1;
- (void)putConversations:(NSDictionary *)arg1 completionHandler:(void (^)(_Bool))arg2;
- (void)removeConversationById:(NSString *)arg1 completionHandler:(void (^)(_Bool))arg2;
- (void)removeExpiredMessagesWithCompletionHandler:(void (^)(NSArray *))arg1;
@end

