//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "SCSearchTabBar-Protocol.h"
#import "UIGestureRecognizerDelegate-Protocol.h"

@class NSArray, NSString, SCActionFooterButtonItem, SCActionFooterItem, SCActionFooterPanGestureRecognizer, SCShapeView, UIImageView, UIScrollView, UITapGestureRecognizer;
@protocol SCActionFooterItemViewDelegate, SCSearchTabBarDelegate;

@interface SCActionFooterItemView : UIView <UIGestureRecognizerDelegate, SCSearchTabBar>
{
    NSArray *_tabBarItems;
    id <SCSearchTabBarDelegate> _tabBarDelegate;
    double _selectedIndexWithOffsetRatio;
    long long _interfaceStyle;
    UIView *_actionButton;
    id <SCActionFooterItemViewDelegate> _delegate;
    SCActionFooterItem *_item;
    long long _currentIndex;
    SCActionFooterPanGestureRecognizer *_panGestureRecognizer;
    UIScrollView *_containerView;
    UIImageView *_gradientImageView;
    UITapGestureRecognizer *_tapGestureRecognizer;
    SCShapeView *_selectionView;
    struct CGSize _previousBoundsSize;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIView *actionButton; // @synthesize actionButton=_actionButton;
@property(retain, nonatomic) UIScrollView *containerView; // @synthesize containerView=_containerView;
@property(readonly, nonatomic) long long currentIndex; // @synthesize currentIndex=_currentIndex;
@property(nonatomic) __weak id <SCActionFooterItemViewDelegate> delegate; // @synthesize delegate=_delegate;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
@property(retain, nonatomic) UIImageView *gradientImageView; // @synthesize gradientImageView=_gradientImageView;
- (long long)indexForItemAtLocation:(struct CGPoint)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
@property(nonatomic) long long interfaceStyle; // @synthesize interfaceStyle=_interfaceStyle;
@property(retain, nonatomic) SCActionFooterItem *item; // @synthesize item=_item;
- (id)itemForLocation:(struct CGPoint)arg1;
- (void)layoutItems;
- (void)layoutSubviews;
- (void)moveToItemAtIndex:(long long)arg1 animated:(_Bool)arg2;
- (void)pan:(id)arg1;
@property(retain, nonatomic) SCActionFooterPanGestureRecognizer *panGestureRecognizer; // @synthesize panGestureRecognizer=_panGestureRecognizer;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
@property(nonatomic) struct CGSize previousBoundsSize; // @synthesize previousBoundsSize=_previousBoundsSize;
- (void)selectItemForLocation:(struct CGPoint)arg1;
@property(nonatomic) double selectedIndexWithOffsetRatio; // @synthesize selectedIndexWithOffsetRatio=_selectedIndexWithOffsetRatio;
@property(readonly, nonatomic) SCActionFooterButtonItem *selectedItem;
@property(retain, nonatomic) SCShapeView *selectionView; // @synthesize selectionView=_selectionView;
- (void)setCurrentIndex:(long long)arg1;
- (void)setCurrentIndex:(long long)arg1 animated:(_Bool)arg2;
- (void)setSelectedIndexWithOffsetRatio:(double)arg1 animated:(_Bool)arg2;
@property(nonatomic) __weak id <SCSearchTabBarDelegate> tabBarDelegate; // @synthesize tabBarDelegate=_tabBarDelegate;
@property(copy, nonatomic) NSArray *tabBarItems; // @synthesize tabBarItems=_tabBarItems;
@property(retain, nonatomic) UITapGestureRecognizer *tapGestureRecognizer; // @synthesize tapGestureRecognizer=_tapGestureRecognizer;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (long long)spacingType;
- (void)tapped:(id)arg1;
- (void)tintColorDidChange;
- (double)totalItemWidth;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

