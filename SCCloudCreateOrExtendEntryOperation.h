//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCCloudSyncOperation.h"

#import "SCCloudSyncStoryOperation-Protocol.h"

@class NSArray, NSDate, NSDictionary, NSString, SCCloudSyncTriggerUserContext;
@protocol SCGalleryEntry, SCGalleryProfile;

@interface SCCloudCreateOrExtendEntryOperation : SCCloudSyncOperation <SCCloudSyncStoryOperation>
{
    NSString *_requestID;
    id <SCGalleryProfile> _profile;
    id <SCGalleryEntry> _entryPlaceholder;
    NSArray *_snapPlaceholders;
    NSArray *_detailPlaceholders;
    NSArray *_miniThumbnailPlaceholders;
    NSDictionary *_dataVaultEncryption;
    NSDate *_autosaveTimeUtc;
    SCCloudSyncTriggerUserContext *_userContext;
}

- (void).cxx_destruct;
- (void)_updateEntryFromSequenceNumber:(long long)arg1 cloudFS:(id)arg2 networker:(id)arg3 useProtobuf:(_Bool)arg4 logger:(id)arg5 queue:(id)arg6 snapsUploadInfo:(id)arg7 failureHandler:(CDUnknownBlockType)arg8 successHandler:(CDUnknownBlockType)arg9;
- (_Bool)allMediaUploadsComplete;
- (id)changedSnapContextsWithEntryUpdate:(id)arg1;
- (id)cleanupContextForOutOfOrderDeletion;
- (void)cleanupWithContext:(id)arg1 cloudFS:(id)arg2 dataSource:(id)arg3;
- (id)commitWithEntryUpdates:(id)arg1 dataObjectContext:(id)arg2;
- (id)dataVaultEncryption;
- (id)detailPlaceholders;
- (id)detectAndResolveConflictsWithCloudFS:(id)arg1 dataObjectContext:(id)arg2 logger:(id)arg3;
- (_Bool)doesNotRequireMediaUpload;
- (_Bool)eligibleForOutOfOrderExecution;
- (id)entryIds;
- (_Bool)executeOptimisticallyWithDataObjectContext:(id)arg1 logger:(id)arg2;
- (id)initWithEntryPlaceholder:(id)arg1 addSnapEntities:(id)arg2 autosaveTimeUtc:(id)arg3 dataVaultEncryption:(id)arg4 profile:(id)arg5 userContext:(id)arg6;
- (id)initWithSnapshot:(id)arg1 requestID:(id)arg2;
- (_Bool)isOperationFromRetryEntry;
- (_Bool)isOperationValidBeforeRemoteSync:(id)arg1;
- (_Bool)isPrivate;
- (id)logParameters;
- (id)makeSnapshot;
- (id)miniThumbnailPlaceholders;
- (_Bool)needRunImmediately;
- (unsigned long long)numberOfSnaps;
- (id)processAndCleanupForOutOfOrderDeletions:(id)arg1 dataSource:(id)arg2 logger:(id)arg3 queue:(id)arg4;
- (void)remoteSyncFromSequenceNumber:(long long)arg1 cloudFS:(id)arg2 dataVault:(id)arg3 networker:(id)arg4 useProtobuf:(_Bool)arg5 logger:(id)arg6 filterInvalidSnaps:(_Bool)arg7 queue:(id)arg8 failureHandler:(CDUnknownBlockType)arg9 successHandler:(CDUnknownBlockType)arg10;
- (id)requestID;
- (_Bool)requiresSyncStatusUpdate;
- (id)snapPlaceholders;
- (unsigned long long)type;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

