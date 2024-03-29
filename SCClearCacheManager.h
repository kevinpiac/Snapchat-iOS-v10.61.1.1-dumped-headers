//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSNumber, SCQueuePerformer, SCUserSession;

@interface SCClearCacheManager : NSObject
{
    SCQueuePerformer *_performer;
    NSNumber *_browserCacheSize;
    NSNumber *_memoriesCacheSize;
    NSNumber *_storiesCacheSize;
    NSNumber *_lensCacheSize;
    NSNumber *_searchCacheSize;
    NSNumber *_stickersCacheSize;
    NSNumber *_gamesCacheSize;
    NSNumber *_allCacheSize;
    SCUserSession *_userSession;
}

+ (id)_fileSizeToMB:(id)arg1;
- (void).cxx_destruct;
- (void)_appRestartPrompt;
- (_Bool)_isAllDataReady;
- (void)_showClearProgress:(CDUnknownBlockType)arg1 parentView:(id)arg2;
- (void)_updateAllCacheSize;
- (void)_warmupSearchCache;
@property(retain, nonatomic) NSNumber *allCacheSize; // @synthesize allCacheSize=_allCacheSize;
- (void)appClearBlackViewAndRestart:(id)arg1;
@property(retain, nonatomic) NSNumber *browserCacheSize; // @synthesize browserCacheSize=_browserCacheSize;
- (id)cacheSizeByFeature:(int)arg1;
- (void)clearAllCache:(CDUnknownBlockType)arg1;
- (void)clearBrowserCache:(CDUnknownBlockType)arg1;
- (void)clearDiscoverCache:(CDUnknownBlockType)arg1;
- (void)clearGamesCache:(CDUnknownBlockType)arg1;
- (void)clearLagunaLocationsCache:(CDUnknownBlockType)arg1;
- (void)clearLensCache:(CDUnknownBlockType)arg1;
- (void)clearMemoriesCache:(CDUnknownBlockType)arg1;
- (void)clearSearchCache:(CDUnknownBlockType)arg1;
- (void)clearStickersCache:(CDUnknownBlockType)arg1;
- (void)clearStoriesCache:(CDUnknownBlockType)arg1;
@property(retain, nonatomic) NSNumber *gamesCacheSize; // @synthesize gamesCacheSize=_gamesCacheSize;
- (id)initWithUserSession:(id)arg1;
@property(retain, nonatomic) NSNumber *lensCacheSize; // @synthesize lensCacheSize=_lensCacheSize;
@property(retain, nonatomic) NSNumber *memoriesCacheSize; // @synthesize memoriesCacheSize=_memoriesCacheSize;
- (void)presentClearDataAlertWithTitle:(id)arg1 description:(id)arg2 clearBlock:(CDUnknownBlockType)arg3 parentView:(id)arg4;
- (void)presentDeleteMemoriesDB;
- (id)rawCacheSizeByFeature:(int)arg1;
@property(retain, nonatomic) NSNumber *searchCacheSize; // @synthesize searchCacheSize=_searchCacheSize;
@property(retain, nonatomic) NSNumber *stickersCacheSize; // @synthesize stickersCacheSize=_stickersCacheSize;
@property(retain, nonatomic) NSNumber *storiesCacheSize; // @synthesize storiesCacheSize=_storiesCacheSize;
@property(nonatomic) __weak SCUserSession *userSession; // @synthesize userSession=_userSession;
- (void)startCalculatingCacheSizeWithCompletion:(CDUnknownBlockType)arg1;

@end

