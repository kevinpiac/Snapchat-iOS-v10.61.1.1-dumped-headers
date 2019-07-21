//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCMapCarouselVerticalScrollingView.h"

#import "SCMapCarouselFocusDelegate-Protocol.h"
#import "SCMapCarouselFocusedCellViewControllerDelegate-Protocol.h"
#import "SCMapCarouselInteractiveSubview-Protocol.h"
#import "SCMapCarouselRowHeightUpdatesObserver-Protocol.h"
#import "SCMapCarouselSectionDelegate-Protocol.h"

@class NSArray, NSSet, NSString;
@protocol SCMapCarouselPage;

@interface SCMapCarouselPageView : SCMapCarouselVerticalScrollingView <SCMapCarouselSectionDelegate, SCMapCarouselInteractiveSubview, SCMapCarouselRowHeightUpdatesObserver, SCMapCarouselFocusDelegate, SCMapCarouselFocusedCellViewControllerDelegate>
{
    id <SCMapCarouselPage> _page;
    NSArray *_rowsBySection;
    NSArray *_lastFullyCommittedRowsBySection;
    NSArray *_sections;
    NSSet *_hiddenRowIdentifiers;
}

- (void).cxx_destruct;
- (id)_allRows;
- (id)_cellForRowControllerWithIdentifier:(id)arg1;
- (id)_currentRowControllerForIdentifier:(id)arg1;
- (void)_registerCellClasses;
- (id)additionalScrollSnappingOffsetsForItemAtIndexPath:(id)arg1;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (struct UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForHeaderInSection:(long long)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)didCompletelyLoseFocus;
@property(copy, nonatomic) NSSet *hiddenRowIdentifiers; // @synthesize hiddenRowIdentifiers=_hiddenRowIdentifiers;
- (id)initWithSections:(id)arg1 allowsDismissal:(_Bool)arg2;
- (id)mapCarouselFocusedCellViewController:(id)arg1 getCurrentRowControllerForIdentifier:(id)arg2;
- (id)mapCarouselFocusedCellViewController:(id)arg1 wantsCopyOfFocusedRowControllerWithIdentifier:(id)arg2;
- (id)mapCarouselFocusedCellViewController:(id)arg1 wantsCurrentFrameOfFocusedRowControllerWithIdentifier:(id)arg2 inView:(id)arg3;
- (void)mapCarouselFocusedCellViewController:(id)arg1 wantsToHideRowWithIdentifier:(id)arg2;
- (void)mapCarouselFocusedCellViewController:(id)arg1 wantsToShowRowWithIdentifier:(id)arg2;
- (void)mapCarouselFocusedCellViewControllerIsPerformingDismissalAnimation:(id)arg1;
- (void)mapCarouselFocusedCellViewControllerIsPerformingPresentationAnimation:(id)arg1;
- (void)mapCarouselRowHeightDidChange:(id)arg1;
- (void)mapCarouselRowWantsToBeFocused:(id)arg1 withBaseViewController:(id)arg2;
- (void)mapCarouselRowWantsToResignFocus:(id)arg1 andGetNonfocusedCounterpartForRowWithCompletion:(CDUnknownBlockType)arg2;
- (void)mapCarouselSectionNeedsReload:(id)arg1;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
@property(copy, nonatomic) NSArray *sections; // @synthesize sections=_sections;
- (double)verticalPeekHeight;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
