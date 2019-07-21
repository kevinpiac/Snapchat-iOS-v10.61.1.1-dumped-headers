//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCSectionBasedCollectionViewUpdaterDelegate-Protocol.h"
#import "SCUpdateListener-Protocol.h"
#import "UICollectionViewDelegate-Protocol.h"

@class NSString, SCStoryManagementDataSource, UICollectionView;
@protocol SCPerforming;

@interface SCStoryManagementSnapCollectionViewPagingController : NSObject <SCUpdateListener, UICollectionViewDelegate, SCSectionBasedCollectionViewUpdaterDelegate>
{
    UICollectionView *_snapsCollectionView;
    UICollectionView *_snapsInfoCollectionView;
    SCStoryManagementDataSource *_dataSource;
    id <SCPerforming> _dataSourceQueryPerformer;
    UICollectionView *_scrollDrivingCollectionView;
    unsigned long long _currentSnapIndexDuringScrolling;
    _Bool _enableHapticsFeedback;
}

- (void).cxx_destruct;
- (unsigned long long)_cellIndexAtContentOffsetX:(double)arg1 collectionView:(id)arg2;
- (double)_cellWidthForCollectionView:(id)arg1;
- (void)_collectionViewDidEndScrolling:(id)arg1;
- (void)_collectionViewWillBeginScrolling:(id)arg1 animated:(_Bool)arg2;
- (unsigned long long)_currentSnapCellIndex;
- (void)_scrollCollectionViewsBasedOnCurrentSnapCellIndex;
- (void)_scrollToSnapCellIndex:(unsigned long long)arg1 animated:(_Bool)arg2;
- (double)_snapInfoCellWidth;
- (void)_updateDataSourceBasedOnCurrentCenterSnapCell;
- (void)didUpdateWithAnnouncerIdentifier:(id)arg1;
- (id)initWithSnapsCollectionView:(id)arg1 snapsInfoCollectionView:(id)arg2 dataSource:(id)arg3;
- (void)pageToSnapDataModel:(id)arg1;
- (id)presentingViewControllerForSectionBasedCollectionViewUpdater:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;
- (void)sectionBasedCollectionViewUpdater:(id)arg1 didSetUpSections:(id)arg2;
- (void)sectionBasedCollectionViewUpdater:(id)arg1 didTearDownSections:(id)arg2;
- (void)sectionBasedCollectionViewUpdater:(id)arg1 didUpdateLayoutWithAnimationFinished:(_Bool)arg2;
- (void)sectionBasedCollectionViewUpdater:(id)arg1 didUpdateSectionsWithAnimationFinished:(_Bool)arg2;
- (void)sectionBasedCollectionViewUpdaterWillUpdateCollectionView:(id)arg1;
- (struct UIEdgeInsets)sectionInsetsForSectionBasedCollectionViewUpdater:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

