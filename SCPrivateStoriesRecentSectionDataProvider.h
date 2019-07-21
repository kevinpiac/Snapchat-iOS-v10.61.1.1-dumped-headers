//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCSectionDataProviding-Protocol.h"
#import "SCSnapchattersDataRequestListener-Protocol.h"
#import "SCUserSelectionListener-Protocol.h"

@class NSArray, NSDictionary, NSMutableArray, NSString, SCEventListenerAnnouncer, SCExperimentManager, SCLazy;
@protocol NSCopying, SCGroupManager, SCImageDownloading, SCPerforming, SCSectionDataProvidingDelegate, SCUserSelectionManaging;

@interface SCPrivateStoriesRecentSectionDataProvider : NSObject <SCUserSelectionListener, SCSnapchattersDataRequestListener, SCSectionDataProviding>
{
    NSString *_currentUserId;
    SCLazy *_snapchattersDataFetcher;
    id <SCGroupManager> _groupManager;
    long long _dataLoadingStatus;
    SCEventListenerAnnouncer *_eventAnnouncer;
    NSArray *_snapchatters;
    NSMutableArray *_containerViewModels;
    id <SCUserSelectionManaging> _selectionManager;
    id <SCImageDownloading> _imageDownloader;
    NSDictionary *_snapchatterIdToIndexMap;
    SCExperimentManager *_experimentManager;
    id <SCSectionDataProvidingDelegate> _dataProviderDelegate;
    NSObject<NSCopying> *_sectionDataModel;
    id <SCPerforming> _updateQueuePerformer;
}

+ (id)announcerIdentifier;
- (void).cxx_destruct;
- (void)_configureRecipientCollectionViewCell:(id)arg1;
- (id)_containerCellViewModelForSnapchatter:(id)arg1 index:(unsigned long long)arg2 isSelected:(_Bool)arg3;
- (void)_flattenRecentGroupsWithRecentSnapchatters:(id)arg1;
- (void)_mergeRecentSnapchatters:(id)arg1 withGroups:(id)arg2 basedOnFriendsInGroups:(id)arg3;
- (void)_setSnapchatters:(id)arg1;
- (void)_updateContainerViewModelsWithSelectedItems:(id)arg1 deselectedItems:(id)arg2;
- (void)_updateSectionDataModel;
- (void)_updateSnapchatters;
- (void)addListener:(id)arg1;
- (id)configurationBlocksByReuseIdentifier;
- (id)containerCellViewModelsForIndexPaths:(id)arg1;
- (id)contentCellClassesByReuseIdentifier;
- (long long)dataLoadingStatus;
@property(nonatomic) __weak id <SCSectionDataProvidingDelegate> dataProviderDelegate; // @synthesize dataProviderDelegate=_dataProviderDelegate;
- (void)didEndSnapchattersFetchDataRequest:(id)arg1 withSuccess:(_Bool)arg2;
- (void)didEndSnapchattersUpdateDataRequest:(id)arg1 withSuccess:(_Bool)arg2;
- (void)didStartSnapchattersUpdateDataRequest:(id)arg1;
- (void)didUpdateWithIdentifier:(id)arg1 selectedItems:(id)arg2 deselectedItems:(id)arg3;
- (id)initWithCurrentUserId:(id)arg1 snapchattersDataFetcher:(id)arg2 groupManager:(id)arg3 selectionStateManager:(id)arg4 imageDownloader:(id)arg5 experimentManager:(id)arg6;
- (unsigned long long)numberOfItemsInSection:(unsigned long long)arg1;
- (void)removeListener:(id)arg1;
@property(copy, nonatomic) NSObject<NSCopying> *sectionDataModel; // @synthesize sectionDataModel=_sectionDataModel;
- (void)setUp;
@property(retain, nonatomic) id <SCPerforming> updateQueuePerformer; // @synthesize updateQueuePerformer=_updateQueuePerformer;
- (void)tearDown;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

