//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCOperaPlaylistItemGroupResolver-Protocol.h"
#import "SCStreamingURLProviding-Protocol.h"

@class FBKVOController, NSMutableDictionary, NSString, SCDiscoverEdition, SCDiscoverOperaMediaManager, SCDiscoverSubscriptionChecker, SCDiscoverUserProperties, SCLazy, SCScopedAccess, SCUserSession;
@protocol NavigationDelegate, SCOperaPlaylistItemController, SCStreamingURLProviding;

@interface SCSingleDiscoverEditionOperaDataSource : NSObject <SCStreamingURLProviding, SCOperaPlaylistItemGroupResolver>
{
    SCDiscoverUserProperties *_discoverUserProperties;
    SCUserSession *_userSession;
    FBKVOController *_kvoController;
    id <SCOperaPlaylistItemController> _playlistItemController;
    SCDiscoverSubscriptionChecker *_subscriptionChecker;
    SCDiscoverOperaMediaManager *_mediaManager;
    id <NavigationDelegate> _navigationDelegate;
    _Bool _shouldStartWithLongform;
    NSMutableDictionary *_playlistDSnapIDToChunkMap;
    id <SCStreamingURLProviding> _streamingURLProvider;
    CDUnknownBlockType _firstChunkLoadedCallback;
    SCScopedAccess *_discoverFeedDataCoordinatorAccess;
    SCLazy *_lazyPublisherStoriesMetadataCoordinator;
    SCDiscoverEdition *_edition;
}

+ (id)announcerIdentifier;
- (void).cxx_destruct;
- (void)_chunkLoadingStateDidChange:(id)arg1 chunk:(id)arg2;
- (void)_didFetchPlaybackSequence:(id)arg1 completion:(CDUnknownBlockType)arg2 deltaFetchStartTime:(double)arg3;
- (void)_editionChannelSubscribeStateDidChange;
- (void)_invokeFirstChunkLoadedCallbackIfNecessary:(id)arg1;
- (void)_prefetchMediaForChunk:(id)arg1;
- (void)_removeAdChunk:(id)arg1;
- (void)_removeAdChunkOnMain:(id)arg1;
- (void)_updatePlaylistItemBasedOnId:(id)arg1;
- (id)dataModelForItem:(id)arg1;
- (void)dealloc;
@property(retain, nonatomic) SCDiscoverEdition *edition; // @synthesize edition=_edition;
- (void)fetchDeltaChunks:(CDUnknownBlockType)arg1;
- (id)initWithEdition:(id)arg1 discoverUserProperties:(id)arg2 shouldStartWithLongform:(_Bool)arg3 userSession:(id)arg4 playlistItemController:(id)arg5 mediaManager:(id)arg6 navigationDelegate:(id)arg7;
- (void)loadMediaForPlaylistItemGroup:(id)arg1;
- (void)pagesPropertiesForDataModel:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)resolvePlaylistItemGroup:(id)arg1;
- (id)streamingURLForRequestInfo:(id)arg1;
- (void)teardownDataModelForItem:(id)arg1;
- (void)unresolvePlaylistItemGroup:(id)arg1;
- (void)waitForItemBecomeLoaded:(id)arg1 startWaitingForDownloadCallback:(CDUnknownBlockType)arg2 completion:(CDUnknownBlockType)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

