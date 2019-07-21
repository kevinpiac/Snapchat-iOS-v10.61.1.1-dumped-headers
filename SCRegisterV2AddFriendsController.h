//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "ContactsLoadingViewControllerDelegate-Protocol.h"
#import "ContactsVCUserActionDelegate-Protocol.h"
#import "SCContactPermissionRequestDelegate-Protocol.h"
#import "SCRegisterV2ViewDelegate-Protocol.h"
#import "SCSnapchattersDataRequestListener-Protocol.h"

@class AddFriendsDelegateObject, ContactsLoadingViewController, ContactsViewController, NSArray, NSString, SCLegacyRegistrationFindFriendsService, SCPermissionRequester, SCRegisterV2AddFriendsView, SCScopedAccess, SCUserSession;
@protocol SCRegisterV2AddFriendsControllerDelegate, SCRegistrationPublisherSubscriberDelegate;

@interface SCRegisterV2AddFriendsController : UIViewController <SCSnapchattersDataRequestListener, SCRegisterV2ViewDelegate, ContactsVCUserActionDelegate, ContactsLoadingViewControllerDelegate, SCContactPermissionRequestDelegate>
{
    SCRegisterV2AddFriendsView *_addFriendsView;
    ContactsLoadingViewController *_loadingVC;
    ContactsViewController *_contactsVC;
    AddFriendsDelegateObject *_addFriendsDelegate;
    id <SCRegistrationPublisherSubscriberDelegate> _publisherSubscriber;
    int _context;
    SCPermissionRequester *_permissionRequester;
    SCUserSession *_userSession;
    NSArray *_foundSnapchatters;
    NSArray *_foundNonSnapchatters;
    NSArray *_foundOutOfContactsSuggestions;
    NSArray *_foundOfficialAccountsSuggestions;
    NSArray *_foundPublisherAccountsSuggestions;
    _Bool _shouldDisplayOfficialAccountsSuggestionOnSeparatePage;
    _Bool _isShowingSnapchattersOrNonsnapchattersInContactsVC;
    unsigned long long _snapchatterRecommendedCount;
    _Bool _phoneVerified;
    _Bool _findFriendsSkipped;
    _Bool _showingSuggestions;
    SCScopedAccess *_stateTransitionLogger;
    SCLegacyRegistrationFindFriendsService *_findFriendsService;
    id <SCRegisterV2AddFriendsControllerDelegate> _delegate;
}

- (void).cxx_destruct;
- (void)_addFriendsFinishedOrSkipped;
- (void)_findOutOfContactAndOfficialAccountSuggestions:(CDUnknownBlockType)arg1;
- (void)_findOutOfContactSuggestionsAfterContactPermissionDenied;
- (void)_findOutOfContactsWithSuccess:(_Bool)arg1 outOfContactSuggestions:(id)arg2 officialAccountSuggestions:(id)arg3 publisherAccountSuggestions:(id)arg4 shouldDisplayOfficialAccountsSuggestionOnSeparatePage:(_Bool)arg5;
- (long long)_getPageType;
- (void)_logFriendsSeenAndAdded;
- (_Bool)_shouldShowOfficialAccountsSuggestionOnSamePage;
- (_Bool)_shouldShowOfficialAccountsSuggestionOnSeparatedPage;
- (void)_showAddFriendScreenSkipDialog;
- (void)_showContactPermission;
- (void)_showSuggestionsInContactsVCIncludingOutOfContactsSuggestions:(_Bool)arg1;
- (void)_showViewController:(id)arg1 animated:(_Bool)arg2;
- (void)addFindFriendsObservers;
- (void)attributedLabel:(id)arg1 didSelectLinkWithURL:(id)arg2;
- (void)backButtonPressed:(id)arg1;
- (void)contactPermissionGranted;
- (void)contactPermissionRejected;
- (void)contactsViewDidScroll:(id)arg1;
- (void)continueButtonClicked;
- (void)dealloc;
@property(nonatomic) __weak id <SCRegisterV2AddFriendsControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)didEndSnapchattersContactDataRequest:(id)arg1 withResult:(id)arg2;
- (void)didEndSnapchattersUpdateDataRequest:(id)arg1 withSuccess:(_Bool)arg2;
- (void)didFindFriends;
- (void)didStartSnapchattersUpdateDataRequest:(id)arg1;
- (void)findFriendsFailed;
- (void)findFriendsNoContacts;
- (void)findFriendsPrivacyFailed;
- (void)findFriendsSuccess:(id)arg1;
- (void)findFriendsSuccessWithIsTrimmed:(_Bool)arg1;
- (id)initWithUserSession:(id)arg1;
- (id)initWithUserSession:(id)arg1 phoneVerified:(_Bool)arg2;
- (void)loadView;
- (void)logRegistrationContactFindSuccess:(unsigned long long)arg1;
- (void)onFindFriendsStarted;
- (void)onFriendSelectionToggled;
- (void)removeFindFriendsObservers;
- (_Bool)shouldHideInvitesPage:(id)arg1;
- (_Bool)shouldPopToRootViewController;
- (void)showInvitesInContactsVC;
- (void)showSnapchattersInContactsVC;
- (void)skipButtonClicked;
- (unsigned long long)supportedInterfaceOrientations;
- (double)timeBeforeReturningToCamera;
- (void)tryFindFriendsAgain;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillEnterBackground;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

