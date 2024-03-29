//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCEntryPoint.h"

@class SCAppUserLifecycleEventHandler, SCConversationServices, SCFriendsFeedUFSServices, SCFriendsFeedUpdateServices, SCIdentityDataServices, SCLegacySnapchatterServices, SCNativeMessagingServices, SCPinnedConversationsServices, SCServicesExposer, SCSnapchatterServices, SCStoriesServices, SCSystemScope, SCUserSessionScope, SCUserStorageServices;

@interface SCFriendsFeedDataServicesEntryPoint : SCEntryPoint
{
    SCAppUserLifecycleEventHandler *_appUserLifecycleEventHandler;
    SCSystemScope *_systemScope;
    SCUserSessionScope *_userSessionScope;
    SCUserStorageServices *_userStorageServices;
    SCFriendsFeedUpdateServices *_friendsFeedUpdatesServices;
    SCFriendsFeedUFSServices *_friendsFeedUFSServices;
    SCConversationServices *_conversationServices;
    SCIdentityDataServices *_identityDataServices;
    SCStoriesServices *_storiesServices;
    SCNativeMessagingServices *_nativeMessagingServices;
    SCLegacySnapchatterServices *_legacySnapchatterServices;
    SCSnapchatterServices *_snapchatterServices;
    SCPinnedConversationsServices *_pinnedConversationsServices;
    SCServicesExposer *_friendsFeedServicesExposer;
}

- (void).cxx_destruct;
- (void)begin;
@property(nonatomic) __weak SCConversationServices *conversationServices; // @synthesize conversationServices=_conversationServices;
@property(retain, nonatomic) SCServicesExposer *friendsFeedServicesExposer; // @synthesize friendsFeedServicesExposer=_friendsFeedServicesExposer;
@property(nonatomic) __weak SCFriendsFeedUFSServices *friendsFeedUFSServices; // @synthesize friendsFeedUFSServices=_friendsFeedUFSServices;
@property(nonatomic) __weak SCFriendsFeedUpdateServices *friendsFeedUpdatesServices; // @synthesize friendsFeedUpdatesServices=_friendsFeedUpdatesServices;
@property(nonatomic) __weak SCIdentityDataServices *identityDataServices; // @synthesize identityDataServices=_identityDataServices;
@property(nonatomic) __weak SCLegacySnapchatterServices *legacySnapchatterServices; // @synthesize legacySnapchatterServices=_legacySnapchatterServices;
@property(nonatomic) __weak SCNativeMessagingServices *nativeMessagingServices; // @synthesize nativeMessagingServices=_nativeMessagingServices;
@property(nonatomic) __weak SCPinnedConversationsServices *pinnedConversationsServices; // @synthesize pinnedConversationsServices=_pinnedConversationsServices;
@property(nonatomic) __weak SCSnapchatterServices *snapchatterServices; // @synthesize snapchatterServices=_snapchatterServices;
@property(nonatomic) __weak SCStoriesServices *storiesServices; // @synthesize storiesServices=_storiesServices;
@property(nonatomic) __weak SCSystemScope *systemScope; // @synthesize systemScope=_systemScope;
@property(nonatomic) __weak SCUserSessionScope *userSessionScope; // @synthesize userSessionScope=_userSessionScope;
@property(nonatomic) __weak SCUserStorageServices *userStorageServices; // @synthesize userStorageServices=_userStorageServices;

@end

