//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCTraceEnabled-Protocol.h"
#import "SCUnifiedProfileSectionCreating-Protocol.h"

@class NSString, SCEventListenerAnnouncer, SCLazy, SCMyUnifiedProfileDataSource, SCMyUnifiedProfilePostRegistrationStateManager, SCUnifiedProfileBitmojiSectionLoadingStateProvider, SCUnifiedProfileMyStoriesDataSource, SCUnifiedProfileMyStoriesDataSourceManager, SCUnifiedProfileViewLayoutConfiguration, SCUserSession;
@protocol SCActionHandling, SCImageDownloading, SCUnifiedProfileTabScrollHandling;

@interface SCMyUnifiedProfileSectionCreator : NSObject <SCTraceEnabled, SCUnifiedProfileSectionCreating>
{
    id <SCImageDownloading> _imageDownloader;
    SCMyUnifiedProfilePostRegistrationStateManager *_postRegistrationStateManager;
    id <SCActionHandling> _actionHandler;
    SCMyUnifiedProfileDataSource *_dataSource;
    SCUnifiedProfileMyStoriesDataSource *_myStoryDataSource;
    SCUnifiedProfileMyStoriesDataSourceManager *_storiesDataSourceManager;
    SCUserSession *_userSession;
    SCLazy *_snapchattersDataTracker;
    SCLazy *_incomingFriendsRepository;
    SCUnifiedProfileBitmojiSectionLoadingStateProvider *_bitmojiSectionloadingStateProvider;
    SCUnifiedProfileViewLayoutConfiguration *_layoutConfiguration;
    SCEventListenerAnnouncer *_lifecycleAnnouncer;
    id <SCUnifiedProfileTabScrollHandling> _tabSectionScrollHandler;
}

- (void).cxx_destruct;
- (id)_addFriendsSectionWithConfiguration:(id)arg1;
- (id)_appStorySection:(id)arg1;
- (id)_bitmojiManagementSection;
- (id)_createYourOwnSection;
- (id)_eventsSection;
- (id)_footerSection;
- (id)_groupStoriesNoMischiefSection:(id)arg1 sectionType:(id)arg2;
- (id)_groupStoriesSection:(id)arg1;
- (id)_identitySection;
- (id)_mapSection;
- (id)_myFriendsSectionWithConfiguration:(id)arg1;
- (id)_ourStorySection;
- (id)_postRegistrationSection;
- (id)_sharedStorySection:(id)arg1;
- (id)_snapProInsightsSection;
- (id)_snapProSectionForBusinessId:(id)arg1 headerText:(id)arg2;
- (id)_storiesSection;
- (id)_trophySection;
- (id)initWithImageDownloader:(id)arg1 postRegistrationStateManager:(id)arg2 actionHandler:(id)arg3 dataSource:(id)arg4 storiesDataSourceManager:(id)arg5 userSession:(id)arg6 snapchattersDataTracker:(id)arg7 incomingFriendsRepository:(id)arg8 bitmojiSectionloadingStateProvider:(id)arg9;
@property(nonatomic) __weak SCUnifiedProfileViewLayoutConfiguration *layoutConfiguration; // @synthesize layoutConfiguration=_layoutConfiguration;
@property(nonatomic) __weak SCEventListenerAnnouncer *lifecycleAnnouncer; // @synthesize lifecycleAnnouncer=_lifecycleAnnouncer;
- (id)sectionForDescriptor:(id)arg1;
@property(nonatomic) __weak id <SCUnifiedProfileTabScrollHandling> tabSectionScrollHandler; // @synthesize tabSectionScrollHandler=_tabSectionScrollHandler;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

