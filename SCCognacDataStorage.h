//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, SCCognacAppCatalog, SCCognacDataStorageUpdateListenerAnnouncer, SCQueuePerformer;

@interface SCCognacDataStorage : NSObject
{
    SCQueuePerformer *_performer;
    SCCognacDataStorageUpdateListenerAnnouncer *_updateAnnouncer;
    SCCognacAppCatalog *_appCatalog;
    struct NSDictionary *_appIdToUserScopedAppInstanceDataModel;
    struct NSDictionary *_conversationIdToAppInstanceCollection;
    struct NSDictionary *_leaderboardIdToLeaderboard;
}

- (void).cxx_destruct;
- (id)_updateAppInstanceCollection:(id)arg1;
- (id)_updateUserScopedAppInstanceDataModelWithAppInstanceDataModel:(id)arg1;
- (id)allAvailableAppDict;
@property(copy) SCCognacAppCatalog *appCatalog; // @synthesize appCatalog=_appCatalog;
@property(copy) NSDictionary *appIdToUserScopedAppInstanceDataModel; // @synthesize appIdToUserScopedAppInstanceDataModel=_appIdToUserScopedAppInstanceDataModel;
- (id)appInstanceCollectionWithConversationId:(id)arg1;
- (id)appInstanceDataModelWithConversationId:(id)arg1 appId:(id)arg2;
- (id)appInstanceDataModelWithConversationId:(id)arg1 appInstanceId:(id)arg2;
- (id)appInstanceDataModelsWithConversationId:(id)arg1;
- (void)cleanUp;
@property(copy) NSDictionary *conversationIdToAppInstanceCollection; // @synthesize conversationIdToAppInstanceCollection=_conversationIdToAppInstanceCollection;
- (_Bool)hasAppDataModelWithAppId:(id)arg1;
- (_Bool)hasAppInstanceWithConversationId:(id)arg1;
- (_Bool)hasValidAppInstanceInConversation:(id)arg1;
- (id)init;
- (_Bool)isNewOrUpdatedAppWithAppId:(id)arg1;
@property(copy) NSDictionary *leaderboardIdToLeaderboard; // @synthesize leaderboardIdToLeaderboard=_leaderboardIdToLeaderboard;
- (id)leaderboardWithLeaderboardId:(id)arg1;
- (id)targetedAppArray;
- (id)targetedAppDict;
@property(readonly, nonatomic) SCCognacDataStorageUpdateListenerAnnouncer *updateAnnouncer; // @synthesize updateAnnouncer=_updateAnnouncer;
- (void)updateAppInstanceCollection:(id)arg1 conversationId:(id)arg2 triggerType:(unsigned long long)arg3 completionQueue:(id)arg4 completionBlock:(CDUnknownBlockType)arg5;
- (void)updateUserScopedAppInstanceDataModel:(id)arg1 completionQueue:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)updateWithAppDataModel:(id)arg1 completionQueue:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)updateWithAppDataModels:(id)arg1 completionQueue:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)updateWithLeaderboard:(id)arg1 completionQueue:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (id)userScopedAppInstanceDataModelWithAppId:(id)arg1;

@end

