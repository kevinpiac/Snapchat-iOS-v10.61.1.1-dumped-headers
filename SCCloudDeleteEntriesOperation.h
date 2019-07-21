//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCCloudSyncOperation.h"

@class NSArray, NSString, SCCloudSyncTriggerUserContext;
@protocol SCGalleryProfile;

@interface SCCloudDeleteEntriesOperation : SCCloudSyncOperation
{
    NSString *_requestID;
    id <SCGalleryProfile> _profile;
    NSArray *_entryIds;
    SCCloudSyncTriggerUserContext *_userContext;
    _Bool _needRunImmediately;
    _Bool _deleteSharedSnapForAll;
}

- (void).cxx_destruct;
- (_Bool)allMediaUploadsComplete;
- (id)changedSnapContextsWithEntryUpdate:(id)arg1;
- (id)cleanupContextForOutOfOrderDeletion;
- (void)cleanupWithContext:(id)arg1 cloudFS:(id)arg2 dataSource:(id)arg3;
- (id)commitWithEntryUpdates:(id)arg1 dataObjectContext:(id)arg2;
- (id)description;
- (id)detectAndResolveConflictsWithCloudFS:(id)arg1 dataObjectContext:(id)arg2 logger:(id)arg3;
- (_Bool)doesNotRequireMediaUpload;
- (_Bool)eligibleForOutOfOrderExecution;
- (id)entryIds;
- (_Bool)executeOptimisticallyWithDataObjectContext:(id)arg1 logger:(id)arg2;
- (id)initWithProfile:(id)arg1 entryIds:(id)arg2 prioritized:(_Bool)arg3 deleteSharedSnapForAll:(_Bool)arg4 userContext:(id)arg5;
- (id)initWithSnapshot:(id)arg1 requestID:(id)arg2;
- (_Bool)isOperationValidBeforeRemoteSync:(id)arg1;
- (id)logParameters;
- (id)makeSnapshot;
- (_Bool)needRunImmediately;
- (id)processAndCleanupForOutOfOrderDeletions:(id)arg1 dataSource:(id)arg2 logger:(id)arg3 queue:(id)arg4;
- (void)remoteSyncFromSequenceNumber:(long long)arg1 cloudFS:(id)arg2 dataVault:(id)arg3 networker:(id)arg4 useProtobuf:(_Bool)arg5 logger:(id)arg6 filterInvalidSnaps:(_Bool)arg7 queue:(id)arg8 failureHandler:(CDUnknownBlockType)arg9 successHandler:(CDUnknownBlockType)arg10;
- (id)requestID;
- (_Bool)requiresSyncStatusUpdate;
- (unsigned long long)type;

@end

