//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCSectionDataProviding-Protocol.h"
#import "SCSnapchattersDataRequestListener-Protocol.h"
#import "SCUserSelectionListener-Protocol.h"

@class NSArray, NSDictionary, NSMutableArray, NSString, SCEventListenerAnnouncer, SCSendToDocObjectRecipientDataSource, SCSendToRecipientViewModel, SCUserSession;
@protocol NSCopying, SCImageDownloading, SCPerforming, SCSectionDataProvidingDelegate, SCUserSelectionManaging;

@interface SCSendToSnapchattersSectionDataProvider : NSObject <SCUserSelectionListener, SCSnapchattersDataRequestListener, SCSectionDataProviding>
{
    SCUserSession *_userSession;
    id <SCImageDownloading> _imageDownloader;
    SCSendToDocObjectRecipientDataSource *_recipientDataSource;
    id <SCUserSelectionManaging> _selectionStateManager;
    CDUnknownBlockType _viewModelGenerator;
    SCSendToRecipientViewModel *_placeholderViewModel;
    NSString *_sectionType;
    NSString *_cellReuseIdentifier;
    long long _dataLoadingStatus;
    SCEventListenerAnnouncer *_eventAnnouncer;
    NSArray *_snapchatters;
    NSMutableArray *_containerViewModels;
    NSDictionary *_snapchatterIdToIndexMap;
    _Bool _shouldShowTwoColumn;
    long long _itemType;
    _Bool _includingMyself;
    NSString *_userFirstLetterKey;
    id <SCSectionDataProvidingDelegate> _dataProviderDelegate;
    NSObject<NSCopying> *_sectionDataModel;
    id <SCPerforming> _updateQueuePerformer;
}

+ (id)announcerIdentifier;
- (void).cxx_destruct;
- (void)_configureRecipientCollectionViewCell:(id)arg1;
- (id)_containerCellViewModelForSnapchatter:(id)arg1 index:(unsigned long long)arg2 isSelected:(_Bool)arg3;
- (void)_setSnapchatters:(id)arg1;
- (void)_updateContainerViewModelsWithSelectedItems:(id)arg1 deselectedItems:(id)arg2;
- (void)_updateSectionDataModel;
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
- (id)initWithRecipientDataSource:(id)arg1 imageDownloader:(id)arg2 userSession:(id)arg3 selectionStateManager:(id)arg4 viewModelGenerator:(CDUnknownBlockType)arg5 placeholderViewModel:(id)arg6 sectionType:(id)arg7 includingMyself:(_Bool)arg8;
- (double)minimumInteritemSpacing;
- (unsigned long long)numberOfItemsInSection:(unsigned long long)arg1;
- (void)removeListener:(id)arg1;
@property(copy, nonatomic) NSObject<NSCopying> *sectionDataModel; // @synthesize sectionDataModel=_sectionDataModel;
@property(retain, nonatomic) id <SCPerforming> updateQueuePerformer; // @synthesize updateQueuePerformer=_updateQueuePerformer;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

