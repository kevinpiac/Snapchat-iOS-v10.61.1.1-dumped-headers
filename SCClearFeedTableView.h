//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "SCClearFeedDataSourceDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class NSString, SCArroyoConversationIdsManager, SCClearFeedActionHandler, SCClearFeedDataSource, SCFeedTableLoadingView, SCLazy, UITableView;
@protocol SCNativeMessagingFeedManaging;

@interface SCClearFeedTableView : UIView <UITableViewDelegate, UITableViewDataSource, SCClearFeedDataSourceDelegate>
{
    SCClearFeedDataSource *_dataSource;
    UIView *_emptyPlaceHolder;
    SCFeedTableLoadingView *_loadingView;
    UITableView *_tableView;
    NSString *_username;
    SCLazy *_lazyFriendsFeedDataCoordinator;
    SCLazy *_lazyFriendsFeedLoadingStatusManager;
    SCArroyoConversationIdsManager *_arroyoConversationIdsManager;
    id <SCNativeMessagingFeedManaging> _nativeFeedManager;
    SCClearFeedActionHandler *_clearFeedActionHandler;
}

- (void).cxx_destruct;
- (_Bool)currentlyShowingLoadingView;
- (id)emptyPlaceHolder;
- (id)initWithUsername:(id)arg1 friendsFeedDataCoordinator:(id)arg2 friendsFeedLoadingStatusManager:(id)arg3 conversationManager:(id)arg4 arroyoConversationIdsManager:(id)arg5 nativeMessagingFeedManager:(id)arg6;
@property(readonly, nonatomic) _Bool isEmpty;
- (void)loadMoreConversationsIfPossibleForceOnFailed:(_Bool)arg1;
- (void)loadMoreFeedItemsIfCloseToLoadingView;
- (id)loadingView;
- (void)reloadTableViewIfNecessary;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)updateSubviews;
- (void)updateViewVisibilities;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

