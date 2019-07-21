//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCActionHandling-Protocol.h"
#import "SCProfileViewControllerDelegate-Protocol.h"

@class NSString, SCCognacBlizzardEventLoggingController, SCCognacDataStorage, SCCognacIAPMockPremiumContentHandler, SCCognacIAPPremiumContentHandler, SCCognacServiceCoordinator, SCCognacSwipeTransitionPresenter, UIViewController;
@protocol SCCognacChatDrawerCollectionViewSectionActionHandlerDelegate, SCGroupManager, SCImageDownloading;

@interface SCCognacChatDrawerCollectionViewSectionActionHandler : NSObject <SCProfileViewControllerDelegate, SCActionHandling>
{
    SCCognacDataStorage *_cognacDataStorage;
    SCCognacServiceCoordinator *_cognacServiceCoordinator;
    SCCognacBlizzardEventLoggingController *_eventLoggingController;
    id <SCGroupManager> _groupManager;
    SCCognacSwipeTransitionPresenter *_swipePresenter;
    id <SCImageDownloading> _imageDownloader;
    SCCognacIAPPremiumContentHandler *_premiumContentHandler;
    SCCognacIAPMockPremiumContentHandler *_mockPremiumContentHandler;
    UIViewController *_presentingViewController;
    id <SCCognacChatDrawerCollectionViewSectionActionHandlerDelegate> _delegate;
}

+ (id)announcerIdentifier;
- (void).cxx_destruct;
- (void)_handleWithSender:(id)arg1 tapActionModel:(id)arg2 fromSourceView:(id)arg3;
- (void)_launchAppInstanceWithAppId:(id)arg1 conversationId:(id)arg2 cell:(id)arg3;
- (void)_showGameProfile:(id)arg1;
- (void)_tryToLaunchWithAppId:(id)arg1 conversationId:(id)arg2 cell:(id)arg3;
- (void)didTapOnUpdateMessageViewButton:(id)arg1;
- (void)dismissProfileViewController:(id)arg1;
@property(readonly, nonatomic) SCCognacBlizzardEventLoggingController *eventLoggingController; // @synthesize eventLoggingController=_eventLoggingController;
@property(readonly, nonatomic) id <SCGroupManager> groupManager; // @synthesize groupManager=_groupManager;
- (_Bool)handleActionWithSender:(id)arg1 actionModel:(id)arg2 fromSourceView:(id)arg3;
- (id)initWithDataStorage:(id)arg1 serviceCoordinator:(id)arg2 presentingViewController:(id)arg3 eventLoggingController:(id)arg4 groupManager:(id)arg5 imageDownloader:(id)arg6 delegate:(id)arg7 premiumContentHandler:(id)arg8 mockPremiumContentHandler:(id)arg9;
- (void)logCognacDrawerTapEventWithConversationId:(id)arg1 tileState:(long long)arg2 hasActiveAppInstance:(_Bool)arg3 isNewApp:(_Bool)arg4 isUpdatedApp:(_Bool)arg5 ranking:(unsigned long long)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

