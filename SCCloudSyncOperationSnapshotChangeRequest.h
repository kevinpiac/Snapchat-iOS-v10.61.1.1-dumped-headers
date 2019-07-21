//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData, NSDate, NSString, SCCDCloudSyncOperationSnapshot, SCObjectPlaceholder;

@interface SCCloudSyncOperationSnapshotChangeRequest : NSObject
{
    SCCDCloudSyncOperationSnapshot *_cloudSyncOperationSnapshot;
    SCObjectPlaceholder *_objectPlaceholder;
}

+ (id)changeRequestForCloudSyncOperationSnapshot:(id)arg1;
+ (id)creationRequestWithCloudSyncOperationSnapshot:(id)arg1;
+ (void)deleteAllCloudSyncOperationSnapshots;
+ (void)deleteCloudSyncOperationSnapshots:(id)arg1;
- (void).cxx_destruct;
@property(copy, nonatomic) NSDate *createTimeUtc;
- (id)initWithCloudSyncOperationSnapshot:(id)arg1;
@property(readonly, copy, nonatomic) NSString *objectID;
@property(copy, nonatomic) NSData *payload;
@property(readonly, nonatomic) SCObjectPlaceholder *placeholderForCreatedCloudSyncOperationSnapshot;
@property(copy, nonatomic) NSString *requestID;
@property(nonatomic) long long seqNum;
- (void)setOwner:(id)arg1;
@property(copy, nonatomic) NSString *targetEntryId;
- (void)setWithCloudSyncOperationSnapshot:(id)arg1;

@end

