//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCGenericSettingsViewController.h"

#import "SCSettingsSwitchTableViewCellDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class NSArray, NSString, SCLazy, SCSettingsSwitchTableViewCell, SCUserSession, UILabel, UITableView;
@protocol SCManageAdditionalServicesDelegate;

@interface SCManageAdditionalServicesViewController : SCGenericSettingsViewController <UITableViewDataSource, UITableViewDelegate, SCSettingsSwitchTableViewCellDelegate>
{
    NSArray *_settingsTags;
    SCUserSession *_userSession;
    SCLazy *_lazyFriendmojiService;
    SCLazy *_lazySnapchattersDataMutator;
    _Bool _travelModeEnabled;
    double _dataSaverExpirationMillis;
    _Bool _smartFiltersEnabled;
    _Bool _isFromDataSaverDialog;
    SCSettingsSwitchTableViewCell *_filtersCell;
    SCSettingsSwitchTableViewCell *_travelModeCell;
    id <SCManageAdditionalServicesDelegate> _delegate;
    UITableView *_tableView;
    UILabel *_filtersAttributionLabel;
}

- (void).cxx_destruct;
- (_Bool)_isDataSaverOn;
- (id)createToggleCell;
- (void)dealloc;
@property(nonatomic) __weak id <SCManageAdditionalServicesDelegate> delegate; // @synthesize delegate=_delegate;
- (void)didAttemptToTurnOnFilters;
@property(retain, nonatomic) UILabel *filtersAttributionLabel; // @synthesize filtersAttributionLabel=_filtersAttributionLabel;
- (id)filtersToggleCell;
- (id)getPageViewName;
- (id)initWithUserSession:(id)arg1 friendmojiService:(id)arg2 snapchattersDataMutator:(id)arg3;
- (id)initWithUserSession:(id)arg1 friendmojiService:(id)arg2 snapchattersDataMutator:(id)arg3 isFromDataSaverDialog:(_Bool)arg4;
- (void)leftButtonPressed;
- (void)loadView;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)prepareToRequestToUseLocation;
- (void)presentAdPreferences;
- (void)presentContactDeletion;
- (void)presentEmojiSkinToneSettings;
- (void)presentFriendmoji;
- (void)presentLensStudioSettings;
- (void)presentLifeAndInterestsSettings;
- (void)presentMapUsageSettings;
- (void)presentPermissionsSettings;
- (void)promptForLocationServicesRequired;
- (void)requestToUseLocation;
- (void)resetView;
- (id)scSettingTableCell:(id)arg1 accessibilityLabel:(id)arg2 hasErrors:(_Bool)arg3;
- (id)scSettingTableFriendmojiCell:(id)arg1 accessibilityLabel:(id)arg2;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
- (void)settingsSwitchTableViewCell:(id)arg1 didToggleSwitch:(_Bool)arg2;
- (unsigned long long)supportedInterfaceOrientations;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (id)titleForHeader:(id)arg1;
- (id)travelModeCell;
- (void)updateFeatureSettingsIfNecessary;
- (void)userPostponedLocationPermissions;
- (void)viewDidLoad;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillResignActive;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
