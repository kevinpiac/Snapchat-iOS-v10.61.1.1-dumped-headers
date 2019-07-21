//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCUnifiedProfileBaseCollectionViewCell.h"

#import "SCActionable-Protocol.h"
#import "SCTraceEnabled-Protocol.h"
#import "SCViewModelConfigurable-Protocol.h"
#import "UIGestureRecognizerDelegate-Protocol.h"

@class NSString, SCLazy, SCUnifiedProfileCharmsCardViewCellContentView, SCUnifiedProfileCharmsCardViewCellDescriptionView, SCUnifiedProfileCharmsCardViewCellSnapStreakBadgeView, SCUnifiedProfileCharmsCardViewCellSpacerView, SCUnifiedProfileCharmsCardViewCellTitleView, SCUnifiedProfileCharmsCollectionViewCell, UIImageView;
@protocol SCActionHandling;

@interface SCUnifiedProfileCharmsCardViewCell : SCUnifiedProfileBaseCollectionViewCell <SCTraceEnabled, SCActionable, SCViewModelConfigurable, UIGestureRecognizerDelegate>
{
    _Bool _unviewed;
    SCUnifiedProfileCharmsCardViewCellContentView *_content;
    SCUnifiedProfileCharmsCardViewCellTitleView *_title;
    SCUnifiedProfileCharmsCardViewCellDescriptionView *_description;
    SCUnifiedProfileCharmsCardViewCellSpacerView *_spacer;
    SCUnifiedProfileCharmsCardViewCellSnapStreakBadgeView *_streakBadge;
    SCLazy *_newBadge;
    UIImageView *_actionButton;
    id <SCActionHandling> _actionHandler;
    id _viewModel;
    SCUnifiedProfileCharmsCollectionViewCell *_collectionViewCell;
}

+ (struct CGSize)sizeWithViewModel:(id)arg1 constrainedToSize:(struct CGSize)arg2;
- (void).cxx_destruct;
- (void)_handleSwipeDown;
- (void)_handleTap;
- (void)_handleTapActionButton;
- (void)_handleViewedAction;
@property(retain, nonatomic) id <SCActionHandling> actionHandler; // @synthesize actionHandler=_actionHandler;
@property(nonatomic) __weak SCUnifiedProfileCharmsCollectionViewCell *collectionViewCell; // @synthesize collectionViewCell=_collectionViewCell;
- (void)handleCharmViewed;
- (void)handleContentViewed;
- (void)handleOnScreen;
- (void)handleTapCollectionViewOrOverlay;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)setImageDownloader:(id)arg1;
@property(retain, nonatomic) id viewModel; // @synthesize viewModel=_viewModel;
- (_Bool)shouldAdjustBackgroundColorForHighlightedState;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

