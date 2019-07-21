//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "EphemeralMedia.h"

#import "MediaCacheInfoDataSource-Protocol.h"
#import "MediaDataSource-Protocol.h"
#import "MediaDelegate-Protocol.h"
#import "MediaImageProcessingDelegate-Protocol.h"
#import "MediaUploadDelegate-Protocol.h"
#import "NSCopying-Protocol.h"
#import "SCDataCoordinatorListener-Protocol.h"
#import "SCLensRemoteAssetsUploadOperationDelegate-Protocol.h"
#import "SCLensRemoteAssetsUploadOperationListener-Protocol.h"
#import "SCReportStoryDataParamsProvider-Protocol.h"
#import "SCReportStoryMetadataParamsProvider-Protocol.h"
#import "SCStoriesViewDataModel-Protocol.h"
#import "SCStoryExporterItem-Protocol.h"

@class IMPBusinessProfile, NSArray, NSDate, NSDictionary, NSError, NSMutableArray, NSMutableSet, NSNumber, NSString, NSURL, SCAdToLens, SCEncryptedCache, SCImageToVideoWriter, SCImpalaStoryPlaybackInfo, SCMapStoryInfo, SCSearchStoryInfo, SCSearchStreamingLoggingInfo, SCSearchStreamingMediaInfo, SCSnapActionsConfiguration, SCSnapTime, SCSnapVideoFilterState, SCStoryMediaStateListenerAnnouncer, SCStorySaveCompleteListenerAnnouncer, SOJUAudioStitch, SOJUBroadcastAttribution, SOJUSnapCreatorAttribution, SOJUStoryFrame;
@protocol SCChunk, SCLensRemoteAssetsUploadOperation;

@interface Story : EphemeralMedia <SCLensRemoteAssetsUploadOperationDelegate, SCReportStoryDataParamsProvider, SCReportStoryMetadataParamsProvider, SCDataCoordinatorListener, MediaDataSource, MediaDelegate, MediaUploadDelegate, MediaImageProcessingDelegate, SCLensRemoteAssetsUploadOperationListener, SCStoriesViewDataModel, SCStoryExporterItem, MediaCacheInfoDataSource, NSCopying>
{
    SCStoryMediaStateListenerAnnouncer *_mediaStateListenerAnnouncer;
    SCStorySaveCompleteListenerAnnouncer *_storySaveListenerAnnouncer;
    NSString *_cachedSnapIdComponent;
    SCEncryptedCache *_storyPersistentCache;
    NSString *_savedOriginalPublicationId;
    _Bool _shouldShowToastWhenPostComplete;
    _Bool _isBeingViewed;
    _Bool _screenshotReported;
    _Bool _saveReported;
    _Bool _unviewedIsBeingViewed;
    _Bool _insideMergedFriendStories;
    _Bool _postMaster;
    _Bool _isMyStory;
    _Bool _isMySharedStory;
    _Bool _isSharedStory;
    _Bool _isOfficialStory;
    _Bool _isPublic;
    _Bool _isGroupStory;
    _Bool _isPromotedStory;
    _Bool _isAppStory;
    _Bool _isSearchDynamicStory;
    _Bool _isCheetahStory;
    _Bool _viewed;
    _Bool _needsAuthToFetch;
    _Bool _savedByUser;
    _Bool _isDynamicAdSlot;
    _Bool _adCanFollow;
    _Bool _addToMyStory;
    _Bool _unrecoverable;
    _Bool _hasLensMetadataOnServer;
    _Bool _hasAsyncPostFailed;
    _Bool _shouldUploadStoryAfterLensAssetRemoteOperation;
    long long _postingState;
    NSDate *_expirationDate;
    NSString *_mediaKey;
    NSString *_mediaId;
    NSString *_mediaIv;
    NSString *_thumbnailIv;
    NSURL *_thumbnailURL;
    NSError *_playbackError;
    NSArray *_requestContexts;
    unsigned long long _mediaFormat;
    id <SCChunk> _chunk;
    NSDate *_timestamp;
    double _unviewedTimeLeft;
    NSString *_userDisplayName;
    NSDate *_userPostedTimestamp;
    NSString *_key;
    NSString *_iv;
    NSDate *_postSuccessTimestamp;
    SCSearchStoryInfo *_searchStoryInfo;
    SCSearchStreamingMediaInfo *_streamingMediaInfo;
    SCSearchStreamingLoggingInfo *_streamingLoggingInfo;
    SCMapStoryInfo *_mapStoryInfo;
    long long _discoverStoryFeedType;
    NSString *_flushableStoryId;
    unsigned long long _screenshotToReportCount;
    unsigned long long _savesCountFriend;
    unsigned long long _savesCountOther;
    SOJUStoryFrame *_framing;
    NSString *_adUnitId;
    NSDictionary *_targetingParameters;
    NSString *_adKey;
    NSString *_adPlacementId;
    NSString *_adLineItemId;
    NSString *_adId;
    NSString *_adHeadline;
    NSString *_adBrandName;
    SCAdToLens *_adToLensModel;
    NSString *_politicalAdPayingAdvertiserName;
    NSString *_adRequestClientId;
    long long _adPosition;
    long long _brandFriendliness;
    NSArray *_ourStoriesMetadataToPostTo;
    NSNumber *_addToMyStoryPrivacyOverride;
    NSString *_sharedStoryGroupId;
    NSString *_sharedStoryDisplayName;
    NSString *_sharedStoryUserId;
    NSString *_sharedStoryAvatarId;
    NSString *_sharedStorySelfieId;
    NSString *_sharedStoryGeoLocation;
    NSArray *_appStories;
    NSString *_appStoryAppId;
    NSString *_appStoryDisplayName;
    IMPBusinessProfile *_businessProfile;
    NSArray *_businessIdsToPostTo;
    SCImpalaStoryPlaybackInfo *_businessStoryPlaybackInfo;
    NSArray *_groupStoryPubIdsToPostTo;
    long long _storyIndexInViewingSession;
    NSString *_submissionId;
    SOJUBroadcastAttribution *_attribution;
    SOJUAudioStitch *_audioStitch;
    NSURL *_mediaAPPURL;
    NSURL *_mediaD2SURL;
    NSDictionary *_rulefileParams;
    long long _retryCount;
    long long _remainingAutoRetryCount;
    NSString *_geofilterId;
    NSString *_lensId;
    id <SCLensRemoteAssetsUploadOperation> _lensAssetUploadOperation;
    long long _postingDelay;
    NSDate *_expectedPostingTimestamp;
    NSString *_snapConnectClientDisplayName;
    NSString *_snapKitClientId;
    NSString *_largeThumbnailUrl;
    SOJUSnapCreatorAttribution *_repostAttribution;
    NSString *_comment;
    SCSnapVideoFilterState *_storyVideoFilterState;
    NSString *_savedUsername;
    long long _atomicMediaState;
    NSError *_lastMediaLoadError;
    NSDate *_markedAsViewedTimestamp;
    NSDate *_atomicMetadataDownloadTimestamp;
    long long _atomicBandwidthWhenDownloadMetadata;
    NSString *_thumbnailId;
    NSString *_atomicUsername;
    Story *_postMasterStory;
    SCImageToVideoWriter *_imageToVideoWriter;
    NSMutableArray *_mediaFetchCompletionBlocks;
    SCSnapTime *_snapTime;
    NSMutableSet *_siblingsCache;
    SCSnapActionsConfiguration *_actionsConfiguration;
}

+ (void)_postNotificationWithName:(id)arg1 object:(id)arg2 userInfo:(id)arg3;
+ (id)discoverFeedAdToLensToSCAdToLens:(id)arg1;
+ (unsigned long long *)fasterCodingKeys;
+ (unsigned long long)fasterCodingVersion;
- (void).cxx_destruct;
- (void)DEPRECATED_updatePostingStateWithoutAssertion:(long long)arg1;
- (id)URLForMedia:(id)arg1;
- (double)_durationForVideoExport;
- (void)_fetchThumbnailFromThumbnailCoordinatorWithQueue:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)_generateRulefileStoryEncodingInput;
- (void)_logSearchMediaFetchFromCache;
- (CDUnknownBlockType)_postNowSuccessBlock;
- (void)_removeMediaAndThumbnailFromCache;
- (void)_removeSnapMediaFromDiskForCacheKey:(id)arg1;
- (void)_removeStoryFromDOC;
- (void)_removeUnrecoverableStory;
- (CDUnknownBlockType)_resetPostingDelayTo:(long long)arg1;
- (void)_saveSnapMediaToCoordinatorWithData:(id)arg1;
- (void)_setNotViewingFriendStoryWithViewingType:(long long)arg1;
- (void)_setupAppStory:(id)arg1 allowRevertFromPostedToPending:(_Bool)arg2 username:(id)arg3;
- (void)_setupGroupStory:(id)arg1 allowRevertFromPostedToPending:(_Bool)arg2;
- (void)_setupSharedStoryWithMetadata:(id)arg1 allowRevertFromPostedToPending:(_Bool)arg2;
- (void)_storyDidDecodeObject;
- (void)_storyWillEncodeObject;
- (void)_updateLoadedSectionsWithSections:(id)arg1;
@property(retain) SCSnapActionsConfiguration *actionsConfiguration; // @synthesize actionsConfiguration=_actionsConfiguration;
@property(copy) NSString *adBrandName; // @synthesize adBrandName=_adBrandName;
@property _Bool adCanFollow; // @synthesize adCanFollow=_adCanFollow;
@property(copy) NSString *adHeadline; // @synthesize adHeadline=_adHeadline;
@property(copy) NSString *adId; // @synthesize adId=_adId;
@property(copy) NSString *adKey; // @synthesize adKey=_adKey;
@property(copy) NSString *adLineItemId; // @synthesize adLineItemId=_adLineItemId;
@property(copy) NSString *adPlacementId; // @synthesize adPlacementId=_adPlacementId;
@property long long adPosition; // @synthesize adPosition=_adPosition;
@property(copy) NSString *adRequestClientId; // @synthesize adRequestClientId=_adRequestClientId;
@property(copy) SCAdToLens *adToLensModel; // @synthesize adToLensModel=_adToLensModel;
@property(copy) NSString *adUnitId; // @synthesize adUnitId=_adUnitId;
- (void)addMediaStateListener:(id)arg1;
- (void)addSibling:(id)arg1;
- (void)addStorySaveListener:(id)arg1;
@property _Bool addToMyStory; // @synthesize addToMyStory=_addToMyStory;
@property(retain) NSNumber *addToMyStoryPrivacyOverride; // @synthesize addToMyStoryPrivacyOverride=_addToMyStoryPrivacyOverride;
@property(copy) NSArray *appStories; // @synthesize appStories=_appStories;
@property(copy) NSString *appStoryAppId; // @synthesize appStoryAppId=_appStoryAppId;
@property(copy) NSString *appStoryDisplayName; // @synthesize appStoryDisplayName=_appStoryDisplayName;
- (id)assetsUploaderForUploadOperation:(id)arg1;
@property long long atomicBandwidthWhenDownloadMetadata; // @synthesize atomicBandwidthWhenDownloadMetadata=_atomicBandwidthWhenDownloadMetadata;
@property long long atomicMediaState; // @synthesize atomicMediaState=_atomicMediaState;
@property(retain) NSDate *atomicMetadataDownloadTimestamp; // @synthesize atomicMetadataDownloadTimestamp=_atomicMetadataDownloadTimestamp;
@property(copy) NSString *atomicUsername; // @synthesize atomicUsername=_atomicUsername;
- (id)attachmentUrlString;
@property(copy) SOJUBroadcastAttribution *attribution; // @synthesize attribution=_attribution;
@property(copy) SOJUAudioStitch *audioStitch; // @synthesize audioStitch=_audioStitch;
- (unsigned long long)baseLayerType;
@property long long brandFriendliness; // @synthesize brandFriendliness=_brandFriendliness;
@property(copy) NSArray *businessIdsToPostTo; // @synthesize businessIdsToPostTo=_businessIdsToPostTo;
@property(copy) IMPBusinessProfile *businessProfile; // @synthesize businessProfile=_businessProfile;
@property(copy) SCImpalaStoryPlaybackInfo *businessStoryPlaybackInfo; // @synthesize businessStoryPlaybackInfo=_businessStoryPlaybackInfo;
- (id)cacheMediaId;
- (id)cacheThumbnailId;
- (id)captureCountDisplay;
- (void)checkAndSetStreamingMediaInfo:(id)arg1;
@property(retain) id <SCChunk> chunk; // @synthesize chunk=_chunk;
@property(readonly, nonatomic) NSString *clientIdSnapComponent;
@property(copy) NSString *comment; // @synthesize comment=_comment;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dataCoordinatorDidUpdateWithIdentifier:(id)arg1 dataRequest:(id)arg2;
- (void)decodeWithFasterDecoder:(id)arg1;
- (id)decryptData:(id)arg1 forMedia:(id)arg2;
- (void)deleteStory;
@property(readonly, copy) NSString *description;
- (void)didDecodeObject;
- (void)didDeleteStory:(_Bool)arg1;
- (void)didFinishDownload:(id)arg1 success:(_Bool)arg2 numBytes:(unsigned long long)arg3;
- (void)didFinishDownload:(id)arg1 success:(_Bool)arg2 numBytes:(unsigned long long)arg3 additionalParams:(id)arg4;
- (void)didFinishSavingSnapToAlbumWithError:(id)arg1 isVideo:(_Bool)arg2 videoDuration:(double)arg3;
- (void)didStartDownload:(id)arg1;
@property long long discoverStoryFeedType; // @synthesize discoverStoryFeedType=_discoverStoryFeedType;
- (void)encodeWithCoder:(id)arg1;
- (void)encodeWithFasterCoder:(id)arg1;
- (_Bool)encrypt;
- (id)encryptedMediaDataToUpload:(id)arg1;
- (id)encryptedStoryDatastore;
- (id)encryptionDictionaryForMedia:(id)arg1;
- (id)encryptionIvForMedia:(id)arg1;
- (id)encryptionKeyForMedia:(id)arg1;
- (id)endpointForMedia:(id)arg1;
- (id)endpointParamsForMedia:(id)arg1;
@property(retain) NSDate *expectedPostingTimestamp; // @synthesize expectedPostingTimestamp=_expectedPostingTimestamp;
@property(retain) NSDate *expirationDate; // @synthesize expirationDate=_expirationDate;
- (id)expirationForMedia:(id)arg1;
- (void)exportToVideoURLCompletion:(CDUnknownBlockType)arg1 progressBlock:(CDUnknownBlockType)arg2 spectaclesExportSettings:(id)arg3;
- (void)fetchMediaBadRequestForMedia:(id)arg1;
- (void)fetchMediaDidCancelForMedia:(id)arg1;
- (void)fetchMediaDidFailForMedia:(id)arg1 error:(id)arg2;
- (void)fetchMediaDidSucceedForMedia:(id)arg1;
- (void)fetchMediaDidSucceedForMedia:(id)arg1 isFromCache:(_Bool)arg2;
- (void)fetchMediaIsLoadingForMedia:(id)arg1 userInitiated:(_Bool)arg2;
- (void)fetchMediaNotFoundForMedia:(id)arg1;
- (void)fetchMediaResponseHandlerCustom:(id)arg1 request:(id)arg2 response:(id)arg3 error:(id)arg4;
- (void)fetchMediaUserInitiated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)fetchMediaUserInitiated:(_Bool)arg1 withRequestBatchId:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)fileManagerForUploadOperation:(id)arg1;
@property(copy) NSString *flushableStoryId; // @synthesize flushableStoryId=_flushableStoryId;
- (id)flushableViewedJsonDictionary;
@property(copy) SOJUStoryFrame *framing; // @synthesize framing=_framing;
@property(copy) NSString *geofilterId; // @synthesize geofilterId=_geofilterId;
- (id)getServerStoryId;
@property(copy) NSArray *groupStoryPubIdsToPostTo; // @synthesize groupStoryPubIdsToPostTo=_groupStoryPubIdsToPostTo;
- (void)handleFailedStoryAfterUploadSuccess;
- (void)handleMediaNotFoundOrBadRequestForMedia:(id)arg1 error:(id)arg2;
- (void)handleSnapDeleteStateDataRequest:(id)arg1;
@property _Bool hasAsyncPostFailed; // @synthesize hasAsyncPostFailed=_hasAsyncPostFailed;
- (_Bool)hasAttributionIdForUserId:(id)arg1;
@property(nonatomic) _Bool hasLensMetadataOnServer; // @synthesize hasLensMetadataOnServer=_hasLensMetadataOnServer;
- (_Bool)hasMediaProcessingFailed;
- (_Bool)hasNoMedia;
- (_Bool)hasOfficialStoryAttribution;
- (_Bool)hasUploadFailed;
- (_Bool)hasUploadPermanentlyFailed;
- (_Bool)hasUploaded;
@property(readonly) unsigned long long hash;
- (void)imageProcessingDidSucceedForMedia:(id)arg1;
@property(retain) SCImageToVideoWriter *imageToVideoWriter; // @synthesize imageToVideoWriter=_imageToVideoWriter;
- (id)init;
- (id)initFriendStoryWithSoju:(id)arg1;
- (id)initGroupStoryWithSoju:(id)arg1 isMyStory:(_Bool)arg2;
- (id)initMyGroupStoryWithSOJUStoryLogbook:(id)arg1;
- (id)initMyStoryFromStory:(id)arg1;
- (id)initMyStoryWithDictionary:(id)arg1;
- (id)initMyStoryWithSOJUPartialStoryLogbook:(id)arg1;
- (id)initMyStoryWithSOJUStoryLogbook:(id)arg1;
- (id)initWithAppStorySnap:(id)arg1 username:(id)arg2;
- (id)initWithCheetahMomentStory:(id)arg1 storyId:(id)arg2;
- (id)initWithCheetahPromotedSnap:(id)arg1;
- (id)initWithClientId;
- (id)initWithCoder:(id)arg1;
- (id)initWithSnapDoc:(id)arg1 title:(id)arg2;
- (id)initWithStoryElement:(id)arg1 username:(id)arg2 manifestDisplayName:(id)arg3 enableStreaming:(_Bool)arg4 elementType:(unsigned long long)arg5;
- (id)initWithStorySnap:(id)arg1 storyId:(id)arg2 reportingInfo:(id)arg3 userId:(id)arg4 displayName:(id)arg5 username:(id)arg6 avatarId:(id)arg7 selfieId:(id)arg8 storyType:(long long)arg9;
- (id)initWithStorySnap:(id)arg1 storyId:(id)arg2 reportingInfo:(id)arg3 userId:(id)arg4 displayName:(id)arg5 username:(id)arg6 avatarId:(id)arg7 selfieId:(id)arg8 storyType:(long long)arg9 isSearchDynamicStory:(_Bool)arg10 isCheetahStory:(_Bool)arg11 discoverStoryFeedType:(long long)arg12;
- (id)initWithUsername:(id)arg1 adResponse:(id)arg2 adRequestClientId:(id)arg3 isSharedStory:(_Bool)arg4 adKey:(id)arg5 endpoint:(id)arg6 data:(id)arg7;
- (void)insertIntoListWithAllowRevertFromPostedToPending:(_Bool)arg1;
@property(nonatomic) _Bool insideMergedFriendStories; // @synthesize insideMergedFriendStories=_insideMergedFriendStories;
- (void)invalidateLensAssetUploadOperation;
@property _Bool isAppStory; // @synthesize isAppStory=_isAppStory;
@property _Bool isBeingViewed; // @synthesize isBeingViewed=_isBeingViewed;
- (_Bool)isBeingViewedForViewingType:(long long)arg1;
- (_Bool)isBrandSnapStory;
- (_Bool)isBroadcastDelayed;
@property(readonly, nonatomic) _Bool isBusinessStory;
@property _Bool isCheetahStory; // @synthesize isCheetahStory=_isCheetahStory;
- (_Bool)isCountingDownForViewingType:(long long)arg1;
- (_Bool)isCreatedByCurrentUser;
- (_Bool)isDeletable;
@property _Bool isDynamicAdSlot; // @synthesize isDynamicAdSlot=_isDynamicAdSlot;
- (_Bool)isEqual:(id)arg1;
- (_Bool)isExpired;
- (_Bool)isFromCameraRoll;
- (_Bool)isFromGallery;
@property _Bool isGroupStory; // @synthesize isGroupStory=_isGroupStory;
- (_Bool)isHD;
- (_Bool)isInsidePrivateCustomStory;
- (_Bool)isLagunaMedia;
- (_Bool)isLensAssetUploadOperationComplete;
@property(readonly) _Bool isMapStory;
- (_Bool)isMediaAlreadyEncrypted:(id)arg1;
- (_Bool)isMediaProcessing;
- (_Bool)isMediaProcessingOrFailedToProcess;
- (_Bool)isMyProfileStory;
@property _Bool isMySharedStory; // @synthesize isMySharedStory=_isMySharedStory;
@property _Bool isMyStory; // @synthesize isMyStory=_isMyStory;
@property _Bool isOfficialStory; // @synthesize isOfficialStory=_isOfficialStory;
- (_Bool)isPostingOrHasFailed;
- (_Bool)isPostingOrHasPermanentlyFailed;
- (_Bool)isPrivateReposted;
- (_Bool)isProcessingOrUploading;
@property _Bool isPromotedStory; // @synthesize isPromotedStory=_isPromotedStory;
@property _Bool isPublic; // @synthesize isPublic=_isPublic;
- (_Bool)isRecentlyReported;
- (_Bool)isReportable;
- (_Bool)isReposted;
- (_Bool)isSaveable;
@property _Bool isSearchDynamicStory; // @synthesize isSearchDynamicStory=_isSearchDynamicStory;
- (_Bool)isSendingOrHasFailed;
- (_Bool)isShareable;
@property _Bool isSharedStory; // @synthesize isSharedStory=_isSharedStory;
- (_Bool)isSpectacles60fps;
- (_Bool)isSpectaclesImage;
- (_Bool)isSpectaclesMedia;
- (_Bool)isVideoProgressiveDownloadEnabled;
- (_Bool)isVideoStreaming;
@property(retain, nonatomic) NSString *iv; // @synthesize iv=_iv;
@property(retain, nonatomic) NSString *key; // @synthesize key=_key;
@property(copy, nonatomic) NSString *largeThumbnailUrl; // @synthesize largeThumbnailUrl=_largeThumbnailUrl;
@property(retain) NSError *lastMediaLoadError; // @synthesize lastMediaLoadError=_lastMediaLoadError;
@property(retain, nonatomic) id <SCLensRemoteAssetsUploadOperation> lensAssetUploadOperation; // @synthesize lensAssetUploadOperation=_lensAssetUploadOperation;
@property(copy) NSString *lensId; // @synthesize lensId=_lensId;
- (id)lensIdentifier;
- (void)lensRemoteAssetsUploadOperation:(id)arg1 didFailUploadingAssetWithId:(id)arg2 effectId:(id)arg3 error:(id)arg4;
- (void)lensRemoteAssetsUploadOperation:(id)arg1 didSucceedUploadingAssetWithId:(id)arg2 effectId:(id)arg3;
- (void)lensRemoteAssetsUploadOperationDidFail:(id)arg1 withError:(id)arg2;
- (void)lensRemoteAssetsUploadOperationDidSucceed:(id)arg1;
- (void)loadPersistedFailedStoryData;
- (id)loggingParamsForViewingType:(long long)arg1;
@property(retain) SCMapStoryInfo *mapStoryInfo; // @synthesize mapStoryInfo=_mapStoryInfo;
- (void)markAsViewedForViewingType:(long long)arg1;
@property(retain) NSDate *markedAsViewedTimestamp; // @synthesize markedAsViewedTimestamp=_markedAsViewedTimestamp;
@property(retain) NSURL *mediaAPPURL; // @synthesize mediaAPPURL=_mediaAPPURL;
@property(retain) NSURL *mediaD2SURL; // @synthesize mediaD2SURL=_mediaD2SURL;
@property(retain) NSMutableArray *mediaFetchCompletionBlocks; // @synthesize mediaFetchCompletionBlocks=_mediaFetchCompletionBlocks;
@property unsigned long long mediaFormat; // @synthesize mediaFormat=_mediaFormat;
@property(copy) NSString *mediaId; // @synthesize mediaId=_mediaId;
- (id)mediaIdForMedia:(id)arg1;
@property(copy) NSString *mediaIv; // @synthesize mediaIv=_mediaIv;
@property(copy) NSString *mediaKey; // @synthesize mediaKey=_mediaKey;
- (id)mediaLoadError;
@property long long mediaState;
- (id)mediaStateListenerAnnouncer;
@property(retain, nonatomic) NSURL *mediaURL;
- (void)mediaUploadDidFailForMedia:(id)arg1;
- (void)mediaUploadDidSucceedForMedia:(id)arg1;
- (id)mergedSiblings;
- (long long)myStorySpecificType;
- (long long)myStoryType;
@property _Bool needsAuthToFetch; // @synthesize needsAuthToFetch=_needsAuthToFetch;
@property(retain) NSArray *ourStoriesMetadataToPostTo; // @synthesize ourStoriesMetadataToPostTo=_ourStoriesMetadataToPostTo;
- (double)percentTimeLeft;
- (_Bool)persist;
- (id)persistingFailuresURL;
@property(retain) NSError *playbackError; // @synthesize playbackError=_playbackError;
- (id)playlistItemFeatureType;
@property(copy) NSString *politicalAdPayingAdvertiserName; // @synthesize politicalAdPayingAdvertiserName=_politicalAdPayingAdvertiserName;
@property _Bool postMaster; // @synthesize postMaster=_postMaster;
@property(retain) Story *postMasterStory; // @synthesize postMasterStory=_postMasterStory;
- (void)postSaveWithSuccess:(_Bool)arg1;
- (void)postStory;
- (void)postStoryNow;
@property(retain) NSDate *postSuccessTimestamp; // @synthesize postSuccessTimestamp=_postSuccessTimestamp;
- (id)postedTimestamp;
- (id)posterUsername;
@property long long postingDelay; // @synthesize postingDelay=_postingDelay;
@property long long postingState; // @synthesize postingState=_postingState;
- (_Bool)preferFasterCoding;
- (void)prepareForMergedStories;
- (void)processFailedStoryUserInitiated:(_Bool)arg1;
@property(readonly) NSString *publicationId;
- (id)readReceipt;
- (id)readReceiptWithMasterSibling:(id)arg1;
@property long long remainingAutoRetryCount; // @synthesize remainingAutoRetryCount=_remainingAutoRetryCount;
- (void)removeMediaStateListener:(id)arg1;
- (void)removePersistedFailedStoryData;
- (void)removeStorySaveListener:(id)arg1;
- (void)reportSaveIfNecessary;
- (void)reportScreenshotIfNecessary;
- (unsigned long long)reportSnapSource;
- (id)reportedUsername;
@property(copy) SOJUSnapCreatorAttribution *repostAttribution; // @synthesize repostAttribution=_repostAttribution;
@property(copy) NSArray *requestContexts; // @synthesize requestContexts=_requestContexts;
- (long long)requestFallbackPriority;
- (long long)requestPriorityUserInitiated:(_Bool)arg1;
- (void)resetDependentStoriesState;
@property long long retryCount; // @synthesize retryCount=_retryCount;
@property(retain) NSDictionary *rulefileParams; // @synthesize rulefileParams=_rulefileParams;
- (void)saveAndPostStory:(id)arg1 postToMyStory:(_Bool)arg2 additionalText:(id)arg3 shouldShowToast:(_Bool)arg4;
@property _Bool saveReported; // @synthesize saveReported=_saveReported;
- (void)saveStory:(id)arg1;
- (void)saveStoryDataToPersistentStoreWithData:(id)arg1;
- (void)saveThumbnailDataToMediaCoordinatorIfPossible;
@property _Bool savedByUser; // @synthesize savedByUser=_savedByUser;
@property(copy, nonatomic) NSString *savedUsername; // @synthesize savedUsername=_savedUsername;
@property unsigned long long savesCountFriend; // @synthesize savesCountFriend=_savesCountFriend;
@property unsigned long long savesCountOther; // @synthesize savesCountOther=_savesCountOther;
@property _Bool screenshotReported; // @synthesize screenshotReported=_screenshotReported;
@property unsigned long long screenshotToReportCount; // @synthesize screenshotToReportCount=_screenshotToReportCount;
@property(copy) SCSearchStoryInfo *searchStoryInfo; // @synthesize searchStoryInfo=_searchStoryInfo;
- (void)setBool:(_Bool)arg1 forUInt64Key:(unsigned long long)arg2;
- (void)setClientId:(id)arg1;
- (void)setIsBeingViewed:(_Bool)arg1 forViewingType:(long long)arg2;
- (void)setObject:(id)arg1 forUInt64Key:(unsigned long long)arg2;
- (void)setSInt32:(int)arg1 forUInt64Key:(unsigned long long)arg2;
- (void)setSInt64:(long long)arg1 forUInt64Key:(unsigned long long)arg2;
@property(copy) NSString *sharedStoryAvatarId; // @synthesize sharedStoryAvatarId=_sharedStoryAvatarId;
@property(retain) NSString *sharedStoryDisplayName; // @synthesize sharedStoryDisplayName=_sharedStoryDisplayName;
@property(copy) NSString *sharedStoryGeoLocation; // @synthesize sharedStoryGeoLocation=_sharedStoryGeoLocation;
@property(retain) NSString *sharedStoryGroupId; // @synthesize sharedStoryGroupId=_sharedStoryGroupId;
@property(copy) NSString *sharedStorySelfieId; // @synthesize sharedStorySelfieId=_sharedStorySelfieId;
@property(copy) NSString *sharedStoryUserId; // @synthesize sharedStoryUserId=_sharedStoryUserId;
@property _Bool shouldShowToastWhenPostComplete; // @synthesize shouldShowToastWhenPostComplete=_shouldShowToastWhenPostComplete;
@property _Bool shouldUploadStoryAfterLensAssetRemoteOperation; // @synthesize shouldUploadStoryAfterLensAssetRemoteOperation=_shouldUploadStoryAfterLensAssetRemoteOperation;
@property(retain) NSMutableSet *siblingsCache; // @synthesize siblingsCache=_siblingsCache;
@property(copy) NSString *snapConnectClientDisplayName; // @synthesize snapConnectClientDisplayName=_snapConnectClientDisplayName;
@property(copy) NSString *snapKitClientId; // @synthesize snapKitClientId=_snapKitClientId;
@property(retain) SCSnapTime *snapTime; // @synthesize snapTime=_snapTime;
@property long long storyIndexInViewingSession; // @synthesize storyIndexInViewingSession=_storyIndexInViewingSession;
@property(copy, nonatomic) SCSnapVideoFilterState *storyVideoFilterState; // @synthesize storyVideoFilterState=_storyVideoFilterState;
@property(copy) SCSearchStreamingLoggingInfo *streamingLoggingInfo; // @synthesize streamingLoggingInfo=_streamingLoggingInfo;
@property(copy) SCSearchStreamingMediaInfo *streamingMediaInfo; // @synthesize streamingMediaInfo=_streamingMediaInfo;
@property(copy) NSString *submissionId; // @synthesize submissionId=_submissionId;
@property(retain) NSDictionary *targetingParameters; // @synthesize targetingParameters=_targetingParameters;
@property(copy) NSString *thumbnailId; // @synthesize thumbnailId=_thumbnailId;
@property(copy) NSString *thumbnailIv; // @synthesize thumbnailIv=_thumbnailIv;
@property(retain) NSURL *thumbnailURL; // @synthesize thumbnailURL=_thumbnailURL;
@property(retain) NSDate *timestamp; // @synthesize timestamp=_timestamp;
- (void)setUInt64:(unsigned long long)arg1 forUInt64Key:(unsigned long long)arg2;
@property _Bool unrecoverable; // @synthesize unrecoverable=_unrecoverable;
@property _Bool unviewedIsBeingViewed; // @synthesize unviewedIsBeingViewed=_unviewedIsBeingViewed;
@property double unviewedTimeLeft; // @synthesize unviewedTimeLeft=_unviewedTimeLeft;
@property(copy) NSString *userDisplayName; // @synthesize userDisplayName=_userDisplayName;
@property(retain) NSDate *userPostedTimestamp; // @synthesize userPostedTimestamp=_userPostedTimestamp;
@property(copy) NSString *username;
@property _Bool viewed; // @synthesize viewed=_viewed;
- (_Bool)shouldAutoRetryToPost;
- (_Bool)shouldEncryptOnDiskForMedia:(id)arg1;
- (_Bool)shouldPostFailToSendNotification;
- (_Bool)shouldReportSave;
- (_Bool)shouldReportScreenshot;
- (_Bool)shouldShowViewersList;
- (struct CGRect)spectaclesExportSize;
- (void)storyDataParamsWithHandler:(CDUnknownBlockType)arg1;
- (id)storyMetadataParams;
- (id)storySaveListenerAnnouncer;
- (id)storySnapId;
- (long long)storySpecificType;
- (id)storyType;
- (id)taggedUsernames;
- (double)timeLeftForCounterForViewingType:(long long)arg1 isFirstSnap:(_Bool)arg2;
- (_Bool)timeToSendHasExpired;
- (id)toStoryElement;
- (unsigned long long)totalCaptureCount;
- (unsigned long long)totalSaveCount;
- (unsigned long long)trackingExpirationInDaysForMedia:(id)arg1;
- (id)trackingId;
- (id)trackingIdForMedia:(id)arg1;
- (id)trackingMediaTypeForMedia:(id)arg1;
- (id)trackingTypeForMedia:(id)arg1;
- (long long)uniqueCellDataId;
- (long long)uniqueCellDataIdWithSection:(long long)arg1;
- (void)updateMediaState:(long long)arg1 error:(id)arg2;
- (void)updatePostingState:(long long)arg1;
- (void)updatePostingStateWhileUploading:(long long)arg1;
- (void)updateProgressForMedia:(id)arg1;
- (void)updateStoryMediaMetadata:(id)arg1;
- (void)updateStoryNotesFromStory:(id)arg1;
- (void)updateThumbnailMediaWithStory:(id)arg1;
- (void)updateWithIncomingMyStory:(id)arg1;
- (void)updateWithStory:(id)arg1;
- (void)uploadAndPostStory;
- (CDUnknownBlockType)uploadFailureBlock;
- (void)uploadLensAssetUploadOperation;
- (void)uploadMedia;
- (id)uploadMediaIdForMedia:(id)arg1;
- (long long)uploadMediaTypeForMedia:(id)arg1;
- (void)uploadMediaWithShouldPostWhenSucceed:(_Bool)arg1;
- (id)uploadParametersWithData:(_Bool)arg1 unencryptedData:(id)arg2;
- (void)uploadStory;
- (CDUnknownBlockType)uploadSuccessBlock;
- (id)uploadSuccessUserDefaultsKey;
- (_Bool)usingD2SForMedia:(id)arg1;
- (void)verifyMediaState;
- (void)videoProcessingDidFailForSnapVideoFilter:(id)arg1 error:(id)arg2;
- (void)videoProcessingDidSucceedForSnapVideoFilter:(id)arg1 data:(id)arg2;
- (id)viewedCountDisplay;
- (void)willEncodeObject;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end
