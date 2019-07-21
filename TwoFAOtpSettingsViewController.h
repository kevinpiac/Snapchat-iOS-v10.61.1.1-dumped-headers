//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TwoFASettingCodeVerificationViewController.h"

@class NSString, SCUserSession;

@interface TwoFAOtpSettingsViewController : TwoFASettingCodeVerificationViewController
{
    NSString *_srcFlowName;
    NSString *_otpSecret;
    SCUserSession *_userSession;
}

- (void).cxx_destruct;
- (id)getPageViewName;
- (id)initWithSourceFlowName:(id)arg1 otpSecret:(id)arg2 userSession:(id)arg3;
- (void)leftButtonPressed:(id)arg1;
- (void)verifyPressed:(id)arg1 successBlock:(CDUnknownBlockType)arg2 failureBlock:(CDUnknownBlockType)arg3;
- (void)verifySucceed:(id)arg1 recoveryCode:(id)arg2;

@end

