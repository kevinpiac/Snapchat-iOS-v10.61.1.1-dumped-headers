//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCStoriesMediaCoordinating-Protocol.h"
#import "SCTraceEnabled-Protocol.h"

@class NSString, SCDataCoordinatorListenerAnnouncer, SCQueuePerformer, SCStoriesCallbackArray, SCStoriesMediaDownloader, SCStoriesMediaStateCache, SCStoriesMediaStore;

@interface SCMyStoriesMediaCoordinator : NSObject <SCTraceEnabled, SCStoriesMediaCoordinating>
{
    SCDataCoordinatorListenerAnnouncer *_eventAnnouncer;
    SCStoriesMediaStore *_mediaStore;
    SCStoriesMediaStateCache *_mediaStateCache;
    SCStoriesMediaDownloader *_mediaDownloader;
    SCStoriesCallbackArray *_callbackArray;
    SCQueuePerformer *_mediaPerformer;
    SCQueuePerformer *_announcerPerformer;
}

+ (id)dataCoordinatorIdentifier;
- (void).cxx_destruct;
- (void)_addSnapMediaWithMediaInfo:(id)arg1 decryptedMedia:(id)arg2 shouldGenerateThumbnails:(_Bool)arg3;
- (void)_announceMediaStateUpdate:(id)arg1 mediaState:(long long)arg2 cause:(long long)arg3;
- (void)_announceRemovedMediaStateUpdates:(id)arg1;
- (void)_deleteMediaWithCacheKeys:(id)arg1;
- (void)_fetchMediaIfNeededOnPerformer:(id)arg1 contexts:(id)arg2 userInitiated:(_Bool)arg3 mediaDataCompletion:(CDUnknownBlockType)arg4;
- (void)_fetchMediaOnPerformer:(id)arg1 contexts:(id)arg2 userInitiated:(_Bool)arg3 callback:(CDUnknownBlockType)arg4;
- (void)_handleFailureCallbackForMediaInfo:(id)arg1;
- (void)_handleFetchedAndCachedMedia:(id)arg1 decryptedMedia:(id)arg2 success:(_Bool)arg3;
- (void)_handleQueriedLocalMediaForMediaInfo:(id)arg1 media:(id)arg2 contexts:(id)arg3 completionQueue:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (void)_handleRemovedCacheKeys:(id)arg1;
- (void)_handleSuccessCallbackForMediaInfo:(id)arg1 responseData:(id)arg2;
- (CDUnknownBlockType)_mediaDownloadCallback:(id)arg1;
- (CDUnknownBlockType)_mediaStateFetchBlock;
- (void)_queryMediaStateForMediaInfo:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_removeMediaFromDiskWithCacheKeys:(id)arg1;
- (long long)_syncQueryMediaStateForMediaInfo:(id)arg1;
- (void)addDataUpdateListener:(id)arg1;
- (void)deleteAllMediaFromCacheWithCompletion:(CDUnknownBlockType)arg1;
- (void)handleDataRequest:(id)arg1;
- (id)initWithStoriesMediaStore:(id)arg1 sessionRequestManager:(id)arg2;
- (long long)mediaStateForMedia:(id)arg1;
- (void)queryCachedDataLocallyForMediaInfo:(id)arg1 contexts:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)queryMediaDataForMediaInfo:(id)arg1 contexts:(id)arg2 completionQueue:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)queryMediaForMediaInfo:(id)arg1 completionQueue:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)queryMediaStateForMedia:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)removeDataUpdateListener:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
