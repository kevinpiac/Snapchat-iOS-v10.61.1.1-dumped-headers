//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCEntryPoint.h"

@class SCCircumstanceEngineServices, SCDiscoverFeedLegacyServices, SCServicesExposer, SCUserSessionScope;

@interface SCDiscoverBackgroundPrefetcherEntryPoint : SCEntryPoint
{
    SCUserSessionScope *_userSessionScope;
    SCDiscoverFeedLegacyServices *_discoverFeedLegacyServices;
    SCCircumstanceEngineServices *_circumstanceEngineServices;
    SCServicesExposer *_discoverBackgroundPrefetchServicesExposer;
}

- (void).cxx_destruct;
- (void)begin;
@property(nonatomic) __weak SCCircumstanceEngineServices *circumstanceEngineServices; // @synthesize circumstanceEngineServices=_circumstanceEngineServices;
@property(retain, nonatomic) SCServicesExposer *discoverBackgroundPrefetchServicesExposer; // @synthesize discoverBackgroundPrefetchServicesExposer=_discoverBackgroundPrefetchServicesExposer;
@property(nonatomic) __weak SCDiscoverFeedLegacyServices *discoverFeedLegacyServices; // @synthesize discoverFeedLegacyServices=_discoverFeedLegacyServices;
@property(nonatomic) __weak SCUserSessionScope *userSessionScope; // @synthesize userSessionScope=_userSessionScope;

@end

