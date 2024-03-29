//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCDataCoordinating-Protocol.h"

@class CLLocation, NSString, SCDataCoordinatorListenerAnnouncer, SCGCDBlockTimer, SCLazy, SCQueuePerformer;
@protocol SCLocationProvider;

@interface SCStoriesAuthDataProvider : NSObject <SCDataCoordinating>
{
    SCLazy *_lazySessionRequestManager;
    SCLazy *_lazyStoriesDataCoordinator;
    SCLazy *_lazyOurStoriesDescriptionProvider;
    id <SCLocationProvider> _locationProvider;
    CLLocation *_lastLocationFetched;
    SCGCDBlockTimer *_locationFetchTimer;
    SCQueuePerformer *_performer;
    SCDataCoordinatorListenerAnnouncer *_updateAnnouncer;
}

+ (id)dataCoordinatorIdentifier;
- (void).cxx_destruct;
- (void)_fetchAndUpdateLocationIfNeededWithIsFirstFetch:(_Bool)arg1;
- (void)_fetchStoriesAuthAtLocation:(id)arg1;
- (void)_handleStoryAuthResponseWithResponse:(id)arg1;
- (void)_updateLocationAndFetchStoriesAuthIfNeededWithNewLocation:(id)arg1 isFirstFetch:(_Bool)arg2;
- (void)addDataUpdateListener:(id)arg1;
- (void)handleDataRequest:(id)arg1;
- (id)initWithLocationProvider:(id)arg1 lazyRequestManager:(id)arg2 lazyStoriesDataCoordinator:(id)arg3 lazyOurStoriesDescriptionProvider:(id)arg4;
- (void)removeDataUpdateListener:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

