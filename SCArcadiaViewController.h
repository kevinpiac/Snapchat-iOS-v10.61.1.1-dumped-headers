//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCLensDiscoveryViewController.h"

#import "SCLensDiscoverySearchResultsViewControllerDelegate-Protocol.h"
#import "SCSearchViewDelegate-Protocol.h"

@class NSMutableArray, NSSet, NSString, SCArcadiaDataProvider, SCLens, SCLensDiscoverySearchResultsViewController, SCSearchView, UIBarButtonItem, UIButton, UINavigationBar, UIView;
@protocol SCArcadiaViewControllerDelegate;

@interface SCArcadiaViewController : SCLensDiscoveryViewController <SCLensDiscoverySearchResultsViewControllerDelegate, SCSearchViewDelegate>
{
    NSMutableArray *_selectedLenses;
    NSSet *_selectedLensIds;
    UIButton *_multipleSelectionButton;
    _Bool _multipleSelection;
    UINavigationBar *_navigationBar;
    UIView *_searchContainerView;
    SCSearchView *_searchBar;
    UIBarButtonItem *_deselectBarButtonItem;
    UIBarButtonItem *_spaceBarButtonItem;
    SCLensDiscoverySearchResultsViewController *_searchResultsViewController;
    double _sessionStartTimestamp;
    _Bool _isShown;
    id <SCArcadiaViewControllerDelegate> _delegate;
    SCLens *_lastSelectedLens;
}

+ (void)_arcadiaLensSelected:(id)arg1 categoryTag:(id)arg2 autoOpen:(_Bool)arg3;
+ (void)_arcadiaSessionStoppedWithViewTimeSec:(double)arg1;
- (void).cxx_destruct;
@property(nonatomic) __weak id <SCArcadiaViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)deselectAll;
- (id)deselectBarButtonItem;
- (void)didCreateSearchResultsViewController;
- (void)didCreateTopBar;
- (void)didSelectObject:(id)arg1 inCategoryWithId:(id)arg2;
- (void)didSetupNavigationBar;
- (void)dismiss;
- (void)dismissKeyboard;
- (void)hideAnimated:(_Bool)arg1;
- (id)initWithDataProvider:(id)arg1;
@property(readonly, nonatomic) _Bool isShown; // @synthesize isShown=_isShown;
@property(readonly, nonatomic) SCLens *lastSelectedLens; // @synthesize lastSelectedLens=_lastSelectedLens;
- (void)lensDiscoveryCellProducer:(id)arg1 didDequeueLensDiscoveryCell:(id)arg2 forLens:(id)arg3;
- (_Bool)lensDiscoveryGroupCell:(id)arg1 isObjectNewWithId:(id)arg2 inCategoryWithId:(id)arg3;
- (void)lensDiscoverySearchResultsViewController:(id)arg1 didSelectObject:(id)arg2;
- (id)searchResultsViewController;
- (void)searchView:(id)arg1 didChangeToText:(id)arg2 byChangingCharactersInRange:(struct _NSRange)arg3 replacementString:(id)arg4;
- (_Bool)searchViewShouldReturn:(id)arg1 withSearchText:(id)arg2;
- (id)selectedLensIds;
- (void)showAnimated:(_Bool)arg1;
- (id)spaceBarButtonItem;
- (void)toggleMultipleSelection;
- (void)updateLeftBarButtonItems;
- (void)updateSearchResultsSelectionIfPossible;
- (void)willReloadData;

// Remaining properties
@property(retain) SCArcadiaDataProvider *dataProvider; // @dynamic dataProvider;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
