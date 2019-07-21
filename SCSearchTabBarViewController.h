//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "SCSearchContentViewControllerProviding-Protocol.h"
#import "SCSearchContentViewControlling-Protocol.h"
#import "SCSearchTabBarContainerViewDelegate-Protocol.h"
#import "SCSearchTabBarDelegate-Protocol.h"
#import "SCSearchTabTransitionControllingDelegate-Protocol.h"

@class NSArray, NSMutableIndexSet, NSString, SCSearchContentViewControllerContext, SCSearchTabBarContainerView;
@protocol SCSearchTabBarViewControllerDelegate, SCSearchTabTransitionControlling;

@interface SCSearchTabBarViewController : UIViewController <SCSearchTabBarDelegate, SCSearchTabBarContainerViewDelegate, SCSearchTabTransitionControllingDelegate, SCSearchContentViewControlling, SCSearchContentViewControllerProviding>
{
    SCSearchTabBarContainerView *_tabBarContainerView;
    id <SCSearchTabTransitionControlling> _tabTransitionController;
    NSArray *_tabs;
    NSArray *_viewControllerCreators;
    struct CGPoint _gestureBeginContentOffset;
    NSMutableIndexSet *_mutablePanCreatedIndexSet;
    SCSearchContentViewControllerContext *_searchContentViewControllerContext;
    id <SCSearchTabBarViewControllerDelegate> _delegate;
    unsigned long long _selectedTabIndex;
    long long _tabBarPosition;
    CDUnknownBlockType _tabBarCreationBlock;
}

- (void).cxx_destruct;
- (void)_prepareViewControllerAtIndex:(unsigned long long)arg1 shouldCreateIfNotExisted:(_Bool)arg2;
- (void)_removeViewControllerAtIndexFromParentViewControllerIfNeeded:(unsigned long long)arg1;
@property(readonly, nonatomic) UIViewController *contentViewController;
@property(nonatomic) struct CGPoint customizedTabBarViewOrigin;
@property(nonatomic) __weak id <SCSearchTabBarViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (id)initWithTabs:(id)arg1;
- (void)loadView;
@property(readonly, nonatomic) unsigned long long numberOfTabs;
- (unsigned long long)numberOfTabsForSearchTabTransitionController:(id)arg1;
@property(retain, nonatomic) SCSearchContentViewControllerContext *searchContentViewControllerContext; // @synthesize searchContentViewControllerContext=_searchContentViewControllerContext;
- (void)searchTabBar:(id)arg1 didSelectTabAtIndex:(unsigned long long)arg2;
- (void)searchTabBarDidUpdateSelectedIndexWithOffsetRatio:(id)arg1;
- (void)searchTabTransitionController:(id)arg1 didFinishTransitionToTabAtIndex:(unsigned long long)arg2;
- (void)searchTabTransitionController:(id)arg1 didSwitchToTabAtIndex:(unsigned long long)arg2;
- (void)searchTabTransitionController:(id)arg1 prepareViewControllerAtIndexIfNeeded:(unsigned long long)arg2 shouldCreateIfNotExisted:(_Bool)arg3;
- (void)searchTabTransitionController:(id)arg1 removeViewControllerFromParentAtIndex:(unsigned long long)arg2;
- (id)searchTabTransitionController:(id)arg1 viewForViewControllerAtIndex:(unsigned long long)arg2;
- (void)searchTabTransitionControllerDidBeginTransitionTabs:(id)arg1;
@property(nonatomic) unsigned long long selectedTabIndex; // @synthesize selectedTabIndex=_selectedTabIndex;
- (unsigned long long)selectedTabIndexForSearchTabTransitionController:(id)arg1;
- (unsigned long long)selectedTabIndexForTabBarContainerView:(id)arg1;
@property(copy, nonatomic) CDUnknownBlockType tabBarCreationBlock; // @synthesize tabBarCreationBlock=_tabBarCreationBlock;
@property(nonatomic) long long tabBarPosition; // @synthesize tabBarPosition=_tabBarPosition;
- (_Bool)shouldAutomaticallyForwardAppearanceMethods;
- (struct CGRect)tabBarContainerView:(id)arg1 frameForViewAtIndex:(unsigned long long)arg2 currentIndex:(unsigned long long)arg3 contentOffset:(struct CGPoint)arg4;
- (id)tabBarContainerViewForSearchTabTransitionController:(id)arg1;
- (id)viewControllerForTabAtIndex:(unsigned long long)arg1;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

