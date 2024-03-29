//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCFriendLocationsListener-Protocol.h"
#import "SCLocationListener-Protocol.h"
#import "SCMapPeopleFriendsListener-Protocol.h"
#import "SCMapPersonLocationsProviding-Protocol.h"
#import "SCMapStatusFetchingListener-Protocol.h"

@class CLLocation, NSDictionary, NSHashTable, NSSet, NSString, SCFriendLocationsDataStore, SCMTFriendLocation, SCMapExploreDataStoreV1, SCMapPersonLocationsListenerAnnouncer;
@protocol SCLocationProvider, SCMapPeopleFriendsProvider, SCObserving;

@interface SCMapBasePersonLocationsProvider : NSObject <SCFriendLocationsListener, SCLocationListener, SCMapPeopleFriendsListener, SCMapStatusFetchingListener, SCMapPersonLocationsProviding>
{
    NSString *_currentUserId;
    SCFriendLocationsDataStore *_friendLocationsDataStore;
    id <SCLocationProvider> _locationProvider;
    SCMapExploreDataStoreV1 *_mapExploreDataStore;
    id <SCMapPeopleFriendsProvider> _mapPeopleFriendsProvider;
    id <SCObserving> _activeLocationObserver;
    SCMapPersonLocationsListenerAnnouncer *_announcer;
    NSSet *_personLocationClusters;
    NSDictionary *_personLocationClustersByUserId;
    NSDictionary *_personLocationsByUserId;
    CLLocation *_lastCurrentUserLocation;
    SCMTFriendLocation *_lastCurrentUserFriendLocation;
    NSHashTable *_listenersRequiringPeriodicUpdates;
}

- (void).cxx_destruct;
- (_Bool)_hasListenersRequiringPeriodicUpdates;
- (void)_stopPeriodicUpdatesIfNoLongerRequired;
- (void)_updatePersonLocationClusters;
- (id)allPersonLocationClusters;
- (id)allPersonLocations;
- (id)announcer;
- (void)dealloc;
- (void)friendLocationsDataStoreDidUpdateCurrentUserFriendLocation:(id)arg1;
- (void)friendLocationsDidChange:(id)arg1 affectedUserIds:(id)arg2;
@property(readonly, nonatomic) _Bool hasHadSuccessfulUpdate;
- (id)initWithUserId:(id)arg1 friendLocationsDataStore:(id)arg2 locationProvider:(id)arg3 mapExploreDataStore:(id)arg4 mapPeopleFriendsProvider:(id)arg5;
- (_Bool)isLastUpdateOlderThan:(double)arg1;
- (void)locationProvider:(id)arg1 didUpdateLocation:(id)arg2;
- (void)mapStatusFetcherDidLoadMyStatus:(id)arg1;
- (void)mapStatusFetcherDidLoadStatuses:(id)arg1;
- (void)peopleFriendsProviderDidUpdate:(id)arg1;
- (id)personLocationClusterForUserId:(id)arg1;
- (id)personLocationForUserId:(id)arg1;
- (void)reloadIfOlderThan:(double)arg1;
- (void)removeRequestedUpdatesForListener:(id)arg1;
- (void)requestPeriodicUpdatesForListener:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

