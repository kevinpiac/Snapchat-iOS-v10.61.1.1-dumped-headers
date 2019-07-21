//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GenericSettingsPasswordViewController.h"

@class NSString, SCEmailManager, SCReauthenticationManager;

@interface EmailSettingsPasswordViewController : GenericSettingsPasswordViewController
{
    SCEmailManager *_emailManager;
    SCReauthenticationManager *_reauthenticationManager;
    NSString *_email;
}

- (void).cxx_destruct;
- (void)_reauthAndUpdateEmail:(id)arg1 password:(id)arg2;
- (void)continueButtonBarPressed:(id)arg1;
@property(retain, nonatomic) NSString *email; // @synthesize email=_email;
- (id)getInfo;
- (id)getPageViewName;
- (id)getTitle;
- (id)init;
- (id)initWithUserSession:(id)arg1 newEmail:(id)arg2 reauthenticationManager:(id)arg3 emailManager:(id)arg4;

@end

