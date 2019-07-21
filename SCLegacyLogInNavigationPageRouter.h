//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCLegacyLogInPageRouter-Protocol.h"

@class NSString, SCAlertViewCoordinator, SCAppSession, SCApplicationLoginLogger, SCLogger, SCLoginV2ViewController, SCScopeExposer, UINavigationController;
@protocol SCUIContainer;

@interface SCLegacyLogInNavigationPageRouter : NSObject <SCLegacyLogInPageRouter>
{
    UINavigationController *_navigationController;
    SCAppSession *_appSession;
    SCApplicationLoginLogger *_applicationLoginLogger;
    SCLogger *_logger;
    SCAlertViewCoordinator *_alertViewCoordinator;
    SCLoginV2ViewController *_loginViewController;
    SCScopeExposer *_abuseWarningScopeExposer;
    id <SCUIContainer> _abuseWarningContainer;
}

- (void).cxx_destruct;
- (void)dimissToLoginPage;
- (void)dismissAbuseWarning;
- (void)dismissLoginPage;
- (id)initWithNavigationController:(id)arg1 alertViewCoordinator:(id)arg2 abuseWarningScopeExposer:(id)arg3 appSession:(id)arg4 applicationLoginLogger:(id)arg5 logger:(id)arg6;
- (void)presentRegisterEmailViewController:(id)arg1;
- (void)presentRegisterPhoneViewController:(id)arg1 authenticatedPhoneManager:(id)arg2;
- (void)showAbuseWarningWithId:(id)arg1 message:(id)arg2 delegate:(id)arg3;
- (id)showLoginPageWithUserActionDelegate:(id)arg1 flowContext:(id)arg2;
- (void)showLoginReactivationConfirmationMessage:(id)arg1 uerActionDelegate:(id)arg2;
- (void)showLoginReactivationMessage:(id)arg1;
- (void)showMemoriesPendingSyncAlertWithUserActionDelegate:(id)arg1 usernameOrEmail:(id)arg2 lastMatchingUserData:(id)arg3;
- (id)showOdlvLandingWithLoginResponse:(id)arg1 userActionDelegate:(id)arg2;
- (id)showOdlvVerifyingWithOtpTypeSelected:(long long)arg1 ObfuscatedContact:(id)arg2 userActionDelegate:(id)arg3;
- (id)showTwoFAWithLoginResponse:(id)arg1 userActionDelegate:(id)arg2 unauthenticatedTwoFAService:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

