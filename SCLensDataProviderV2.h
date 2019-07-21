//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCLensCameraScreenDataProviderProtocol-Protocol.h"
#import "SCLensDataFetchingMediatorDelegate-Protocol.h"
#import "SCLensDataProviderConfigurable-Protocol.h"
#import "SCLensMetadataStoreListener-Protocol.h"
#import "SCTraceEnabled-Protocol.h"

@class NSString, SCLens, SCLensDataFetchingMediator, SCLensDataProviderListenerAnnouncer, SCLensMetadataProviderSettings;
@protocol SCBundledLensProvider, SCLensByIdRetrievable, SCLensDataPrefetcher, SCLensDataProviderConfiguration, SCLensMetadataProviderSortStrategy, SCLensMetadataStoreProtocol;

@interface SCLensDataProviderV2 : NSObject <SCTraceEnabled, SCLensMetadataStoreListener, SCLensDataFetchingMediatorDelegate, SCLensCameraScreenDataProviderProtocol, SCLensDataProviderConfigurable>
{
    _Bool _isFetchForFrontCameraTriggered;
    _Bool _isFetchForBackCameraTriggered;
    id <SCLensDataProviderConfiguration> _configuration;
    id <SCLensDataPrefetcher> _lensDataPrefetcher;
    id <SCLensMetadataStoreProtocol> _metadataStore;
    id <SCLensMetadataStoreProtocol> _prefetchMetadataStore;
    id <SCLensByIdRetrievable> _staticAllLensesMetadataStore;
    id <SCLensMetadataProviderSortStrategy> _sortStrategy;
    SCLensDataFetchingMediator *_fetchingMediator;
    SCLens *_selectedLens;
    SCLensDataProviderListenerAnnouncer *_announcer;
    id <SCBundledLensProvider> _bundledLensProvider;
    SCLens *_lensToPreselect;
    _Bool _showBirthdayReplyLens;
    SCLensMetadataProviderSettings *_metadataProviderSettings;
}

- (void).cxx_destruct;
- (_Bool)_shouldTriggerFetchingForCurrentCameraPosition;
- (id)_sortStrategyParametersForLenses:(id)arg1;
- (void)addListener:(id)arg1;
- (id)applicableContext;
- (_Bool)applyMetadataProviderSettings:(id)arg1;
- (_Bool)applyValue:(id)arg1 forSettingsAttribute:(unsigned long long)arg2;
- (unsigned long long)cameraPosition;
- (id)categoryIds;
- (void)dealloc;
- (void)ensureNonNilSettings;
- (void)fetchLens:(id)arg1;
- (void)fetchLensesIfNeeded;
- (id)firstApplicableLens;
- (id)initWithLensDataFetcher:(id)arg1 lensDataPrefetcher:(id)arg2 metadataStore:(id)arg3 prefetchMetadataStore:(id)arg4 staticAllLensesMetadataStore:(id)arg5 sortStrategy:(id)arg6 lensThumbnailLogger:(id)arg7 bundledLensProvider:(id)arg8 configuration:(id)arg9;
- (id)initWithLensDataFetcher:(id)arg1 metadataStore:(id)arg2 staticAllLensesMetadataStore:(id)arg3 sortStrategy:(id)arg4 bundledLensProvider:(id)arg5 configuration:(id)arg6;
- (_Bool)isFetchingLens:(id)arg1;
- (_Bool)isRegressorNeeded;
- (void)lensDataFetchingMediator:(id)arg1 didUpdateContentForLens:(id)arg2 contentUpdateType:(long long)arg3;
- (void)lensDataFetchingMediatorDidStartUpdatingLensData:(id)arg1;
- (void)lensDataFetchingMediatorDidStopUpdatingLensData:(id)arg1;
- (void)lensDataFetchingMediatorUpdateLenses:(id)arg1;
- (id)lensDataProviderConfiguration;
- (id)lensForId:(id)arg1;
- (void)lensMetadataStore:(id)arg1 didUpdateLenses:(id)arg2;
- (void)lensMetadataStore:(id)arg1 didUpdateLensesToPrefetch:(id)arg2;
- (id)lensToPreselect;
- (id)lenses;
- (id)lensesToPresent;
@property(retain, nonatomic) SCLensMetadataProviderSettings *metadataProviderSettings; // @synthesize metadataProviderSettings=_metadataProviderSettings;
- (id)originalLens;
- (void)removeListener:(id)arg1;
- (id)selectedLens;
- (void)setApplicableContext:(id)arg1;
- (void)setCategoryIds:(id)arg1;
- (void)setCategoryIds:(id)arg1 devicePosition:(unsigned long long)arg2;
- (void)setCategoryIds:(id)arg1 devicePosition:(unsigned long long)arg2 applicableContext:(id)arg3;
- (void)setDevicePosition:(unsigned long long)arg1;
- (void)setSelectedLens:(id)arg1;
@property(nonatomic) _Bool showBirthdayReplyLens; // @synthesize showBirthdayReplyLens=_showBirthdayReplyLens;
- (void)startPrefetching;
- (id)startUpdatingLensData;
- (void)stopUpdatingLensDataWithToken:(id)arg1;
- (void)syncDownloadableData;
- (void)updateLenses;
- (void)updateLensesWithFetching:(_Bool)arg1 requiresAnimation:(_Bool)arg2;
- (void)warmUp;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

