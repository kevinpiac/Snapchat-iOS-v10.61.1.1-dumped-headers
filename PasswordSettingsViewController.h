//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCGenericSettingsViewController.h"

#import "NewPasswordViewDelegate-Protocol.h"
#import "SCRegisterV2ViewDelegate-Protocol.h"

@class NSString, SCAuthenticatedPasswordService, SCScopedAccess, SCUnauthenticatedPasswordService;
@protocol NewPasswordView;

@interface PasswordSettingsViewController : SCGenericSettingsViewController <NewPasswordViewDelegate, SCRegisterV2ViewDelegate>
{
    id <NewPasswordView> _newPasswordView;
    NSString *_preAuthToken;
    NSString *_usernameOrEmail;
    _Bool _isResetPassword;
    SCAuthenticatedPasswordService *_authenticatedPasswordService;
    SCUnauthenticatedPasswordService *_unauthenticatedPasswordService;
    SCScopedAccess *_stateTransitionLogger;
    _Bool _pwVerifiedStrong;
}

+ (id)strengthColors;
+ (id)strengthMessages;
- (void).cxx_destruct;
- (void)_changePassword:(id)arg1 isResetPassword:(_Bool)arg2 preAuthToken:(id)arg3 usernameOrEmail:(id)arg4 successBlock:(CDUnknownBlockType)arg5 failureBlock:(CDUnknownBlockType)arg6;
- (void)_changePassword:(id)arg1 successBlock:(CDUnknownBlockType)arg2 failureBlock:(CDUnknownBlockType)arg3;
- (void)_getPasswordStrength:(id)arg1 quickCheck:(_Bool)arg2 successBlock:(CDUnknownBlockType)arg3 failureBlock:(CDUnknownBlockType)arg4;
- (void)_getPasswordStrengthPreLogin:(id)arg1 quickCheck:(_Bool)arg2 preAuthToken:(id)arg3 usernameOrEmail:(id)arg4 successBlock:(CDUnknownBlockType)arg5 failureBlock:(CDUnknownBlockType)arg6;
- (void)_initObserver;
- (_Bool)_isPreLoginResetPassword;
- (void)backButtonPressed:(id)arg1;
- (void)changePassword;
- (void)checkPasswordStrength;
- (void)continueButtonClicked;
- (id)getPageViewName;
- (id)getTitle;
- (id)initWithAuthenticatedPasswordService:(id)arg1;
- (id)initWithIsResetPassword:(_Bool)arg1 preAuthToken:(id)arg2 usernameOrEmail:(id)arg3 authenticatedPasswordService:(id)arg4 unauthenticatedPasswordService:(id)arg5;
- (id)initWithIsResetPassword:(_Bool)arg1 preAuthToken:(id)arg2 usernameOrEmail:(id)arg3 unauthenticatedPasswordService:(id)arg4;
- (void)inputKeyboardWillChangeFrame:(id)arg1;
- (void)leftSwipeCancelled;
- (void)leftSwipePrepare;
- (void)loadView;
@property(nonatomic) _Bool pwVerifiedStrong; // @synthesize pwVerifiedStrong=_pwVerifiedStrong;
- (void)setIndicator:(id)arg1;
- (void)textViewDidChange:(id)arg1;
- (_Bool)textViewShouldBeginEditing:(id)arg1;
- (_Bool)textViewShouldReturn:(id)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

