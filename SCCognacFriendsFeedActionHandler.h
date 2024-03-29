//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCActionHandling-Protocol.h"
#import "SCCognacNotificationHandling-Protocol.h"
#import "SCCognacOperaPresenterDelegate-Protocol.h"

@class NSString, SCLazy, SCUserSession, UIViewController;
@protocol NavigationDelegate;

@interface SCCognacFriendsFeedActionHandler : NSObject <SCCognacOperaPresenterDelegate, SCActionHandling, SCCognacNotificationHandling>
{
    SCLazy *_cognacOperaPresenter;
    SCUserSession *_userSession;
    id <NavigationDelegate> _deepLinkNavigationDelegate;
    UIViewController *_presentingViewController;
}

- (void).cxx_destruct;
- (void)_presentCognacWithOpenAppActionData:(id)arg1 baseView:(id)arg2;
- (id)activeCognacAppSessionId;
- (_Bool)cognacHandleNotificationDismissed:(id)arg1;
- (_Bool)cognacHandleNotificationPressed:(id)arg1;
- (void)cognacOperaPresenter:(id)arg1 didFinishPresentViewerWithPlayerItem:(id)arg2;
- (void)cognacOperaPresenter:(id)arg1 willDismissViewerWithParticipantInfo:(id)arg2;
- (void)cognacOperaPresenterDidBeginPresentViewer:(id)arg1;
- (void)cognacOperaPresenterDidFinishDismissViewer:(id)arg1;
- (void)dismissApp;
- (_Bool)handleActionWithSender:(id)arg1 actionModel:(id)arg2 fromSourceView:(id)arg3;
- (id)initWithUserSession:(id)arg1 deepLinkNavigationDelegate:(id)arg2;
- (_Bool)isPresentingApp;
@property(nonatomic) __weak UIViewController *presentingViewController; // @synthesize presentingViewController=_presentingViewController;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

