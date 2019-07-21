//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCMapPassportDataStoreManager-Protocol.h"
#import "SCMapPassportEntryDeletionListener-Protocol.h"

@class NSString, SCLRUCache, SCLazy, SCMapPassportCountriesDataStore, SCMapSnapTokenService;
@protocol SCMapPeopleFriendsProvider;

@interface SCMapPassportDataStore : NSObject <SCMapPassportDataStoreManager, SCMapPassportEntryDeletionListener>
{
    SCMapSnapTokenService *_snapTokenService;
    id <SCMapPeopleFriendsProvider> _friendsProvider;
    NSString *_userId;
    SCLazy *_lazyBitmojiDataStore;
    SCLazy *_lazyTimelineDataStore;
    SCLazy *_lazyEntryDeletionManager;
    SCMapPassportCountriesDataStore *_countriesDataStore;
    SCLRUCache *_placesDataStoreCache;
    SCLRUCache *_citiesDataStoreCache;
}

- (void).cxx_destruct;
- (id)bitmojiDataStore;
- (void)citiesDataStoreDidUpdate:(id)arg1 forKey:(id)arg2 cost:(unsigned long long)arg3;
- (id)citiesDataStoreForCountryId:(id)arg1;
- (id)countriesDataStore;
- (void)didDeleteEntryWithId:(id)arg1;
- (id)entryDeletionManager;
- (id)initWithSnapTokenService:(id)arg1 experimentManager:(id)arg2 friendsProvider:(id)arg3 mapGDPRComplianceProvider:(id)arg4 userId:(id)arg5;
- (void)placesDataStoreDidUpdate:(id)arg1 forKey:(id)arg2 cost:(unsigned long long)arg3;
- (id)placesDataStoreForCityId:(id)arg1;
- (id)timelineDataStore;
- (void)willAttemptToDeleteEntry;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
