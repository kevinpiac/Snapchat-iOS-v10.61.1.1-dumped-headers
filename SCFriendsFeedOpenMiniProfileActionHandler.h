//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCActionHandling-Protocol.h"
#import "SCGroupMiniProfileViewControllerDelegate-Protocol.h"
#import "SCMiniProfileViewControllerDelegate-Protocol.h"

@class NSString, SCActionModel, SCFriendsFeedOpenCameraActionHandler, SCLazy, SCOpenUnifiedProfileActionHandler, SCUserSession, UIViewController;
@protocol NavigationDelegate, SCReplyDelegate, SCSearchModalPresenting, SCStartChatDelegate;

@interface SCFriendsFeedOpenMiniProfileActionHandler : NSObject <SCMiniProfileViewControllerDelegate, SCGroupMiniProfileViewControllerDelegate, SCActionHandling>
{
    SCUserSession *_userSession;
    SCFriendsFeedOpenCameraActionHandler *_openCameraHandler;
    SCActionModel *_openCameraActionModel;
    SCLazy *_snapchattersDataTracker;
    SCLazy *_snapchattersDataMutator;
    SCLazy *_snapchattersDataProvider;
    SCLazy *_userProvider;
    SCLazy *_viewedIncomingFriendsTracker;
    SCLazy *_friendScoreProvider;
    SCOpenUnifiedProfileActionHandler *_openUnifiedProfileActionHandler;
    UIViewController *_presentedViewController;
    _Bool _preventRecursiveOptions;
    id <SCStartChatDelegate> _startChatDelegate;
    id <SCReplyDelegate> _replyDelegate;
    id <NavigationDelegate> _navigationDelegate;
    UIViewController *_presentingViewController;
    id <SCSearchModalPresenting> _searchModalPresenter;
}

- (void).cxx_destruct;
- (void)_applicationDidEnterBackground:(id)arg1;
- (void)_handleOpenCameraAction;
- (void)_navigateToChatWithUsername:(id)arg1 deepLinkURL:(id)arg2;
- (void)_navigateToGroupChat:(id)arg1;
- (void)_navigateToGroupChat:(id)arg1 deepLinkURL:(id)arg2;
- (void)_openFriendMiniProfileForSnapchatter:(id)arg1 withPageType:(long long)arg2 withAddSourceType:(long long)arg3 withFeedId:(id)arg4 withCellViewPosition:(long long)arg5;
- (void)groupMiniProfileController:(id)arg1 didFinishWatchingAvailableStories:(id)arg2 viewingType:(long long)arg3;
- (void)groupMiniProfileController:(id)arg1 wantsToNavigateToChatForFriend:(id)arg2 deepLinkURL:(id)arg3;
- (void)groupMiniProfileControllerDidPressChatButton:(id)arg1;
- (void)groupMiniProfileControllerDidPressSnapButton:(id)arg1;
- (void)groupMiniProfileControllerDidUpdateGroup:(id)arg1;
- (_Bool)handleActionWithSender:(id)arg1 actionModel:(id)arg2 fromSourceView:(id)arg3;
- (id)initWithUserSession:(id)arg1 openCameraActionHandler:(id)arg2 openUnifiedProfileActionHandlerDelegate:(id)arg3 snapchattersDataProvider:(id)arg4 snapchattersDataMutator:(id)arg5 snapchattersDataTracker:(id)arg6 userInfoProvider:(id)arg7 viewedIncomingFriendsTracker:(id)arg8 friendScoreProvider:(id)arg9;
- (void)miniProfileController:(id)arg1 wantsToNavigateToChatWithDeepLinkURL:(id)arg2;
- (void)miniProfileViewController:(id)arg1 didFinishWatchingAvailableStories:(id)arg2 viewingType:(long long)arg3;
- (void)miniProfileViewControllerDidPressSnapButton:(id)arg1;
@property(nonatomic) __weak id <NavigationDelegate> navigationDelegate; // @synthesize navigationDelegate=_navigationDelegate;
@property(nonatomic) __weak UIViewController *presentingViewController; // @synthesize presentingViewController=_presentingViewController;
@property(nonatomic) _Bool preventRecursiveOptions; // @synthesize preventRecursiveOptions=_preventRecursiveOptions;
@property(nonatomic) __weak id <SCReplyDelegate> replyDelegate; // @synthesize replyDelegate=_replyDelegate;
@property(nonatomic) __weak id <SCSearchModalPresenting> searchModalPresenter; // @synthesize searchModalPresenter=_searchModalPresenter;
@property(nonatomic) __weak id <SCStartChatDelegate> startChatDelegate; // @synthesize startChatDelegate=_startChatDelegate;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

