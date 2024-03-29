//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCGalleryLockedRateLimitControllerDelegate-Protocol.h"
#import "SCGalleryPasscodeViewDelegate-Protocol.h"
#import "SCGalleryPrivateGalleryChangePasscodeFlowDelegate-Protocol.h"
#import "SCGalleryPrivateGalleryForgotPasscodeFlowDelegate-Protocol.h"
#import "SCGalleryPrivateGalleryReauthenticateFlowDelegate-Protocol.h"
#import "SCGalleryPrivateTabStateController-Protocol.h"
#import "SCKeyServiceListener-Protocol.h"

@class NSString, SCGalleryLockedRateLimitController, SCGalleryPasscodeView, SCGalleryPrivateGalleryChangePasscodeFlow, SCGalleryPrivateGalleryForgotPasscodeFlow, SCGalleryPrivateGalleryReauthenticateFlow, SCUserSession, UIButton, UIView, UIViewController;

@interface SCGalleryPrivateTabLockedNormalStateController : NSObject <SCGalleryPasscodeViewDelegate, SCGalleryLockedRateLimitControllerDelegate, SCKeyServiceListener, SCGalleryPrivateGalleryChangePasscodeFlowDelegate, SCGalleryPrivateGalleryReauthenticateFlowDelegate, SCGalleryPrivateGalleryForgotPasscodeFlowDelegate, SCGalleryPrivateTabStateController>
{
    SCUserSession *_userSession;
    UIViewController *_containerViewController;
    _Bool _hasPasscodeOptions;
    UIView *_view;
    SCGalleryPasscodeView *_passcodeView;
    UIButton *_passcodeOptionsButton;
    SCGalleryLockedRateLimitController *_lockedRateLimitController;
    SCGalleryPrivateGalleryChangePasscodeFlow *_changePasscodeFlow;
    SCGalleryPrivateGalleryReauthenticateFlow *_reauthenticateFlow;
    SCGalleryPrivateGalleryForgotPasscodeFlow *_forgotPasscodeFlow;
}

- (void).cxx_destruct;
- (void)_applicationWillEnterBackground:(id)arg1;
- (void)_didPressPasscodeOptionsButton;
- (void)_dismissRateLimitViewAnimated;
- (_Bool)_isChangeOrForgotPasscodeFlowPresented;
- (void)galleryPasscodeViewPasscodeDidChange:(id)arg1;
- (void)galleryPasscodeViewPasscodeEntered:(id)arg1;
- (id)initWithUserSession:(id)arg1 containerViewController:(id)arg2 hasPasscodeOptions:(_Bool)arg3;
- (void)keyService:(id)arg1 didChangeAllowedFutureAuthorizationDate:(id)arg2 errorCode:(long long)arg3;
- (void)lockedRateLimitControllerDidReachAllowedFutureDate:(id)arg1;
- (void)privateGalleryChangePasscodeFlowDidCancel:(id)arg1;
- (void)privateGalleryChangePasscodeFlowDidFinish:(id)arg1;
- (void)privateGalleryForgotPasscodeFlowDidCancel:(id)arg1;
- (void)privateGalleryForgotPasscodeFlowDidFinish:(id)arg1;
- (void)privateGalleryReauthenticateFlowDidCancel:(id)arg1;
- (void)privateGalleryReauthenticateFlowDidSucceed:(id)arg1;
- (void)reset;
- (id)view;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

