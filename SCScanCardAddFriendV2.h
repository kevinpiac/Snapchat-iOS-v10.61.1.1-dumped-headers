//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCScanCardTableViewCell.h"

#import "SCMiniProfileFriendCollectionViewCellDelegate-Protocol.h"
#import "SCSnapchattersDataRequestListener-Protocol.h"

@class Friend, NSString, SCEventListenerAnnouncer, SCMiniProfileFriendCollectionViewCell, SCOperaPresenter, SCUserSession, UIViewController;
@protocol NavigationDelegate;

@interface SCScanCardAddFriendV2 : SCScanCardTableViewCell <SCMiniProfileFriendCollectionViewCellDelegate, SCSnapchattersDataRequestListener>
{
    Friend *_friend;
    SCMiniProfileFriendCollectionViewCell *_friendCell;
    SCUserSession *_userSession;
    UIViewController *_parentViewController;
    id <NavigationDelegate> _navigationDelegate;
    SCOperaPresenter *_storyPresenter;
    SCEventListenerAnnouncer *_eventAnnouncer;
}

+ (id)announcerIdentifier;
- (void).cxx_destruct;
- (void)_addFriend:(id)arg1 onProgress:(CDUnknownBlockType)arg2 onSuccess:(CDUnknownBlockType)arg3 onFailure:(CDUnknownBlockType)arg4;
- (void)_playFriendStories:(id)arg1 withBaseView:(id)arg2;
- (void)_playFriendStoryForFriend:(id)arg1 withBaseView:(id)arg2;
- (void)_reloadCard;
- (void)addListener:(id)arg1;
- (void)didEndSnapchattersUpdateDataRequest:(id)arg1 withSuccess:(_Bool)arg2;
- (void)didStartSnapchattersUpdateDataRequest:(id)arg1;
- (void)friendCollectionViewCell:(id)arg1 didTapAddFriend:(id)arg2;
- (void)friendCollectionViewCell:(id)arg1 didTapStoryIconView:(id)arg2;
- (void)friendCollectionViewCellDidLongPress:(id)arg1;
- (id)initWithFriend:(id)arg1 pageType:(long long)arg2 userSession:(id)arg3 parentViewController:(id)arg4;
- (void)removeListener:(id)arg1;
- (void)updateStyle;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

