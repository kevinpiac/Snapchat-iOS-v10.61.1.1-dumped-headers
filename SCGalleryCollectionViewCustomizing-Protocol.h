//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "UICollectionViewDataSource-Protocol.h"
#import "UICollectionViewDelegate-Protocol.h"

@class NSString, UICollectionView;

@protocol SCGalleryCollectionViewCustomizing <UICollectionViewDataSource, UICollectionViewDelegate>
- (NSString *)cellReuseIdentifierForSection:(long long)arg1;
- (void)registerCellsForCollectionView:(UICollectionView *)arg1;
- (void)registerSupplementaryViewsForCollectionView:(UICollectionView *)arg1;
- (void)reloadCollectionView;
@end

