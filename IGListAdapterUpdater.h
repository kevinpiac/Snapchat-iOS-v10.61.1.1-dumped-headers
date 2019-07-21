//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "IGListUpdatingDelegate-Protocol.h"

@class IGListBatchUpdateData, IGListBatchUpdates, NSArray, NSMutableArray, NSString;
@protocol IGListAdapterUpdaterDelegate;

@interface IGListAdapterUpdater : NSObject <IGListUpdatingDelegate>
{
    _Bool _movesAsDeletesInserts;
    _Bool _allowsBackgroundReloading;
    _Bool _queuedUpdateIsAnimated;
    _Bool _queuedReloadData;
    id <IGListAdapterUpdaterDelegate> _delegate;
    double _coalescanceTime;
    long long _experiments;
    NSArray *_fromObjects;
    NSArray *_toObjects;
    NSArray *_pendingTransitionToObjects;
    NSMutableArray *_completionBlocks;
    IGListBatchUpdates *_batchUpdates;
    CDUnknownBlockType _objectTransitionBlock;
    CDUnknownBlockType _reloadUpdates;
    long long _state;
    IGListBatchUpdateData *_applyingUpdateData;
}

- (void).cxx_destruct;
- (void)_beginPerformBatchUpdatesToObjects:(id)arg1;
- (void)_cleanStateAfterUpdates;
- (id)_flushCollectionView:(id)arg1 withDiffResult:(id)arg2 batchUpdates:(id)arg3 fromObjects:(id)arg4;
- (void)_performBatchUpdatesItemBlockApplied;
- (void)_queueUpdateWithCollectionView:(id)arg1;
@property(nonatomic) _Bool allowsBackgroundReloading; // @synthesize allowsBackgroundReloading=_allowsBackgroundReloading;
@property(retain, nonatomic) IGListBatchUpdateData *applyingUpdateData; // @synthesize applyingUpdateData=_applyingUpdateData;
@property(retain, nonatomic) IGListBatchUpdates *batchUpdates; // @synthesize batchUpdates=_batchUpdates;
- (void)cleanStateBeforeUpdates;
@property(nonatomic) double coalescanceTime; // @synthesize coalescanceTime=_coalescanceTime;
@property(retain, nonatomic) NSMutableArray *completionBlocks; // @synthesize completionBlocks=_completionBlocks;
- (id)debugDescriptionLines;
@property(nonatomic) __weak id <IGListAdapterUpdaterDelegate> delegate; // @synthesize delegate=_delegate;
- (void)deleteItemsFromCollectionView:(id)arg1 indexPaths:(id)arg2;
@property(nonatomic) long long experiments; // @synthesize experiments=_experiments;
@property(copy, nonatomic) NSArray *fromObjects; // @synthesize fromObjects=_fromObjects;
- (_Bool)hasChanges;
@property(nonatomic, getter=hasQueuedReloadData) _Bool queuedReloadData; // @synthesize queuedReloadData=_queuedReloadData;
- (id)init;
- (void)insertItemsIntoCollectionView:(id)arg1 indexPaths:(id)arg2;
- (void)moveItemInCollectionView:(id)arg1 fromIndexPath:(id)arg2 toIndexPath:(id)arg3;
- (void)moveSectionInCollectionView:(id)arg1 fromIndex:(long long)arg2 toIndex:(long long)arg3;
@property(nonatomic) _Bool movesAsDeletesInserts; // @synthesize movesAsDeletesInserts=_movesAsDeletesInserts;
- (id)objectLookupPointerFunctions;
@property(copy, nonatomic) CDUnknownBlockType objectTransitionBlock; // @synthesize objectTransitionBlock=_objectTransitionBlock;
@property(copy, nonatomic) NSArray *pendingTransitionToObjects; // @synthesize pendingTransitionToObjects=_pendingTransitionToObjects;
- (void)performBatchUpdatesWithCollectionView:(id)arg1;
- (void)performReloadDataWithCollectionView:(id)arg1;
- (void)performUpdateWithCollectionView:(id)arg1 animated:(_Bool)arg2 itemUpdates:(CDUnknownBlockType)arg3 completion:(CDUnknownBlockType)arg4;
- (void)performUpdateWithCollectionView:(id)arg1 fromObjects:(id)arg2 toObjects:(id)arg3 animated:(_Bool)arg4 objectTransitionBlock:(CDUnknownBlockType)arg5 completion:(CDUnknownBlockType)arg6;
@property(nonatomic) _Bool queuedUpdateIsAnimated; // @synthesize queuedUpdateIsAnimated=_queuedUpdateIsAnimated;
- (void)reloadCollectionView:(id)arg1 sections:(id)arg2;
- (void)reloadDataWithCollectionView:(id)arg1 reloadUpdateBlock:(CDUnknownBlockType)arg2 completion:(CDUnknownBlockType)arg3;
- (void)reloadItemInCollectionView:(id)arg1 fromIndexPath:(id)arg2 toIndexPath:(id)arg3;
@property(copy, nonatomic) CDUnknownBlockType reloadUpdates; // @synthesize reloadUpdates=_reloadUpdates;
@property(nonatomic) long long state; // @synthesize state=_state;
@property(copy, nonatomic) NSArray *toObjects; // @synthesize toObjects=_toObjects;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
