//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCBitmojiProfileKeyboardExperimentValueProviding-Protocol.h"
#import "SCOperaPrefetcherSettingsProvider-Protocol.h"
#import "SCStoryProgressIndicatorExperimentProvider-Protocol.h"

@class NSDictionary, NSMutableDictionary, NSString;

@interface SCExperimentManager : NSObject <SCOperaPrefetcherSettingsProvider, SCStoryProgressIndicatorExperimentProvider, SCBitmojiProfileKeyboardExperimentValueProviding>
{
    NSString *_userId;
    NSMutableDictionary *_experimentContextCache;
}

+ (id)userless;
- (void).cxx_destruct;
- (id)ThrottleLoqConfigExperimentContext;
- (id)_adCreativeBundleRenditionSelectionExperimentContext;
- (id)_adCreativeStreamingRenditionSelectionExperimentContext;
- (id)_adLowerThresholdSwipe_experimentContext;
- (id)_adResponseDataTypeExperimentContext;
- (id)_adUnlockablesTrackPersistenceExperimentContext;
- (id)_arSegmentationRollout_experimentContext;
- (id)_autoCreativeMagicWandSnapEnhancementExperimentContext;
- (unsigned long long)_avatarBuilderTypeEnumFromString:(id)arg1;
- (id)_commercialWhitelistExperimentContext;
- (id)_eagleExperimentContext;
- (id)_experimentContext;
- (id)_featuredStoryPrefetchContext;
- (id)_gtqChecksumExperimentContext;
- (id)_gtqCustomHostExperimentContext;
- (id)_gtqProtoViewTrackExperimentContext;
- (id)_gtqUnlockablesCreationPersistenceExperimentContext;
- (id)_gtqUnlockablesViewPersistenceExperimentContext;
- (id)_protoServeLiveStoriesExperimentContext;
- (id)_protoServePublisherExperimentContext;
- (long long)_snappablesAppearanceVariantFromTreatment:(long long)arg1;
- (long long)_snappablesAppearanceVariantFromTweak:(long long)arg1;
- (id)_webBrowsingModule_experimentContext;
@property(readonly, nonatomic) long long adPixelTokenTTLInSec;
@property(readonly, nonatomic) _Bool adUnlockablesTrackBackgroundRetryEnabled;
@property(readonly, nonatomic) long long adUnlockablesTrackMaxFileAgeMillis;
@property(readonly, nonatomic) long long adUnlockablesTrackMaxFileSizeBytes;
@property(readonly, nonatomic) long long adUnlockablesTrackMaxPersistedRequests;
@property(readonly, nonatomic) _Bool adUnlockablesTrackPersistenceEnabled;
- (_Bool)adsEnabled;
- (_Bool)applyFaceSmoothingFilter;
- (_Bool)applyOrderedCarouselFilter;
- (_Bool)applyPortraitFilter;
- (_Bool)applySkyFilter;
- (_Bool)applyVenueFilter;
- (_Bool)applyVisualContextFilter;
- (_Bool)applyiOSFilters;
- (_Bool)avoidRedundantMediaItemPrep;
@property(readonly, nonatomic) _Bool batchCapturePlaybackEnabled;
@property(readonly, nonatomic) _Bool batchCaptureRecoveryEnabled;
@property(readonly, nonatomic) _Bool batchCaptureUpdateStoryWhenSaving;
@property(readonly, nonatomic) long long browserProgressStyle;
@property(readonly, nonatomic) unsigned long long browserToolbarRightButtonStyle;
@property(readonly, nonatomic) long long browserTypeForBottomSnapAds;
@property(readonly, nonatomic) long long browserTypeForBottomSnapOrganic;
@property(readonly, nonatomic) long long browserTypeForChat;
@property(readonly, nonatomic) long long browserTypeForScan;
@property(readonly, nonatomic) long long browserTypeForUnlockableAttachments;
- (_Bool)cameraRollPerformanceDisabled;
@property(readonly, nonatomic) _Bool canShowAds;
@property(readonly, nonatomic) _Bool canShowAdsInFriendStory;
- (unsigned long long)cmCacheChunkSizeInKB;
- (unsigned long long)cmInitialChunkSizeInKB;
@property(readonly, nonatomic) _Bool cognacEnableBackgroundPreloading;
@property(readonly, nonatomic) _Bool cognacEnablePreloadOnFeedPage;
@property(readonly, nonatomic) double cognacNotificationOpenAppTimeThreshold;
@property(readonly, nonatomic) long long cognacPreloadingInactiveDaysThreshold;
- (_Bool)contextCTAPreloadingEnabled;
@property(readonly, nonatomic) _Bool contextCardsAboveKeyboardEnabled;
- (id)contextForExperiment:(Class)arg1 exposure:(unsigned long long)arg2;
@property(readonly, nonatomic) NSString *contextV2CTAStyle;
@property(readonly, nonatomic) NSDictionary *contextV2CTAStyleExperimentParameters;
@property(readonly, nonatomic) NSDictionary *contextV2CardsAboveKeyboardExperimentParameters;
@property(readonly, copy, nonatomic) NSString *contextV2Endpoint;
- (unsigned long long)createFlowAvatarBuilderType;
@property(readonly, copy, nonatomic) NSString *customGtqHost;
@property(readonly, nonatomic) _Bool delayLoadUntilWebviewScheduledToTakeOver;
- (_Bool)deprecateUpdateViewState;
- (unsigned long long)discoverFeedOnboardingType;
- (_Bool)discoverTopSnapSubtitlesEnabled;
- (_Bool)dynamicMapLocalityEnabled;
- (long long)eagerSwipeDistanceThreshold:(unsigned long long)arg1;
- (_Bool)eagerSwipeEnabled:(unsigned long long)arg1;
- (_Bool)eagerSwipeRequireBothThresholds:(unsigned long long)arg1;
- (long long)eagerSwipeVelocityThreshold:(unsigned long long)arg1;
- (_Bool)eagleBarcodeEnabled;
- (_Bool)eagleEnabled;
- (long long)eagleImageMaxPixels;
- (float)eagleInitialWaitTime;
- (_Bool)eagleModelEnabled;
- (float)eagleModelGrabRate;
- (long long)eagleModelNumFramesToProcess;
- (float)eagleModelQualityThreshold;
- (long long)eagleModelStrategy;
- (id)eagleModelVersion;
- (_Bool)eagleSpeedFilterEnabled;
- (float)eagleSpeedMaxThreshold;
- (float)eagleSpeedMinThreshold;
@property(readonly, nonatomic) _Bool enableAdRequestGzip;
- (_Bool)enableAdResponseConversion;
@property(readonly, nonatomic) _Bool enableAnimatedLensThumbnails;
@property(readonly, nonatomic) _Bool enableAutoAdvanceStreaming;
@property(readonly, nonatomic) _Bool enableCIStream;
@property(readonly, nonatomic) _Bool enableCappingBundle;
@property(readonly, nonatomic) _Bool enableCappingStreaming;
@property(readonly, nonatomic) _Bool enableCognacStreaming;
@property(readonly, nonatomic) _Bool enableCommericalAdWhitelist;
- (_Bool)enableDPA;
@property(readonly, nonatomic) _Bool enableDelay;
@property(readonly, nonatomic) _Bool enableDowngradingBundle;
@property(readonly, nonatomic) _Bool enableDowngradingStreaming;
- (_Bool)enableDynamicCaption;
- (_Bool)enableDynamicCaptionInternational;
- (_Bool)enableExpeditedUserInitiatedMediaDownload;
- (_Bool)enableFirstLensInPreview;
- (_Bool)enableFriendshipProfileEntryPoint;
- (_Bool)enableFrontRingOverlayWhenFlashIsOn;
- (_Bool)enableGeoParsing;
- (_Bool)enableLandscapeEdit;
@property(readonly, nonatomic) _Bool enableLensCreatorProfiles;
- (_Bool)enableLensInPreviewPhoto;
- (_Bool)enableMemoriesSearchTooltip;
@property(readonly, nonatomic) _Bool enableMockPeekingDeeplink;
@property(readonly, nonatomic) _Bool enableMultiAuctionRequest;
- (_Bool)enablePetraResponseProcessing;
@property(readonly, nonatomic) _Bool enableProcessingGtqChecksum;
- (_Bool)enableProtoServeLiveStories;
@property(readonly, nonatomic) _Bool enableProtoServePublisher;
@property(readonly, nonatomic) _Bool enableProtoTrack;
@property(readonly, nonatomic) _Bool enableProtoTrackLiveStories;
@property(readonly, nonatomic) _Bool enableProtoTrackPublisher;
- (_Bool)enablePublicProfileCommerceStoreUI;
- (_Bool)enablePublicProfileTileReporting;
- (_Bool)enablePublisherProfileV2;
- (_Bool)enableSearchV2;
- (_Bool)enableSearchV2DescriptiveAddButtons;
- (_Bool)enableSearchV2ExpandedFriendsAndGroupsSections;
- (_Bool)enableSearchV2FeedStates;
- (_Bool)enableSearchV2ProfileTapActions;
- (_Bool)enableSearchV2Recents;
- (_Bool)enableSearchV2SimplifiedIndexing;
- (_Bool)enableSharedStory;
- (_Bool)enableShowsExtras;
- (_Bool)enableSnapSynchronizedLensAssetSystem;
@property(readonly, nonatomic) _Bool enableSojuTrack;
- (_Bool)enableStoryAdsInSnapAdsSlots;
@property(readonly, nonatomic) _Bool enableStoryProgressIndicator;
@property(readonly, nonatomic) _Bool enableSupplyingGtqChecksum;
- (_Bool)enableTopSnapTimer;
- (_Bool)enableTorchWhenFlashIsOn;
- (id)enabledAdTypesStr;
- (double)extendedTimeBeforeReturningToCameraSeconds;
- (unsigned long long)featuredStoryPrefetchInterval;
- (_Bool)featuredStoryPrefetchParallelDownload;
- (unsigned long long)featuredStoryPrefetchSnapCount;
- (_Bool)featuredStoryPrefetchVideosOnly;
- (_Bool)fetchIncrementalUpdates;
- (double)frontFlashOverlayBottomMarginY;
- (double)frontFlashOverlayHorizontalMarginX;
- (double)frontFlashOverlayTopMarginY;
- (id)geoFilterAssetCacheExperimentContext;
- (id)geoFilterAssetCacheTtl;
- (id)getContactSyncPrePromptExperimentContext;
- (id)getContactSyncPrePromptInFriendsFeedExperimentContext;
- (long long)groupChatMaxGroupSize;
@property(readonly, nonatomic) _Bool groupChatTaggingEnabled;
@property(readonly, nonatomic) _Bool gtqUnlockablesCreationTrackBackgroundRetryEnabled;
@property(readonly, nonatomic) long long gtqUnlockablesCreationTrackMaxFileAgeMillis;
@property(readonly, nonatomic) long long gtqUnlockablesCreationTrackMaxFileSizeBytes;
@property(readonly, nonatomic) long long gtqUnlockablesCreationTrackMaxPersistedRequests;
@property(readonly, nonatomic) _Bool gtqUnlockablesCreationTrackPersistenceEnabled;
@property(readonly, nonatomic) _Bool gtqUnlockablesCreationTrackRetryEnabled;
@property(readonly, nonatomic) _Bool gtqUnlockablesViewTrackBackgroundRetryEnabled;
@property(readonly, nonatomic) long long gtqUnlockablesViewTrackMaxFileAgeMillis;
@property(readonly, nonatomic) long long gtqUnlockablesViewTrackMaxFileSizeBytes;
@property(readonly, nonatomic) long long gtqUnlockablesViewTrackMaxPersistedRequests;
@property(readonly, nonatomic) _Bool gtqUnlockablesViewTrackPersistenceEnabled;
@property(readonly, nonatomic) _Bool gtqUnlockablesViewTrackRetryEnabled;
- (_Bool)highlightsEnabled;
- (_Bool)highlightsManagementEnabled;
- (_Bool)hintEnabled;
- (id)imageCacheStudyParams;
- (id)initWithUserId:(id)arg1;
- (_Bool)inlineReplyIsEnabled;
- (_Bool)inlineReplyScreenshotIsAttachedByDefault;
@property(readonly, nonatomic) _Bool isArSegmentationImageGeneratorEnabled;
@property(readonly, nonatomic) _Bool isContextFilterImageGeneratorEnabled;
@property(readonly, nonatomic) _Bool isContextV2BidirecionalStoryViewPriorityRulesEnabled;
@property(readonly, nonatomic) _Bool isEnableKeyboardBadgeVisible;
@property(readonly, nonatomic) _Bool isEnableKeyboardSubtextVisible;
@property(readonly, nonatomic) _Bool isEnableKeyboardVisible;
- (_Bool)isInlinePrefetchEnabled;
@property(readonly, getter=isLensReplyToSnapEnabled) _Bool lensReplyToSnapEnabled;
- (_Bool)isWebAttachmentRedirectEnabled;
@property(readonly, nonatomic) _Bool isWebModuleEnabled;
@property(readonly, nonatomic) long long latencyImprovementThresholdMsBundle;
@property(readonly, nonatomic) long long latencyImprovementThresholdMsStreaming;
- (_Bool)lensInPreviewDownloadVisible;
- (_Bool)lensInPreviewRequireFace;
@property(readonly, nonatomic) NSDictionary *lensSocialUnlockExperimentParameters;
- (id)lensTrackingResourcesChecksum;
- (id)lensTrackingResourcesTag;
@property(readonly, nonatomic) _Bool liveStoriesAdsEnabled;
@property(readonly, nonatomic) double liveZonePercentXInset;
@property(readonly, nonatomic) double liveZonePercentYInset;
- (_Bool)loadGroupsUsingInlinePrefetcher;
- (_Bool)magicWandEnabled;
- (id)mapContentV2HeatmapFlavor;
- (long long)maxRetryTimes;
@property(readonly, nonatomic) long long maximumLatencyAllowedMsBundle;
@property(readonly, nonatomic) long long maximumLatencyAllowedMsStreaming;
- (long long)memoriesUniformGridColumnCount;
- (_Bool)memoriesUniformGridEnabled;
- (_Bool)memoriesV3SnapsTabEnabled;
- (unsigned long long)minEntriesCountForMemoriesSearchTooltip;
- (unsigned long long)minVisitMemoriesCountForMemoriesSearchTooltip;
@property(readonly, nonatomic) long long minimumLatencyForDowngradingMsBundle;
@property(readonly, nonatomic) long long minimumLatencyForDowngradingMsStreaming;
@property(readonly, nonatomic) double multiAuctionCacheTTLInSec;
@property(readonly, nonatomic) long long multiAuctionRequestSize;
- (long long)numberOfQueuesPerMediaContextType;
- (unsigned long long)numberOfSearchVideoThumbnails;
- (unsigned long long)operaInlinePreloadCount;
- (unsigned long long)operaInlinePreloadGroupsCount;
- (unsigned long long)operaInlinePreloadPagesInAGroupCount;
- (double)playerBufferDurationInSec;
- (_Bool)preparePlayerForNextGroupEnabled;
- (id)prettyDescription;
@property(readonly, nonatomic) _Bool publisherAdsEnabled;
- (double)queryTypingDelay;
- (unsigned long long)recommendedLargeFileRestoreSizeInMb;
- (unsigned long long)recommendedSmallFileRestoreSizeInMb;
- (double)remoteRequestBackspaceSpaceDelay;
- (double)remoteRequestDelay;
- (double)remoteRequestShortQueryDelay;
- (double)remoteRequestTravelModeLTEDelay;
- (_Bool)removeHeat;
- (_Bool)removeHeatStories;
@property(readonly) long long replyWithLensIconType;
- (_Bool)requestAdRenderData;
- (double)requiredAccuracy;
- (double)retryDelayInSec;
@property(readonly, nonatomic) _Bool rollbackCrop;
- (_Bool)saveAllContentStatesToDB;
- (_Bool)scanCardsPeekModeEnabled;
- (double)sendToCellCacheLengthSeconds;
- (_Bool)shareLocationCarouselForAllFriends;
- (_Bool)shouldDisableEditPrefetch;
- (_Bool)shouldDisableMediaPrefetch;
- (_Bool)shouldEnableAddFriendsMergeWithFriendsSection;
- (_Bool)shouldEnableContextCards;
- (_Bool)shouldEnableFriendCentricPretype;
- (_Bool)shouldEnableFriendsSectionAboveBitmoji;
- (_Bool)shouldEnableGroupInviteCreate;
- (_Bool)shouldEnableGroupInviteView;
- (_Bool)shouldEnableMap;
- (_Bool)shouldEnableMentionSticker;
- (_Bool)shouldEnableSearchVideoThumbnail;
- (_Bool)shouldEnableSearchVideoThumbnailSmartLoading;
- (_Bool)shouldEnableSendToCell;
- (_Bool)shouldEnableVenueSticker;
- (_Bool)shouldFilterInvalidSnapsDuringSync;
- (_Bool)shouldIndexMemoriesForFacesWithUserSession:(id)arg1;
- (_Bool)shouldLazyLoadGTQPackMetadata;
- (_Bool)shouldLazyLoadMetadata;
- (_Bool)shouldLimitCustomStickerListRequests;
- (_Bool)shouldLoadStickerPackMetadataFromURL;
- (_Bool)shouldMoveSponsoredGeoLensesToBackSection;
- (_Bool)shouldPrioritizeBitmojiCategory;
- (_Bool)shouldReduceGPSUsage;
- (_Bool)shouldSendCameraRollContentWithInfiniteDuration;
- (_Bool)shouldSendMemoriesAsSnap;
- (_Bool)shouldShowStickerStoryReplyView;
- (_Bool)shouldSkipDownloadWhenSmartSharing;
- (_Bool)shouoldUseChecksumAPI;
- (_Bool)showCTAHint;
- (_Bool)showLensInPreviewTooltip;
- (_Bool)showMagicWandForiOSFilters;
- (_Bool)showNewLensBadgeInPreview;
@property(readonly, nonatomic) _Bool showPaletteSwitcher;
- (_Bool)smartUnlockEnabled;
@property(readonly, nonatomic) long long snappablesTreatment;
- (long long)socialUnlockType;
- (_Bool)solosNominationEnabled;
- (long long)spinnerStyleOnDFPage;
- (_Bool)streamPrivateStoriesUsingCM;
- (unsigned long long)streamingMediaPrefetchInKB;
- (_Bool)swipeEnabled;
- (id)talkV3OnboardHintsExperimentContext;
- (unsigned long long)treatmentType;
@property(readonly, nonatomic) long long treatmentTypeBundle;
@property(readonly, nonatomic) long long treatmentTypeStreaming;
- (_Bool)unzipOnDownload;
- (_Bool)uploadTagsPeriodically;
@property(readonly, nonatomic) _Bool useAnimation;
@property(readonly, nonatomic) _Bool useCTA;
- (_Bool)useContentObject;
- (_Bool)useListOfQueues;
@property(readonly, nonatomic) _Bool useModularCamera;
- (_Bool)usePreciseSeeking;
- (_Bool)useProtobufForMemoriesNetworkRequests;
- (_Bool)useSerialQueue;
- (_Bool)useWebPForMemoriesOverlay;
- (_Bool)useWebPForSnapOverlay;
- (id)userContextExperiments;
@property(readonly, nonatomic) NSDictionary *userMentionabilityExperimentParameters;
@property(readonly, nonatomic) _Bool userStoriesAdsEnabled;
- (double)webPQualityForMemoriesOverlay;
- (double)webPQualityForSnapOverlay;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

