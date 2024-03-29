//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class SCSessionRequestManager;

@interface SCMapFSNService : NSObject
{
    SCSessionRequestManager *_sessionRequestManager;
}

- (void).cxx_destruct;
- (void)deleteExploreStatus:(id)arg1 userId:(id)arg2 completionQueue:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)deleteLocationPreferencesOnQueue:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)fetchCanRequestLocationForUserId:(id)arg1 completionQueue:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)fetchExploreStatusesOnQueue:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)fetchFriendClustersOnQueue:(id)arg1 diffBaseId:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)fetchLocationPreferencesOnQueue:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)fetchMyExploreStatusOnQueue:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)initWithSessionRequestManager:(id)arg1;
- (void)performMapStyleRequest:(id)arg1 completionQueue:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)sendClearLocationHistoryRequest:(CDUnknownBlockType)arg1;
- (void)setLocationSharingPreferencesWithRequest:(id)arg1 completionQueue:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)submitBatchExplorerViewsRequest:(id)arg1 completionQueue:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)submitLocationRequestFeedback:(int)arg1 forUserId:(id)arg2;
- (id)submitRequestToEndpoint:(id)arg1 proto:(id)arg2 key:(id)arg3 responseClass:(Class)arg4 completionQueue:(id)arg5 completionBlock:(CDUnknownBlockType)arg6;

@end

