//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCOnDemandGeofilterBaseNetworking.h"

#import "SCOnDemandGeofilterNetworkingProtocol-Protocol.h"

@class NSString, SCGCDTimer;

@interface SCOnDemandGeofilterNetworking : SCOnDemandGeofilterBaseNetworking <SCOnDemandGeofilterNetworkingProtocol>
{
    SCGCDTimer *_paymentRetryTimer;
}

- (void).cxx_destruct;
- (id)_dataFromDictionary:(id)arg1 failure:(CDUnknownBlockType)arg2;
- (id)_dataFromHomeFilterAssetRequest:(id)arg1 failure:(CDUnknownBlockType)arg2;
- (id)_dataFromObject:(id)arg1 targeting:(id)arg2 failure:(CDUnknownBlockType)arg3;
- (id)_dataFromUpdateHomeAddressRequest:(id)arg1 failure:(CDUnknownBlockType)arg2;
- (id)_dictionaryFromData:(id)arg1 failure:(CDUnknownBlockType)arg2;
- (id)_errorForNonDictionaryObject:(id)arg1;
- (id)_formattedLocale;
- (id)_lineItemIdFromResponseHeader:(id)arg1;
- (_Bool)_nonRejectionStatusFromResponseHeader:(id)arg1 lineItem:(id)arg2;
- (void)_submitAllTimeHitsCategoryTemplatesRequest:(id)arg1 success:(CDUnknownBlockType)arg2 failure:(CDUnknownBlockType)arg3;
- (id)_validationErrorFromData:(id)arg1;
- (void)cancelGeofilterWithLineItem:(id)arg1 success:(CDUnknownBlockType)arg2 failure:(CDUnknownBlockType)arg3;
- (void)cancelRequestWithKey:(id)arg1;
- (void)createAssetDraftWithAssetDraft:(id)arg1 success:(CDUnknownBlockType)arg2 failure:(CDUnknownBlockType)arg3;
- (void)createHomeFilterAssetRequestWithRequest:(id)arg1 adId:(id)arg2 success:(CDUnknownBlockType)arg3 failure:(CDUnknownBlockType)arg4;
- (void)createHomeFilterRequestWithRequest:(id)arg1 targeting:(id)arg2 success:(CDUnknownBlockType)arg3 failure:(CDUnknownBlockType)arg4;
- (void)dealloc;
- (void)deleteAssetDraft:(id)arg1 success:(CDUnknownBlockType)arg2 failure:(CDUnknownBlockType)arg3;
- (id)eventLogger;
- (void)forwardGeocodingForQuery:(id)arg1 withLocation:(id)arg2 completed:(CDUnknownBlockType)arg3;
- (void)homeFilterAssetForAdId:(id)arg1 success:(CDUnknownBlockType)arg2 failure:(CDUnknownBlockType)arg3;
- (void)homeFilterConfigForAdId:(id)arg1 success:(CDUnknownBlockType)arg2 failure:(CDUnknownBlockType)arg3;
- (void)homeFilterForAdId:(id)arg1 success:(CDUnknownBlockType)arg2 failure:(CDUnknownBlockType)arg3;
- (void)requestAllTimeHitsForSubCategoryId:(id)arg1 offset:(unsigned long long)arg2 count:(unsigned long long)arg3 success:(CDUnknownBlockType)arg4 failure:(CDUnknownBlockType)arg5;
- (void)requestAllTimeHitsWithNumberOfTemplates:(unsigned long long)arg1 success:(CDUnknownBlockType)arg2 failure:(CDUnknownBlockType)arg3;
- (void)requestAssetDraftsWithSuccess:(CDUnknownBlockType)arg1 failure:(CDUnknownBlockType)arg2;
- (void)requestCategories:(CDUnknownBlockType)arg1 failure:(CDUnknownBlockType)arg2;
- (void)requestCategoriesForProductType:(long long)arg1 withFilterType:(unsigned long long)arg2 success:(CDUnknownBlockType)arg3 failure:(CDUnknownBlockType)arg4;
- (void)requestDataWithURL:(id)arg1 success:(CDUnknownBlockType)arg2 failure:(CDUnknownBlockType)arg3;
- (void)requestGeofilterCompress:(id)arg1 success:(CDUnknownBlockType)arg2 failure:(CDUnknownBlockType)arg3;
- (void)requestGeofilterOffer:(id)arg1 success:(CDUnknownBlockType)arg2 failure:(CDUnknownBlockType)arg3;
- (void)requestGeofilterWithID:(id)arg1 user:(id)arg2 success:(CDUnknownBlockType)arg3 failure:(CDUnknownBlockType)arg4;
- (void)requestGeofiltersForUser:(id)arg1 success:(CDUnknownBlockType)arg2 failure:(CDUnknownBlockType)arg3 pageSize:(long long)arg4 preloadFromCache:(_Bool)arg5;
- (void)requestGeofiltersForUser:(id)arg1 success:(CDUnknownBlockType)arg2 failure:(CDUnknownBlockType)arg3 preloadFromCache:(_Bool)arg4;
- (void)requestIAPPaymentVerificationForItem:(id)arg1 success:(CDUnknownBlockType)arg2 failure:(CDUnknownBlockType)arg3;
- (void)requestIAPProducts:(CDUnknownBlockType)arg1 failure:(CDUnknownBlockType)arg2;
- (void)requestOfferedInventoryWithSuccess:(CDUnknownBlockType)arg1 failure:(CDUnknownBlockType)arg2;
- (void)requestPrefetchDataWithURL:(id)arg1 success:(CDUnknownBlockType)arg2 failure:(CDUnknownBlockType)arg3;
- (void)requestStylizedTextPresets:(CDUnknownBlockType)arg1 failure:(CDUnknownBlockType)arg2;
- (void)requestTosVersion:(CDUnknownBlockType)arg1 failure:(CDUnknownBlockType)arg2;
- (void)requestUsageMetricsWithGeofilterId:(id)arg1 success:(CDUnknownBlockType)arg2 failure:(CDUnknownBlockType)arg3;
- (void)requestUserWithSuccess:(CDUnknownBlockType)arg1 failure:(CDUnknownBlockType)arg2;
- (void)resubmitCreativeAsset:(id)arg1 withLineItemId:(id)arg2 success:(CDUnknownBlockType)arg3 failure:(CDUnknownBlockType)arg4;
- (void)resubmitLineItem:(id)arg1 success:(CDUnknownBlockType)arg2 failure:(CDUnknownBlockType)arg3;
- (void)retryPayment:(id)arg1;
- (id)searchAllTimeHitsBySearchQuery:(id)arg1 offset:(unsigned long long)arg2 count:(unsigned long long)arg3 success:(CDUnknownBlockType)arg4 failure:(CDUnknownBlockType)arg5;
- (void)submitLineItem:(id)arg1 emailAddress:(id)arg2 success:(CDUnknownBlockType)arg3 failure:(CDUnknownBlockType)arg4;
- (void)updateAssetDraft:(id)arg1 success:(CDUnknownBlockType)arg2 failure:(CDUnknownBlockType)arg3;
- (void)updateHomeFilterAddressRequestWithRequest:(id)arg1 adId:(id)arg2 success:(CDUnknownBlockType)arg3 failure:(CDUnknownBlockType)arg4;
- (void)updateHomeFilterRequestWithRequest:(id)arg1 adId:(id)arg2 success:(CDUnknownBlockType)arg3 failure:(CDUnknownBlockType)arg4;
- (void)updateHomeFilterVisible:(_Bool)arg1 adId:(id)arg2 success:(CDUnknownBlockType)arg3 failure:(CDUnknownBlockType)arg4;
- (void)uploadApprovalMetadata:(id)arg1 success:(CDUnknownBlockType)arg2 failure:(CDUnknownBlockType)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

