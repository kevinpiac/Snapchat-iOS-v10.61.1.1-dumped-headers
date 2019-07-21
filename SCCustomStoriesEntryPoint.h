//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCEntryPoint.h"

@class SCGroupServices, SCLegacySnapchatterServices, SCLegacyStoriesServices, SCServicesExposer, SCSnapchatterServices, SCStoriesServices, SCUserSessionScope;

@interface SCCustomStoriesEntryPoint : SCEntryPoint
{
    SCUserSessionScope *_userSessionScope;
    SCGroupServices *_groupServices;
    SCSnapchatterServices *_snapchatterServices;
    SCLegacySnapchatterServices *_legacySnapchatterServices;
    SCLegacyStoriesServices *_legacyStoriesServices;
    SCStoriesServices *_storiesServices;
    SCServicesExposer *_customStoriesServices;
}

- (void).cxx_destruct;
- (id)_createCustomStoriesDataFetcher;
- (id)_createCustomStoriesDataMutator;
- (void)begin;
@property(retain, nonatomic) SCServicesExposer *customStoriesServices; // @synthesize customStoriesServices=_customStoriesServices;
@property(nonatomic) __weak SCGroupServices *groupServices; // @synthesize groupServices=_groupServices;
@property(nonatomic) __weak SCLegacySnapchatterServices *legacySnapchatterServices; // @synthesize legacySnapchatterServices=_legacySnapchatterServices;
@property(nonatomic) __weak SCLegacyStoriesServices *legacyStoriesServices; // @synthesize legacyStoriesServices=_legacyStoriesServices;
@property(nonatomic) __weak SCSnapchatterServices *snapchatterServices; // @synthesize snapchatterServices=_snapchatterServices;
@property(nonatomic) __weak SCStoriesServices *storiesServices; // @synthesize storiesServices=_storiesServices;
@property(nonatomic) __weak SCUserSessionScope *userSessionScope; // @synthesize userSessionScope=_userSessionScope;

@end

