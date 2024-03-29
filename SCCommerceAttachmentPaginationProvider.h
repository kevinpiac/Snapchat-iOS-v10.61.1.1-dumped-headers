//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCCommercePaginationProviding-Protocol.h"
#import "SCEventListener-Protocol.h"

@class NSArray, NSMutableArray, NSString, SCEventListenerAnnouncer, SCQueuePerformer;
@protocol SCCommerceAttachmentProviding, SCCommerceCatalogPagingDataCoordinator;

@interface SCCommerceAttachmentPaginationProvider : NSObject <SCEventListener, SCCommercePaginationProviding>
{
    id <SCCommerceAttachmentProviding> _attachmentProvider;
    _Bool _canLoadMorePages;
    NSArray *_items;
    long long _currentPage;
    long long _nextPage;
    NSMutableArray *_viewModels;
    SCEventListenerAnnouncer *_eventAnnouncer;
    id <SCCommerceCatalogPagingDataCoordinator> _dataCoordinator;
    SCQueuePerformer *_performer;
}

+ (id)announcerIdentifier;
- (void).cxx_destruct;
- (void)_announceFinalItemsLoadedWithRemovedIndices:(id)arg1;
- (void)_announceInitialItemsLoaded;
- (void)_announceItemsLoadedWithAddedIndices:(id)arg1;
- (void)_announceItemsLoadingFailedWithChangedIndices:(id)arg1;
- (void)_announceItemsUpdatedWithChangedIndices:(id)arg1;
- (void)_announceReset;
- (void)_handleAttachedItemUpdate:(id)arg1;
- (void)_handleFinalItemsLoaded;
- (void)_handleInitialItemLoadingDidSucceed;
- (void)_handleItemLoadingDidBegin;
- (void)_handleItemLoadingDidFail;
- (void)_handleItemLoadingDidSucceedWithExtraData:(id)arg1;
- (void)_handleUpdatedItemsWithNewViewModels:(id)arg1;
- (void)_updateItemsWithNewViewModels:(id)arg1;
- (id)_updateViewModelSelectionStates;
- (void)addListener:(id)arg1;
@property(readonly) _Bool canLoadMorePages; // @synthesize canLoadMorePages=_canLoadMorePages;
- (void)clearError;
@property(readonly) long long currentPage; // @synthesize currentPage=_currentPage;
@property(retain, nonatomic) id <SCCommerceCatalogPagingDataCoordinator> dataCoordinator; // @synthesize dataCoordinator=_dataCoordinator;
- (void)didTriggerEventWithEventName:(id)arg1 announcerIdentifier:(id)arg2 extraData:(id)arg3;
@property(retain, nonatomic) SCEventListenerAnnouncer *eventAnnouncer; // @synthesize eventAnnouncer=_eventAnnouncer;
- (id)initWithDataCoordinator:(id)arg1 attachmentProvider:(id)arg2;
@property(readonly) NSArray *items; // @synthesize items=_items;
@property(readonly) long long nextPage; // @synthesize nextPage=_nextPage;
@property(retain, nonatomic) SCQueuePerformer *performer; // @synthesize performer=_performer;
- (void)removeListener:(id)arg1;
- (void)reset;
@property(copy, nonatomic) NSMutableArray *viewModels; // @synthesize viewModels=_viewModels;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

