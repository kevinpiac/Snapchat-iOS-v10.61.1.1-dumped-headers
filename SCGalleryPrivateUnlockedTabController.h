//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCGalleryCollectionViewHelperDataSource-Protocol.h"
#import "SCGalleryCollectionViewSelectionHelperDataSource-Protocol.h"
#import "SCGalleryCollectionViewSelectionHelperDelegate-Protocol.h"
#import "SCGalleryEntryViewCellDelegate-Protocol.h"
#import "SCGalleryPrivateGalleryManagerListener-Protocol.h"
#import "SCGalleryTabController-Protocol.h"
#import "SCMergedGalleryDataSourceListener-Protocol.h"
#import "SCTraceEnabled-Protocol.h"
#import "UICollectionViewDataSource-Protocol.h"
#import "UICollectionViewDelegate-Protocol.h"
#import "UICollectionViewDelegateFlowLayout-Protocol.h"

@class NSArray, NSHashTable, NSMutableArray, NSString, SCGalleryCollectionViewHelper, SCGalleryCollectionViewLayoutCalculator, SCGalleryCollectionViewSelectionHelper, SCGalleryDebugSyncStatusChecker, SCGalleryPrivateTabUnlockedEmptyStateController, SCGalleryTabCollectionView, SCGalleryTabCollectionViewFlowLayout, SCGalleryTabsConfiguration, SCUserSession, UIView, UIViewController;
@protocol SCGalleryTabControllerDelegate;

@interface SCGalleryPrivateUnlockedTabController : NSObject <SCGalleryPrivateGalleryManagerListener, UICollectionViewDataSource, UICollectionViewDelegate, UICollectionViewDelegateFlowLayout, SCGalleryCollectionViewHelperDataSource, SCGalleryCollectionViewSelectionHelperDataSource, SCGalleryCollectionViewSelectionHelperDelegate, SCTraceEnabled, SCGalleryEntryViewCellDelegate, SCMergedGalleryDataSourceListener, SCGalleryTabController>
{
    SCUserSession *_userSession;
    UIViewController *_containerViewController;
    SCGalleryTabsConfiguration *_configuration;
    SCGalleryDebugSyncStatusChecker *_debugSyncStatusChecker;
    NSArray *_galleryEntriesToDisplay;
    NSArray *_displayedGalleryEntries;
    UIView *_view;
    SCGalleryTabCollectionView *_collectionView;
    SCGalleryCollectionViewHelper *_collectionViewHelper;
    SCGalleryCollectionViewSelectionHelper *_collectionViewSelectionHelper;
    SCGalleryTabCollectionViewFlowLayout *_collectionViewLayout;
    SCGalleryCollectionViewLayoutCalculator *_nonuniformCollectionViewLayoutCalculator;
    SCGalleryPrivateTabUnlockedEmptyStateController *_emptyStateController;
    double _lastNotifiedScrollContentOffset;
    NSMutableArray *_scrollingAnimationCompletionBlocks;
    NSHashTable *_referencedEntryCells;
    _Bool _visible;
    _Bool _focused;
    _Bool _loading;
    _Bool _selectMode;
    id <SCGalleryTabControllerDelegate> _delegate;
    unsigned long long _tabType;
    struct UIEdgeInsets _scrollContentInset;
}

- (void).cxx_destruct;
- (struct UIEdgeInsets)_collectionViewLayoutSectionInset;
- (void)_notifyScrollContentOffsetChange;
- (_Bool)_shouldShowEmptyStateView;
- (void)_updateDisplayedGalleryEntries;
- (void)_updateWithScrollContentInset;
- (id)allItems;
- (unsigned long long)allItemsCount;
- (void)changeSelected:(_Bool)arg1 forGalleryItem:(id)arg2;
- (id)collectionView;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForFooterInSection:(long long)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (unsigned long long)currentMediaScenePathComponent;
- (void)dataSource:(id)arg1 didChangeEntries:(id)arg2 failedEntries:(id)arg3 fetchEntryError:(id)arg4;
- (void)dealloc;
@property(nonatomic) __weak id <SCGalleryTabControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)endEditing;
@property(nonatomic) _Bool focused; // @synthesize focused=_focused;
- (id)galleryCollectionViewHelper:(id)arg1 itemAtIndexPath:(id)arg2;
- (_Bool)galleryCollectionViewIsFullyVisible:(id)arg1;
- (void)galleryCollectionViewSelectionHelper:(id)arg1 didChangeSelected:(_Bool)arg2 forItem:(id)arg3;
- (void)galleryCollectionViewSelectionHelper:(id)arg1 didTapItemAtIndexPath:(id)arg2;
- (id)galleryCollectionViewSelectionHelper:(id)arg1 galleryItemAtIndexPath:(id)arg2;
- (void)galleryCollectionViewSelectionHelper:(id)arg1 handleLongPress:(id)arg2 itemAtIndexPath:(id)arg3;
- (_Bool)galleryCollectionViewSelectionHelper:(id)arg1 overrideTapHandlingAtIndexPath:(id)arg2;
- (_Bool)galleryCollectionViewSelectionHelper:(id)arg1 shouldChangeSelectedAtIndexPath:(id)arg2;
- (void)galleryEntryViewCell:(id)arg1 shouldDeselectForEntry:(id)arg2;
- (void)galleryViewDidDisappear;
- (void)galleryViewWillAppear;
- (id)indexPathForItem:(id)arg1 isFeatured:(_Bool)arg2;
- (id)initWithUserSession:(id)arg1 containerViewController:(id)arg2 configuration:(id)arg3 delegate:(id)arg4 tabType:(unsigned long long)arg5;
- (_Bool)isDragging;
- (_Bool)isEditing;
- (_Bool)isPrivate;
- (_Bool)isTracking;
- (_Bool)isViewLoaded;
- (id)itemsInRect:(struct CGRect)arg1;
- (void)loadViewIfNeeded;
@property(nonatomic) _Bool loading; // @synthesize loading=_loading;
- (void)operaPresenterDidDismiss:(id)arg1 item:(id)arg2;
- (id)pageName;
- (_Bool)prefersAllItemsAreNotIterated;
- (void)privateGalleryManagerDidLock:(id)arg1;
- (void)privateGalleryManagerDidSetup:(id)arg1;
- (void)privateGalleryManagerDidUnlock:(id)arg1;
- (void)privateGalleryManagerDidUpdatePassphrase:(id)arg1;
- (double)scrollBarTopOffset;
@property(readonly, nonatomic) double scrollContentDistanceToTop;
@property(nonatomic) struct UIEdgeInsets scrollContentInset; // @synthesize scrollContentInset=_scrollContentInset;
@property(nonatomic) double scrollContentOffset;
- (void)scrollToGalleryItem:(id)arg1 animated:(_Bool)arg2;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
@property(nonatomic) _Bool selectMode; // @synthesize selectMode=_selectMode;
- (id)selectedGalleryItems;
- (void)setScrollContentOffset:(double)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
@property(nonatomic) _Bool visible; // @synthesize visible=_visible;
- (_Bool)shouldAlignInitialScrollContentDistanceToTopOfOtherTabControllerToThisTabController;
- (_Bool)shouldAlignInitialScrollContentDistanceToTopOfThisTabControllerToOtherTabController;
- (_Bool)shouldDisplay;
@property(readonly, nonatomic) unsigned long long tabType; // @synthesize tabType=_tabType;
- (id)view;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

