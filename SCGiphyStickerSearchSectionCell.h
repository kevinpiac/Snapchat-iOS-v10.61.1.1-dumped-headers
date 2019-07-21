//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

#import "UICollectionViewDataSource-Protocol.h"
#import "UICollectionViewDelegate-Protocol.h"
#import "UIGestureRecognizerDelegate-Protocol.h"

@class NSArray, NSString, SCUserSession, UIActivityIndicatorView, UICollectionView;
@protocol SCGiphyStickerSearchSectionDelegate, SCStickerProtocol;

@interface SCGiphyStickerSearchSectionCell : UICollectionViewCell <UICollectionViewDataSource, UICollectionViewDelegate, UIGestureRecognizerDelegate>
{
    UICollectionView *_collectionView;
    SCUserSession *_userSession;
    NSArray *_contexts;
    long long _orientation;
    NSArray<SCStickerProtocol> *_stickers;
    id <SCGiphyStickerSearchSectionDelegate> _delegate;
    UIActivityIndicatorView *_loadingView;
}

- (void).cxx_destruct;
- (void)_setupCollectionView;
- (double)_spacingWithVisibleColumnNumber:(double)arg1;
- (id)_stickerCellForGestureRecognizer:(id)arg1;
- (double)_visibleColumnNumberForCurrentOrientation;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
@property(nonatomic) __weak id <SCGiphyStickerSearchSectionDelegate> delegate; // @synthesize delegate=_delegate;
- (void)didEndDisplay;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (_Bool)gestureRecognizer:(id)arg1 shouldRequireFailureOfGestureRecognizer:(id)arg2;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
@property(retain, nonatomic) UIActivityIndicatorView *loadingView; // @synthesize loadingView=_loadingView;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (void)setStickers:(id)arg1 userSession:(id)arg2 contexts:(id)arg3 orientation:(long long)arg4 edgeInsets:(struct UIEdgeInsets)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

