//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCEntryPoint.h"

@class SCAuthenticatedNetworkServices, SCCreatorSettingsService, SCDiscoverFeedBaseServices, SCIdentityDataServices, SCLegacySnapchatterServices, SCNetworkImageServices, SCServicesExposer, SCStoriesServices, SCUserSessionScope, SCUserStorageServices;

@interface SCDiscoverFeedStoriesEntryPoint : SCEntryPoint
{
    SCIdentityDataServices *_identityDataServices;
    SCAuthenticatedNetworkServices *_authenticatedNetworkServices;
    SCUserStorageServices *_userStorageServices;
    SCStoriesServices *_storiesServices;
    SCUserSessionScope *_userSessionScope;
    SCLegacySnapchatterServices *_legacySnapchatterServices;
    SCNetworkImageServices *_networkImageServices;
    SCDiscoverFeedBaseServices *_discoverFeedBaseService;
    SCCreatorSettingsService *_creatorSettingService;
    SCServicesExposer *_discoverFeedStoriesServicesExposer;
}

- (void).cxx_destruct;
- (id)_badgeTracker;
@property(nonatomic) __weak SCAuthenticatedNetworkServices *authenticatedNetworkServices; // @synthesize authenticatedNetworkServices=_authenticatedNetworkServices;
- (void)begin;
@property(nonatomic) __weak SCCreatorSettingsService *creatorSettingService; // @synthesize creatorSettingService=_creatorSettingService;
@property(nonatomic) __weak SCDiscoverFeedBaseServices *discoverFeedBaseService; // @synthesize discoverFeedBaseService=_discoverFeedBaseService;
@property(retain, nonatomic) SCServicesExposer *discoverFeedStoriesServicesExposer; // @synthesize discoverFeedStoriesServicesExposer=_discoverFeedStoriesServicesExposer;
@property(nonatomic) __weak SCIdentityDataServices *identityDataServices; // @synthesize identityDataServices=_identityDataServices;
@property(nonatomic) __weak SCLegacySnapchatterServices *legacySnapchatterServices; // @synthesize legacySnapchatterServices=_legacySnapchatterServices;
@property(nonatomic) __weak SCNetworkImageServices *networkImageServices; // @synthesize networkImageServices=_networkImageServices;
@property(nonatomic) __weak SCStoriesServices *storiesServices; // @synthesize storiesServices=_storiesServices;
@property(nonatomic) __weak SCUserSessionScope *userSessionScope; // @synthesize userSessionScope=_userSessionScope;
@property(nonatomic) __weak SCUserStorageServices *userStorageServices; // @synthesize userStorageServices=_userStorageServices;

@end

