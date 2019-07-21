//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCFriendsFeedPaginationDelegate-Protocol.h"
#import "SCTraceEnabled-Protocol.h"

@class NSString, SCLazy;

@interface SCFriendsFeedFetcher : NSObject <SCFriendsFeedPaginationDelegate, SCTraceEnabled>
{
    SCLazy *_arroyoFeedFetcher;
    SCLazy *_legacyFeedFetcher;
    long long _arroyoExperience;
    SCLazy *_loadingStatusManager;
    SCLazy *_friendsFeedDataCoordinator;
    _Bool _hasSetPaginationDelegate;
    _Bool _userNotBootstrapped;
    unsigned long long _consecutivePaginationFailures;
}

- (void).cxx_destruct;
- (void)_loadMoreConversations;
- (void)_loadMoreConversationsIfPossibleForceOnFailed:(_Bool)arg1;
- (void)_loadMoreConversationsLegacyForFetchContext:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_setPaginationDelegateIfNecessary;
- (void)_updateArroyoFeedWithLegacyFallback:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (CDUnknownBlockType)_updateCompletionWithUpdatingStatusManager:(CDUnknownBlockType)arg1;
- (void)friendsFeedDidUpdateFromPaginationWithoutNewItem;
- (_Bool)hasMoreFeedEntries;
- (id)initWithArroyoFeedFetcher:(id)arg1 legacyFeedFetcher:(id)arg2 arroyoExperience:(long long)arg3 friendsFeedDataCoordinator:(id)arg4 loadingStatusManager:(id)arg5;
- (void)loadMoreConversationsIfPossibleForceOnFailed:(_Bool)arg1 shouldRetryBlock:(CDUnknownBlockType)arg2;
- (void)updateFriendsFeedForTriggerType:(long long)arg1 completion:(CDUnknownBlockType)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

