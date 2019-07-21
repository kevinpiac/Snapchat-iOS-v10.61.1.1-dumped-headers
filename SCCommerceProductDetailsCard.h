//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "SCCommerceBitmojiAvatarSelectionCollectionViewCellDelegate-Protocol.h"
#import "SCCommerceProductDetailsColorsCollectionViewCellDelegate-Protocol.h"
#import "SCCommerceProductDetailsDescriptionCollectionViewCellDelegate-Protocol.h"
#import "UICollectionViewDataSource-Protocol.h"
#import "UICollectionViewDelegate-Protocol.h"
#import "UICollectionViewDelegateFlowLayout-Protocol.h"

@class NSString, SCCommerceCardCollectionView, SCCommerceProductDetailsInfo;
@protocol SCCommerceProductDetailsCardDelegate;

@interface SCCommerceProductDetailsCard : UIView <UICollectionViewDataSource, UICollectionViewDelegate, UICollectionViewDelegateFlowLayout, SCCommerceProductDetailsColorsCollectionViewCellDelegate, SCCommerceProductDetailsDescriptionCollectionViewCellDelegate, SCCommerceBitmojiAvatarSelectionCollectionViewCellDelegate>
{
    double _initialCardHeight;
    double _descriptionCellHeight;
    SCCommerceProductDetailsInfo *_info;
    id <SCCommerceProductDetailsCardDelegate> _delegate;
    double _bottomInset;
    SCCommerceCardCollectionView *_cardCollectionView;
    double _initialTopOffset;
    UIView *_collectionViewBackgroundView;
}

- (void).cxx_destruct;
- (double)_initialCardHeight:(id)arg1;
- (void)_resetScrollingElementsPostInfoResetAnimated:(_Bool)arg1;
- (void)_resetScrollingElementsPreInfoResetAnimated:(_Bool)arg1;
- (void)_setup;
- (void)_setupInitialTopOffset;
- (double)_titleCellHeight;
- (void)_updateCollectionViewBackgroundViewHeight;
@property(nonatomic) double bottomInset; // @synthesize bottomInset=_bottomInset;
@property(retain, nonatomic) SCCommerceCardCollectionView *cardCollectionView; // @synthesize cardCollectionView=_cardCollectionView;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
@property(retain, nonatomic) UIView *collectionViewBackgroundView; // @synthesize collectionViewBackgroundView=_collectionViewBackgroundView;
@property(nonatomic) __weak id <SCCommerceProductDetailsCardDelegate> delegate; // @synthesize delegate=_delegate;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
@property(retain, nonatomic) SCCommerceProductDetailsInfo *info; // @synthesize info=_info;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
@property(readonly) double initialCardHeight; // @synthesize initialCardHeight=_initialCardHeight;
@property(nonatomic) double initialTopOffset; // @synthesize initialTopOffset=_initialTopOffset;
- (void)layoutSubviews;
- (void)leftViewTappedInBitmojiAvatarSelectionCollectionViewCell:(id)arg1;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (void)productDetailsColorsCollectionViewCell:(id)arg1 didSelectColor:(id)arg2 atIndex:(long long)arg3;
- (void)productDetailsDescriptionCollectionViewCell:(id)arg1 didUpdateContentHeight:(double)arg2;
- (void)resetScrollingElementsAnimated:(_Bool)arg1;
- (void)resetWithInfo:(id)arg1 animated:(_Bool)arg2;
- (void)rightViewTappedInBitmojiAvatarSelectionCollectionViewCell:(id)arg1;
- (void)scrollToTopAnimated:(_Bool)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)switchAvatarsButtonTappedInBitmojiAvatarSelectionCollectionViewCell:(id)arg1;
@property(readonly) double topOffset;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

