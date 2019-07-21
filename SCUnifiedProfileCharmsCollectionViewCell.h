//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

#import "SCUnifiedProfileCharmsCollectionViewLayoutDelegate-Protocol.h"
#import "UICollectionViewDelegateFlowLayout-Protocol.h"

@class NSDate, NSMutableSet, NSString, SCCharmsBlizzardLogger, SCUnifiedProfileCharmsFullScreenViewController, UICollectionView;

@interface SCUnifiedProfileCharmsCollectionViewCell : UICollectionViewCell <UICollectionViewDelegateFlowLayout, SCUnifiedProfileCharmsCollectionViewLayoutDelegate>
{
    unsigned long long _onScreenCharmChangeCount;
    NSMutableSet *_loggedCharmIds;
    NSDate *_onScreenCharmChangeTimestamp;
    _Bool _onScreenCharmIsFromSwipeRight;
    _Bool _onScreenCharmIsNew;
    UICollectionView *_contentCollectionView;
    NSString *_profileSessionId;
    long long _state;
    SCUnifiedProfileCharmsFullScreenViewController *_pageViewController;
    SCCharmsBlizzardLogger *_charmsBlizzardLogger;
}

- (void).cxx_destruct;
- (void)_charmCellDetailLogging:(id)arg1;
- (void)_charmLargeCellDidDisappearOnScreen:(id)arg1;
- (void)_charmLargeCellDidDisplayOnScreen:(id)arg1;
- (void)_layoutForState:(long long)arg1 withIndexPath:(id)arg2 withCenter:(struct CGPoint)arg3;
@property(nonatomic) __weak SCCharmsBlizzardLogger *charmsBlizzardLogger; // @synthesize charmsBlizzardLogger=_charmsBlizzardLogger;
@property(readonly, nonatomic) UICollectionView *contentCollectionView; // @synthesize contentCollectionView=_contentCollectionView;
- (void)expandToIndexPath:(id)arg1 withDuration:(double)arg2;
- (void)handleTapCollectionViewOrOverlay;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)onScreenItemIndexPathDidChangeFromIndexPath:(id)arg1 toIndexPath:(id)arg2;
@property(nonatomic) __weak SCUnifiedProfileCharmsFullScreenViewController *pageViewController; // @synthesize pageViewController=_pageViewController;
- (long long)parentCollectionViewCellState;
@property(copy, nonatomic) NSString *profileSessionId; // @synthesize profileSessionId=_profileSessionId;
- (void)resetIndexPath;
@property(nonatomic) long long state; // @synthesize state=_state;
- (void)shrinkToIndexPath:(id)arg1 withDuration:(double)arg2 withCompletion:(CDUnknownBlockType)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

