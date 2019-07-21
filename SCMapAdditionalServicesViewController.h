//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCGenericSettingsViewController.h"

#import "SCMapSettingsTableViewCellDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class NSString, SCFeatureSettingsManager, SCMapSettingsTableViewCell, SCMapSnapTokenService, UISwitch, UITableView;

@interface SCMapAdditionalServicesViewController : SCGenericSettingsViewController <SCMapSettingsTableViewCellDelegate, UITableViewDataSource, UITableViewDelegate>
{
    SCFeatureSettingsManager *_featureSettingsManager;
    SCMapSnapTokenService *_mapSnapTokenService;
    UITableView *_tableView;
    UISwitch *_shareDataSwitch;
    SCMapSettingsTableViewCell *_usageDataCell;
    SCMapSettingsTableViewCell *_passportDeletionCell;
}

- (void).cxx_destruct;
- (void)_deletePassport;
- (void)_shareDataSwitchValueDidChange:(id)arg1;
- (id)initWithFeatureSettingsManager:(id)arg1 mapSnapTokenService:(id)arg2;
- (void)leftButtonPressed;
- (struct CGRect)mapSettingsTableViewCell:(id)arg1 frameForAccessoryView:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
@property(retain, nonatomic) SCMapSettingsTableViewCell *passportDeletionCell; // @synthesize passportDeletionCell=_passportDeletionCell;
@property(retain, nonatomic) UISwitch *shareDataSwitch; // @synthesize shareDataSwitch=_shareDataSwitch;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) SCMapSettingsTableViewCell *usageDataCell; // @synthesize usageDataCell=_usageDataCell;
- (unsigned long long)supportedInterfaceOrientations;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (_Bool)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2;
- (id)titleForHeader:(id)arg1;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

