//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "SCInformationSettingsViewControllerDelegate-Protocol.h"
#import "SCRegisterPhoneV2ViewControllerDelegate-Protocol.h"
#import "SCRequestAddressBookAccessDelegate-Protocol.h"
#import "SCSnapchattersDataRequestListener-Protocol.h"
#import "SCTraceEnabled-Protocol.h"
#import "Subview-Protocol.h"

@class NSString, SCRegisterPhoneV2ViewController, SCRequestAddressBookAccessView, SCUserSession;
@protocol SCContactsAccessDelegate;

@interface SCContactsAccessViewController : UIViewController <SCInformationSettingsViewControllerDelegate, SCSnapchattersDataRequestListener, SCTraceEnabled, SCRequestAddressBookAccessDelegate, SCRegisterPhoneV2ViewControllerDelegate, Subview>
{
    SCRequestAddressBookAccessView *_requestAccessView;
    SCRegisterPhoneV2ViewController *_registerPhoneNumberVC;
    SCUserSession *_userSession;
    _Bool _skipPhoneVerification;
    _Bool _fromPXPrompt;
    _Bool _useFriendFeedStyle;
    _Bool _contactBookMigrationFailed;
    _Bool _openingFromSendTo;
    id <SCContactsAccessDelegate> _delegate;
}

- (void).cxx_destruct;
- (void)_didGrantContactAccess;
- (void)_loadNecessarySubViewController;
- (void)_logUnsampledContactAccessPageView;
- (void)_logUnsampledContactPermissionMigrationRequest;
- (void)_logUnsampledContactPrivacyInterstitialContinueAction;
- (void)_logUnsampledContactPromptDialogAction:(_Bool)arg1;
- (void)attributedLabel:(id)arg1 didSelectLinkWithURL:(id)arg2;
- (void)continueButtonClicked;
@property(nonatomic) __weak id <SCContactsAccessDelegate> delegate; // @synthesize delegate=_delegate;
- (void)didEndSnapchattersContactDataRequest:(id)arg1 withResult:(id)arg2;
- (void)didEndSnapchattersUpdateDataRequest:(id)arg1 withSuccess:(_Bool)arg2;
- (void)didRegisterPhoneForContactAccess;
- (void)didStartSnapchattersUpdateDataRequest:(id)arg1;
- (void)didTapGiveAccess;
- (void)dismissInformationSettingsView:(id)arg1;
- (id)initWithUserSession:(id)arg1;
- (id)initWithUserSession:(id)arg1 skipPhoneVerification:(_Bool)arg2;
- (id)initWithUserSession:(id)arg1 skipPhoneVerification:(_Bool)arg2 fromPXPrompt:(_Bool)arg3 useFriendFeedStyle:(_Bool)arg4;
- (void)loadNecessarySubViewController;
- (void)loadView;
@property(nonatomic) _Bool openingFromSendTo; // @synthesize openingFromSendTo=_openingFromSendTo;
- (void)removeAccessView;
- (void)showRegisterPhoneNumber;
- (void)showRequestAccessViewWithAccess:(_Bool)arg1;
- (void)subviewDidAppear;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
