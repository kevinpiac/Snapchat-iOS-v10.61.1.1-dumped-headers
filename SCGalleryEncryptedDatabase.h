//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCCloudSyncDataVault-Protocol.h"
#import "SCGalleryEGOCipherKeyProviderListener-Protocol.h"

@class EGOCipher, EGODatabase, NSMutableArray, NSMutableDictionary, NSString, SCGalleryLogger, SCQueuePerformer, SCUserSession;
@protocol SCGalleryProfile, SCNetworker;

@interface SCGalleryEncryptedDatabase : NSObject <SCGalleryEGOCipherKeyProviderListener, SCCloudSyncDataVault>
{
    EGOCipher *_EGOCipher;
    EGODatabase *_inMemoryCache;
    SCQueuePerformer *_performer;
    SCUserSession *_userSession;
    id <SCGalleryProfile> _profile;
    id <SCNetworker> _networker;
    SCGalleryLogger *_galleryLogger;
    NSMutableDictionary *_EGOCipherStatements;
    NSMutableDictionary *_inMemoryStatements;
    NSMutableArray *_pendingUpdates;
    NSMutableArray *_pendingEncryptionRequests;
    struct mutex _mutex;
    NSMutableDictionary *_cachedKeyIVForSnaps;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)EGOCipherKeyProviderHasMasterKeyAvailable:(id)arg1 derivedKey:(id)arg2 nonDerivedKey:(id)arg3;
- (id)_EGOCipherStatementForSQL:(id)arg1;
- (id)_EGOCipherStatementForSQL:(id)arg1 cacheQuery:(_Bool)arg2;
- (void)_executePendingUpdates;
- (id)_inMemoryStatementForSQL:(id)arg1;
- (void)_initDatabaseTables;
- (void)_logSqliteRegenerateWithContext:(id)arg1 dbFileExists:(_Bool)arg2;
- (_Bool)_performUpdate:(id)arg1 parameters:(id)arg2;
- (void)_readThroughEncryptionForSnapId:(id)arg1 queue:(id)arg2 resultHandler:(CDUnknownBlockType)arg3;
- (void)_readThroughKeyIVForSnapIds:(id)arg1 synchronous:(_Bool)arg2 localOnly:(_Bool)arg3 resultHandler:(CDUnknownBlockType)arg4;
- (_Bool)_regenerateEGOCipherAtURL:(id)arg1 masterKey:(id)arg2;
- (void)_setupWithMasterKey:(id)arg1 masterKeyAvoidKeyDerivation:(id)arg2;
- (_Bool)addKey:(id)arg1 IV:(id)arg2 isEncrypted:(_Bool)arg3 forSnapId:(id)arg4;
- (void)addKeysAndIVsWithSnaps:(id)arg1;
- (void)addLocation:(id)arg1 forSnapId:(id)arg2;
- (void)addLocationsWithSnaps:(id)arg1;
- (id)debugFaceInformationForGallerySnap:(id)arg1;
- (void)deleteFaceDataForSnapIds:(id)arg1;
- (void)deleteSnapsWithSnapIds:(id)arg1;
- (void)duplicateFromSnapIds:(id)arg1 toSnapIds:(id)arg2;
- (void)duplicateFromSnapIds:(id)arg1 toSnapIds:(id)arg2 localOnly:(_Bool)arg3;
- (void)fetchAllRelativeBoundingBoxesForMediaWithFacesWithQueue:(id)arg1 resultHandler:(CDUnknownBlockType)arg2;
- (void)fetchAllSnapMediaIdsScannedForFacesWithQueue:(id)arg1 resultHandler:(CDUnknownBlockType)arg2;
- (void)fetchFaceDataModelsWithMediaIds:(id)arg1 withQueue:(id)arg2 resultHandler:(CDUnknownBlockType)arg3;
- (void)fetchSnapMediaIdsScannedForFacesNotYetUploadedWithQueue:(id)arg1 resultHandler:(CDUnknownBlockType)arg2;
- (id)initWithUserSession:(id)arg1;
- (void)removeAllData:(CDUnknownBlockType)arg1;
- (void)removeAllFaceData;
- (void)replaceAddressTitle:(id)arg1 forSnapId:(id)arg2;
- (void)requestAddressTitleForSnapId:(id)arg1 queue:(id)arg2 resultHandler:(CDUnknownBlockType)arg3;
- (void)requestKeyForSnap:(id)arg1 queue:(id)arg2 resultHandler:(CDUnknownBlockType)arg3;
- (void)requestKeyForSnapId:(id)arg1 queue:(id)arg2 resultHandler:(CDUnknownBlockType)arg3;
- (void)requestKeyIVFromLocalOnlySynchronouslyForSnapId:(id)arg1 resultHandler:(CDUnknownBlockType)arg2;
- (void)requestLocationForSnapId:(id)arg1 synchronous:(_Bool)arg2 queue:(id)arg3 resultHandler:(CDUnknownBlockType)arg4;
- (void)saveFaceResults:(id)arg1 faceVersion:(long long)arg2 forSnap:(id)arg3 queue:(id)arg4 resultHandler:(CDUnknownBlockType)arg5;
- (id)snapIdToLocationMapWithinMinLatitude:(double)arg1 maxLatitude:(double)arg2 minLongitude:(double)arg3 maxLongitude:(double)arg4;
- (id)snapIdsWithEncryption;
- (void)updateSnapMediaFacesAsUploadedWithMediaIds:(id)arg1 queue:(id)arg2 resultHandler:(CDUnknownBlockType)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

