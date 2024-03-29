//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCCloudSyncOperation.h"

#import "SCCloudSyncStoryOperation-Protocol.h"

@class NSDictionary, NSString, SCCloudSyncTriggerUserContext;
@protocol SCGalleryProfile, SCGallerySnap, SCGallerySnapDetail, SCGallerySnapMiniThumbnail;

@interface SCCloudUpdateEntryOperation : SCCloudSyncOperation <SCCloudSyncStoryOperation>
{
    NSString *_requestID;
    id <SCGalleryProfile> _profile;
    NSString *_entryId;
    NSString *_deletedSnapId;
    NSString *_title;
    NSDictionary *_dataVaultEncryption;
    id <SCGallerySnap> _snapPlaceholder;
    id <SCGallerySnapDetail> _detailPlaceholder;
    id <SCGallerySnapMiniThumbnail> _miniThumbnailPlaceholder;
    SCCloudSyncTriggerUserContext *_userContext;
    _Bool _requiresSyncStatusUpdate;
    _Bool _deleteSharedSnapForAll;
}

- (void).cxx_destruct;
- (void)_updateEntriesFromSequenceNumber:(long long)arg1 networker:(id)arg2 useProtobuf:(_Bool)arg3 queue:(id)arg4 logger:(id)arg5 snapsUploadInfo:(id)arg6 failureHandler:(CDUnknownBlockType)arg7 successHandler:(CDUnknownBlockType)arg8;
- (_Bool)allMediaUploadsComplete;
- (id)changedSnapContextsWithEntryUpdate:(id)arg1;
- (id)cleanupContextForOutOfOrderDeletion;
- (void)cleanupWithContext:(id)arg1 cloudFS:(id)arg2 dataSource:(id)arg3;
- (id)commitWithEntryUpdates:(id)arg1 dataObjectContext:(id)arg2;
- (id)dataVaultEncryption;
@property(readonly, copy) NSString *description;
- (id)detailPlaceholders;
- (id)detectAndResolveConflictsWithCloudFS:(id)arg1 dataObjectContext:(id)arg2 logger:(id)arg3;
- (_Bool)doesNotRequireMediaUpload;
- (_Bool)eligibleForOutOfOrderExecution;
- (id)entryIds;
- (_Bool)executeOptimisticallyWithDataObjectContext:(id)arg1 logger:(id)arg2;
- (id)initWithEntryId:(id)arg1 deleteSnapId:(id)arg2 deleteSharedSnapForAll:(_Bool)arg3 profile:(id)arg4 userContext:(id)arg5;
- (id)initWithEntryId:(id)arg1 replaceSnapId:(id)arg2 addSnapEntity:(id)arg3 dataVaultEncryption:(id)arg4 profile:(id)arg5 userContext:(id)arg6;
- (id)initWithEntryId:(id)arg1 title:(id)arg2 profile:(id)arg3 userContext:(id)arg4;
- (id)initWithProfile:(id)arg1 entryId:(id)arg2 title:(id)arg3 deletedSnapId:(id)arg4 addSnapEntity:(id)arg5 dataVaultEncryption:(id)arg6 userContext:(id)arg7;
- (id)initWithSnapshot:(id)arg1 requestID:(id)arg2;
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
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

