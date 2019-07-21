//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCUnifiedProfileListCollectionViewCell.h"

#import "SCActionable-Protocol.h"
#import "SCSnapchatterCellViewActionHandling-Protocol.h"

@class NSString;
@protocol SCActionHandling;

@interface SCUnifiedProfileSnapchatterCollectionViewCell : SCUnifiedProfileListCollectionViewCell <SCSnapchatterCellViewActionHandling, SCActionable>
{
    id _viewModel;
    id <SCActionHandling> _actionHandler;
}

- (void).cxx_destruct;
- (void)_updateRightIconViewBasedOnViewModel:(id)arg1;
@property(retain, nonatomic) id <SCActionHandling> actionHandler; // @synthesize actionHandler=_actionHandler;
- (_Bool)handleActionWithActionModel:(id)arg1 fromSourceView:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)setImageDownloader:(id)arg1;
- (void)setInfoFetcher:(id)arg1;
- (void)setViewModel:(id)arg1;
- (struct CGSize)sizeForRightIconView;
- (id)viewModel;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

