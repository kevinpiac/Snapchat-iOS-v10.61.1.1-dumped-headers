//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCSelectorForwardingCollectionView.h"

@interface SCCommerceInfiniteScrollingCollectionView : SCSelectorForwardingCollectionView
{
    _Bool _isSetupForDisplay;
    long long _indexForScrollWhenPossible;
}

- (id)_modifiedIndexPathForIndexPath:(id)arg1;
- (id)_mostVisibleCellIndex;
- (void)_scrollToIndex:(long long)arg1 animated:(_Bool)arg2;
- (void)_setup;
- (void)_setupForDisplayIfNeededForIndexPath:(id)arg1;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (id)indexPathForCell:(id)arg1;
- (id)indexPathsForVisibleItems;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (long long)numberOfSections;
- (void)reloadItemsAtIndexPaths:(id)arg1;
- (void)scrollToItemAtIndexPath:(id)arg1 animated:(_Bool)arg2;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;

@end

