//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCMapPassportBaseDataStore.h"

@interface SCMapPassportCountriesDataStore : SCMapPassportBaseDataStore
{
}

- (id)_getCountryEntriesViewModelFromEntriesListArray:(id)arg1;
- (_Bool)doesNewViewModelPutInDirtyState:(id)arg1 currentViewModel:(id)arg2;
- (id)emptyStateViewModel;
- (_Bool)isInSafeDirtyState;
- (void)reload;

@end

