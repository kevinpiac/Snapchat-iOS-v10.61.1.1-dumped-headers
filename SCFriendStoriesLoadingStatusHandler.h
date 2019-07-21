//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCDataCoordinatorListener-Protocol.h"
#import "SCFriendStoriesLoadingStatusHandling-Protocol.h"

@class NSMutableDictionary, NSSet, NSString, SCLazy, SCQueuePerformer, SCUpdateListenerAnnouncer;

@interface SCFriendStoriesLoadingStatusHandler : NSObject <SCDataCoordinatorListener, SCFriendStoriesLoadingStatusHandling>
{
    SCUpdateListenerAnnouncer *_announcer;
    SCLazy *_lazyStoriesMediaCoordinator;
    SCLazy *_lazyStoriesPlaybackDataProvider;
    NSMutableDictionary *_loadingMediaCacheKeyToUserInitiatedMap;
    NSMutableDictionary *_loadingMediaCacheKeyToStoryIdMap;
    NSSet *_userIntiatedLoadingStoriesIdentifiers;
    SCQueuePerformer *_performer;
}

+ (id)announcerIdentifier;
- (void).cxx_destruct;
- (void)_queryLoadingStatusForFriendStoriesPlaybackInfoMap:(id)arg1 isUserInitiated:(_Bool)arg2 completionQueue:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)_storyLoadingStateForMinCountPlaybackSnapsInPlaybackInfos:(id)arg1 isUserInitiated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_updateLoadingStatusAndAnnounceIfNeededForCacheKey:(id)arg1 mediaState:(long long)arg2;
- (void)addUpdateListener:(id)arg1;
- (void)dataCoordinatorDidUpdateWithIdentifier:(id)arg1 dataRequest:(id)arg2;
- (id)initWithLazyStoriesMediaCoordinator:(id)arg1 lazyStoriesPlaybackDataProvider:(id)arg2;
- (void)loadMediaWithMediaCacheKey:(id)arg1 friendStoriesIdentifier:(id)arg2 userInitiated:(_Bool)arg3;
- (void)queryLoadingStatusForFriendStoriesIds:(id)arg1 isUserInitiated:(_Bool)arg2 completionQueue:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)removeUpdateListener:(id)arg1;
- (void)resetTappedFriendStories;
- (id)userIntiatedLoadingStoriesIdentifiers;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

