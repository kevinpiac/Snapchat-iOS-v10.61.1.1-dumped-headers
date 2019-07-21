//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCCache-Protocol.h"
#import "SCManagedDatastore-Protocol.h"
#import "SCStickerDataCache-Protocol.h"

@class NSString, PINDiskCache, PINMemoryCache, SCCacheManager, SCCacheMetrics, SCCacheSizePolicy, SCMemoryCacheKeyGenerator;
@protocol SCCacheKeyGenerator, SCPerforming;

@interface SCCache : NSObject <SCStickerDataCache, SCCache, SCManagedDatastore>
{
    SCCacheMetrics *_metrics;
    SCCacheSizePolicy *_diskSizeLimitConfig;
    SCMemoryCacheKeyGenerator *_memKeyGenerator;
    id <SCCacheKeyGenerator> _diskKeyGenerator;
    _Bool _isScopeManagedDirectory;
    _Bool _skipEviction;
    _Bool _underExperiment;
    _Bool _isInvalidated;
    NSString *_kindName;
    NSString *_metricsName;
    CDUnknownBlockType _didRemoveObjectFromDiskBlock;
    PINMemoryCache *_memoryCache;
    PINDiskCache *_diskCache;
    SCCacheManager *_cacheManager;
    id <SCPerforming> _workQueuePerformer;
    id <SCPerforming> _diskCacheQueuePerformer;
    id <SCPerforming> _completionQueuePerformer;
}

+ (id)_cacheForName:(unsigned long long)arg1 defaultSizeMB:(unsigned long long)arg2;
+ (id)_stringForCacheName:(unsigned long long)arg1;
+ (id)allStaticCacheNames;
+ (id)attachmentsFaviconCache;
+ (id)bitmojiBuilderManagerAssetCache;
+ (id)bitmojiBuilderUserAvatarCache;
+ (id)chatV3MediaDataCache;
+ (id)chatsMediaCache;
+ (id)cheetahStoriesFeedCache;
+ (id)cognacMediaCache;
+ (id)contextFilterResourceCache;
+ (id)customStickerCache;
+ (id)customStickerMemoriesCache;
+ (id)discoverFeedResponseCache;
+ (id)diskBackedMediaCache;
+ (id)friendsProfileCollectionCache;
+ (id)geoFilterRenderedImagesCache;
+ (id)geoFilterURLDataCache;
+ (id)helpVideoListingCache;
+ (id)lensBitmojiListCache;
+ (id)lensIdScanDataCache;
+ (id)lensURLDataCache;
+ (id)lensesFaceImageProviderCache;
+ (id)liveStoriesIconCache;
+ (id)mapGameLensesCache;
+ (id)mapImageDataCache;
+ (id)mapLocationSharingServiceCache;
+ (id)musicAudioDataCache;
+ (id)onDemandGeofilterCache;
+ (id)onDemandGeofilterFontCache;
+ (id)prototypeCache;
+ (id)publisherIconsImageCache;
+ (id)purikuraResourceCache;
+ (id)reverseAudioFileCache;
+ (id)searchImageDataCache;
+ (id)searchResponseCache;
+ (id)searchThumbnailCache;
+ (id)searchVideoDataCache;
+ (void)setSharedMemoryByteLimit:(unsigned long long)arg1;
+ (id)snapAdsPortalMediaManagerCache;
+ (id)snapcodeDataCache;
+ (id)stickerPackMetadataCache;
+ (id)storiesMediaCache;
+ (id)storiesTilesCache;
+ (id)threeDBitmojiCache;
+ (id)unlockablesGeoFilterAreaCache;
- (void).cxx_destruct;
- (void)_configureDiskQuota;
- (void)_executeCompletionBlock:(CDUnknownBlockType)arg1 withKey:(id)arg2 object:(id)arg3;
- (CDUnknownBlockType)_generateDiskRemovalBlock;
- (void)_readObjectFromDiskCache:(id)arg1 originalKey:(id)arg2 dataDecoding:(CDUnknownBlockType)arg3 resetExpiration:(id)arg4 whenLessThanDelta:(double)arg5 block:(CDUnknownBlockType)arg6 returnExpired:(_Bool)arg7;
- (void)_removeAllObjectsCompletelyFromStorage:(unsigned long long)arg1 block:(CDUnknownBlockType)arg2;
- (void)_removeAllObjectsWithEnumerationFromStorage:(unsigned long long)arg1 exceptKeys:(id)arg2 block:(CDUnknownBlockType)arg3;
- (void)_removeFromCacheType:(unsigned long long)arg1 transformedKeys:(id)arg2 dispatchGroup:(id)arg3 finishBlock:(CDUnknownBlockType)arg4;
- (void)_updateExpiration:(id)arg1 forKey:(id)arg2;
- (void)_writeToCacheType:(unsigned long long)arg1 cacheObject:(id)arg2 encodedData:(id)arg3 dataEncoding:(CDUnknownBlockType)arg4 forKey:(id)arg5 expiration:(id)arg6 dispatchGroup:(id)arg7 finishBlock:(CDUnknownBlockType)arg8 failBlock:(CDUnknownBlockType)arg9;
- (id)cacheKeyMetadataList;
@property(retain, nonatomic) SCCacheManager *cacheManager; // @synthesize cacheManager=_cacheManager;
@property(retain, nonatomic) id <SCPerforming> completionQueuePerformer; // @synthesize completionQueuePerformer=_completionQueuePerformer;
- (_Bool)contains:(id)arg1;
- (void)contains:(id)arg1 block:(CDUnknownBlockType)arg2;
- (unsigned long long)count;
- (void)decreaseExpirationTo:(id)arg1 forKey:(id)arg2;
@property(copy, nonatomic) CDUnknownBlockType didRemoveObjectFromDiskBlock; // @synthesize didRemoveObjectFromDiskBlock=_didRemoveObjectFromDiskBlock;
@property(retain, nonatomic) PINDiskCache *diskCache; // @synthesize diskCache=_diskCache;
@property(retain, nonatomic) id <SCPerforming> diskCacheQueuePerformer; // @synthesize diskCacheQueuePerformer=_diskCacheQueuePerformer;
- (void)handleEmergencyDiskConditionWithDispatchGroup:(id)arg1;
- (void)increaseExpirationTo:(id)arg1 forKey:(id)arg2;
- (id)initWithName:(id)arg1 diskSizeLimitConfig:(id)arg2;
- (id)initWithName:(id)arg1 metricsName:(id)arg2 cacheManager:(id)arg3 diskSizeLimitConfig:(id)arg4 cacheDirectory:(id)arg5 useMemoryCache:(_Bool)arg6 skipEviction:(_Bool)arg7;
- (id)initWithScopedDirectory:(id)arg1 name:(id)arg2 metricsName:(id)arg3 diskSizeLimitConfig:(id)arg4 useMemoryCache:(_Bool)arg5;
- (id)initWithScopedDirectory:(id)arg1 name:(id)arg2 metricsName:(id)arg3 diskSizeLimitConfig:(id)arg4 useMemoryCache:(_Bool)arg5 skipEviction:(_Bool)arg6;
- (void)invalidate;
@property(nonatomic) _Bool isInvalidated; // @synthesize isInvalidated=_isInvalidated;
@property(readonly, copy, nonatomic) NSString *kindName; // @synthesize kindName=_kindName;
@property(retain, nonatomic) PINMemoryCache *memoryCache; // @synthesize memoryCache=_memoryCache;
- (unsigned long long)memoryCacheUsageInBytes;
@property(readonly, copy, nonatomic) NSString *metricsName; // @synthesize metricsName=_metricsName;
- (void)objectForKey:(id)arg1 dataDecoding:(CDUnknownBlockType)arg2 block:(CDUnknownBlockType)arg3;
- (void)objectForKey:(id)arg1 dataDecoding:(CDUnknownBlockType)arg2 resetExpiration:(id)arg3 whenLessThanDelta:(double)arg4 block:(CDUnknownBlockType)arg5;
- (void)objectForKey:(id)arg1 dataDecoding:(CDUnknownBlockType)arg2 resetExpiration:(id)arg3 whenLessThanDelta:(double)arg4 block:(CDUnknownBlockType)arg5 returnExpired:(_Bool)arg6;
- (unsigned long long)quotaInBytes;
- (void)removeAllObjectsExceptKeys:(id)arg1 block:(CDUnknownBlockType)arg2;
- (void)removeAllObjectsFromMemoryWithBlock:(CDUnknownBlockType)arg1;
- (void)removeAllObjectsWithBlock:(CDUnknownBlockType)arg1;
- (void)removeAllStickerData;
- (void)removeAllUserSessionDataAsync:(id)arg1;
- (void)removeContentManagerObjectsForKeys:(id)arg1 block:(CDUnknownBlockType)arg2;
- (void)removeExpiredContentAsync:(id)arg1 reason:(unsigned long long)arg2 dispatchGroup:(id)arg3;
- (void)removeExpiredContentWithBlock:(CDUnknownBlockType)arg1;
- (void)removeObjectForKey:(id)arg1 block:(CDUnknownBlockType)arg2;
- (void)removeObjectsForKeys:(id)arg1 block:(CDUnknownBlockType)arg2;
- (void)removeStickerDataForKey:(id)arg1;
- (id)reportMetrics;
- (void)setObject:(id)arg1 dataEncoding:(CDUnknownBlockType)arg2 forKey:(id)arg3 expiration:(id)arg4 block:(CDUnknownBlockType)arg5;
- (void)setStickerData:(id)arg1 forKey:(id)arg2 expiration:(id)arg3;
@property(nonatomic) _Bool underExperiment; // @synthesize underExperiment=_underExperiment;
@property(retain, nonatomic) id <SCPerforming> workQueuePerformer; // @synthesize workQueuePerformer=_workQueuePerformer;
- (unsigned long long)sizeInBytes;
- (void)stickerDataForKey:(id)arg1 resetExpiration:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)trimDiskCacheToQuota;
- (void)validate;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

