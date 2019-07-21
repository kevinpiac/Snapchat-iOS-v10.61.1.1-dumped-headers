//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCNetworkConnectivityListener-Protocol.h"

@class NSString, SCFeatureSettingsManager, SCLocationSharingPreferencesV1, SCMapBasePersonLocationsProvider, SCServerConfig;

@interface SCMapFriendLocationsPreloader : NSObject <SCNetworkConnectivityListener>
{
    SCFeatureSettingsManager *_featureSettingsManager;
    SCLocationSharingPreferencesV1 *_locationSharingPreferences;
    SCMapBasePersonLocationsProvider *_mapBasePersonLocationsProvider;
    SCServerConfig *_serverConfig;
}

- (void).cxx_destruct;
- (void)_onApplicationWillEnterForeground:(id)arg1;
- (void)_preloadIfNecessary;
- (id)initWithFeatureSettingsManager:(id)arg1 locationSharingPreferences:(id)arg2 mapBasePersonLocationsProvider:(id)arg3 serverConfig:(id)arg4;
- (void)networkConnectivityStatusDidChange:(long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
