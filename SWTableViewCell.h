//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

#import "UIGestureRecognizerDelegate-Protocol.h"
#import "UIScrollViewDelegate-Protocol.h"

@class NSArray, NSLayoutConstraint, NSString, SWUtilityButtonView, UILongPressGestureRecognizer, UIPanGestureRecognizer, UIScrollView, UITableView, UITapGestureRecognizer, UIView;
@protocol SWTableViewCellDelegate;

@interface SWTableViewCell : UITableViewCell <UIScrollViewDelegate, UIGestureRecognizerDelegate>
{
    UIView *_contentCellView;
    NSArray *_leftUtilityButtons;
    NSArray *_rightUtilityButtons;
    id <SWTableViewCellDelegate> _delegate;
    UITableView *_containingTableView;
    UIPanGestureRecognizer *_tableViewPanGestureRecognizer;
    long long _cellState;
    double _additionalRightPadding;
    UIScrollView *_cellScrollView;
    SWUtilityButtonView *_leftUtilityButtonsView;
    SWUtilityButtonView *_rightUtilityButtonsView;
    UIView *_leftUtilityClipView;
    UIView *_rightUtilityClipView;
    NSLayoutConstraint *_leftUtilityClipConstraint;
    NSLayoutConstraint *_rightUtilityClipConstraint;
    UILongPressGestureRecognizer *_longPressGestureRecognizer;
    UITapGestureRecognizer *_tapGestureRecognizer;
}

- (void).cxx_destruct;
@property(nonatomic) double additionalRightPadding; // @synthesize additionalRightPadding=_additionalRightPadding;
@property(retain, nonatomic) UIScrollView *cellScrollView; // @synthesize cellScrollView=_cellScrollView;
@property(nonatomic) long long cellState; // @synthesize cellState=_cellState;
@property(nonatomic) __weak UITableView *containingTableView; // @synthesize containingTableView=_containingTableView;
- (struct CGPoint)contentOffsetForCellState:(long long)arg1;
- (void)dealloc;
@property(nonatomic) __weak id <SWTableViewCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void)deselectCell;
- (void)didMoveToSuperview;
- (void)didTransitionToState:(unsigned long long)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (void)hideUtilityButtonsAnimated:(_Bool)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)initializer;
- (_Bool)isUtilityButtonsHidden;
- (void)layoutSubviews;
- (void)leftUtilityButtonHandler:(id)arg1;
@property(copy, nonatomic) NSArray *leftUtilityButtons; // @synthesize leftUtilityButtons=_leftUtilityButtons;
@property(retain, nonatomic) SWUtilityButtonView *leftUtilityButtonsView; // @synthesize leftUtilityButtonsView=_leftUtilityButtonsView;
- (double)leftUtilityButtonsWidth;
@property(retain, nonatomic) NSLayoutConstraint *leftUtilityClipConstraint; // @synthesize leftUtilityClipConstraint=_leftUtilityClipConstraint;
@property(retain, nonatomic) UIView *leftUtilityClipView; // @synthesize leftUtilityClipView=_leftUtilityClipView;
@property(retain, nonatomic) UILongPressGestureRecognizer *longPressGestureRecognizer; // @synthesize longPressGestureRecognizer=_longPressGestureRecognizer;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)prepareForReuse;
- (void)removeOldTableViewPanObserver;
- (void)rightUtilityButtonHandler:(id)arg1;
@property(copy, nonatomic) NSArray *rightUtilityButtons; // @synthesize rightUtilityButtons=_rightUtilityButtons;
@property(retain, nonatomic) SWUtilityButtonView *rightUtilityButtonsView; // @synthesize rightUtilityButtonsView=_rightUtilityButtonsView;
- (double)rightUtilityButtonsWidth;
@property(retain, nonatomic) NSLayoutConstraint *rightUtilityClipConstraint; // @synthesize rightUtilityClipConstraint=_rightUtilityClipConstraint;
@property(retain, nonatomic) UIView *rightUtilityClipView; // @synthesize rightUtilityClipView=_rightUtilityClipView;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewPressed:(id)arg1;
- (void)scrollViewTapped:(id)arg1;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;
- (void)selectCell;
- (void)setFrame:(struct CGRect)arg1;
- (void)setLeftUtilityButtons:(id)arg1 WithButtonWidth:(double)arg2;
- (void)setRightUtilityButtons:(id)arg1 WithButtonWidth:(double)arg2;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
@property(retain, nonatomic) UIPanGestureRecognizer *tableViewPanGestureRecognizer; // @synthesize tableViewPanGestureRecognizer=_tableViewPanGestureRecognizer;
@property(retain, nonatomic) UITapGestureRecognizer *tapGestureRecognizer; // @synthesize tapGestureRecognizer=_tapGestureRecognizer;
- (_Bool)shouldHighlight;
- (void)showLeftUtilityButtonsAnimated:(_Bool)arg1;
- (void)showRightUtilityButtonsAnimated:(_Bool)arg1;
- (void)updateCellState;
- (double)utilityButtonsPadding;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

