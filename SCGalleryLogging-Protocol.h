//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCCachingMediaLogger-Protocol.h"
#import "SCChatGalleryLogger-Protocol.h"
#import "SCCloudSyncLogger-Protocol.h"
#import "SCGalleryInChatLogger-Protocol.h"
#import "SCMediaDownloadLogger-Protocol.h"

@class NSArray, NSDate, NSError, NSHTTPURLResponse, NSSet, NSString, PHAsset, SCGalleryActivityItemProvider, SCGalleryMediaGroup, SCGalleryUserContext, SOJUGallerySnapOverlay;
@protocol SCGalleryEntry, SCGallerySnap;

@protocol SCGalleryLogging <SCCloudSyncLogger, SCMediaDownloadLogger, SCCachingMediaLogger, SCChatGalleryLogger, SCGalleryInChatLogger>
- (void)attemptToPostStoryToStoriesWithMediaGroup:(SCGalleryMediaGroup *)arg1;
- (void)attemptToPostToStoriesFromPreview;
- (void)attemptToSendToChatFromPreview;
- (void)createStoryWithSnaps:(NSArray *)arg1;
- (void)deleteItems:(NSArray *)arg1;
- (void)didEnterGallery;
- (void)didExitGallery;
- (void)didIndexedOneSnap:(unsigned long long)arg1;
- (void)didLongPressSaveToGallery;
- (void)didSaveToGalleryForSnap:(id <SCGallerySnap>)arg1 success:(_Bool)arg2 latencyInSec:(double)arg3;
- (void)endGalleryLoadingViewSession;
- (void)endQuery;
- (void)endStoryViewSession:(id <SCGalleryEntry>)arg1;
- (void)enterOnboardingView;
- (void)enterSearch;
- (void)enterSelectionMode;
- (void)exitOnboardingView;
- (void)exitSearch;
- (void)exitSelectionMode;
- (void)exportItemWithItemProvider:(SCGalleryActivityItemProvider *)arg1 shareChannel:(NSString *)arg2;
- (void)finishPrivateGalleryForgetPasscodeFlow:(unsigned long long)arg1;
- (void)finishPrivateGallerySetup;
@property(nonatomic) long long galleryOpenSource;
- (void)importPHAsset:(PHAsset *)arg1;
- (NSString *)lensInfoForSnapOverlay:(SOJUGallerySnapOverlay *)arg1;
- (void)logAllTabLoadLatency:(double)arg1;
- (void)logApplyingOverlayWithNumberOfGeoFilters:(long long)arg1 numberOfInfoFilters:(long long)arg2 timeOfCapture:(NSDate *)arg3;
- (void)logBlizzardThumbnailDisplayLatency:(double)arg1 includeDownload:(_Bool)arg2 snap:(id <SCGallerySnap>)arg3;
- (void)logBoomboxBrowseSnapView:(id <SCGallerySnap>)arg1 entryId:(NSString *)arg2 viewTimeSec:(double)arg3;
- (void)logCachingLocationWithNumberOfGeoFilters:(long long)arg1 numberOfInfoFilters:(long long)arg2;
- (void)logCameraRollTabLoadLatency:(double)arg1;
- (void)logDeletionUserActionWithEntryIdsAndTypes:(NSArray *)arg1 snapIds:(NSArray *)arg2 cameraRollItemCount:(unsigned long long)arg3 cancelled:(_Bool)arg4 context:(NSString *)arg5;
- (void)logDirectSnapCreateWithGallerySnap:(id <SCGallerySnap>)arg1 snapOverlay:(SOJUGallerySnapOverlay *)arg2 lagunaConnectivity:(long long)arg3;
- (void)logErrorWithSharedSnapEntry:(id <SCGalleryEntry>)arg1 errorMessage:(NSString *)arg2;
- (void)logFaceIndexingTimeEndForSnapId:(NSString *)arg1 faceCount:(unsigned long long)arg2;
- (void)logFaceIndexingTimeStartForSnapId:(NSString *)arg1;
- (void)logGalleryCellView:(id <SCGalleryEntry>)arg1;
- (void)logGalleryCollectionAction:(long long)arg1 entry:(id <SCGalleryEntry>)arg2;
- (void)logGalleryInitialState;
- (void)logGalleryLowDiskAlertWithContext:(NSString *)arg1;
- (void)logGallerySnapSendForPostToStory:(id)arg1 snapOverlay:(SOJUGallerySnapOverlay *)arg2 clientId:(NSString *)arg3 smartShared:(_Bool)arg4 contextMenuSource:(long long)arg5;
- (void)logGallerySnapSendForSendAsSnap:(id)arg1 recipientCount:(long long)arg2 postToStory:(_Bool)arg3 clientId:(NSString *)arg4 smartShared:(_Bool)arg5 userContext:(SCGalleryUserContext *)arg6;
- (void)logIncompatibleContentWithEntry:(id <SCGalleryEntry>)arg1;
- (void)logIncompatibleContentWithSnap:(id <SCGallerySnap>)arg1;
- (void)logLargeDeletionTabEntries:(unsigned long long)arg1 currentEntriesCount:(unsigned long long)arg2;
- (void)logNetworkFailureForEndpoint:(NSString *)arg1 response:(NSHTTPURLResponse *)arg2 error:(NSError *)arg3;
- (void)logNewUserSeenGalleryAutoSaveDialogWithMemoriesEntryCount:(unsigned long long)arg1 visitedSettingPage:(_Bool)arg2;
- (void)logNewUserSeenGalleryAutoSaveTooltip;
- (void)logNewUserTurnOffAutoSave;
- (void)logNumberOfSnapsIndexed;
- (void)logQueryUserTypedWithSelectedItem:(id <SCGalleryEntry>)arg1 resultMatchTypes:(NSArray *)arg2 selectedSearchResultTitle:(NSString *)arg3;
- (void)logSearchLatencyWithSearchType:(long long)arg1 source:(long long)arg2 elapsedTime:(double)arg3 resultCount:(unsigned long long)arg4;
- (void)logSearchServiceStatus:(unsigned long long)arg1 numberOfProcessedSnaps:(long long)arg2;
- (void)logStoriesTabLoadLatency:(double)arg1;
- (void)logTagUploadServerResponseStatusCode:(long long)arg1 debugInfo:(NSString *)arg2;
- (void)logTotalDownloadingBeforeSendingWithTotalImages:(unsigned long long)arg1 totalVideos:(unsigned long long)arg2 totalDownloadedImages:(unsigned long long)arg3 totalDownloadedVideos:(unsigned long long)arg4 totalSmartShareableImages:(unsigned long long)arg5 totalSmartShareableVideos:(unsigned long long)arg6 totalUnSyncedImages:(unsigned long long)arg7 totalUnSyncedVideos:(unsigned long long)arg8;
- (void)logWhenStartSharingWithSharingType:(unsigned long long)arg1 galleryMedia:(id)arg2 galleryEntry:(id <SCGalleryEntry>)arg3 sendingFlow:(unsigned long long)arg4;
@property(readonly, nonatomic) double memoriesAllTabLoadLatency;
@property(readonly, nonatomic) double memoriesCameraRollTabLoadLatency;
@property(readonly, nonatomic) double memoriesStoriesTabLoadLatency;
- (void)operaFinishViewingCameraRollItemWithItemId:(NSString *)arg1 isImage:(_Bool)arg2;
- (void)operaFinishViewingSnap:(id <SCGallerySnap>)arg1 unlockableSnapInfo:(NSString *)arg2 isPrivate:(_Bool)arg3 timeViewedMillis:(long long)arg4 pinchToZoomMillis:(double)arg5 maxRotationDegree:(double)arg6 minRotationDegree:(double)arg7;
- (void)operaPlaybackIntentToNextForSnap:(id <SCGallerySnap>)arg1 loadingLatencyInSec:(double)arg2 isFirstDisplayedSnap:(_Bool)arg3 mediaDidLoad:(_Bool)arg4 requireNetworkDownload:(_Bool)arg5 isStreaming:(_Bool)arg6;
- (void)operaPlaybackStallCount:(unsigned long long)arg1 firstStallMediaTime:(double)arg2 firstStallDuration:(double)arg3 totalStallDuration:(double)arg4 currentlyStalled:(_Bool)arg5;
- (void)operaViewCanBeProgressiveDownload:(_Bool)arg1;
- (void)operaViewCancelLoadingForSnap:(id <SCGallerySnap>)arg1;
- (void)operaViewFinishLoadingForSnap:(id <SCGallerySnap>)arg1 loadingLatencyInSec:(double)arg2;
- (void)operaViewFinishLoadingForSnapId:(NSString *)arg1 mediaDidLoad:(_Bool)arg2 isProgressivePlayback:(_Bool)arg3 mediaType:(unsigned long long)arg4;
- (void)operaViewFinishLoadingFullResolutionImageForSnap:(id <SCGallerySnap>)arg1;
- (void)operaViewFullyDismissed:(unsigned long long)arg1 exitedDuringLoading:(_Bool)arg2;
- (void)operaViewStartLoadingForSnap:(id <SCGallerySnap>)arg1 requireNetworkDownload:(_Bool)arg2 isFirstDisplayedSnap:(_Bool)arg3;
- (void)pauseGalleryLoadingViewSession;
- (void)queryUserTyped:(NSArray *)arg1 searchText:(NSString *)arg2 searchTextLocale:(id)arg3;
- (void)renewQuery;
- (void)resumeGalleryLoadingViewSession;
- (NSArray *)sendToChatBlizzardEventsWithMediaGroup:(SCGalleryMediaGroup *)arg1 recipientCount:(long long)arg2 mischiefIds:(NSArray *)arg3 smartSharedSnapIds:(NSSet *)arg4 postToStory:(_Bool)arg5 userContext:(SCGalleryUserContext *)arg6;
- (void)setCurrentTab:(unsigned long long)arg1;
- (void)setItemAsPrivate:(id)arg1 subItems:(NSArray *)arg2;
- (void)setItemAsPublic:(id)arg1 subItems:(NSArray *)arg2;
- (void)setStoryAutoSaving:(_Bool)arg1;
- (void)setTopSecretPrivateGalleryEnabled:(_Bool)arg1;
- (void)shouldStartDismissLoadingView;
- (void)startGalleryLoadingViewSession;
- (void)startSendToChatWithSnapSendCount:(long long)arg1 storySendCount:(long long)arg2;
- (void)startStoryViewSession:(id <SCGalleryEntry>)arg1;
- (void)stopGalleryPageView;
@end

