//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCDataCoordinatorListener-Protocol.h"
#import "SCEventListener-Protocol.h"
#import "SCSectionDataProviding-Protocol.h"
#import "SCUserSelectionListener-Protocol.h"

@class NSString, SCCheetahSendToStoryDataSource, SCDocSendToStoryDataSource, SCEventListenerAnnouncer, SCLensExplorerSendToFlow, SCSearchQuery, SCSendToLatencyMetricLogger, SCSendToSelectionStateManager, SCUserSession;
@protocol NSCopying, SCPerforming, SCSectionDataProvidingDelegate;

@interface SCCheetahSendToStorySectionListViewDataProvider : NSObject <SCDataCoordinatorListener, SCSectionDataProviding, SCUserSelectionListener, SCEventListener>
{
    SCEventListenerAnnouncer *_eventAnnouncer;
    SCUserSession *_userSession;
    SCCheetahSendToStoryDataSource *_dataSource;
    SCDocSendToStoryDataSource *_docStoryDataSource;
    SCSendToSelectionStateManager *_selectionStateManager;
    SCSearchQuery *_lastQuery;
    long long _recipientViewStyle;
    SCLensExplorerSendToFlow *_lensExplorerSendToFlow;
    _Bool _enablePostingToAppStories;
    SCSendToLatencyMetricLogger *_latencyLogger;
    NSString *_currentUsername;
    id <SCSectionDataProvidingDelegate> _dataProviderDelegate;
    NSObject<NSCopying> *_sectionDataModel;
    id <SCPerforming> _updateQueuePerformer;
    long long _contentMode;
}

+ (id)announcerIdentifier;
- (void).cxx_destruct;
- (void)_configureRecipientCollectionViewCell:(id)arg1;
- (id)_containerCellViewModelForIndexPath:(id)arg1;
- (unsigned long long)_numberOfItemsToDisplay;
- (void)_updateSectionDataWithSendToDataModels:(id)arg1 isSearchQueryFromSelection:(_Bool)arg2;
- (void)_updateSectionModelWithQuery:(id)arg1;
- (void)addListener:(id)arg1;
- (id)configurationBlocksByReuseIdentifier;
- (id)containerCellViewModelsForIndexPaths:(id)arg1;
- (id)contentCellClassesByReuseIdentifier;
@property(nonatomic) long long contentMode; // @synthesize contentMode=_contentMode;
- (void)dataCoordinatorDidUpdateWithIdentifier:(id)arg1 dataRequest:(id)arg2;
@property(nonatomic) __weak id <SCSectionDataProvidingDelegate> dataProviderDelegate; // @synthesize dataProviderDelegate=_dataProviderDelegate;
- (void)dealloc;
- (void)didTriggerEventWithEventName:(id)arg1 announcerIdentifier:(id)arg2 extraData:(id)arg3;
- (void)didUpdateWithIdentifier:(id)arg1 selectedItems:(id)arg2 deselectedItems:(id)arg3;
- (id)initWithUserSession:(id)arg1 dataSource:(id)arg2 docStoryDataSource:(id)arg3 selectionStateManager:(id)arg4 recipientViewStyle:(long long)arg5 enablePostingToAppStories:(_Bool)arg6 latencyLogger:(id)arg7;
- (double)minimumInteritemSpacing;
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

