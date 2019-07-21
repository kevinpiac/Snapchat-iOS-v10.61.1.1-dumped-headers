//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSArray, SCActionToolbarBlurView, SCActionToolbarButtonItem, SCActionToolbarItemLayout, SCShapeView, UIImageView;

@interface SCActionToolbarItemView : UIView
{
    _Bool _collapsed;
    long long _anchor;
    NSArray *_barItems;
    NSArray *_groupedLeftBarItems;
    NSArray *_groupedRightBarItems;
    double _percentVisible;
    double _percentDark;
    double _maximumWidth;
    SCActionToolbarButtonItem *_stickyItem;
    long long _motionDirection;
    SCActionToolbarItemLayout *_layout;
    SCShapeView *_backgroundView;
    SCShapeView *_darkBackgroundView;
    SCActionToolbarBlurView *_backgroundBlurView;
    UIImageView *_shadowImageView;
    long long _style;
    NSArray *_lineSeparators;
    SCShapeView *_blurMaskView;
    NSArray *_items;
    struct CGSize _previousBoundsSize;
}

- (void).cxx_destruct;
- (long long)_lineSeparatorCount;
- (void)_resetBlurMask;
- (void)_resetItems:(id *)arg1 withItems:(id)arg2 grouped:(_Bool)arg3;
- (void)_updateLineSeparators;
- (long long)_visibleBarItemCount;
- (long long)_visibleGroupedLeftBarItemCount;
- (long long)_visibleGroupedRightBarItemCount;
@property(readonly, nonatomic) long long anchor; // @synthesize anchor=_anchor;
@property(retain, nonatomic) SCActionToolbarBlurView *backgroundBlurView; // @synthesize backgroundBlurView=_backgroundBlurView;
@property(retain, nonatomic) SCShapeView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(copy, nonatomic) NSArray *barItems; // @synthesize barItems=_barItems;
@property(retain, nonatomic) SCShapeView *blurMaskView; // @synthesize blurMaskView=_blurMaskView;
@property(retain, nonatomic) SCShapeView *darkBackgroundView; // @synthesize darkBackgroundView=_darkBackgroundView;
- (void)didMoveToWindow;
@property(copy, nonatomic) NSArray *groupedLeftBarItems; // @synthesize groupedLeftBarItems=_groupedLeftBarItems;
@property(copy, nonatomic) NSArray *groupedRightBarItems; // @synthesize groupedRightBarItems=_groupedRightBarItems;
- (id)initWithStyle:(long long)arg1 anchor:(long long)arg2;
- (void)invalidateLayout;
@property(nonatomic, getter=isCollapsed) _Bool collapsed; // @synthesize collapsed=_collapsed;
@property(copy, nonatomic) NSArray *items; // @synthesize items=_items;
@property(retain, nonatomic) SCActionToolbarItemLayout *layout; // @synthesize layout=_layout;
- (void)layoutSubviews;
@property(retain, nonatomic) NSArray *lineSeparators; // @synthesize lineSeparators=_lineSeparators;
@property(nonatomic) double maximumWidth; // @synthesize maximumWidth=_maximumWidth;
@property(nonatomic) long long motionDirection; // @synthesize motionDirection=_motionDirection;
@property(nonatomic) double percentDark; // @synthesize percentDark=_percentDark;
@property(nonatomic) double percentVisible; // @synthesize percentVisible=_percentVisible;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
@property(nonatomic) struct CGSize previousBoundsSize; // @synthesize previousBoundsSize=_previousBoundsSize;
@property(retain, nonatomic) UIImageView *shadowImageView; // @synthesize shadowImageView=_shadowImageView;
@property(retain, nonatomic) SCActionToolbarButtonItem *stickyItem; // @synthesize stickyItem=_stickyItem;
@property(nonatomic) long long style; // @synthesize style=_style;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;

@end
