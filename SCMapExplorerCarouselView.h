//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCTransparentParentView.h"

#import "SCMapCarouselViewDataSource-Protocol.h"
#import "SCMapCarouselViewDelegate-Protocol.h"
#import "SCMapExplorerVerticalScrollingViewDelegate-Protocol.h"
#import "UIGestureRecognizerDelegate-Protocol.h"

@class NSMutableDictionary, NSOrderedSet, NSString, SCContextV2Manager, SCExperimentManager, SCLocationSharingPreferencesV1, SCMapCarouselView, SCMapExploreDataStoreV1, SCMapExploreStatus, SCMapUserPreferences, UIPanGestureRecognizer, UIViewController;
@protocol SCContextV2DependencyProvider, SCImageDownloading, SCMapExplorerCarouselViewDelegate, SCMapPeopleFriendsProvider, SCMapPeopleGroupsProvider, SCMapPersonLocationsProviding;

@interface SCMapExplorerCarouselView : SCTransparentParentView <SCMapCarouselViewDelegate, SCMapCarouselViewDataSource, SCMapExplorerVerticalScrollingViewDelegate, UIGestureRecognizerDelegate>
{
    UIViewController *_baseViewController;
    id <SCContextV2DependencyProvider> _contextDependencyProvider;
    SCContextV2Manager *_contextV2Manager;
    NSString *_currentUserId;
    id <SCMapExplorerCarouselViewDelegate> _delegate;
    SCExperimentManager *_experimentManager;
    SCMapExploreDataStoreV1 *_exploreDataStore;
    id <SCImageDownloading> _imageDownloader;
    SCLocationSharingPreferencesV1 *_locationSharingPreferences;
    id <SCMapPeopleFriendsProvider> _mapPeopleFriendsProvider;
    id <SCMapPeopleGroupsProvider> _mapPeopleGroupsProvider;
    id <SCMapPersonLocationsProviding> _mapPersonLocationsProvider;
    unsigned long long _mapSessionId;
    SCMapUserPreferences *_mapUserPreferences;
    SCMapCarouselView *_carouselView;
    NSOrderedSet *_statuses;
    NSMutableDictionary *_indicesToViews;
    UIPanGestureRecognizer *_verticalGestureRecognizer;
    UIPanGestureRecognizer *_horizontalGestureRecognizer;
    SCMapExploreStatus *_visibleStatus;
}

- (void).cxx_destruct;
- (void)_handleHorizontalPanGesture:(id)arg1;
- (void)_handleVerticalPanGesture:(id)arg1;
- (void)_horizontallySpringToHidden:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_verticallySpringToHidden:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)animateInWithCompletion:(CDUnknownBlockType)arg1;
- (void)animateOutWithCompletion:(CDUnknownBlockType)arg1;
- (void)explorerVerticalScrollingView:(id)arg1 wantsChatForPeople:(id)arg2;
- (void)explorerVerticalScrollingView:(id)arg1 wantsToNavigateToURL:(id)arg2;
- (void)explorerVerticalScrollingView:(id)arg1 wantsToPresentReplyCameraForUserId:(id)arg2;
- (void)explorerVerticalScrollingView:(id)arg1 wantsToPresentStoriesForPerson:(id)arg2 fromSourceView:(id)arg3;
- (void)explorerVerticalScrollingView:(id)arg1 wantsToPresentStoryWithPoiId:(id)arg2 fromSourceView:(id)arg3;
- (void)explorerVerticalScrollingView:(id)arg1 wantsToSendReplyMessage:(id)arg2 toUserId:(id)arg3;
- (void)explorerVerticalScrollingView:(id)arg1 wantsToShowMiniProfileForPerson:(id)arg2;
- (void)explorerVerticalScrollingViewDidTapCard:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (_Bool)gestureRecognizer:(id)arg1 shouldRequireFailureOfGestureRecognizer:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1 baseViewController:(id)arg2 contextDependencyProvider:(id)arg3 contextV2Manager:(id)arg4 currentUserId:(id)arg5 delegate:(id)arg6 experimentManager:(id)arg7 exploreDataStore:(id)arg8 imageDownloader:(id)arg9 locationSharingPreferences:(id)arg10 mapPeopleFriendsProvider:(id)arg11 mapPeopleGroupsProvider:(id)arg12 mapPersonLocationsProvider:(id)arg13 mapSessionId:(unsigned long long)arg14 mapUserPreferences:(id)arg15;
- (void)layoutSubviews;
- (void)mapCarouselView:(id)arg1 didShowViewAtIndex:(long long)arg2 actionType:(unsigned long long)arg3;
- (id)mapCarouselView:(id)arg1 viewForIndex:(long long)arg2;
- (void)mapCarouselView:(id)arg1 willShowViewAtIndex:(long long)arg2;
- (long long)numberOfViewsInMapCarouselView:(id)arg1;
- (void)personCarouselRow:(id)arg1 wantsToSendMapReplyMessage:(id)arg2;
- (void)personCarouselRowDidFocus:(id)arg1;
- (void)personCarouselRowDidLongPressProfile:(id)arg1;
- (void)personCarouselRowDidTapStory:(id)arg1 sourceView:(id)arg2;
- (void)personCarouselRowWantsToOpenChat:(id)arg1;
- (void)personCarouselRowWantsToPresentReplyCamera:(id)arg1;
- (id)screenshotGeneratorForPerson:(id)arg1;
- (void)setStatuses:(id)arg1;
@property(retain, nonatomic) SCMapExploreStatus *visibleStatus; // @synthesize visibleStatus=_visibleStatus;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

