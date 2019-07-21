//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCOperaPlaylistFeaturePlugin.h"

#import "SCOperaPlaylistFeaturePluginShouldUseExtendedResetToCamera-Protocol.h"
#import "SCOperaPlaylistFriendStoryPluginBase-Protocol.h"
#import "SCOperaPlaylistItemExtraPropertiesProvider-Protocol.h"

@class NSString, SCDiscoverFeedMiniProfileHandler, SCOperaStoriesPageProviderPlaylistAdapter, SCOperaViewController, SCSearchDynamicStoryActionHandler, SCStoriesOperaDataSource, SCStoriesViewingSession, SCUserSession;
@protocol NavigationDelegate;

@interface SCOperaPlaylistStoriesPlugin : SCOperaPlaylistFeaturePlugin <SCOperaPlaylistItemExtraPropertiesProvider, SCOperaPlaylistFeaturePluginShouldUseExtendedResetToCamera, SCOperaPlaylistFriendStoryPluginBase>
{
    SCStoriesOperaDataSource *_storiesOperaDataSource;
    SCOperaStoriesPageProviderPlaylistAdapter *_storiesPageProviderPlaylistAdapter;
    id <NavigationDelegate> _navigationDelegate;
    SCUserSession *_userSession;
    SCSearchDynamicStoryActionHandler *_searchActionHandler;
    SCDiscoverFeedMiniProfileHandler *_miniProfileHandler;
    SCOperaViewController *_operaVC;
    _Bool _resetMuteOverrideOnDismiss;
    long long _viewingType;
    long long _storyPlayMode;
    long long _viewLocation;
    SCStoriesViewingSession *_storiesViewingSession;
}

- (void).cxx_destruct;
- (void)addEventListenersWithEventAnnouncer:(id)arg1;
- (void)extraPropertiesForDataModel:(id)arg1 item:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)extraPropertiesProvider;
- (id)initWithUserSession:(id)arg1 replyDelegate:(id)arg2 startChatDelegate:(id)arg3 navigationDelegate:(id)arg4 firstStoryToDisplay:(id)arg5 friendStoriesSectionMap:(id)arg6 miniProfileHandler:(id)arg7 contextSession:(id)arg8 storySessionId:(long long)arg9 legacyPlaybackConfig:(id)arg10;
- (_Bool)isViewingLongform;
- (id)playlistDataSource;
- (void)setFriendProvider:(id)arg1;
- (void)setOperaViewController:(id)arg1;
- (void)setPlaylistItemController:(id)arg1;
- (_Bool)shouldUseExtendedResetToCamera;
- (void)stopLoggingEventIfNecessary;
@property(readonly, nonatomic) SCStoriesViewingSession *storiesViewingSession; // @synthesize storiesViewingSession=_storiesViewingSession;
- (long long)storyPlayMode;
- (void)teardown;
- (id)type;
- (void)updateFriendsList:(id)arg1;
- (void)updateOperaConfiguration:(id)arg1;
- (long long)viewLocation;
- (long long)viewingType;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
