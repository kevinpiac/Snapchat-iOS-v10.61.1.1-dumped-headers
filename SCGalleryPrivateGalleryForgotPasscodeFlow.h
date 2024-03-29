//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCGalleryInformationWebViewControllerDelegate-Protocol.h"
#import "SCGalleryPrivateGalleryConfirmPassphraseViewControllerDelegate-Protocol.h"
#import "SCGalleryPrivateGalleryEnterPasscodeViewControllerDelegate-Protocol.h"
#import "SCGalleryPrivateGalleryEnterPassphraseViewControllerDelegate-Protocol.h"
#import "SCGalleryPrivateGalleryFinishChangeViewControllerDelegate-Protocol.h"
#import "SCGalleryPrivateGalleryForgotPassphraseViewControllerDelegate-Protocol.h"
#import "UINavigationControllerDelegate-Protocol.h"
#import "UIViewControllerTransitioningDelegate-Protocol.h"

@class NSString, SCGalleryInformationWebViewController, SCGalleryPrivateGalleryConfirmPassphraseViewController, SCGalleryPrivateGalleryEnterPasscodeViewController, SCGalleryPrivateGalleryEnterPassphraseViewController, SCGalleryPrivateGalleryFinishChangeViewController, SCGalleryPrivateGalleryFlowNavigationController, SCGalleryPrivateGalleryForgotPassphraseViewController, SCUserSession, UIViewController;
@protocol SCGalleryPrivateGalleryForgotPasscodeFlowDelegate;

@interface SCGalleryPrivateGalleryForgotPasscodeFlow : NSObject <UINavigationControllerDelegate, UIViewControllerTransitioningDelegate, SCGalleryPrivateGalleryForgotPassphraseViewControllerDelegate, SCGalleryPrivateGalleryFinishChangeViewControllerDelegate, SCGalleryPrivateGalleryEnterPasscodeViewControllerDelegate, SCGalleryPrivateGalleryEnterPassphraseViewControllerDelegate, SCGalleryPrivateGalleryConfirmPassphraseViewControllerDelegate, SCGalleryInformationWebViewControllerDelegate>
{
    SCUserSession *_userSession;
    UIViewController *_fromViewController;
    NSString *_passcode;
    NSString *_passphrase;
    SCGalleryPrivateGalleryFlowNavigationController *_navigationController;
    SCGalleryPrivateGalleryForgotPassphraseViewController *_forgotPasscodeViewController;
    SCGalleryPrivateGalleryFinishChangeViewController *_finishChangePasscodeViewController;
    SCGalleryPrivateGalleryEnterPasscodeViewController *_createPasscodeViewController;
    SCGalleryPrivateGalleryEnterPasscodeViewController *_confirmPasscodeViewController;
    SCGalleryPrivateGalleryConfirmPassphraseViewController *_showPasscodeViewController;
    SCGalleryPrivateGalleryEnterPassphraseViewController *_createPassphraseViewController;
    SCGalleryPrivateGalleryConfirmPassphraseViewController *_confirmPassphraseViewController;
    SCGalleryInformationWebViewController *_informationViewController;
    id <SCGalleryPrivateGalleryForgotPasscodeFlowDelegate> _delegate;
}

- (void).cxx_destruct;
- (void)_removeAllPrivateEntriesWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)_reset;
- (id)animationControllerForDismissedController:(id)arg1;
- (id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3;
- (void)confirmPassphraseViewControllerDidConfirmPassphrase:(id)arg1;
- (void)confirmPassphraseViewControllerDidPressBack:(id)arg1;
- (void)confirmPassphraseViewControllerDidPressQuestionMark:(id)arg1;
@property(nonatomic) __weak id <SCGalleryPrivateGalleryForgotPasscodeFlowDelegate> delegate; // @synthesize delegate=_delegate;
- (void)enterPasscodeViewController:(id)arg1 didCreatePasscode:(id)arg2;
- (void)enterPasscodeViewControllerDidConfirmPasscode:(id)arg1;
- (void)enterPasscodeViewControllerDidPressBack:(id)arg1;
- (void)enterPasscodeViewControllerDidPressUsePassphrase:(id)arg1;
- (void)enterPassphraseViewController:(id)arg1 didCreatePassphrase:(id)arg2;
- (void)enterPassphraseViewControllerDidPressBack:(id)arg1;
- (void)finishChangeViewControllerDidPressFinish:(id)arg1;
- (void)forgotPassphraseViewControllerDidConfirm:(id)arg1;
- (void)forgotPassphraseViewControllerDidPressBack:(id)arg1;
- (void)forgotPassphraseViewControllerDidPressLearnMore:(id)arg1;
- (void)galleryInformationWebViewControllerDidPressBack:(id)arg1;
- (id)initWithUserSession:(id)arg1 fromViewController:(id)arg2;
- (_Bool)isStarted;
- (id)navigationController:(id)arg1 animationControllerForOperation:(long long)arg2 fromViewController:(id)arg3 toViewController:(id)arg4;
- (void)navigationController:(id)arg1 willShowViewController:(id)arg2 animated:(_Bool)arg3;
- (void)start;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

