//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCStackedChatViewModel.h"

@class NSMutableArray, SCMessageChatViewModelProps;

@interface SCStackedBitmojiChatViewModel : SCStackedChatViewModel
{
    NSMutableArray *_stackedViewModels;
    SCMessageChatViewModelProps *_props;
}

- (void).cxx_destruct;
- (double)_cellPercentWidth;
- (double)_cellSize;
- (void)addStackedViewModelFromMessage:(id)arg1 messageMetadata:(id)arg2;
- (double)bodyContentWidth;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 stackedCollectionCellActionDelegate:(id)arg3 parentVC:(id)arg4;
- (Class)collectionViewCellClass;
- (id)collectionViewCellReuseIdentifier;
- (id)createChatCellWithParentVC:(id)arg1 delegate:(id)arg2;
- (id)initWithMessage:(id)arg1 messageMetadata:(id)arg2 props:(id)arg3;
- (double)insetForCollectionViewCell;
- (struct UIEdgeInsets)insetsForCollectionView;
- (unsigned long long)maxItemCapacityForCollectionView;
- (double)payloadHeight;
- (id)reusableCellIdentifier;
- (struct CGSize)sizeForItemAtIndexPath:(id)arg1;
- (id)stackedViewModels;

@end

