//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCEventListener-Protocol.h"
#import "SCOpenUnifiedProfileActionHandlerDelegate-Protocol.h"
#import "SCOperaSession-Protocol.h"
#import "SCPublicContentMiniProfileControllerDelegate-Protocol.h"
#import "SCSearchStoryShareSessionDelegate-Protocol.h"
#import "SCSerengetiViewControllerDismissalDelegate-Protocol.h"
#import "SCStoryMiniProfileViewControllerDelegate-Protocol.h"

@class NSString, SCDiscoverFeedSubscribeRequestHandler, SCEventListenerAnnouncer, SCMiniProfileActionHandler, SCOpenUnifiedProfileActionHandler, SCOperaViewController, SCPublicContentMiniProfileController, SCSearchFriendProvider, SCSearchStoryShareSession, SCStoriesSnapPlaybackMetadata, SCStoryMiniProfileViewController, SCUserSession;
@protocol NavigationDelegate, SCReplyDelegate, SCStartChatDelegate;

@interface SCFriendStoryChromeInteractionSession : NSObject <SCPublicContentMiniProfileControllerDelegate, SCStoryMiniProfileViewControllerDelegate, SCSearchStoryShareSessionDelegate, SCEventListener, SCSerengetiViewControllerDismissalDelegate, SCOpenUnifiedProfileActionHandlerDelegate, SCOperaSession>
{
    SCUserSession *_userSession;
    id <NavigationDelegate> _navigationDelegate;
    SCOperaViewController *_operaVC;
    id <SCReplyDelegate> _replyDelegate;
    id <SCStartChatDelegate> _startChatDelegate;
    SCPublicContentMiniProfileController *_publicContentMiniProfileController;
    SCStoriesSnapPlaybackMetadata *_currentStorySnap;
    _Bool _interactingFromContextMenu;
    SCSearchFriendProvider *_friendProvider;
    SCMiniProfileActionHandler *_miniProfileActionHandler;
    SCStoryMiniProfileViewController *_storyMiniProfileViewController;
    SCSearchStoryShareSession *_storyShareSession;
    SCEventListenerAnnouncer *_eventAnnouncer;
    SCDiscoverFeedSubscribeRequestHandler *_subscribeRequestHandler;
    SCOpenUnifiedProfileActionHandler *_openUnifiedProfileActionHandler;
}

+ (id)announcerIdentifier;
- (void).cxx_destruct;
- (void)_createOpenUnifiedProfileActionHandlerIfNeeded;
- (void)_displayUserMiniProfileWithFriendUername:(id)arg1;
- (void)_handleSubscribeButtonPressedWithContext:(id)arg1 params:(id)arg2;
- (void)_miniProfileActionHandler:(id)arg1 didUpdateSubscribeState:(unsigned long long)arg2;
- (void)_openRepostCreatorMiniProfileForFriendStories;
- (void)_prepareForMiniProfilePresentation;
- (void)_showMiniProfileWithStoriesPlaybackSequence;
- (void)_showUnifiedProfileForSnapchatter:(id)arg1;
- (void)addListener:(id)arg1;
- (void)didDismissProfile;
- (void)didDismissPublicContentMiniProfile;
- (void)didTriggerEventWithEventName:(id)arg1 announcerIdentifier:(id)arg2 extraData:(id)arg3;
- (id)initWithUserSession:(id)arg1 navigationDelegate:(id)arg2 operaViewController:(id)arg3 replyDelegate:(id)arg4 startChatDelegate:(id)arg5;
- (void)miniProfileViewControllerDidUpdateFriendStatus:(id)arg1 friend:(id)arg2;
- (void)openUnifiedProfileActionHandler:(id)arg1 navigateToChatWithUsername:(id)arg2 deepLinkURL:(id)arg3;
- (void)openUnifiedProfileActionHandlerDidDismissUnifiedProfile:(id)arg1;
- (void)operaViewDidSendEvent:(id)arg1 context:(id)arg2 params:(id)arg3;
- (void)publicContentMiniProfile:(id)arg1 didTapButtonWithEntry:(id)arg2;
- (id)registeredEventsForOperaSession;
- (void)removeListener:(id)arg1;
- (void)searchModalPresenterDismissViewController:(id)arg1 animated:(_Bool)arg2;
- (void)searchModalPresenterPresentViewController:(id)arg1 animated:(_Bool)arg2;
- (void)serengetiViewControllerDidDismiss:(id)arg1;
- (void)storyMiniProfileViewControllerDidSelectOptionSendStory:(id)arg1;
- (void)storyMiniProfileViewControllerDidSelectOptionShareStoryURL:(id)arg1;
- (void)storyMiniProfileViewControllerDidTapActionButton:(id)arg1;
- (id)storyMiniProfileViewControllerOperaDataModelToPresent:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

