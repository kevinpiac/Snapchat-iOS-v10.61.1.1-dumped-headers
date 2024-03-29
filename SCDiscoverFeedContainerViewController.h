//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCSearchCardContainerViewController.h"

#import "SCCognacNotificationHandling-Protocol.h"
#import "SCDeepLinkableView-Protocol.h"
#import "SCSearchUserProfileDebugViewControllerDelegate-Protocol.h"
#import "SCShakeToReportDelegate-Protocol.h"
#import "SCStoriesContentViewControllingDelegate-Protocol.h"
#import "SCStoriesPage-Protocol.h"
#import "SCTabBarPage-Protocol.h"
#import "SCTraceEnabled-Protocol.h"

@class NSString, SCUserSession, UILabel, UIView;
@protocol NavigationDelegate, SCHovaOverscrollDelegate, SCReplyDelegate, SCStartChatDelegate, SCSwipeViewParentDelegate;

@interface SCDiscoverFeedContainerViewController : SCSearchCardContainerViewController <SCSearchUserProfileDebugViewControllerDelegate, SCStoriesContentViewControllingDelegate, SCTraceEnabled, SCShakeToReportDelegate, SCStoriesPage, SCTabBarPage, SCDeepLinkableView, SCCognacNotificationHandling>
{
    struct UIEdgeInsets _layoutInsets;
    UILabel *_rankingDebugLabel;
    id <SCHovaOverscrollDelegate> _hovaOverscrollDelegate;
    long long _storiesPageEntryType;
    SCUserSession *_userSession;
    id <NavigationDelegate> _navigationDelegate;
    id <SCReplyDelegate> _replyDelegate;
    id <SCSwipeViewParentDelegate> _swipeViewParentDelegate;
    id <SCStartChatDelegate> _startChatDelegate;
    CDUnknownBlockType _contentViewControllerBlockAfterInitialization;
}

- (void).cxx_destruct;
- (void)_didTapUserProfileDebugButton;
- (void)_setVersionLabelValueForCustomEndpoint:(id)arg1 astVersion:(id)arg2;
- (void)_updateVersionLabel;
- (id)activeCognacAppSessionId;
- (void)cardBackgroundViewDidUpdateTopLayoutInset;
- (_Bool)cognacHandleNotificationDismissed:(id)arg1;
- (_Bool)cognacHandleNotificationPressed:(id)arg1;
@property(copy, nonatomic) CDUnknownBlockType contentViewControllerBlockAfterInitialization; // @synthesize contentViewControllerBlockAfterInitialization=_contentViewControllerBlockAfterInitialization;
- (id)defaultProjectNameV2;
- (id)getPageViewName;
- (void)handleNotificationPressed:(id)arg1;
@property(nonatomic) __weak id <SCHovaOverscrollDelegate> hovaOverscrollDelegate; // @synthesize hovaOverscrollDelegate=_hovaOverscrollDelegate;
- (id)initWithContainerViewConfiguration:(id)arg1;
- (id)jiraMetaInfo;
- (void)myStoryActionTapped:(id)arg1;
- (void)myStoryTapped:(id)arg1;
- (void)myStoryViewTapped:(id)arg1;
@property(nonatomic) __weak id <NavigationDelegate> navigationDelegate; // @synthesize navigationDelegate=_navigationDelegate;
- (void)playFriendsStories:(id)arg1;
@property(nonatomic) __weak id <SCReplyDelegate> replyDelegate; // @synthesize replyDelegate=_replyDelegate;
- (id)sc_actionToolbarItem;
- (id)sc_tabBarItem;
- (void)scrollViewDidScroll:(id)arg1;
@property(nonatomic) __weak id <SCStartChatDelegate> startChatDelegate; // @synthesize startChatDelegate=_startChatDelegate;
@property(nonatomic) long long storiesPageEntryType; // @synthesize storiesPageEntryType=_storiesPageEntryType;
@property(nonatomic) __weak id <SCSwipeViewParentDelegate> swipeViewParentDelegate; // @synthesize swipeViewParentDelegate=_swipeViewParentDelegate;
@property(retain, nonatomic) SCUserSession *userSession; // @synthesize userSession=_userSession;
- (_Bool)shouldPopToRootViewController;
- (void)storiesContentViewControllerDidDismissOpera:(id)arg1;
- (void)storiesContentViewControllerDidStartOpera:(id)arg1;
- (void)storiesContentViewControllerDidUpdateTabBarPercentDarkMode:(id)arg1;
- (double)timeBeforeReturningToCamera;
- (void)updateTabBarDarkMode;
- (void)userProfileDebugViewControllerNeedsToDismiss:(id)arg1 animated:(_Bool)arg2;
- (void)viewDidAppearWithDeepLinkInfo:(id)arg1;
- (void)viewDidFullyAppear;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;
- (_Bool)viewingStory;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) UIView *hovaAccessoryView;
@property(readonly) Class superclass;

@end

