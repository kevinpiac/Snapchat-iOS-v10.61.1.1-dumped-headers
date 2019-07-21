//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCFideliusDeviceGraphDictionaryDelegate-Protocol.h"

@class NSMutableDictionary, NSString, SCFideliusDeviceGraph, SCFideliusLogger, SCQueuePerformer;

@interface SCFideliusDeviceGraphManager : NSObject <SCFideliusDeviceGraphDictionaryDelegate>
{
    SCQueuePerformer *_performer;
    _Bool _useFakePerformer;
    _Bool _foundGraphFileThisSession;
    SCFideliusLogger *_logger;
    NSMutableDictionary *_childManagers;
    SCFideliusDeviceGraph *_devices;
}

+ (id)fideliusDeviceGraphPath;
+ (id)shared;
+ (id)sharedForTest;
- (void).cxx_destruct;
- (id)_allDbNames;
- (_Bool)_archiveOrDatabaseFileExists;
- (id)_createAndLoadManagerIwek:(id)arg1 hashedBeta:(id)arg2 identity:(id)arg3;
- (void)_deleteAllDatabases;
- (void)_deleteDatabasesForVersion:(unsigned long long)arg1;
- (void)_deleteFideliusDeviceGraph;
- (void)_deleteFolderIfExists:(id)arg1 version:(unsigned long long)arg2 source:(id)arg3;
- (void)_deleteOldDatabases;
- (void)_deleteOrphanedDatabasesCurrentVersion;
- (void)_deleteTempIdentitiesAndSave:(_Bool)arg1;
- (void)_deleteTempIdentity:(id)arg1 iwek:(id)arg2 hashedBeta:(id)arg3 reason:(id)arg4 message:(id)arg5;
- (_Bool)_initFields;
- (_Bool)_loadFideliusDeviceGraph;
- (id)_loadFideliusDeviceGraphFromArchive;
- (id)_loadFideliusDeviceGraphFromKeychain;
- (_Bool)_loadLocal;
- (_Bool)_saveFideliusDeviceGraph;
- (_Bool)_saveFideliusDeviceGraph:(_Bool)arg1;
- (_Bool)_saveFideliusDeviceGraphToArchive;
- (_Bool)_saveFideliusDeviceGraphToKeychain;
- (_Bool)_saveTempIdentity:(id)arg1;
- (_Bool)_validateDeviceGraph:(id)arg1 source:(id)arg2;
- (void)closeUserDatabaseManager:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (void)deleteDeviceRowForHashedBeta:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (void)deleteTempIdentities;
@property(retain, nonatomic) SCFideliusDeviceGraph *devices; // @synthesize devices=_devices;
- (void)forceLoad;
- (void)forceSave;
- (id)hashedBetas;
- (id)init;
- (id)initWithPerformer:(id)arg1 forTest:(_Bool)arg2;
- (void)loadManagerForUser:(id)arg1 hashedBeta:(id)arg2 iwek:(id)arg3 identity:(id)arg4 callback:(CDUnknownBlockType)arg5;
- (void)markTempIdentityAsReady:(id)arg1 iwek:(id)arg2 identity:(id)arg3 callback:(CDUnknownBlockType)arg4;
- (void)onAdd:(_Bool)arg1 countBefore:(unsigned long long)arg2;
- (void)onOrderUpdated;
- (void)onPurge:(id)arg1;
- (void)resetAllUsers;
- (_Bool)saveTempIdentity:(id)arg1;
- (_Bool)userDeviceExistsForHashedBeta:(id)arg1;
- (id)userDeviceForHashedBeta:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

