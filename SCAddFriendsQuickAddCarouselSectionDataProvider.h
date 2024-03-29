//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCAddFriendsCarouselSectionItemCountProviding-Protocol.h"
#import "SCSectionDataProviding-Protocol.h"
#import "SCSnapchattersDataRequestListener-Protocol.h"

@class NSArray, NSDate, NSSet, NSString, SCDisposableObserverLifecycle, SCEventListenerAnnouncer, SCExperimentManager, SCLazy, SCObservable;
@protocol NSCopying, SCImageDownloading, SCPerforming, SCSectionDataProvidingDelegate, SCSnapchatterRanking;

@interface SCAddFriendsQuickAddCarouselSectionDataProvider : NSObject <SCSnapchattersDataRequestListener, SCSectionDataProviding, SCAddFriendsCarouselSectionItemCountProviding>
{
    SCEventListenerAnnouncer *_eventAnnouncer;
    long long _dataLoadingStatus;
    SCLazy *_snapchattersDataFetcher;
    SCLazy *_snapchattersDataTracker;
    SCLazy *_userInfoProvider;
    id <SCImageDownloading> _imageDownloader;
    SCObservable *_displayDateObservable;
    NSArray *_suggestedSnapchatters;
    NSSet *_snapchatterIdsToHide;
    NSDate *_displayDate;
    SCDisposableObserverLifecycle *_disposableObserverLifecycle;
    CDUnknownBlockType _viewModelGenerator;
    id <SCSnapchatterRanking> _snapchatterRanker;
    unsigned int _suggestionPageType;
    _Bool _shouldIgnoreQuickAddUnitFlag;
    SCExperimentManager *_experimentManager;
    _Bool _useSCSnapchatterCollectionViewCell;
    NSString *_targetSnapchatterUserId;
    id <SCSectionDataProvidingDelegate> _dataProviderDelegate;
    NSObject<NSCopying> *_sectionDataModel;
    id <SCPerforming> _updateQueuePerformer;
}

+ (id)announcerIdentifier;
- (void).cxx_destruct;
- (void)_configureRecipientCollectionViewCell:(id)arg1;
- (id)_containerCellViewModelForIndexPath:(id)arg1;
- (void)_mergeRelevantSnapchatters:(id)arg1 withSuggestedSnapchatters:(id)arg2;
- (void)_rankAndSetSnapchatters:(id)arg1;
- (void)_setDisplayDate:(id)arg1;
- (void)_setSnapchatters:(id)arg1;
- (void)_updateSectionDataModel;
- (void)addListener:(id)arg1;
- (void)avoidShowingSnapchatterWithUserId:(id)arg1;
- (id)configurationBlocksByReuseIdentifier;
- (id)containerCellViewModelsForIndexPaths:(id)arg1;
- (id)contentCellClassesByReuseIdentifier;
- (long long)dataLoadingStatus;
@property(nonatomic) __weak id <SCSectionDataProvidingDelegate> dataProviderDelegate; // @synthesize dataProviderDelegate=_dataProviderDelegate;
- (void)didEndSnapchattersFetchDataRequest:(id)arg1 withSuccess:(_Bool)arg2;
- (void)didEndSnapchattersSuggestDataRequest:(id)arg1 withSuccess:(_Bool)arg2;
- (void)didEndSnapchattersUpdateDataRequest:(id)arg1 withSuccess:(_Bool)arg2;
- (void)didStartSnapchattersSuggestDataRequest:(id)arg1;
- (void)didStartSnapchattersUpdateDataRequest:(id)arg1;
- (id)initWithSnapchattersDataFetcher:(id)arg1 snapchattersDataTracker:(id)arg2 userInfoProvider:(id)arg3 imageDownloader:(id)arg4 displayDateObservable:(id)arg5 viewModelGenerator:(CDUnknownBlockType)arg6 snapchatterRanker:(id)arg7 suggestionPageType:(unsigned int)arg8 shouldIgnoreQuickAddUnitFlag:(_Bool)arg9 experimentManager:(id)arg10 useSCSnapchatterCollectionViewCell:(_Bool)arg11;
- (unsigned long long)itemCountForCarouselSection;
- (unsigned long long)numberOfItemsInSection:(unsigned long long)arg1;
- (void)removeListener:(id)arg1;
@property(copy, nonatomic) NSObject<NSCopying> *sectionDataModel; // @synthesize sectionDataModel=_sectionDataModel;
- (void)setTargetSnapchatterUserId:(id)arg1;
- (void)setUp;
@property(retain, nonatomic) id <SCPerforming> updateQueuePerformer; // @synthesize updateQueuePerformer=_updateQueuePerformer;
- (void)tearDown;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

