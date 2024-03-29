//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCSectionDataProviding-Protocol.h"
#import "SCSnapchattersDataRequestListener-Protocol.h"

@class NSArray, NSString, SCEventListenerAnnouncer, SCLazy;
@protocol NSCopying, SCImageDownloading, SCLegacyItemDownloading, SCPerforming, SCSectionDataProvidingDelegate, SCSnapchattersDataSearching;

@interface SCAddFriendsSearchResultsSectionDataProvider : NSObject <SCSnapchattersDataRequestListener, SCSectionDataProviding>
{
    SCEventListenerAnnouncer *_eventAnnouncer;
    id <SCSnapchattersDataSearching> _snapchatterSearchResultsProvider;
    SCLazy *_snapchattersDataTracker;
    SCLazy *_snapchattersDataFetcher;
    id <SCImageDownloading> _imageDownloader;
    id <SCLegacyItemDownloading> _labelInfoFetcher;
    NSString *_sectionType;
    CDUnknownBlockType _viewModelGenerator;
    long long _dataLoadingStatus;
    NSArray *_resultSnapchatters;
    NSString *_queryText;
    NSObject<NSCopying> *_sectionDataModel;
    id <SCSectionDataProvidingDelegate> _dataProviderDelegate;
    id <SCPerforming> _updateQueuePerformer;
}

+ (id)announcerIdentifier;
- (void).cxx_destruct;
- (void)_configureRecipientCollectionViewCell:(id)arg1;
- (id)_containerCellViewModelForIndexPath:(id)arg1;
- (void)_refreshStateIfNecessary;
- (void)_removeSnapchatterWithUserId:(id)arg1;
- (void)_updateResultSnapchatters:(id)arg1;
- (void)_updateSnapchatterWithSnapchatter:(id)arg1;
- (void)_updateSnapchatterWithUserId:(id)arg1;
- (void)addListener:(id)arg1;
- (id)configurationBlocksByReuseIdentifier;
- (id)containerCellViewModelsForIndexPaths:(id)arg1;
- (id)contentCellClassesByReuseIdentifier;
- (long long)dataLoadingStatus;
@property(nonatomic) __weak id <SCSectionDataProvidingDelegate> dataProviderDelegate; // @synthesize dataProviderDelegate=_dataProviderDelegate;
- (void)didEndSnapchattersSuggestDataRequest:(id)arg1 withSuccess:(_Bool)arg2;
- (void)didEndSnapchattersUpdateDataRequest:(id)arg1 withSuccess:(_Bool)arg2;
- (void)didStartSnapchattersUpdateDataRequest:(id)arg1;
- (id)initWithSectionType:(id)arg1 viewModelGenerator:(CDUnknownBlockType)arg2 snapchattersDataFetcher:(id)arg3 snapchattersDataTracker:(id)arg4 snapchatterSearchResultsProvider:(id)arg5 imageDownloader:(id)arg6 labelInfoFetcher:(id)arg7;
- (unsigned long long)numberOfItemsInSection:(unsigned long long)arg1;
- (void)removeListener:(id)arg1;
@property(copy, nonatomic) NSObject<NSCopying> *sectionDataModel; // @synthesize sectionDataModel=_sectionDataModel;
@property(retain, nonatomic) id <SCPerforming> updateQueuePerformer; // @synthesize updateQueuePerformer=_updateQueuePerformer;
- (void)tearDown;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

