//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCActionHandling-Protocol.h"
#import "SCFriendUnifiedActionMenuActionHandlerDelegate-Protocol.h"
#import "SCFriendUnifiedProfileActionHandlerDelegate-Protocol.h"
#import "SCGroupUnifiedActionMenuActionHandlerDelegate-Protocol.h"
#import "SCGroupUnifiedProfileActionHandlerDelegate-Protocol.h"
#import "SCMyUnifiedProfileActionMenuActionHandlerDelegate-Protocol.h"
#import "SCTraceEnabled-Protocol.h"
#import "SCUnifiedActionMenuPresenterDelegate-Protocol.h"
#import "SCUnifiedProfilePresenterDelegate-Protocol.h"

@class NSString, SCLazy, SCUnifiedActionMenuPresenter, SCUnifiedProfilePresenter, SCUserSession, UIViewController;
@protocol NavigationDelegate, SCOpenUnifiedProfileActionHandlerDelegate, SCReplyDelegate, SCStartChatDelegate;

@interface SCOpenUnifiedProfileActionHandler : NSObject <SCFriendUnifiedProfileActionHandlerDelegate, SCGroupUnifiedProfileActionHandlerDelegate, SCUnifiedProfilePresenterDelegate, SCFriendUnifiedActionMenuActionHandlerDelegate, SCGroupUnifiedActionMenuActionHandlerDelegate, SCUnifiedActionMenuPresenterDelegate, SCMyUnifiedProfileActionMenuActionHandlerDelegate, SCTraceEnabled, SCActionHandling>
{
    SCUserSession *_userSession;
    SCLazy *_snapchattersDataProvider;
    SCUnifiedProfilePresenter *_unifiedProfilePresenter;
    SCUnifiedActionMenuPresenter *_unifiedActionMenuPresenter;
    id <SCStartChatDelegate> _startChatDelegate;
    id <SCReplyDelegate> _replyDelegate;
    id <NavigationDelegate> _navigationDelegate;
    UIViewController *_presentingViewController;
    id <SCOpenUnifiedProfileActionHandlerDelegate> _delegate;
}

- (void).cxx_destruct;
- (void)_applicationDidEnterBackground:(id)arg1;
- (void)_handleShowCameraForSnapForSnapchatter:(id)arg1;
- (void)_navigateToChatWithUsername:(id)arg1 deepLinkURL:(id)arg2;
- (void)_navigateToGroupChat:(id)arg1 deepLinkURL:(id)arg2;
- (void)_presentCameraWithGroupIdFromGroupActionSheet:(id)arg1;
- (void)_presentCameraWithSnapchatterFromFriendActionSheet:(id)arg1;
- (void)_presentFriendUnifiedActionSheetWithOpenFriendActionData:(id)arg1;
- (void)_presentFriendUnifiedProfileWithDataSource:(id)arg1 openningData:(id)arg2;
- (void)_presentFriendUnifiedProfileWithSnapchatter:(id)arg1 configuration:(id)arg2 openningData:(id)arg3;
- (void)_presentFriendUnifiedProfileWithSnapchatterFromActionSheet:(id)arg1 configuration:(id)arg2 openningData:(id)arg3 dataSource:(id)arg4;
- (void)_presentGroupUnifiedActionSheetWithGroupId:(id)arg1 sourcePageType:(id)arg2;
- (void)_presentGroupUnifiedProfileFromActionSheetWithGroupId:(id)arg1 openningData:(id)arg2 dataSource:(id)arg3;
- (void)_presentGroupUnifiedProfileWithGroupId:(id)arg1 openningData:(id)arg2;
- (void)_presentMyStoryUnifiedActionSheet:(id)arg1;
@property(nonatomic) __weak id <SCOpenUnifiedProfileActionHandlerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)didDismissUnifiedProfileWithUnifiedProfilePresenter:(id)arg1;
- (void)dismissMyUnifiedProfileActionMenuForActionHandler:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)dismissUnifiedActionMenuWithFriendUnifiedActionMenuActionHandler:(id)arg1 showAnimation:(_Bool)arg2;
- (void)dismissUnifiedActionMenuWithGroupUnifiedActionMenuActionHandler:(id)arg1 showAnimation:(_Bool)arg2;
- (void)friendUnifiedProfileActionHandler:(id)arg1 navigatesToChatForGroupId:(id)arg2 deepLinkURL:(id)arg3;
- (void)friendUnifiedProfileActionHandler:(id)arg1 navigatesToChatForSnapchatterUsername:(id)arg2 deepLinkURL:(id)arg3;
- (void)groupUnifiedProfileActionHandler:(id)arg1 navigatesToChatForGroupId:(id)arg2 deepLinkURL:(id)arg3;
- (void)groupUnifiedProfileActionHandler:(id)arg1 navigatesToChatForSnapchatterUsername:(id)arg2 deepLinkURL:(id)arg3;
- (void)groupUnifiedProfileActionHandler:(id)arg1 showFriendProfileForSnapchatter:(id)arg2;
- (void)handleActionFromMyUnifiedProfileActionMenuForActionHandler:(id)arg1 actionModel:(id)arg2;
- (_Bool)handleActionWithSender:(id)arg1 actionModel:(id)arg2 fromSourceView:(id)arg3;
- (id)initWithUserSession:(id)arg1 snapchattersDataProvider:(id)arg2;
- (void)navigateToAudioCallWithFriendUnifiedActionMenuActionHandler:(id)arg1 snapchatter:(id)arg2;
- (void)navigateToAudioWithGroupUnifiedActionMenuActionHandler:(id)arg1 groupId:(id)arg2;
- (void)navigateToChatWithFriendUnifiedActionMenuActionHandler:(id)arg1 snapchatter:(id)arg2;
- (void)navigateToChatWithGroupUnifiedActionMenuActionHandler:(id)arg1 groupId:(id)arg2;
- (void)navigateToVideoCallWithFriendUnifiedActionMenuActionHandler:(id)arg1 snapchatter:(id)arg2;
- (void)navigateToVideoWithGroupUnifiedActionMenuActionHandler:(id)arg1 groupId:(id)arg2;
@property(nonatomic) __weak id <NavigationDelegate> navigationDelegate; // @synthesize navigationDelegate=_navigationDelegate;
- (void)presentCameraWithFriendUnifiedActionMenuActionHandler:(id)arg1 snapchatter:(id)arg2;
- (void)presentCameraWithGroupUnifiedActionMenuActionHandler:(id)arg1 groupId:(id)arg2;
- (void)presentUnifiedProfileWithFriendUnifiedActionMenuActionHandler:(id)arg1 snapchatter:(id)arg2 configuration:(id)arg3 sourcePageType:(id)arg4;
- (void)presentUnifiedProfileWithGroupUnifiedActionMenuActionHandler:(id)arg1 groupId:(id)arg2 sourcePageType:(id)arg3;
@property(nonatomic) __weak UIViewController *presentingViewController; // @synthesize presentingViewController=_presentingViewController;
@property(nonatomic) __weak id <SCReplyDelegate> replyDelegate; // @synthesize replyDelegate=_replyDelegate;
@property(nonatomic) __weak id <SCStartChatDelegate> startChatDelegate; // @synthesize startChatDelegate=_startChatDelegate;
- (void)unifiedActionMenuPresenterDidDismiss:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

