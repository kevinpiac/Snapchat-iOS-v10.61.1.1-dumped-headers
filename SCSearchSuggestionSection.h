//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCActionable-Protocol.h"
#import "SCCollectionViewSection-Protocol.h"
#import "SCEventAnnouncing-Protocol.h"
#import "SCEventListener-Protocol.h"
#import "SCSearchCarouselContainerCollectionViewCellDelegate-Protocol.h"

@class NSArray, NSString, SCCollectionViewSectionUpdateModel, SCEventListenerAnnouncer, SCSearchQuery, SCSearchQueryStateAwareSupplementaryViewProvider, SCSearchSession, SCSectionKitHeaderModel;
@protocol SCActionHandling, SCCollectionViewSectionDelegate, SCCollectionViewSectionLayoutProviding, SCSearchIntentHandler;

@interface SCSearchSuggestionSection : NSObject <SCSearchCarouselContainerCollectionViewCellDelegate, SCEventListener, SCCollectionViewSection, SCEventAnnouncing, SCActionable>
{
    SCSearchSession *_searchSession;
    SCSectionKitHeaderModel *_sectionHeaderModel;
    NSString *_sectionType;
    SCSearchQuery *_currentQuery;
    unsigned long long _numberOfRows;
    NSArray *_viewModels;
    NSArray *_suggestions;
    _Bool _shouldResetCarouselContentOffset;
    long long _cellStyle;
    long long _sectionContentMode;
    NSString *_requestIdentifier;
    double _collectionViewWidth;
    SCEventListenerAnnouncer *_eventAnnouncer;
    SCSearchQueryStateAwareSupplementaryViewProvider *_queryStateAwareSupplementaryProvider;
    SCCollectionViewSectionUpdateModel *_sectionUpdateModel;
    id <SCCollectionViewSectionDelegate> _delegate;
    id <SCSearchIntentHandler> _intentHandler_DEPRECATED;
    long long _dataLoadingStatus;
    id <SCActionHandling> _actionHandler;
}

+ (id)announcerIdentifier;
- (void).cxx_destruct;
- (void)_announceResponseWithQuery:(id)arg1 latency:(double)arg2 isFromCache:(_Bool)arg3;
- (void)_announceSearchResultsForSection;
- (void)_announceVisibleCellsForContainerCell:(id)arg1;
- (void)_announceVisibleCellsForIndexPaths:(id)arg1 withViewModels:(id)arg2;
- (id)_extraDataForIndexPath:(id)arg1 action:(long long)arg2;
- (void)_updateDataSourceWithCarouselContainerCellModels:(id)arg1 configuration:(id)arg2;
- (void)_updateSectionIfNeededWithConfiguration:(id)arg1 carouselContainerCellModels:(id)arg2;
- (void)_updateSections;
- (void)_updateWithConfiguration:(id)arg1;
@property(retain, nonatomic) id <SCActionHandling> actionHandler; // @synthesize actionHandler=_actionHandler;
- (void)addListener:(id)arg1;
- (void)applyConfiguration:(id)arg1;
- (id)cellForItemAtIndexInSection:(unsigned long long)arg1;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 atIndexInSection:(unsigned long long)arg3;
@property(nonatomic) long long dataLoadingStatus; // @synthesize dataLoadingStatus=_dataLoadingStatus;
@property(nonatomic) __weak id <SCCollectionViewSectionDelegate> delegate; // @synthesize delegate=_delegate;
- (void)didTriggerEventWithEventName:(id)arg1 announcerIdentifier:(id)arg2 extraData:(id)arg3;
- (id)initWithSearchSession:(id)arg1;
@property(nonatomic) __weak id <SCSearchIntentHandler> intentHandler_DEPRECATED; // @synthesize intentHandler_DEPRECATED=_intentHandler_DEPRECATED;
- (unsigned long long)numberOfCellsInSection;
- (void)removeListener:(id)arg1;
- (id)reuseCellClassesByIdentifiers;
- (void)searchCarouselContainerCollectionViewCell:(id)arg1 didTapItemAtIndexPath:(id)arg2;
- (void)searchCarouselContainerCollectionViewCell:(id)arg1 didTriggerActionOnItemAtIndexPath:(id)arg2 withActionModel:(id)arg3 fromSourceView:(id)arg4;
- (void)searchCarouselContainerCollectionViewCell:(id)arg1 willDisplayAtIndexPath:(id)arg2 scrolled:(_Bool)arg3;
- (long long)sectionContentMode;
- (id)sectionHeaderModel;
- (id)sectionInfo;
@property(copy, nonatomic) SCCollectionViewSectionUpdateModel *sectionUpdateModel; // @synthesize sectionUpdateModel=_sectionUpdateModel;
- (void)setUp;
- (struct CGSize)sizeForItemAtIndexInSection:(unsigned long long)arg1 withWidth:(double)arg2;
- (id)supplementaryViewProvider;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(retain, nonatomic) id <SCCollectionViewSectionLayoutProviding> layoutCalculator;
@property(readonly) Class superclass;

@end

