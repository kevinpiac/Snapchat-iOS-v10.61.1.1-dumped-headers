//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCServerConfigListener-Protocol.h"

@class NSDictionary, NSString, PINMemoryCache, SCManagedDatastoreCollector;
@protocol SCPerforming;

@interface SCCacheManager : NSObject <SCServerConfigListener>
{
    SCManagedDatastoreCollector *_datastoreCollector;
    NSDictionary *_ownedDatastoreMetrics;
    NSString *_jsonifiedSetOfDirectories;
    _Bool _isUserAvailable;
    CDUnknownBlockType _unavailableWarningCallback;
    id <SCPerforming> _performer;
    PINMemoryCache *_sharedMemoryCache;
}

+ (id)shared;
- (void).cxx_destruct;
- (void)_cleanupDeadCacheDirectories;
- (void)_cleanupDeadUnmanagedDirectories;
- (id)_determineActiveCacheDirectories;
- (id)_determineActiveUnmanagedDirectories:(id)arg1;
- (id)_determineMetricsForDatastores:(id)arg1;
- (void)_initializeDeadCacheDetection:(id)arg1;
- (_Bool)_isReadyForCacheCleanup:(id)arg1;
- (void)_markOversizedDatastore;
- (id)_prepareOwnedDatastores;
- (id)_prepareScrubbersForReportDirectories;
- (void)_removeDeadCacheDirectories:(id)arg1;
- (void)_updateWithServerConfig:(id)arg1;
- (void)clearAllSessionScopedCache;
- (void)clearOutExpiredCache:(id)arg1;
- (void)dealloc;
- (void)determineAllMetrics:(CDUnknownBlockType)arg1;
- (void)getDiskCacheSizeForKind:(id)arg1 block:(CDUnknownBlockType)arg2;
- (void)handleEmergencyDiskConditionForDatastores:(id)arg1;
- (id)initWithQueuePerformer:(id)arg1;
@property(nonatomic) _Bool isUserAvailable; // @synthesize isUserAvailable=_isUserAvailable;
@property(retain, nonatomic) id <SCPerforming> performer; // @synthesize performer=_performer;
- (void)serverConfigDidChange:(id)arg1;
@property(retain, nonatomic) PINMemoryCache *sharedMemoryCache; // @synthesize sharedMemoryCache=_sharedMemoryCache;
@property(copy, nonatomic) CDUnknownBlockType unavailableWarningCallback; // @synthesize unavailableWarningCallback=_unavailableWarningCallback;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

