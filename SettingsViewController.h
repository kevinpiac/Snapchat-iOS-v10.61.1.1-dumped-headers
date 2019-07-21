//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCLeftSwipableViewController.h"

#import "SCCommerceOperaPresenterDelegate-Protocol.h"
#import "SCHeaderDataSource-Protocol.h"
#import "SCHeaderDelegate-Protocol.h"
#import "SCScanResultViewControllerDelegate-Protocol.h"
#import "SCSettingHeaderPromptViewDelegate-Protocol.h"
#import "SCShareUsernameControllerDelegate-Protocol.h"
#import "UINavigationControllerDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class FBKVOController, NSArray, NSString, SCArroyoConversationIdsManager, SCAuthenticatedPhoneManager, SCCommerceOperaPresenter, SCHeader, SCLazy, SCReauthenticationManager, SCSearchHistoryRequestService, SCSettingHeaderPromptView, SCUserSession, UILabel, UILongPressGestureRecognizer, UITableView;
@protocol NavigationDelegate, SCCanceling, SCChatConversationManager, SCNativeMessagingFeedManaging, SCSettingsUserActionDelegate, SCSpectaclesPairingDelegate, SCStartChatDelegate, SCUserSessionWorkflowDelegate;

@interface SettingsViewController : SCLeftSwipableViewController <SCHeaderDataSource, SCHeaderDelegate, UINavigationControllerDelegate, SCShareUsernameControllerDelegate, SCSettingHeaderPromptViewDelegate, SCScanResultViewControllerDelegate, SCCommerceOperaPresenterDelegate, UITableViewDataSource, UITableViewDelegate>
{
    SCUserSession *_userSession;
    id <SCUserSessionWorkflowDelegate> _userSessionDelegate;
    NSArray *_settingsAccountOptions;
    NSArray *_settingsWhoCanOptions;
    NSArray *_settingsAccountActions;
    NSArray *_settingsSupport;
    NSArray *_settingsInformationOptions;
    SCReauthenticationManager *_reauthenticationManager;
    SCAuthenticatedPhoneManager *_authenticatedPhoneManager;
    SCSearchHistoryRequestService *_searchHistoryRequestService;
    SCCommerceOperaPresenter *_commercePresenter;
    id <SCSettingsUserActionDelegate> _userActionDelegate;
    id <SCSpectaclesPairingDelegate> _pairingDelegate;
    id <SCStartChatDelegate> _startChatDelegate;
    id <SCCanceling> _managedBusinessProfilesObserver;
    id <SCCanceling> _hasPendingRoleInvitesObserver;
    NSArray *_managedBusinessProfiles;
    _Bool _hasPendingBusinessInvites;
    long long _exitType;
    SCLazy *_lazyFriendmojiService;
    SCLazy *_lazyFriendsFeedDataCoordinator;
    SCLazy *_lazyFriendsFeedLoadingStatusManager;
    id <SCChatConversationManager> _conversationManager;
    SCLazy *_lazySnapchattersDataFetcher;
    SCLazy *_lazySnapchattersDataMutator;
    SCLazy *_lazySnapchattersDataTracker;
    SCLazy *_lazyBlockedSnapchatterFetcher;
    SCLazy *_lazySnapProUserProfileIdProvider;
    SCArroyoConversationIdsManager *_lazyArroyoConversationIdsManager;
    id <SCNativeMessagingFeedManaging> _nativeMessagingFeedManager;
    id <NavigationDelegate> _navigationDelegate;
    UILongPressGestureRecognizer *_press;
    SCHeader *_header;
    UITableView *_tableView;
    UILabel *_madeLabel;
    FBKVOController *_KVOController;
    SCSettingHeaderPromptView *_headerPromptView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) FBKVOController *KVOController; // @synthesize KVOController=_KVOController;
- (long long)_businessOptionForIndexPath:(id)arg1 adjustedRow:(long long *)arg2;
- (void)_clearLensData;
- (void)_clearLocationHistory;
- (void)_clearRecentlyUsedStickerTags;
- (void)_clearSearchHistory;
- (void)_clearStickerSearch;
- (void)_didSelectUsernameCell;
- (long long)_getSettingInformationForRow:(long long)arg1;
- (long long)_getSettingsAccountActionForRow:(long long)arg1;
- (long long)_getSettingsSupportSectionForRow:(long long)arg1;
- (void)_initSettingsAccountActions;
- (void)_initSettingsInformationOptions;
- (void)_initSettingsSupport;
- (long long)_numberOfRowsInAccountActionsSection;
- (long long)_numberOfRowsInSupportSection;
- (id)_pageNameForPageView;
- (void)_presentBitmojiSettings;
- (void)_presentGalleryBackupWithBackupNow:(_Bool)arg1;
- (void)_presentGalleryLogoutAlertWithPendingSnapsCount:(unsigned long long)arg1 pendingStickersCount:(unsigned long long)arg2;
- (void)_presentJoinSnapchatBeta;
- (void)_presentLogoutAlert;
- (void)_presentOurStorySnaps;
- (void)_presentReportAnIssue;
- (void)_presentSafetyCenter;
- (void)_presentSnapStoreV2;
- (void)_presentSnapcodeSettings;
- (void)_promptToClearLensData;
- (void)_promptToClearLocationHistory;
- (void)_promptToClearSearchHistory;
- (_Bool)_shouldShowBusinessSection;
- (_Bool)_shouldShowPrompt;
- (_Bool)_shouldShowSupportSection;
- (void)_showComposerPageForHandler:(id)arg1 withRouteName:(id)arg2;
- (void)_updateCacheSize;
- (void)addEmailObservers;
- (void)addPrivacyObservers;
- (void)addSettingsObservers;
- (id)backgroundColorForHeader;
- (void)commerceOperaViewerDidDisappear:(id)arg1 unlockedLens:(id)arg2 additionalInfo:(id)arg3 wasBackgrounded:(_Bool)arg4;
- (void)dealloc;
- (void)didBecomeActive;
- (void)didMoveToParentViewController:(id)arg1;
- (_Bool)disableLeftSwipe;
- (id)getPageViewName;
- (long long)getSettingsWhoCanOptionForRow:(long long)arg1;
@property(retain, nonatomic) SCHeader *header; // @synthesize header=_header;
@property(retain, nonatomic) SCSettingHeaderPromptView *headerPromptView; // @synthesize headerPromptView=_headerPromptView;
- (id)imageForLeftButtonInState:(unsigned long long)arg1;
- (id)imageForRightButtonInState:(unsigned long long)arg1;
- (_Bool)inValidView:(id)arg1;
- (void)initHeader;
- (void)initPromptHeader;
- (void)initSettingsAccountOptions;
- (void)initWhoCanOptions;
- (id)initWithUserSession:(id)arg1 userSessionDelegate:(id)arg2 friendmojiService:(id)arg3 userActionDelegate:(id)arg4 navigationDelegate:(id)arg5 pairingDelegate:(id)arg6 startChatDelegate:(id)arg7 friendsFeedDataCoordinator:(id)arg8 friendsFeedLoadingStatusManager:(id)arg9 conversationManager:(id)arg10 snapchattersDataFetcher:(id)arg11 snapchattersDataMutator:(id)arg12 snapchattersDataTracker:(id)arg13 blockedSnapchatterFetcher:(id)arg14 snapProProfileIdProvider:(id)arg15 arroyoConversationIdsManager:(id)arg16 nativeMessagingFeedManager:(id)arg17;
- (void)leftButtonPressed;
- (void)leftSwipeSucceed;
- (void)loadView;
- (void)logPresentPreview;
@property(retain, nonatomic) UILabel *madeLabel; // @synthesize madeLabel=_madeLabel;
- (id)navigationController:(id)arg1 animationControllerForOperation:(long long)arg2 fromViewController:(id)arg3 toViewController:(id)arg4;
@property(nonatomic) __weak id <NavigationDelegate> navigationDelegate; // @synthesize navigationDelegate=_navigationDelegate;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)presentActivityViewController:(id)arg1 shareUsernameController:(id)arg2;
- (void)presentAdditionalServices;
- (void)presentBirthdaySettings;
- (void)presentBlocked;
- (void)presentBusinessProfileInvitations;
- (void)presentBusinessSupport;
- (void)presentClearConversations;
- (void)presentClearDataVC;
- (void)presentDisplayNameSettings;
- (void)presentDisplayOnDemandGeofilters;
- (void)presentEmailSettings;
- (void)presentGallerySettings;
- (void)presentLagunaSettings;
- (void)presentLogout;
- (void)presentManagedBusinessProfile:(id)arg1;
- (void)presentMapSettings;
- (void)presentMobileSettings;
- (void)presentMyData;
- (void)presentNotificationSettings;
- (void)presentOtherLegal;
- (void)presentPasswordSettings;
- (void)presentPaymentsSettingsV2;
- (void)presentPrivacyPolicy;
- (void)presentQuickAddPrivacySettings;
- (void)presentSendMeNotificationsSettings;
- (void)presentSendMeSnapsSettings;
- (void)presentShakeToReportSettings;
- (void)presentShazamServices;
- (void)presentSnapConnectSettings;
- (void)presentSupportPage;
- (void)presentTermsOfUse;
- (void)presentTwoFASettings;
- (void)presentViewMyStoriesSettings;
@property(retain, nonatomic) UILongPressGestureRecognizer *press; // @synthesize press=_press;
- (void)processNotification:(id)arg1;
- (void)reloadTableOnMainThread;
- (void)reloadTableWithNewCells;
- (void)scanResultViewControllerDidDismiss:(id)arg1 dismissType:(unsigned long long)arg2;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
- (void)settingHeaderPromptViewDidTapButton:(id)arg1;
- (_Bool)shouldPopToRootViewController;
- (_Bool)shouldPopToRootViewControllerLater;
- (_Bool)shouldShowSection:(long long)arg1;
- (unsigned long long)supportedInterfaceOrientations;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (id)textColorForHeader:(id)arg1;
- (id)titleForHeader:(id)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

