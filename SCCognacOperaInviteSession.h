//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCCognacFriendsListViewControllerDelegate-Protocol.h"
#import "SCCognacNudgeFriendPresenterDelegate-Protocol.h"
#import "SCCognacOperaSession-Protocol.h"
#import "SCCognacRingFriendsViewPresenting-Protocol.h"
#import "SCCognacSwipeTransitionPresenterDelegate-Protocol.h"

@class NSDictionary, NSString, SCAppNotification, SCCognacAppViewLifeCycleListenerAnnouncer, SCCognacFriendsListViewController, SCCognacNudgeFriendPresenter, SCCognacOperaDataSource, SCCognacSwipeTransitionPresenter, SCOperaViewController;
@protocol SCCognacNotificationManager;

@interface SCCognacOperaInviteSession : NSObject <SCCognacSwipeTransitionPresenterDelegate, SCCognacNudgeFriendPresenterDelegate, SCCognacFriendsListViewControllerDelegate, SCCognacRingFriendsViewPresenting, SCCognacOperaSession>
{
    SCCognacNudgeFriendPresenter *_nudgeSingleFriendPresenter;
    SCCognacSwipeTransitionPresenter *_friendsPickerPresenter;
    SCCognacFriendsListViewController *_friendsListVC;
    id <SCCognacNotificationManager> _notificationManager;
    NSDictionary *_userIdToNamToDisplayMap;
    SCAppNotification *_initiateNotification;
    double _interactionViewHeight;
    double _inviteButtonCenterX;
    SCOperaViewController *_operaVC;
    SCCognacAppViewLifeCycleListenerAnnouncer *_viewLifeCycleAnnouncer;
    SCCognacOperaDataSource *_dataSource;
}

+ (id)registeredEventsForOperaSession;
- (void).cxx_destruct;
- (id)_availableFriendsToInvite:(id)arg1;
- (id)_availableFriendsToInvite:(id)arg1 presentUserIds:(id)arg2;
- (void)_fetchFriendsInConversationWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)_inviteFriendsWithFriendIds:(id)arg1;
- (void)_launchFriendsListVC:(id)arg1;
- (void)_logEventWithEventName:(id)arg1 paramDict:(id)arg2;
- (void)_notificationDismissButtonPressed;
- (id)_notificationDismissView;
- (double)_nudgeSingleFriendPopoverViewBottomOffset;
- (void)_presentNudgeFriendViewWithViewModel:(id)arg1;
- (void)_revokeInviteNotificationWithInvitedUserIds:(id)arg1;
- (CDUnknownBlockType)_ringFriendsWVJBHandler;
- (void)_sendInitiateNotificationWithFriendIds:(id)arg1;
- (void)clearInvitedFriends;
- (void)cognacSwipeTransitionPresenterDidDismiss:(id)arg1;
@property(retain, nonatomic) SCCognacOperaDataSource *dataSource; // @synthesize dataSource=_dataSource;
- (void)endSession;
- (void)friendsListViewController:(id)arg1 didInviteFriendIds:(id)arg2;
- (void)friendsListViewController:(id)arg1 didRevokeInvitedFriendIds:(id)arg2;
- (void)friendsListViewControllerDidDismiss:(id)arg1;
- (id)init;
- (void)logInGameButtonTapEvent:(long long)arg1;
- (void)logInGameInviteSentEventWithSelectedFriendsCount:(unsigned long long)arg1;
- (void)nudgeFriendPresenterDidInviteFriend:(id)arg1;
- (void)nudgeFriendPresenterWillDismissPresenter:(id)arg1;
@property(nonatomic) __weak SCOperaViewController *operaVC; // @synthesize operaVC=_operaVC;
- (void)operaViewDidSendEvent:(id)arg1 context:(id)arg2 params:(id)arg3;
- (void)pauseSession;
- (void)presentRingFriendsView;
- (id)registeredWVJBHandlerNameToHandler;
- (void)resumeSession;
@property(retain, nonatomic) SCCognacAppViewLifeCycleListenerAnnouncer *viewLifeCycleAnnouncer; // @synthesize viewLifeCycleAnnouncer=_viewLifeCycleAnnouncer;
- (void)startSession;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

