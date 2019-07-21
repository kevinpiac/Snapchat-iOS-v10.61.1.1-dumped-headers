//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface SCGalleryGrapheneLogger : NSObject
{
}

+ (void)fireGalleryAbandonDanglingSnapMetric;
+ (void)fireGalleryBackupErrorMetricWithStatusCode:(long long)arg1 detailStatusCode:(long long)arg2 retryCount:(long long)arg3;
+ (void)fireGalleryCacheDiskUsageMetric:(_Bool)arg1 diskUsageLimit:(double)arg2 currentDiskUsage:(double)arg3 level0Size:(double)arg4 highLevelSize:(double)arg5 entityCount:(long long)arg6 cloudFSCacheSize:(double)arg7;
+ (void)fireGalleryCameraRollEmptyMetric:(id)arg1;
+ (void)fireGalleryExportCompleteWithLatency:(double)arg1 success:(_Bool)arg2 error:(id)arg3 cancelled:(_Bool)arg4 savedToCameraRoll:(_Bool)arg5;
+ (void)fireGalleryExportStartWithContextMenuSource:(id)arg1 snapsCount:(unsigned long long)arg2 storiesCount:(unsigned long long)arg3;
+ (void)fireGalleryInitialStateWithConnectivityStatus:(long long)arg1 backupOnCellular:(_Bool)arg2 totalEntryCount:(long long)arg3 privateEntryCount:(long long)arg4 failedEntryCount:(long long)arg5 deletedEntryCount:(long long)arg6 pendingOperationCount:(long long)arg7 blockingTime:(double)arg8;
+ (void)fireGalleryInvalidAddSnapsWithOperationType:(id)arg1 invalidCount:(unsigned long long)arg2;
+ (void)fireGalleryLocalOperationMetricWithQueueLength:(long long)arg1 blockedDuration:(double)arg2;
+ (void)fireGalleryMeoAttempt:(_Bool)arg1 approach:(id)arg2 rateLimited:(_Bool)arg3;
+ (void)fireGalleryOperationTotalTimeMetricWithQueueLength:(long long)arg1 duration:(double)arg2;
+ (void)fireGalleryRedirectDownloadWithStatusCode:(long long)arg1 type:(id)arg2 host:(id)arg3 latencyInSec:(double)arg4 contentLengthInByte:(unsigned long long)arg5;
+ (void)fireGalleryRegenerateSqlcipher:(_Bool)arg1 errorCode:(long long)arg2;
+ (void)fireGallerySQLCipherKeyDeriveLatencyMetric:(double)arg1 rekeyed:(_Bool)arg2 version:(id)arg3;
+ (void)fireGallerySavingStartWithSaveSource:(id)arg1 saveDestination:(id)arg2 edited:(_Bool)arg3 snapCount:(unsigned long long)arg4;
+ (void)fireGallerySearchQueryPerformanceMetricWithSearchType:(id)arg1 locale:(id)arg2 source:(id)arg3 resultCount:(long long)arg4 elapsedTime:(double)arg5;
+ (void)fireGallerySendTaskFinishMetricWithSuccess:(_Bool)arg1 elapsedTime:(double)arg2;
+ (void)fireGallerySkipOperationFromDeletion;
+ (void)fireGallerySnapBackgroundUploadFinished;
+ (void)fireGallerySnapBackgroundUploadScheduled;
+ (void)fireGallerySnapCanStream:(_Bool)arg1;
+ (void)fireGallerySnapRecoveryProcessed;
+ (void)fireGallerySnapUploadMetricWithTempCellular:(_Bool)arg1 skipOperation:(_Bool)arg2 isRetry:(_Bool)arg3;
+ (void)fireGalleryUploadResultWithStatusCode:(long long)arg1 host:(id)arg2 mediaType:(id)arg3 uploadLatencyInSec:(double)arg4;
+ (id)galleryAbandonDanglingSnapMetric;
+ (id)galleryCacheDiskUsageMetricWithMetricId:(id)arg1 willStartEviction:(_Bool)arg2;
+ (id)galleryCameraRollEmptyMetric:(id)arg1;
+ (id)galleryExportCompleteWithSuccess:(_Bool)arg1 error:(id)arg2 cancelled:(_Bool)arg3 savedToCameraRoll:(_Bool)arg4;
+ (id)galleryExportStartMetricWithMetricId:(id)arg1 contextMenuSource:(id)arg2;
+ (id)galleryInitialStateMetricWithMetricId:(id)arg1 connectivityStatus:(long long)arg2 backupOnCellularEnabled:(_Bool)arg3;
+ (id)galleryInvalidAddSnapsMetricWithOperationType:(id)arg1;
+ (id)gallerySQLCipherKeyDeriveLatencyMetric:(id)arg1 rekeyed:(_Bool)arg2;
+ (id)gallerySavingStartMetricWithSaveSource:(id)arg1 saveDestination:(id)arg2 edited:(_Bool)arg3;
+ (id)gallerySearchQueryPerformanceMetricWithSearchType:(id)arg1 locale:(id)arg2 source:(id)arg3;
+ (id)gallerySendTaskFinishMetricWithSuccess:(_Bool)arg1;
+ (id)gallerySnapUploadMetricWithTempCellular:(_Bool)arg1 skipOperation:(_Bool)arg2 isRetry:(_Bool)arg3;
+ (id)grapheneMetricWithMetricId:(id)arg1 dimensionsAndValues:(id)arg2;

@end
