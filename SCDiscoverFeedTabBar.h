//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "SCDiscoverFeedTabBarCollectionViewLayoutDelegate-Protocol.h"
#import "SCSearchTabBar-Protocol.h"
#import "UICollectionViewDataSource-Protocol.h"
#import "UICollectionViewDelegate-Protocol.h"

@class NSArray, NSString, SCDiscoverFeedTabBarCollectionViewLayout, UICollectionView;
@protocol SCSearchTabBarDelegate;

@interface SCDiscoverFeedTabBar : UIView <SCDiscoverFeedTabBarCollectionViewLayoutDelegate, UICollectionViewDelegate, UICollectionViewDataSource, SCSearchTabBar>
{
    UICollectionView *_tabCollectionView;
    SCDiscoverFeedTabBarCollectionViewLayout *_collectionViewLayout;
    UIView *_highlightedUnderlineView;
    double _tabBarPreferredHeight;
    long long _selectedIndex;
    NSArray *_tabBarItems;
    id <SCSearchTabBarDelegate> _tabBarDelegate;
    double _selectedIndexWithOffsetRatio;
    long long _interfaceStyle;
    UIView *_actionButton;
}

- (void).cxx_destruct;
- (struct CGRect)_frameForItemAtIndex:(long long)arg1;
- (void)_updateHighlightedUnderlineView:(double)arg1;
@property(retain, nonatomic) UIView *actionButton; // @synthesize actionButton=_actionButton;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)initWithConfiguration:(id)arg1;
@property(nonatomic) long long interfaceStyle; // @synthesize interfaceStyle=_interfaceStyle;
- (void)layoutSubviews;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;
- (long long)selectedIndex:(id)arg1;
@property(nonatomic) double selectedIndexWithOffsetRatio; // @synthesize selectedIndexWithOffsetRatio=_selectedIndexWithOffsetRatio;
- (void)setSelectedIndexWithOffsetRatio:(double)arg1 animated:(_Bool)arg2;
@property(nonatomic) __weak id <SCSearchTabBarDelegate> tabBarDelegate; // @synthesize tabBarDelegate=_tabBarDelegate;
@property(copy, nonatomic) NSArray *tabBarItems; // @synthesize tabBarItems=_tabBarItems;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (struct CGSize)storiesTabBarCollectionViewLayout:(id)arg1 sizeForItemAtIndexPath:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

