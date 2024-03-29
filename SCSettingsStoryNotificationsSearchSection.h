//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCActionable-Protocol.h"
#import "SCCollectionViewSection-Protocol.h"

@class NSString, SCCollectionViewSectionUpdateModel;
@protocol SCActionHandling, SCCollectionViewSectionDelegate, SCCollectionViewSectionLayoutProviding, SCCollectionViewSectionSupplementaryViewProviding, SCSearchBarDelegate, SCSearchIntentHandler;

@interface SCSettingsStoryNotificationsSearchSection : NSObject <SCCollectionViewSection, SCActionable>
{
    id <SCCollectionViewSectionSupplementaryViewProviding> _supplementaryViewProvider;
    id <SCSearchBarDelegate> _searchBarDelegate;
    id <SCActionHandling> _actionHandler;
    SCCollectionViewSectionUpdateModel *_sectionUpdateModel;
    id <SCSearchIntentHandler> _intentHandler_DEPRECATED;
    id <SCCollectionViewSectionDelegate> _delegate;
    long long _dataLoadingStatus;
}

- (void).cxx_destruct;
@property(retain, nonatomic) id <SCActionHandling> actionHandler; // @synthesize actionHandler=_actionHandler;
- (id)cellForItemAtIndexInSection:(unsigned long long)arg1;
@property(nonatomic) long long dataLoadingStatus; // @synthesize dataLoadingStatus=_dataLoadingStatus;
@property(nonatomic) __weak id <SCCollectionViewSectionDelegate> delegate; // @synthesize delegate=_delegate;
- (id)initWithSupplementaryViewProvider:(id)arg1 searchBarDelegate:(id)arg2;
@property(nonatomic) __weak id <SCSearchIntentHandler> intentHandler_DEPRECATED; // @synthesize intentHandler_DEPRECATED=_intentHandler_DEPRECATED;
- (unsigned long long)numberOfCellsInSection;
- (id)reuseCellClassesByIdentifiers;
- (id)sectionHeaderModel;
@property(copy, nonatomic) SCCollectionViewSectionUpdateModel *sectionUpdateModel; // @synthesize sectionUpdateModel=_sectionUpdateModel;
- (struct CGSize)sizeForItemAtIndexInSection:(unsigned long long)arg1 withWidth:(double)arg2;
- (id)supplementaryViewProvider;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(retain, nonatomic) id <SCCollectionViewSectionLayoutProviding> layoutCalculator;
@property(readonly) Class superclass;

@end

