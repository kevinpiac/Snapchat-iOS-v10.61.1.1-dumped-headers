//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCSearchDynamicStoryProvider-Protocol.h"
#import "SCSearchDynamicStorySnapsProviding-Protocol.h"

@class NSCache, NSString, SCEventListenerAnnouncer, SCSearchDeepLinkStoriesService, SCUserSession;

@interface SCSearchStoriesProvider : NSObject <SCSearchDynamicStoryProvider, SCSearchDynamicStorySnapsProviding>
{
    NSCache *_friendStoriesByStoryId;
    NSCache *_dynamicStoriesByStoryId;
    SCUserSession *_userSession;
    SCSearchDeepLinkStoriesService *_deeplinkStoriesService;
    SCEventListenerAnnouncer *_eventAnnouncer;
}

+ (id)announcerIdentifier;
- (void).cxx_destruct;
- (id)_cachedFriendStoriesForDynamicStory:(id)arg1;
- (void)_didFetchSubsequentSnapsForDynamicStoryId:(id)arg1 request:(id)arg2 response:(id)arg3 data:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (void)_saveDynamicStory:(id)arg1 withKey:(id)arg2;
- (void)_saveFriendStroies:(id)arg1 withKey:(id)arg2;
- (void)_updateFriendStories:(id)arg1 withDynamicStory:(id)arg2 snaps:(id)arg3 error:(id)arg4 cacheKey:(id)arg5;
- (void)dynamicStoryForStoryId:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)fetchRemainingSnapsWithDynamicStoryId:(id)arg1 numberOfAvailableSnaps:(long long)arg2 friendStories:(id)arg3;
- (void)fetchSubsequentSnapsForDynamicStoryId:(id)arg1 numSnapsSent:(unsigned long long)arg2 completion:(CDUnknownBlockType)arg3;
- (id)friendStoriesForDynamicStory:(id)arg1;
- (id)friendStoriesForOpaqueStoryId:(id)arg1;
- (id)initWithUserSession:(id)arg1;
- (void)resetCache;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

