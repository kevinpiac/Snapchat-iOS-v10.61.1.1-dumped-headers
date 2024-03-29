//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCGalleryChatMediaTabDataSourceDelegate-Protocol.h"
#import "SCGalleryTabController-Protocol.h"
#import "UICollectionViewDataSource-Protocol.h"
#import "UICollectionViewDelegate-Protocol.h"

@class NSArray, NSMutableArray, NSString, SCGalleryChatMediaTabDataSource, SCGalleryTabCollectionView, SCGalleryTabsConfiguration, SCUserSession, UICollectionViewFlowLayout, UIView, UIViewController;
@protocol SCGalleryTabControllerDelegate;

@interface SCGalleryChatMediaTabController : NSObject <UICollectionViewDataSource, UICollectionViewDelegate, SCGalleryChatMediaTabDataSourceDelegate, SCGalleryTabController>
{
    SCUserSession *_userSession;
    UIViewController *_containerViewController;
    SCGalleryTabsConfiguration *_configuration;
    UIView *_view;
    SCGalleryTabCollectionView *_collectionView;
    UICollectionViewFlowLayout *_layout;
    double _lastNotifiedScrollContentOffset;
    NSMutableArray *_scrollingAnimationCompletionBlocks;
    SCGalleryChatMediaTabDataSource *_dataSource;
    NSArray *_viewModels;
    _Bool _visible;
    _Bool _focused;
    _Bool _loading;
    _Bool _selectMode;
    unsigned long long _tabType;
    id <SCGalleryTabControllerDelegate> _delegate;
    struct UIEdgeInsets _scrollContentInset;
}

- (void).cxx_destruct;
- (void)_notifyScrollContentOffsetChange;
- (double)_sectionInsetTop;
- (struct UIEdgeInsets)_sectionInsetsWithInsets:(struct UIEdgeInsets)arg1;
- (void)_updateWithScrollContentInset;
- (id)allItems;
- (unsigned long long)allItemsCount;
- (void)changeSelected:(_Bool)arg1 forGalleryItem:(id)arg2;
- (id)collectionView;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (unsigned long long)currentMediaScenePathComponent;
@property(nonatomic) __weak id <SCGalleryTabControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)endEditing;
@property(nonatomic) _Bool focused; // @synthesize focused=_focused;
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
- (void)updateViewModels:(id)arg1;
- (id)view;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

