//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GenericSettingsPasswordViewController.h"

@class SCAuthenticatedPasswordService, SCReauthenticationManager;

@interface ChangePasswordReauthViewController : GenericSettingsPasswordViewController
{
    SCReauthenticationManager *_reauthenticationManager;
    SCAuthenticatedPasswordService *_authenticatedPasswordService;
}

- (void).cxx_destruct;
- (void)continueButtonBarPressed:(id)arg1;
- (id)getInfo;
- (id)getPageViewName;
- (id)getTitle;
- (id)initWithUserSession:(id)arg1 reauthenticationManager:(id)arg2 authenticatedPasswordService:(id)arg3;

@end

