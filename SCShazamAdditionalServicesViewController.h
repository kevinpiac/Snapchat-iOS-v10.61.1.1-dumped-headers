//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCGenericSettingsViewController.h"

#import "SCSWSongInfoCellDelegate-Protocol.h"
#import "SWTableViewCellDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class NSMutableArray, NSString, SCUserSession, UIActivityIndicatorView, UIImageView, UILabel, UITableView;

@interface SCShazamAdditionalServicesViewController : SCGenericSettingsViewController <UITableViewDataSource, UITableViewDelegate, SWTableViewCellDelegate, SCSWSongInfoCellDelegate>
{
    NSMutableArray *_recentlyRecordedSongs;
    UIImageView *_squareGhost;
    _Bool _hasMorePages;
    SCUserSession *_userSession;
    UIActivityIndicatorView *_loadingSpinner;
    UILabel *_errorSubtextLabel;
    UITableView *_tableView;
}

- (void).cxx_destruct;
- (void)_deleteSongHistoryFromServer:(id)arg1;
- (id)_getSongInfoCellOnTableView:(id)arg1 atIndexPath:(id)arg2;
- (void)didPressDeleteButton:(id)arg1;
- (void)getSongHistoryFromServer:(long long)arg1 pageCount:(long long)arg2 firstPage:(_Bool)arg3;
- (void)initBlankGhost;
- (void)initLoadingSpinner;
- (void)initMessage;
- (void)initTableView;
- (id)initWithUserSession:(id)arg1;
- (void)leftButtonPressed;
- (void)loadView;
- (id)loadingCell;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)resetView;
- (id)rightUtilityButtons;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
- (void)setupErrorSubtext;
- (void)songInfoCellDisableLeftSwipeGesture;
- (void)songInfoCellEnableLeftSwipeGesture;
- (unsigned long long)supportedInterfaceOrientations;
- (void)swipeableTableViewCell:(id)arg1 didTriggerRightUtilityButtonWithIndex:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (id)titleForHeader:(id)arg1;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

