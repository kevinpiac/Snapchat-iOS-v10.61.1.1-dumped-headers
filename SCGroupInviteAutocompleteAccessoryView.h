//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "UICollectionViewDataSource-Protocol.h"
#import "UICollectionViewDelegate-Protocol.h"
#import "UICollectionViewDelegateFlowLayout-Protocol.h"

@class CALayer, NSArray, NSString, SCGroupInviteAutocompleteCollectionViewCell, UICollectionView;
@protocol SCGroupInviteAutocompleteDataSource, SCGroupInviteAutocompleteDelegate;

@interface SCGroupInviteAutocompleteAccessoryView : UIView <UICollectionViewDelegate, UICollectionViewDataSource, UICollectionViewDelegateFlowLayout>
{
    UICollectionView *_collectionView;
    _Bool _isLoading;
    _Bool _needsReloadAfter;
    CALayer *_topBorder;
    SCGroupInviteAutocompleteCollectionViewCell *_sizingCell;
    NSString *_currentString;
    id <SCGroupInviteAutocompleteDelegate> _delegate;
    id <SCGroupInviteAutocompleteDataSource> _dataSource;
    NSArray *_items;
}

- (void).cxx_destruct;
- (void)_reload;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
@property(copy, nonatomic) NSString *currentString; // @synthesize currentString=_currentString;
@property(retain, nonatomic) id <SCGroupInviteAutocompleteDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property(retain, nonatomic) id <SCGroupInviteAutocompleteDelegate> delegate; // @synthesize delegate=_delegate;
- (id)initWithFrame:(struct CGRect)arg1;
@property(retain, nonatomic) NSArray *items; // @synthesize items=_items;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

