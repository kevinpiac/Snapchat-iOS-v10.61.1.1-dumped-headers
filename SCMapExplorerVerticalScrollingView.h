//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCMapCarouselPageView.h"

#import "SCGroupsDataRequestListener-Protocol.h"
#import "SCMapCarouselPersonRowControllerDelegate-Protocol.h"
#import "SCMapExploreStatusRowDelegate-Protocol.h"

@class NSString, SCContextV2Manager, SCExperimentManager, SCLocationSharingPreferencesV1, SCMapCarouselContextCardsSection, SCMapExploreDataStoreV1, SCMapExploreStatusRow, SCMapExploreStatusVerticalScrollingViewModel, SCMapUserPreferences, UIViewController;
@protocol SCContextV2DependencyProvider, SCImageDownloading, SCMapExplorerVerticalScrollingViewDelegate, SCMapPeopleFriendsProvider, SCMapPeopleGroupsProvider, SCMapPersonLocationsProviding;

@interface SCMapExplorerVerticalScrollingView : SCMapCarouselPageView <SCMapExploreStatusRowDelegate, SCMapCarouselPersonRowControllerDelegate, SCGroupsDataRequestListener>
{
    UIViewController *_baseViewController;
    id <SCContextV2DependencyProvider> _contextDependencyProvider;
    SCContextV2Manager *_contextV2Manager;
    NSString *_currentUserId;
    id <SCMapExplorerVerticalScrollingViewDelegate> _delegate;
    SCExperimentManager *_experimentManager;
    SCMapExploreDataStoreV1 *_exploreDataStore;
    id <SCImageDownloading> _imageDownloader;
    SCLocationSharingPreferencesV1 *_locationSharingPreferences;
    id <SCMapPeopleFriendsProvider> _mapPeopleFriendsProvider;
    id <SCMapPeopleGroupsProvider> _mapPeopleGroupsProvider;
    id <SCMapPersonLocationsProviding> _mapPersonLocationsProvider;
    unsigned long long _mapSessionId;
    SCMapUserPreferences *_mapUserPreferences;
    SCMapExploreStatusVerticalScrollingViewModel *_viewModel;
    SCMapExploreStatusRow *_cachedStatusRow;
    SCMapCarouselContextCardsSection *_previousContextCardsSection;
    NSString *_previousContextCardsSectionPlaceId;
}

- (void).cxx_destruct;
- (id)_contextCardsSectionWithPlaceId:(id)arg1;
- (void)_didTapChatOrCreateGroupButton;
- (void)_updateSections;
- (id)baseViewControllerForFocusingPersonRowController:(id)arg1;
- (void)didCompletelyLoseFocus;
- (void)didUpdateGroupsDataRequest:(long long)arg1 groupId:(id)arg2;
- (void)exploreCarouselRow:(id)arg1 wantsToOpenReplyCameraForUserId:(id)arg2;
- (void)exploreCarouselRow:(id)arg1 wantsToSendReplyMessage:(id)arg2 toUserId:(id)arg3;
- (void)exploreCarouselStatusRowDidLongPressProfile:(id)arg1;
- (void)exploreCarouselStatusRowDidTapButton:(id)arg1;
- (void)exploreCarouselStatusRowDidTapProfile:(id)arg1;
- (void)exploreCarouselStatusRowDidTapStory:(id)arg1 fromSourceView:(id)arg2;
- (void)exploreCarouselStatusRowWantsToPlayMapStory:(id)arg1 withPoiId:(id)arg2 fromSourceView:(id)arg3;
- (id)exploreCarouselWantsBaseViewControllerForFocusing:(id)arg1;
- (id)initWithBaseViewController:(id)arg1 contextDependencyProvider:(id)arg2 contextV2Manager:(id)arg3 currentUserId:(id)arg4 delegate:(id)arg5 experimentManager:(id)arg6 exploreDataStore:(id)arg7 imageDownloader:(id)arg8 locationSharingPreferences:(id)arg9 mapPeopleFriendsProvider:(id)arg10 mapPeopleGroupsProvider:(id)arg11 mapPersonLocationsProvider:(id)arg12 mapSessionId:(unsigned long long)arg13 mapUserPreferences:(id)arg14 sections:(id)arg15;
- (void)personCarouselRow:(id)arg1 wantsToSendMapReplyMessage:(id)arg2;
- (void)personCarouselRowDidFocus:(id)arg1;
- (void)personCarouselRowDidLongPressProfile:(id)arg1;
- (void)personCarouselRowDidTapStory:(id)arg1 sourceView:(id)arg2;
- (void)personCarouselRowWantsToOpenChat:(id)arg1;
- (void)personCarouselRowWantsToPresentReplyCamera:(id)arg1;
- (id)screenshotGeneratorForExploreCarouselRow:(id)arg1;
- (void)setViewModel:(id)arg1;
- (void)updateContentInset;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

