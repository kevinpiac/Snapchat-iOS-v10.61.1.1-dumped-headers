//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "SCGalleryCollectionViewCustomizing-Protocol.h"

@class NSArray, NSString, SCQueuePerformer, SCUserSession, UICollectionView, UICollectionViewFlowLayout;

@interface SCGallerySnapsViewController : UIViewController <SCGalleryCollectionViewCustomizing>
{
    SCUserSession *_userSession;
    SCQueuePerformer *_performer;
    NSArray *_gallerySnaps;
    UICollectionView *_collectionView;
    UICollectionViewFlowLayout *_collectionViewLayout;
}

- (void).cxx_destruct;
- (id)cellReuseIdentifierForSection:(long long)arg1;
@property(retain, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
@property(retain, nonatomic) UICollectionViewFlowLayout *collectionViewLayout; // @synthesize collectionViewLayout=_collectionViewLayout;
@property(retain, nonatomic) NSArray *gallerySnaps; // @synthesize gallerySnaps=_gallerySnaps;
- (id)initWithUserSession:(id)arg1 gallerySnaps:(id)arg2;
@property(retain, nonatomic) SCQueuePerformer *performer; // @synthesize performer=_performer;
- (void)registerCellsForCollectionView:(id)arg1;
- (void)registerSupplementaryViewsForCollectionView:(id)arg1;
- (void)reloadCollectionView;
- (void)setGallerySnaps:(id)arg1 reloadCollectionView:(_Bool)arg2;
@property(nonatomic) __weak SCUserSession *userSession; // @synthesize userSession=_userSession;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

