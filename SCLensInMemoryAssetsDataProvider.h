//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "LSAInMemoryRemoteAssetsProvider-Protocol.h"
#import "SCLensMetadataStoreListener-Protocol.h"
#import "SCTraceEnabled-Protocol.h"

@class NSLock, NSMutableDictionary, NSString, SCAssetValidator, SCDisposableObserverLifecycle, SCQueuePerformer;
@protocol SCLensMetadataStoreProtocol;

@interface SCLensInMemoryAssetsDataProvider : NSObject <SCTraceEnabled, LSAInMemoryRemoteAssetsProvider, SCLensMetadataStoreListener>
{
    NSMutableDictionary *_assetToPathMap;
    SCQueuePerformer *_performer;
    SCAssetValidator *_assetValidator;
    SCDisposableObserverLifecycle *_appLifeCycleDisposable;
    NSLock *_assetValidationLock;
    NSLock *_metadataStoreLock;
    id <SCLensMetadataStoreProtocol> _metadataStore;
    id <SCLensMetadataStoreProtocol> _prefetchMetadataStore;
}

- (void).cxx_destruct;
- (void)_clearCacheNotification:(id)arg1;
- (void)_fillCacheUsingLenses:(id)arg1;
- (void)_setupWithApplicationLifeCycleEvents:(id)arg1;
- (void)clearCacheWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)configureWithMetadataStore:(id)arg1 prefetchMetadataStore:(id)arg2;
- (id)initWithAssetValidator:(id)arg1 applicationLifeCycleEvents:(id)arg2;
- (void)lensMetadataStore:(id)arg1 didUpdateLenses:(id)arg2;
- (void)lensMetadataStore:(id)arg1 didUpdateLensesToPrefetch:(id)arg2;
- (id)remoteAssetPathForAsset:(id)arg1;
- (void)setRemoteAssetPath:(id)arg1 forAsset:(id)arg2;
- (void)warmUp;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

