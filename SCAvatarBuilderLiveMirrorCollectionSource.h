//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "UICollectionViewDataSource-Protocol.h"
#import "UICollectionViewDelegateFlowLayout-Protocol.h"

@class NSDictionary, NSMutableArray, NSString;
@protocol SCAvatarBuilderLiveMirrorCollectionSourceDelegate;

@interface SCAvatarBuilderLiveMirrorCollectionSource : NSObject <UICollectionViewDelegateFlowLayout, UICollectionViewDataSource>
{
    id <SCAvatarBuilderLiveMirrorCollectionSourceDelegate> _delegate;
    NSMutableArray *_avatarOptions;
    NSDictionary *_selectedAvatarFeatures;
}

- (void).cxx_destruct;
- (void)_addOptionButtonTapped;
- (void)appendSelfieOptionWithAvatarFeatures:(id)arg1 collectionView:(id)arg2 liveMirrorState:(unsigned long long)arg3;
- (long long)avatarOptionsCount;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (struct UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForFooterInSection:(long long)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForHeaderInSection:(long long)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (id)initWithDelegate:(id)arg1 collectionView:(id)arg2;
@property(readonly, copy, nonatomic) NSDictionary *selectedAvatarFeatures; // @synthesize selectedAvatarFeatures=_selectedAvatarFeatures;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

