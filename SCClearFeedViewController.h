//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCGenericSettingsViewController.h"

#import "SCUpdateListener-Protocol.h"

@class NSString, SCArroyoConversationIdsManager, SCClearFeedTableView, SCLazy;
@protocol SCChatConversationManager, SCNativeMessagingFeedManaging;

@interface SCClearFeedViewController : SCGenericSettingsViewController <SCUpdateListener>
{
    SCClearFeedTableView *_feedTableView;
    NSString *_username;
    SCLazy *_lazyFriendsFeedDataCoordinator;
    SCLazy *_lazyFriendsFeedLoadingStatusManager;
    id <SCChatConversationManager> _conversationManager;
    SCArroyoConversationIdsManager *_lazyArroyoConversationIdsManager;
    id <SCNativeMessagingFeedManaging> _nativeMessagingFeedManager;
}

- (void).cxx_destruct;
- (void)_updateTableSubviews;
- (void)didUpdateWithAnnouncerIdentifier:(id)arg1;
- (id)getPageViewName;
- (id)getTitle;
- (id)initWithUsername:(id)arg1 friendsFeedDataCoordinator:(id)arg2 friendsFeedLoadingStatusManager:(id)arg3 conversationManager:(id)arg4 arroyoConversationIdsManager:(id)arg5 nativeMessagingFeedManager:(id)arg6;
- (void)leftButtonPressed;
- (void)loadView;
- (void)setupTableView;
- (_Bool)shouldPopToRootViewController;
- (_Bool)shouldPopToRootViewControllerLater;
- (unsigned long long)supportedInterfaceOrientations;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

