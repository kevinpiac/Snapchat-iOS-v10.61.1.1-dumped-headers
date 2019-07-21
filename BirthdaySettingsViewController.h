//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCGenericSettingsViewController.h"

#import "SCDatePickerDelegate-Protocol.h"
#import "SCSettingsSwitchTableViewCellDelegate-Protocol.h"
#import "SCTextViewDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class NSString, SCButton, SCDatePicker, SCSettingsSwitchTableViewCell, SCTextView, SCUserSession, UILabel, UITableView;

@interface BirthdaySettingsViewController : SCGenericSettingsViewController <SCTextViewDelegate, SCDatePickerDelegate, UITableViewDataSource, UITableViewDelegate, SCSettingsSwitchTableViewCellDelegate>
{
    SCTextView *_birthdayTextView;
    SCDatePicker *_birthdayPickerView;
    SCButton *_continueButton;
    UILabel *_upperInfo;
    UITableView *_tableView;
    _Bool _shouldFlipSwitchOnDateChange;
    SCSettingsSwitchTableViewCell *_partyCell;
    SCUserSession *_userSession;
}

- (void).cxx_destruct;
- (void)_showConfirmationWithConfirmedActionHandler:(CDUnknownBlockType)arg1;
- (void)_showPasswordConfirmationLastChange;
- (void)_updateBirthdayForOver13WithPasswordVerified:(_Bool)arg1;
- (void)_verifyPasswordToProceedWithPassword:(id)arg1 submitAction:(id)arg2 alertView:(id)arg3 coordinator:(id)arg4;
- (id)birthdayPickerDate;
- (void)continueButtonTapped;
- (void)dateDidChange;
- (void)dateWheelIsSpinning;
- (id)getDefaultBirthday;
- (id)getPageViewName;
- (id)getReportUnderThirteenUrl;
- (id)getTitle;
- (void)handleOverThirteen;
- (void)handleUnderThirteen;
- (void)initBirthdayPicker;
- (void)initBirthdayTextView;
- (void)initContinueButton;
- (void)initParty;
- (id)initWithUserSession:(id)arg1;
- (_Bool)isBirthdaySet;
- (_Bool)isSameBirthday;
- (void)loadView;
- (id)partyCell;
- (void)presentLastChangeAttemptAlert;
- (void)presentManyUpdatesAlert;
- (void)sendToAccountsWithToken:(id)arg1;
- (void)setContinueButtonTitle:(id)arg1;
- (void)setIsWorking:(_Bool)arg1;
- (void)settingsSwitchTableViewCell:(id)arg1 didToggleSwitch:(_Bool)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)textViewDidChange:(id)arg1;
- (_Bool)textViewShouldBeginEditing:(id)arg1;
- (void)updateBirthday;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

