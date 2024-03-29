//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCMapPassportPagingDataStore.h"

@class NSString, SCMapPassportBitmojiDataStore;
@protocol SCMapPassportDataStoreManager;

@interface SCMapPassportPlacesDataStore : SCMapPassportPagingDataStore
{
    NSString *_cityId;
    id <SCMapPassportDataStoreManager> _dataStoreManager;
    SCMapPassportBitmojiDataStore *_bitmojiDataStore;
}

- (void).cxx_destruct;
- (void)didUpdateToNewViewModel;
- (_Bool)doesNewViewModelPutInDirtyState:(id)arg1 currentViewModel:(id)arg2;
- (id)emptyStateViewModel;
- (id)initWithSnapTokenService:(id)arg1 cityId:(id)arg2 dataStoreManager:(id)arg3 bitmojiDataStore:(id)arg4;
- (_Bool)loadNextPage;
- (void)reload;

@end

