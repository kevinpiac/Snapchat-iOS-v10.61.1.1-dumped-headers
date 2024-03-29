//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, SCDisposableObserverLifecycle, SCEllipticCurveCrypto, SCFideliusLogger;
@protocol SCFideliusDataProvider, SCPerforming;

@interface SCFideliusIdentityService : NSObject
{
    id <SCFideliusDataProvider> _dataSource;
    SCEllipticCurveCrypto *_beta;
    SCFideliusLogger *_logger;
    NSMutableArray *_unProcessedFideliusFriendMetadataUpdateDatas;
    id <SCPerforming> _performer;
    SCDisposableObserverLifecycle *_disposableObserverLifecycle;
}

- (void).cxx_destruct;
- (void)_addUnProcessedFideliusFriendMetadataUpdateData:(id)arg1;
- (id)_batchHandshake:(id)arg1 forUser:(id)arg2;
- (void)_batchProcessFriendInfo:(id)arg1 userIds:(id)arg2;
- (void)_beginObservation:(id)arg1;
- (void)_fetchMissingKeysForMutualFriends;
- (void)_findMutualFriendsWithoutKeys:(CDUnknownBlockType)arg1;
- (void)_mutateSnapchatters:(id)arg1;
- (id)_myBeta;
- (void)_processAddFideliusFriendMetadataUpdateData:(id)arg1;
- (void)_processDeleteFideliusFriendMetadataUpdateData:(id)arg1;
- (void)_processFetchFideliusFriendMetadataUpdateData:(id)arg1;
- (void)_processFideliusFriendMetadataMap:(struct NSDictionary *)arg1 source:(id)arg2;
- (void)_processFideliusFriendMetadataUpdateData:(id)arg1;
- (void)_processFriendInfo:(id)arg1 info:(id)arg2;
- (id)_processFriendKeys:(id)arg1;
- (void)_processFriendKeysFromFetch:(id)arg1 statusCode:(long long)arg2 friendKeysRequested:(long long)arg3;
- (void)_processQueuedFideliusFriendMetadataUpdateData;
- (void)_removeFriendId:(id)arg1;
- (_Bool)beginObservation:(id)arg1;
- (void)dataInvalidated;
- (void)deleteAllFriends;
- (void)fetchMissingFriends;
- (_Bool)hasKeysForFriendUserId:(id)arg1;
- (id)initWithDataSource:(id)arg1 useFakePerformer:(_Bool)arg2 logger:(id)arg3;
- (void)processFideliusFriendMetadataUpdateData:(id)arg1;
- (void)processFriendKeysFromClientInit:(id)arg1;
- (void)processKeysFromRetryInit:(id)arg1;
- (void)processKeysFromSendSnapRewrap:(id)arg1 recipients:(long long)arg2;
- (void)processQueuedFideliusFriendMetadataUpdateData;
- (void)setBeta:(id)arg1;

@end

