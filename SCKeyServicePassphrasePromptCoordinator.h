//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCGalleryPrivateGalleryEnterPasscodeViewControllerDelegate-Protocol.h"
#import "SCGalleryPrivateGalleryEnterPassphraseViewControllerDelegate-Protocol.h"
#import "SCKeyServicePassphrasePromptRequester-Protocol.h"

@class NSMutableSet, NSString, SCGalleryPrivateGalleryFlowPageViewController, SCGalleryUserSettingsManager, SCKeyService, SCQueuePerformer, UIViewController;
@protocol SCKeyServiceRequest, SCObserving;

@interface SCKeyServicePassphrasePromptCoordinator : NSObject <SCKeyServicePassphrasePromptRequester, SCGalleryPrivateGalleryEnterPasscodeViewControllerDelegate, SCGalleryPrivateGalleryEnterPassphraseViewControllerDelegate>
{
    SCQueuePerformer *_performer;
    id <SCObserving> _observeContext;
    _Bool _isAskingPassphrase;
    _Bool _isDismissing;
    NSMutableSet *_requestUUIDs;
    SCKeyService *_keyService;
    UIViewController *_topViewController;
    SCGalleryPrivateGalleryFlowPageViewController *_presentedViewController;
    id <SCKeyServiceRequest> _authorizationRequest;
    SCGalleryUserSettingsManager *_userSettingsManager;
}

- (void).cxx_destruct;
- (void)_cancelPendingRequestsOnMainThread;
- (void)_dismissPassphrasePrompt;
- (void)_dismissPassphrasePromptOnMainThread;
- (void)_showPassphrasePrompt;
- (id)allowedFutureAuthorizationDate;
- (void)cancelPromptWithRequestUUID:(id)arg1;
- (void)dealloc;
- (void)dismissPromptWhenMasterKeyIsAvailable;
- (void)enterPasscodeViewControllerDidPressBack:(id)arg1;
- (void)enterPassphraseViewControllerDidPressBack:(id)arg1;
- (id)initWithKeyService:(id)arg1 userSettingManager:(id)arg2 performer:(id)arg3;
- (void)requestAuthorizationWithPassphrase:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)showPromptWithRequestUUID:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
