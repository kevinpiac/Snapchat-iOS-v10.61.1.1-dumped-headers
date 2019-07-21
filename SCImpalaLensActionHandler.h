//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCCLensActionHandling-Protocol.h"
#import "SCLensExplorerLensUnlockerListener-Protocol.h"
#import "SCLensLiveLensPreviewCameraPresenterDelegate-Protocol.h"

@class NSString, SCDeeplinkShareController, SCLensExplorerLensItem, SCLensExplorerSnapProUnlock, SCUserSession, UIViewController;
@protocol NavigationDelegate, SCLensExplorerLensUnlockerProtocol, SCLensLiveLensPreviewCameraPresenterProtocol;

@interface SCImpalaLensActionHandler : NSObject <SCLensLiveLensPreviewCameraPresenterDelegate, SCLensExplorerLensUnlockerListener, SCCLensActionHandling>
{
    SCDeeplinkShareController *_deeplinkShareController;
    id <SCLensLiveLensPreviewCameraPresenterProtocol> _liveLensPreviewCameraPresenter;
    id <SCLensExplorerLensUnlockerProtocol> _lensUnlocker;
    id <NavigationDelegate> _navigationDelegate;
    SCLensExplorerLensItem *_lensItem;
    SCLensExplorerSnapProUnlock *_lensExplorerSnapProUnlock;
    long long _roleType;
    long long _entryPoint;
    SCUserSession *_userSession;
    UIViewController *_viewController;
    unsigned long long _unlockFlowType;
}

- (void).cxx_destruct;
- (void)_presentWithLens:(id)arg1 withAction:(id)arg2;
- (void)_sendLensWithLensItem:(id)arg1;
- (void)dealloc;
- (id)initWithUserSession:(id)arg1 viewController:(id)arg2 navigationDelegate:(id)arg3 roleType:(long long)arg4 entryPoint:(long long)arg5;
- (void)lensCameraPresenter:(id)arg1 didUseLens:(id)arg2;
- (void)lensCameraPresenterDidComplete:(id)arg1;
- (void)lensExplorerUnlocker:(id)arg1 didAddPlaceholderLens:(id)arg2 withAction:(id)arg3;
- (void)lensExplorerUnlocker:(id)arg1 didFindAlreadyUnlockedLens:(id)arg2 withAction:(id)arg3;
- (void)lensExplorerUnlocker:(id)arg1 didSilentUnlockLens:(id)arg2 unlockSource:(unsigned long long)arg3 error:(id)arg4;
- (void)lensExplorerUnlocker:(id)arg1 didUnlockLens:(id)arg2 withAction:(id)arg3 error:(id)arg4;
- (void)openLensExplorer;
- (void)presentLensWithLens:(id)arg1;
- (void)sendLensWithLens:(id)arg1;
@property(nonatomic) unsigned long long unlockFlowType; // @synthesize unlockFlowType=_unlockFlowType;
- (id)toJavaScript;
@property(readonly, nonatomic) __weak SCUserSession *userSession; // @synthesize userSession=_userSession;
@property(readonly, nonatomic) __weak UIViewController *viewController; // @synthesize viewController=_viewController;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
