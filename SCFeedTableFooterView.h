//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "SCFeedTableLoadingViewDelegate-Protocol.h"
#import "SCFindFriendsCTADelegate-Protocol.h"
#import "SCSnapchattersDataRequestListener-Protocol.h"

@class NSString, SCScopedAccess, SCUserSession;
@protocol SCFeedLoadingViewProtocol, SCFeedTableFooterViewDelegate, SCFindFriendsCTA;

@interface SCFeedTableFooterView : UIView <SCFindFriendsCTADelegate, SCFeedTableLoadingViewDelegate, SCSnapchattersDataRequestListener>
{
    SCUserSession *_userSession;
    SCScopedAccess *_friendsFeedLoadingStatusAccess;
    id <SCFeedTableFooterViewDelegate> _delegate;
    UIView<SCFindFriendsCTA> *_addContactsView;
    UIView<SCFeedLoadingViewProtocol> *_loadingView;
}

- (void).cxx_destruct;
- (void)addContactsButtonClicked:(_Bool)arg1 skipPhoneVerification:(_Bool)arg2 transitionStartingFrame:(struct CGRect)arg3;
@property(readonly, nonatomic) UIView<SCFindFriendsCTA> *addContactsView; // @synthesize addContactsView=_addContactsView;
@property(nonatomic) __weak id <SCFeedTableFooterViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)didEndSnapchattersContactDataRequest:(id)arg1 withResult:(id)arg2;
- (void)didEndSnapchattersUpdateDataRequest:(id)arg1 withSuccess:(_Bool)arg2;
- (void)didStartSnapchattersUpdateDataRequest:(id)arg1;
- (void)forceLoadMoreConversations;
- (void)forceRemovalAddContactsView;
- (id)initWithUserSession:(id)arg1 loadingStatusAccess:(id)arg2;
@property(readonly, nonatomic) UIView<SCFeedLoadingViewProtocol> *loadingView; // @synthesize loadingView=_loadingView;
- (void)logViewForAddContactsCTA;
- (_Bool)shouldShowAddContactsView;
- (_Bool)shouldShowLoadingView;
- (_Bool)showingAddContactsView;
- (_Bool)showingLoadingView;
- (void)updateAddContactsViewElements;
- (void)updateAddContactsViewIfPossible;
- (void)updateLoadingViewIfPossible;
- (void)updateSubviews;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

