//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCGalleryGenericSettingsViewController.h"

#import "SCLagunaAppStatusListener-Protocol.h"
#import "SCLagunaSettingsDeviceCellDelegate-Protocol.h"
#import "SCLagunaSettingsPairingHeaderViewDelegate-Protocol.h"
#import "SCSpectaclesEventListener-Protocol.h"
#import "TTTAttributedLabelDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class NSArray, NSMutableSet, NSString, SCCommerceOperaPresenter, SCLagunaSettingsPairingHeaderView, SCSpectaclesActivateDeviceFlow, SCUserSession, UITableView;
@protocol SCSpectaclesAppLogger, SCSpectaclesPairingDelegate;

@interface SCLagunaSettingsViewController : SCGalleryGenericSettingsViewController <UITableViewDataSource, UITableViewDelegate, SCSpectaclesEventListener, TTTAttributedLabelDelegate, SCLagunaAppStatusListener, SCLagunaSettingsPairingHeaderViewDelegate, SCLagunaSettingsDeviceCellDelegate>
{
    UITableView *_tableView;
    SCUserSession *_userSession;
    NSArray *_devices;
    NSArray *_releaseNotes;
    NSMutableSet *_newReleaseNotes;
    SCLagunaSettingsPairingHeaderView *_pairingHeaderView;
    SCSpectaclesActivateDeviceFlow *_activationFlow;
    SCCommerceOperaPresenter *_commerceOperaPresenter;
    NSArray *_resourcesTags;
    _Bool _shouldCancelPairing;
    _Bool _viewOnScreen;
    id <SCSpectaclesPairingDelegate> _pairingDelegate;
    id <SCSpectaclesAppLogger> _analyticsLogger;
}

- (void).cxx_destruct;
- (void)_activateDevice:(id)arg1;
- (void)_alertBluetoothOffFallback;
- (void)_applicationDidBecomeActive;
- (void)_applicationWillResignActive;
- (id)_cellForDevice:(id)arg1;
- (unsigned long long)_currentPairingHeaderState;
- (id)_dequeueReusableGenericSettingsCell;
- (double)_expandedStatusDescriptionLabelHeight:(id)arg1;
- (long long)_getDeviceStateOfConnectedDevice;
- (void)_handleShopButtonPress;
- (void)_presentPairingPageWithSource:(unsigned long long)arg1;
- (void)_presentPairingWithUnsupportedCandidateCode;
- (void)_presentPairingWithUnsupportedDevice;
- (void)_refreshDeviceList;
- (void)_refreshPairingHeader;
- (void)_refreshReleaseNotes;
- (void)_updateView;
- (void)deviceCellDidTapConnectButton:(id)arg1;
- (void)didPressPairNowButton;
- (id)getTitle;
- (id)initWithUserSession:(id)arg1 pairingDelegate:(id)arg2;
- (void)leftButtonPressed;
- (void)loadView;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)pageName;
- (void)pairingHeaderViewDidPressInfoButton:(id)arg1;
- (void)spectaclesDevice:(id)arg1 didUnpairWithReason:(unsigned long long)arg2;
- (void)spectaclesDevice:(id)arg1 didUpdateInfo:(unsigned long long)arg2;
- (void)spectaclesDeviceDidUpdateState:(id)arg1;
- (void)spectaclesOnPairingStateUpdate:(unsigned long long)arg1 deviceInformation:(id)arg2;
- (void)statusCoordinator:(id)arg1 needsToUpdateStateForDevice:(id)arg2;
- (void)statusCoordinatorBluetoothTurnedOff:(id)arg1;
- (void)statusCoordinatorBluetoothTurnedOn:(id)arg1;
- (void)statusCoordinatorNumberOfDevicesUpdated:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

