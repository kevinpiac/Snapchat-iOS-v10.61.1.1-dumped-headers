//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCSnapchatterPublicInfoFetcher-Protocol.h"

@class NSMutableDictionary, NSString, SCQueuePerformer, SCSessionRequestManager, SCSnapchattersGrapheneLogger;
@protocol SCSnapchattersBugFiler;

@interface SCRemoteSnapchatterPublicInfoFetcher : NSObject <SCSnapchatterPublicInfoFetcher>
{
    SCSessionRequestManager *_sessionRequestManager;
    id <SCSnapchattersBugFiler> _snapchattersBugFiler;
    SCSnapchattersGrapheneLogger *_grapheneLogger;
    SCQueuePerformer *_performer;
    NSMutableDictionary *_userIdToSnapchatterMap;
    NSString *_callStack;
}

- (void).cxx_destruct;
- (void)_fetchBatchedRemoteSnapchattersWithUserIds:(id)arg1 requestSource:(long long)arg2 completionQueue:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)_fetchRemoteSnapchattersIfNecessaryForUserIds:(id)arg1 requestSource:(long long)arg2 completionQueue:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)_fetchRemoteSnapchattersWithUserIds:(id)arg1 requestSource:(long long)arg2 completionQueue:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)_reportExceedFetchLimitErrorWithUserIdsCount:(unsigned long long)arg1 requestSource:(long long)arg2;
- (void)_reportServerNetworkError:(id)arg1 requestSource:(long long)arg2 userIds:(id)arg3;
- (void)_reportUnmatchedUserIds:(id)arg1 serverSnapchaters:(id)arg2 requestSource:(long long)arg3 publicInfoResponse:(id)arg4;
- (void)_snapchattersWithUserIds:(id)arg1 completionQueue:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)_updateCallStack;
- (void)_updateUserIdToSnapchatterMap:(id)arg1;
- (id)initWithSessionRequestManager:(id)arg1 snapchattersBugFiler:(id)arg2 grapheneLogger:(id)arg3;
- (void)snapchattersWithUserIds:(id)arg1 requestSource:(long long)arg2 completionQueue:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;

@end

