//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCOnDemandGeofilterBaseLeftSwipableViewController.h"

#import "SCHeaderDataSource-Protocol.h"
#import "SCHeaderDelegate-Protocol.h"
#import "SCOnDemandGeofilterDataControllerListener-Protocol.h"
#import "SCSimpleFriendSelectorDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"
#import "UITextFieldDelegate-Protocol.h"

@class NSArray, NSString, SCCardContainerView, SCHeader, SCLoadingIndicatorView, SIGButton, SOJUUnlockablesOndemandGeofence, SOJUUnlockablesOndemandGetHomeFilterAssetResponse, SOJUUnlockablesOndemandHomeFilterTargeting, SOJUUnlockablesOndemandTemplateCategoryList, UIColor, UITableView;

@interface SCOnDemandGeofilterHomeFilterSettingsViewController : SCOnDemandGeofilterBaseLeftSwipableViewController <UITableViewDelegate, UITableViewDataSource, SCHeaderDelegate, SCHeaderDataSource, SCOnDemandGeofilterDataControllerListener, UITextFieldDelegate, SCSimpleFriendSelectorDelegate>
{
    SCHeader *_header;
    UITableView *_tableView;
    NSArray *_sectionDataModels;
    SCLoadingIndicatorView *_activityIndicator;
    SIGButton *_doneButton;
    SOJUUnlockablesOndemandGetHomeFilterAssetResponse *_homeFilterAssetResponse;
    SOJUUnlockablesOndemandTemplateCategoryList *_templateCategoryList;
    NSArray *_whitelistedFriends;
    NSArray *_whitelistedFriendsIds;
    NSArray *_blacklistedFriends;
    NSArray *_blacklistedFriendsIds;
    long long _targetingType;
    NSString *_statusMessage;
    UIColor *_statusColor;
    _Bool _editMode;
    _Bool _enabled;
    SOJUUnlockablesOndemandGeofence *_geofence;
    SOJUUnlockablesOndemandHomeFilterTargeting *_currentTargeting;
    SCCardContainerView *_cardContainerView;
}

- (void).cxx_destruct;
- (void)_assetDidChange:(id)arg1;
- (void)_doneButtonAction;
- (id)_generateDisplaySectionDataModel;
- (id)_generatePrivacySectionDataModel;
- (id)_generateScreenShotSectionDataModel;
- (id)_generateSectionDataModels;
- (double)_heightForRowAtIndexPath:(id)arg1;
- (double)_heightForThumbnailPreviewCell;
- (unsigned long long)_positionStyleForCellAtIndexPath:(id)arg1;
- (void)_presentDialogWithMessage:(id)arg1;
- (void)_presentMapViewController;
- (void)_proceedToTemplatesViewController;
- (id)_submissionHomeFilterAsset;
- (id)_submissionHomeFilterItem;
- (id)_submissionUpdateAddress;
- (id)_submissionUpdateHomeAddress;
- (id)_submissionUpdateHomeFilter;
- (id)_submissionUpdateHomeFilterRequestForAddress;
- (id)_submissionUpdateHomeFilterRequestForTargeting;
- (id)_submissionUpdateTargeting;
- (void)_updateHomeFilterStateWithSwitch:(id)arg1;
- (id)backgroundColorForHeader;
@property(retain, nonatomic) SCCardContainerView *cardContainerView; // @synthesize cardContainerView=_cardContainerView;
@property(retain, nonatomic) SOJUUnlockablesOndemandHomeFilterTargeting *currentTargeting; // @synthesize currentTargeting=_currentTargeting;
- (void)dataController:(id)arg1 didFetchHomeFilterAssetResponse:(id)arg2 success:(_Bool)arg3;
- (void)dataController:(id)arg1 didFetchHomeFilterResponse:(id)arg2 success:(_Bool)arg3;
- (void)dataController:(id)arg1 didFetchOnDemandGeofilterTemplates:(id)arg2 productType:(long long)arg3 filterType:(unsigned long long)arg4 success:(_Bool)arg5;
- (void)dataController:(id)arg1 didFinishHomeFilterUpdate:(id)arg2;
@property(nonatomic) _Bool enabled; // @synthesize enabled=_enabled;
- (id)fontForHeader:(id)arg1;
- (void)friendSelectorController:(id)arg1 didFinishPickingFriendsWithListOfUsers:(id)arg2 headerTitle:(id)arg3;
- (id)generateGeocoordinateArrayFromCLLocation2:(id)arg1;
- (id)generateGeocoordinateArrayFromCLLocation:(id)arg1;
@property(retain, nonatomic) SOJUUnlockablesOndemandGeofence *geofence; // @synthesize geofence=_geofence;
- (id)imageForLeftButtonInState:(unsigned long long)arg1;
- (id)imageForRightButtonInState:(unsigned long long)arg1;
- (id)initWithGeofilterSession:(id)arg1;
- (void)leftButtonPressed;
- (void)leftSwipeSucceed;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)showFriendSelector:(id)arg1 selectedFriends:(id)arg2 selectionStyle:(long long)arg3;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (id)textColorForHeader:(id)arg1;
- (id)titleForHeader:(id)arg1;
- (void)updateCardBackground:(double)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(_Bool)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
