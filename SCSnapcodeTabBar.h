//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "UICollectionViewDataSource-Protocol.h"

@class NSArray, NSString, SCSnapcodeTabBarCollectionViewLayout, UICollectionView, UIColor, UITapGestureRecognizer;
@protocol SCSnapcodeTabBarDelegate;

@interface SCSnapcodeTabBar : UIView <UICollectionViewDataSource>
{
    UIColor *_normalStateColor;
    UIColor *_highlightedStateColor;
    SCSnapcodeTabBarCollectionViewLayout *_collectionViewLayout;
    UICollectionView *_collectionView;
    UIView *_highlightedIndicatorView;
    UITapGestureRecognizer *_tapGestureRecognizer;
    id <SCSnapcodeTabBarDelegate> _delegate;
    NSArray *_items;
    double _highlightedItemIndex;
}

- (void).cxx_destruct;
- (struct CGRect)_frameForItemAtIndex:(long long)arg1;
- (void)_handleTap:(id)arg1;
- (double)_highlightLevelForItemAtIndex:(long long)arg1;
- (void)_updateCollectionViewContentOffset;
- (void)_updateHighlightLevelForVisibleItems;
- (void)_updateHighlightedIndicatorView;
- (double)_validHighlightedItemIndexForProposedHighlightedItemIndex:(double)arg1;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
@property(nonatomic) __weak id <SCSnapcodeTabBarDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) double highlightedItemIndex; // @synthesize highlightedItemIndex=_highlightedItemIndex;
- (id)initWithFrame:(struct CGRect)arg1 normalStateColor:(id)arg2 highlightedStateColor:(id)arg3;
@property(copy, nonatomic) NSArray *items; // @synthesize items=_items;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

