//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCCollectionViewSection-Protocol.h"
#import "SCEventAnnouncing-Protocol.h"
#import "SCSearchAttachmentsDataProviderListener-Protocol.h"

@class NSArray, NSString, SCCollectionViewSectionUpdateModel, SCEventListenerAnnouncer, SCSearchAttachmentsDataProvider, SCSearchAttachmentsSectionConfiguration, SCSearchQueryStateAwareSupplementaryViewProvider, SCSearchSession;
@protocol SCActionHandling, SCCollectionViewSectionDelegate, SCCollectionViewSectionLayoutProviding, SCSearchIntentHandler;

@interface SCSearchAttachmentsSection : NSObject <SCSearchAttachmentsDataProviderListener, SCCollectionViewSection, SCEventAnnouncing>
{
    SCSearchSession *_searchSession;
    SCSearchAttachmentsDataProvider *_attachmentsProvider;
    SCSearchAttachmentsSectionConfiguration *_configuration;
    NSArray *_viewModels;
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
- (void)_updateSearchResult;
- (void)_updateViewModels:(id)arg1;
@property(retain, nonatomic) id <SCActionHandling> actionHandler; // @synthesize actionHandler=_actionHandler;
- (void)addListener:(id)arg1;
- (void)applyConfiguration:(id)arg1;
- (void)attachmentDataDidUpdate:(id)arg1;
- (id)cellForItemAtIndexInSection:(unsigned long long)arg1;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 atIndexInSection:(unsigned long long)arg3;
@property(nonatomic) long long dataLoadingStatus; // @synthesize dataLoadingStatus=_dataLoadingStatus;
@property(nonatomic) __weak id <SCCollectionViewSectionDelegate> delegate; // @synthesize delegate=_delegate;
- (id)initWithSearchSession:(id)arg1 dataProvider:(id)arg2;
@property(nonatomic) __weak id <SCSearchIntentHandler> intentHandler_DEPRECATED; // @synthesize intentHandler_DEPRECATED=_intentHandler_DEPRECATED;
- (double)minimumSectionInteritemSpacing;
- (double)minimumSectionLineSpacing;
- (unsigned long long)numberOfCellsInSection;
- (void)removeListener:(id)arg1;
- (id)reuseCellClassesByIdentifiers;
@property(copy, nonatomic) SCCollectionViewSectionUpdateModel *sectionUpdateModel; // @synthesize sectionUpdateModel=_sectionUpdateModel;
- (void)setUp;
- (struct CGSize)sizeForItemAtIndexInSection:(unsigned long long)arg1 withWidth:(double)arg2;
- (id)supplementaryViewProvider;
- (void)tearDown;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(retain, nonatomic) id <SCCollectionViewSectionLayoutProviding> layoutCalculator;
@property(readonly) Class superclass;

@end

