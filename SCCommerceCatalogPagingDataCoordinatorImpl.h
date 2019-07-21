//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCCommerceCatalogPagingDataCoordinator-Protocol.h"
#import "SCCommerceCatalogSearching-Protocol.h"

@class NSArray, NSString, SCEventListenerAnnouncer, SCLRUCache, SCQueuePerformer, SOJUCommerceStoreInfo;
@protocol SCCommerceStoreInfoFetching;

@interface SCCommerceCatalogPagingDataCoordinatorImpl : NSObject <SCCommerceCatalogPagingDataCoordinator, SCCommerceCatalogSearching>
{
    id <SCCommerceStoreInfoFetching> _storeFetcher;
    SCEventListenerAnnouncer *_eventAnnouncer;
    SCLRUCache *_cache;
    SCQueuePerformer *_queuePerformer;
    NSString *_queryString;
    _Bool _shouldExposeStoreItem;
    _Bool _isLoading;
    NSArray *_items;
    long long _pageSize;
    SOJUCommerceStoreInfo *_storeInfo;
}

+ (id)announcerIdentifier;
- (void).cxx_destruct;
- (void)_announceItemLoadingDidBeginForPage:(unsigned long long)arg1;
- (void)_announceItemLoadingDidSucceedForPage:(unsigned long long)arg1;
- (void)_announceItemLoadingFailed;
- (id)_cachedItemsForPage:(unsigned long long)arg1 queryString:(id)arg2;
- (void)_fetchItemsForPage:(unsigned long long)arg1 queryString:(id)arg2;
- (void)_isNotLoading;
- (void)_loadCachedItems:(id)arg1 forPage:(unsigned long long)arg2 queryString:(id)arg3;
- (void)_loadItemsForPage:(id)arg1;
- (void)_updateItemsWithProducts:(id)arg1 queryString:(id)arg2 page:(unsigned long long)arg3;
- (void)addListener:(id)arg1;
- (void)clearQuery;
- (id)initWithStoreFetcher:(id)arg1 shouldExposeStoreItem:(_Bool)arg2;
@property(readonly) _Bool isLoading; // @synthesize isLoading=_isLoading;
@property(readonly) NSArray *items; // @synthesize items=_items;
- (void)loadItemsForPage:(id)arg1;
@property(readonly) long long pageSize; // @synthesize pageSize=_pageSize;
- (void)removeListener:(id)arg1;
@property(retain, nonatomic) SOJUCommerceStoreInfo *storeInfo; // @synthesize storeInfo=_storeInfo;
- (void)updateQueryString:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

