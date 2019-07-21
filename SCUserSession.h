//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCChatStickerImageFetcherProvider-Protocol.h"
#import "SCComposerFriendsFeedCurrentUserInfoProviding-Protocol.h"
#import "SCCustomStickerImageFetcherProvider-Protocol.h"
#import "SCScannableActionAPIProvider-Protocol.h"

@class NSMutableDictionary, NSString, SCApiGatewayGrpcRequester, SCBoltUploadManager, SCBoltUrlResolver, SCCache, SCCaptionStyleResourceProvider, SCCognacAppActiveCardEligibility, SCCognacIAPMockDataStorage, SCCognacIAPMockPremiumContentHandler, SCCognacIAPPremiumContentHandler, SCCognacWebProxyCache, SCCognacWebProxyDownloader, SCCognacWebProxyLoader, SCCognacWebProxyPreloader, SCCustomStickerManager, SCDataSaverModePromptCoordinator, SCDynamicCaptionFetcher, SCEagleModelManager, SCGalleryBackupNotificationHelper, SCGalleryDataMutator, SCGalleryEncryptedDatabase, SCGalleryFaceCluster, SCGalleryFaceInfoIndexer, SCGalleryFaceManager, SCGalleryFaceRecognizer, SCGalleryFilePathManager, SCGalleryNotificationProcessor, SCGalleryOnboardingManager, SCGalleryPrivateGalleryManager, SCGallerySavingLogger, SCGallerySearch, SCGallerySearchDataSynchronizer, SCGallerySearchIndexer, SCGallerySearchQueryResultsCollector, SCGallerySearchTagUploader, SCGalleryStorySaver, SCGallerySuggestedQueryUpdater, SCGalleryTestDataCollector, SCGalleryThumbnailDelayDebugManager, SCGalleryUserDefaultsManager, SCGalleryUserSettingsManager, SCGalleryVisualConceptThresholdUpdater, SCImpalaBusinessProfileManager, SCImpalaService, SCImpalaWatchedStateManager, SCKeyService, SCMediaPackageManager, SCMediaPackagePreviewAdapter, SCMemoriesSavingSnapNotificationManager, SCMemoriesSearchDatabase, SCMergedGalleryDataSource, SCOnDemandGeofilterSession, SCPreviewGallerySavedMediaGenerator, SCRequestQueue, SCSendToRankingServerMetadataManager, SCShazamConfigurationManager, SCShazamKeyValueCache, SCShazamRecogniseManager, SCSnapcodeManagerLogger, SCSnaptracksServices, SCStickerRankingManager, SCStickerVisualTagExpansionRuleUpdater, SCUnlockablesOpportunityRequestIdController, SCUnlockedStickerManager, SCUploadHostPinger, SCUploadMediaManager;
@protocol OS_dispatch_semaphore, SCCustomStickerOwner, SCGalleryLogging, SCGalleryProfile, SCGroupInviteProfileActionHandler, SCGroupInviteServiceChatIntegration, SCLensChallengesScheduleProtocol, SCNetworker, SCUploadURLCaching;

@interface SCUserSession : NSObject <SCCustomStickerImageFetcherProvider, SCScannableActionAPIProvider, SCComposerFriendsFeedCurrentUserInfoProviding, SCChatStickerImageFetcherProvider>
{
    NSMutableDictionary *_userSessionScopedObjects;
    _Bool _invalidated;
    NSObject<OS_dispatch_semaphore> *_sema;
    NSString *_userId;
    NSString *_username;
    NSString *_authToken;
    NSString *_lagunaId;
    NSString *_userEmail;
}

+ (void)_cleanUpOutOfScopeDirectoriesIn:(id)arg1 forUserIdHash:(id)arg2 trash:(id)arg3;
+ (id)cacheURL;
+ (void)cleanUpOutOfScopeDocumentFilesExceptForUser:(id)arg1;
+ (id)currentSession_DEPRECATED_DO_NOT_USE;
+ (id)userScopedApplicationSupportPathRootForUser:(id)arg1;
+ (id)userScopedCachePathRootForUser:(id)arg1;
+ (id)userScopedDocumentPathRootForUser:(id)arg1;
- (void).cxx_destruct;
- (id)_cameraPresenterWithLoggingConfiguration:(id)arg1;
- (id)actionHandler;
- (id)adLensCarouselInteractionHistoryTracker;
- (id)adMediaCoordinator;
- (id)adMediaFetcher;
- (id)adPreferencesService;
- (id)adProvider;
- (id)adReportInteractionHistoryTracker;
- (id)allTimeHitsDataProvider;
- (id)allTimeHitsTemplateDataStore;
- (id)arbitraryFriendBitmojiAvatarProvider;
- (id)arcadiaDataProvider;
- (id)arcadiaMetadataStoreWithAnnouncerPerformer:(id)arg1;
@property(readonly, copy, nonatomic) NSString *authToken; // @synthesize authToken=_authToken;
- (id)authenticatedCaptchaService;
- (id)authenticatedPasswordService;
- (id)authenticatedPhoneService;
- (id)authenticatedTwoFAService;
- (id)authenticatedValidateRegistrationService;
- (id)autoSuggestDataProvider;
- (id)auxiliaryContentPreloader;
- (id)bitmoji3DMetadataStore;
- (id)bitmojiAvatarDataProvider;
- (id)bitmojiAvatarProvider;
- (id)bitmojiBuilderManager;
- (id)bitmojiBuilderService;
- (id)bitmojiFashionPresenter;
- (id)bitmojiManager;
- (id)bitmojiSelfieManager;
- (id)bitmojiSelfieProviding;
- (id)bitmojiService;
- (id)bitmojiSettingsPresenter;
- (id)bitmojiStickerManager;
@property(readonly, nonatomic) SCBoltUrlResolver *boltUrlResolver;
@property(readonly, nonatomic) SCImpalaBusinessProfileManager *businessProfileManager;
- (id)cache:(id)arg1 diskSizeLimitConfig:(id)arg2;
- (id)cache:(id)arg1 diskSizeLimitConfig:(id)arg2 useMemoryCache:(_Bool)arg3;
- (id)cache:(id)arg1 metricsName:(id)arg2 diskSizeLimitConfig:(id)arg3;
- (id)cache:(id)arg1 metricsName:(id)arg2 diskSizeLimitConfig:(id)arg3 useMemoryCache:(_Bool)arg4;
- (id)cache:(id)arg1 metricsName:(id)arg2 diskSizeLimitConfig:(id)arg3 useMemoryCache:(_Bool)arg4 skipEviction:(_Bool)arg5;
- (id)cacheDirectory:(id)arg1 error:(id *)arg2;
- (id)cacheWithNoEviction:(id)arg1;
- (id)cachingMediaManager;
@property(readonly, nonatomic) SCCaptionStyleResourceProvider *captionStyleResourceProvider;
- (id)chatStickerImageFetcher;
- (id)chatStickerManager;
- (id)cheetahEventsController;
- (id)cheetahFeedASTProvider;
- (id)cheetahStoriesDataStore;
- (id)cheetahStoriesInteractionHistoryManager;
- (id)cheetahStoriesTapHistoryManager;
- (id)cheetahStoryFetcher;
- (id)clearCacheManager;
- (id)cloudFS;
- (id)cloudSync;
- (id)cognacAdDataSource;
@property(readonly, nonatomic) SCCognacAppActiveCardEligibility *cognacAppActiveCardEligibility;
- (id)cognacAssetCache;
- (id)cognacDataStorage;
- (id)cognacExternalUserProfileRepository;
@property(readonly, nonatomic) SCCognacIAPMockDataStorage *cognacIAPMockDataStorage;
@property(readonly, nonatomic) SCCognacIAPMockPremiumContentHandler *cognacIAPMockPremiumContentHandler;
@property(readonly, nonatomic) SCCognacIAPPremiumContentHandler *cognacIAPPremiumContentHandler;
- (id)cognacInviteSoundServices;
- (id)cognacNotificationManager;
- (id)cognacServiceClient;
- (id)cognacServiceCoordinator;
@property(readonly, nonatomic) SCCognacWebProxyCache *cognacWebProxyCache;
@property(readonly, nonatomic) SCCognacWebProxyDownloader *cognacWebProxyDownloader;
@property(readonly, nonatomic) SCCognacWebProxyLoader *cognacWebProxyLoader;
@property(readonly, nonatomic) SCCognacWebProxyPreloader *cognacWebProxyPreloader;
- (id)commerceCartManager;
- (id)commerceDependencyManager;
- (id)commerceImageManager;
- (id)commerceManager;
- (id)commerceScopedOptionsDataCoordinator;
- (id)commerceSettingsManager;
- (id)contentManager;
- (id)contextCTAPreloader;
- (id)contextCardCameraPresenter;
- (id)contextV2Manager;
- (id)contextV2UserInfoProvider;
- (id)customStickerImageFetcher;
@property(readonly, nonatomic) SCCustomStickerManager *customStickerManager;
@property(readonly, copy, nonatomic) id <SCCustomStickerOwner> customStickerOwner;
@property(readonly, nonatomic) SCDataSaverModePromptCoordinator *dataSaverModePromptCoordinator;
- (id)ddmlRequestManager;
- (id)ddmlTokenManager;
- (id)discoverFeedCollection;
- (id)discoverFeedDebugInfoDataProvider;
- (id)discoverFeedRanker;
- (id)discoverFeedSessionAdRuleTracker;
- (id)documentDirectory:(id)arg1 error:(id *)arg2;
- (_Bool)doesUserCacheExist:(id)arg1;
- (id)downloadableContentManager;
- (id)dynamicAdMediaManager;
@property(readonly, nonatomic) SCDynamicCaptionFetcher *dynamicCaptionFetcher;
- (id)eagleController;
@property(readonly, nonatomic) SCEagleModelManager *eagleModelManager;
- (id)emailService;
- (id)emojiBrushService;
- (id)encryptedContentManager;
- (id)engagementManager;
- (void)ensureMapComposerNativeModuleFactoriesAreRegistered;
- (void)ensureNativeModuleFactoriesAreRegistered;
- (id)experimentManager;
- (id)featureSettingsManager;
- (id)fideliusChatV3Unwrapper;
- (id)fideliusManager;
@property(readonly, nonatomic) SCGalleryFilePathManager *filePathManager;
- (id)friendLocationsDataStore;
- (id)friendmojiPresenter;
- (id)friendmojiRegistry;
@property(readonly, nonatomic) SCGalleryBackupNotificationHelper *galleryBackupNotificationHelper;
@property(readonly, nonatomic) SCGalleryDataMutator *galleryDataMutator;
@property(readonly, nonatomic) SCGalleryEncryptedDatabase *galleryEncryptedDatabase;
@property(readonly, nonatomic) SCGalleryFaceCluster *galleryFaceCluster;
@property(readonly, nonatomic) SCGalleryFaceInfoIndexer *galleryFaceInfoIndexer;
@property(readonly, nonatomic) SCGalleryFaceManager *galleryFaceManager;
@property(readonly, nonatomic) SCGalleryFaceRecognizer *galleryFaceRecognizer;
@property(readonly, nonatomic) id <SCGalleryLogging> galleryLogger;
@property(readonly, nonatomic) SCGalleryNotificationProcessor *galleryNotificationProcessor;
@property(readonly, nonatomic) SCGalleryOnboardingManager *galleryOnboardingManager;
@property(readonly, nonatomic) SCGallerySavingLogger *gallerySavingLogger;
@property(readonly, nonatomic) SCGallerySearch *gallerySearch;
@property(readonly, nonatomic) SCGallerySearchDataSynchronizer *gallerySearchDataSynchronizer;
@property(readonly, nonatomic) SCGallerySearchIndexer *gallerySearchIndexer;
@property(readonly, nonatomic) SCGallerySearchTagUploader *gallerySearchTagUploader;
@property(readonly, nonatomic) SCGalleryStorySaver *galleryStorySaver;
- (id)galleryStreamingManager;
@property(readonly, nonatomic) SCGalleryTestDataCollector *galleryTestDataCollector;
@property(readonly, nonatomic) SCGalleryUserDefaultsManager *galleryUserDefaultsManager;
@property(readonly, nonatomic) SCGalleryUserSettingsManager *galleryUserSettingsManager;
@property(readonly, nonatomic) SCApiGatewayGrpcRequester *gatewayGrpcRequester;
- (id)geoFilterURLDataFetcher;
- (id)giphyTrendingManager;
@property(readonly, nonatomic) id <SCGroupInviteProfileActionHandler> groupInviteProfileActionHandler;
- (id)groupInviteService;
@property(readonly, nonatomic) id <SCGroupInviteServiceChatIntegration> groupInviteServiceChatIntegration;
- (id)groupInviteVenueSearchProvider;
- (id)groupManagerAPI;
- (id)gtqDataSource;
- (id)gtqNetworkController;
- (id)gtqUnlockablesController;
- (id)highlightContentDataSource;
- (id)imageDownloader;
@property(readonly, nonatomic) SCCache *impalaCache;
- (id)impalaPreferences;
@property(readonly, nonatomic) SCImpalaService *impalaService;
- (id)inMemoryLensAssetsDataProvider;
- (id)initWithUserId:(id)arg1 username:(id)arg2 authToken:(id)arg3 lagunaId:(id)arg4 userEmail:(id)arg5;
- (void)invalidate;
- (_Bool)isInvalidated;
- (_Bool)isLagunaInitialized;
@property(readonly, nonatomic) SCKeyService *keyService;
- (id)lagunaContentDataSource;
- (id)lagunaFirmwareManager;
- (id)lagunaGalleryWifiController;
- (id)lagunaHomeWifiManager;
@property(readonly, copy, nonatomic) NSString *lagunaId; // @synthesize lagunaId=_lagunaId;
- (id)lagunaModule;
- (id)lagunaNotificationHandler;
- (id)lagunaService;
- (id)lagunaUsageRecorder;
- (id)lensBitmojiListManager;
- (id)lensCacheClearTracker;
- (id)lensChallengesCameraPresenter;
@property(readonly, nonatomic) id <SCLensChallengesScheduleProtocol> lensChallengesSchedule;
- (id)lensDataFetcher;
- (id)lensDataPrefetcher;
- (id)lensDownloadTracker;
- (id)lensDownloadableContent;
- (id)lensExplorerItemCreator;
- (id)lensFeedLiveLensPreviewCameraPresenter;
- (id)lensInPreviewLogger;
- (id)lensLogger;
- (id)lensLoggerForUserSession:(id)arg1;
- (id)lensPreferences;
- (id)lensRemoteAssetsBlobUploader;
- (id)lensStudioDataStore;
- (id)lensUsageTrackerNotifier;
- (id)lensUserSessionLifeCycleNotifier;
- (id)lensesTooltipManager;
- (id)lifestyleCategoriesService;
- (id)locationServicesDataStore;
- (id)locationShareWithFriendControllerData;
- (id)locationSharingNotificationController;
- (id)locationSharingPreferences;
- (id)locationSharingService;
- (id)loginRegistrationStatus;
- (id)lowresMediaFilePreloader;
- (id)lowresMediaReuploader;
- (id)mapBasePersonLocationsProvider;
- (id)mapBitmojiAvatarGenerator;
- (id)mapDoodleProvider;
- (id)mapExploreDataStoreV1;
- (id)mapFSNService;
- (id)mapGameStateDataStore;
- (id)mapInstanceProvider;
- (id)mapNotificationPresenter;
- (id)mapPassportDataStore;
- (id)mapPeopleFriendsProvider;
- (id)mapPeopleGroupsProvider;
- (id)mapSearchCacheManager;
- (id)mapServerService;
- (id)mapSnapTokenService;
- (id)mapSnapshotProviderForStyle:(long long)arg1;
- (id)mapTapToPlayResponderProvider;
- (id)mapUserPreferences;
- (id)mapboxEvents;
- (id)mapboxStyleLoader;
- (id)mapboxStyleLoaderStyleProviderForMapStyle:(int)arg1;
- (id)mediaDownload;
- (id)mediaFileRestorer;
@property(readonly, nonatomic) SCMediaPackageManager *mediaPackageManager;
@property(readonly, nonatomic) SCMediaPackagePreviewAdapter *mediaPackagePreviewAdapter;
- (id)mediaSendTaskManager;
- (id)memoriesLostDataRestorer;
@property(readonly, nonatomic) SCMemoriesSearchDatabase *memoriesSearchDatabase;
@property(readonly, nonatomic) SCMergedGalleryDataSource *mergedGalleryDataSource;
- (void)migrateUserCacheTo:(id)arg1 from:(id)arg2;
- (id)nearbyVenueStore;
@property(readonly, nonatomic) id <SCNetworker> networker;
- (id)networkingRankingModelLoader;
- (id)networkingRankingUserInfoProvider;
- (id)networkingUserProfileLoader;
- (id)notificationOptInRequestManager;
- (id)objectForKey:(id)arg1 initializer:(CDUnknownBlockType)arg2;
@property(readonly, nonatomic) SCOnDemandGeofilterSession *odgSession;
- (id)onDemandLensDataStore;
@property(readonly, nonatomic) SCUnlockablesOpportunityRequestIdController *opportunityRequestIdController;
- (id)pageTracker;
- (id)phishyURLAppManager;
- (id)postCaptureLensDataFetcher;
- (id)previewContextImageClassifier;
@property(readonly, nonatomic) SCPreviewGallerySavedMediaGenerator *previewGallerySavedMediaGenerator;
@property(readonly, nonatomic) SCGalleryPrivateGalleryManager *privateGalleryManager;
@property(readonly, copy, nonatomic) id <SCGalleryProfile> profile;
- (id)profileCameraPresenterWithRoleType:(long long)arg1 snapSource:(long long)arg2;
- (id)publisherIconImageDownloader;
- (id)rankingAppManager;
- (id)reauthenticationService;
- (id)recentFriendBitmojiAvatarProvider;
- (id)replyOnStoryLayerLensDataProvider;
- (id)replyToSnapLayerLensDataProvider;
- (id)requestManager;
@property(readonly, nonatomic) SCRequestQueue *requestQueue;
- (id)reverseAudioCache;
- (id)safeBrowsingAPI;
@property(readonly, nonatomic) SCMemoriesSavingSnapNotificationManager *savingSnapNotificationManager;
- (id)scanHistoryStore;
- (id)scannablesAPI;
- (id)scheduledLensesDataStore;
- (id)scheduledLensesMetadataStoreWithLensUserProvider:(id)arg1;
- (id)scopedProcessorLoader;
- (id)searchEventLogger;
- (id)searchFriendProvider;
- (id)searchInteractionsTracker;
- (id)searchLogger;
- (id)searchOperaDebugInfoProvider;
@property(readonly, nonatomic) SCGallerySearchQueryResultsCollector *searchQueryResultsCollector;
- (id)searchSnapInfoCollector;
- (id)searchStoryDebugInfoProvider;
- (id)searchStoryProvider;
- (id)searchStreamingCompositeDownloader;
- (id)searchUserSearcher;
- (id)searchVideoDownloader;
- (id)securityTokenUpdater;
@property(readonly, nonatomic) SCSendToRankingServerMetadataManager *sendToRankingServerMetadataManager;
- (id)settingsService;
@property(readonly, nonatomic) SCShazamConfigurationManager *shazamConfigurationManager;
@property(readonly, nonatomic) SCShazamKeyValueCache *shazamKeyValueCache;
@property(readonly, nonatomic) SCShazamRecogniseManager *shazamRecogniseManager;
@property(readonly, nonatomic) SCImpalaWatchedStateManager *showsWatchedStateManager;
- (id)snapTokenManager;
- (id)snapcodeDataStore;
- (id)snapcodeManager;
- (id)snapcodeManagerAPI;
@property(readonly, nonatomic) SCSnapcodeManagerLogger *snapcodeManagerLogger;
@property(readonly, nonatomic) SCSnaptracksServices *snaptracksServices;
- (id)spectaclesManager;
- (id)spectaclesOAuth2;
- (id)statusCoordinator;
- (id)stickerRankingAppManager;
@property(readonly, nonatomic) SCStickerRankingManager *stickerRankingManager;
- (id)stickerTagFuzzySearch;
- (id)storyTooltipManager;
- (id)streamingMediaManager;
- (id)studioSyncManager;
@property(readonly, nonatomic) SCGallerySuggestedQueryUpdater *suggestedQueryUpdater;
- (id)talkAudioServices;
- (id)talkHeadlessSessionController;
- (id)talkIdentityServices;
- (id)talkManager;
- (id)talkRPC;
- (id)talkV3Manager;
- (id)temporaryDatastoreNamed:(id)arg1 type:(unsigned long long)arg2 defaultDaysForExpiry:(unsigned long long)arg3;
@property(readonly, nonatomic) SCGalleryThumbnailDelayDebugManager *thumbnailDebugManager;
- (id)todayWidgetService;
- (id)unlockableDataStore;
- (id)unlockableDataStoreFilterFactory;
- (id)unlockableSensitivityController;
- (id)unlockablesCommonDataStore;
- (id)unlockablesController;
- (id)unlockablesLoader;
@property(readonly, nonatomic) SCUnlockedStickerManager *unlockedStickerManager;
- (id)unmanaged_cacheDirectory:(id)arg1 error:(id *)arg2;
- (id)unmanaged_documentDirectory:(id)arg1 error:(id *)arg2;
- (id)updatesResponseAnnouncer;
@property(readonly, nonatomic) SCUploadHostPinger *uploadHostPinger;
@property(readonly, nonatomic) SCBoltUploadManager *uploadManager;
@property(readonly, nonatomic) SCUploadMediaManager *uploadMediaManager;
@property(readonly, nonatomic) id <SCUploadURLCaching> uploadURLCache;
@property(readonly, copy, nonatomic) NSString *userEmail; // @synthesize userEmail=_userEmail;
@property(readonly, copy, nonatomic) NSString *userId; // @synthesize userId=_userId;
- (id)userPreferences;
- (id)userStoriesAdDataSource;
@property(readonly, copy, nonatomic) NSString *username; // @synthesize username=_username;
- (id)usernameChangeService;
- (id)viewPageOnboardingTooltipManager;
@property(readonly, nonatomic) SCGalleryVisualConceptThresholdUpdater *visualConceptUpdater;
@property(readonly, nonatomic) SCStickerVisualTagExpansionRuleUpdater *visualTagExpansionRuleUpdater;
- (id)weatherService;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

