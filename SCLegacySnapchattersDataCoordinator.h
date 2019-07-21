//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCSnapchattersDataMutating-Protocol.h"

@class SCPreferences, SCSessionRequestManager;
@protocol SCLegacyFriendsMutator, SCSnapchatterUserInfoMutator, SCSnapchatterUserInfoProvider;

@interface SCLegacySnapchattersDataCoordinator : NSObject <SCSnapchattersDataMutating>
{
    id <SCLegacyFriendsMutator> _friendsMutator;
    id <SCSnapchatterUserInfoProvider> _userInfoProvider;
    id <SCSnapchatterUserInfoMutator> _userInfoMutator;
    CDUnknownBlockType _adaptor;
    SCSessionRequestManager *_requestManager;
    SCPreferences *_preferences;
}

- (void).cxx_destruct;
- (void)_addFriend:(id)arg1 addSource:(long long)arg2 placement:(long long)arg3 cellIndex:(long long)arg4 updateRequest:(id)arg5 completionQueue:(id)arg6 completionHandler:(CDUnknownBlockType)arg7;
- (void)_blockSnapchatter:(id)arg1 blockReasonId:(id)arg2 updateRequest:(id)arg3 completionQueue:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)_deleteAllContactsWithContactDataRequest:(id)arg1;
- (void)_deleteFriend:(id)arg1 deleteSource:(long long)arg2;
- (void)_fetchContactsWithContactSource:(long long)arg1 shouldRecommend:(_Bool)arg2 isAllUpdate:(_Bool)arg3 isDelta:(_Bool)arg4 contactDataRequest:(id)arg5;
- (void)_fetchFriendsWithSource:(unsigned long long)arg1 triggerType:(long long)arg2 fetchRequest:(id)arg3;
- (void)_fetchSuggestion:(_Bool)arg1 syncVersion:(id)arg2 suggestDateRequest:(id)arg3;
- (void)_hideAllSuggestionsWithPlacement:(long long)arg1 suggestDateRequest:(id)arg2;
- (void)_hideSuggestedSnapchatter:(id)arg1 placement:(long long)arg2 suggestDateRequest:(id)arg3;
- (void)_ignoreIncomingFriend:(id)arg1 updateRequest:(id)arg2;
- (void)_multiAddWithAddFriendRequests:(id)arg1 placement:(long long)arg2 isRegistration:(_Bool)arg3;
- (void)_muteFriendStory:(id)arg1 updateRequest:(id)arg2;
- (_Bool)_saveViewedSuggestionsToPreferencesWithSnapchatters:(id)arg1;
- (void)_setDisplayName:(id)arg1 displayName:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_setStoryPrivacy:(long long)arg1 userIds:(id)arg2 updateRequest:(id)arg3;
- (void)_unblockSnapchatter:(id)arg1;
- (void)_unmuteFriendStory:(id)arg1 updateRequest:(id)arg2;
- (void)_updateSyncEnable:(_Bool)arg1 contactDataRequest:(id)arg2;
- (void)_updateWithSojuFriendsResponse:(id)arg1 source:(unsigned long long)arg2 triggerType:(long long)arg3 fetchRequest:(id)arg4;
- (void)addFriendWithUpdateRequest:(id)arg1 completionQueue:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)blockSnapchatterWithUpdateRequest:(id)arg1 completionQueue:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)deleteFriendWithUpdateRequest:(id)arg1 completionQueue:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)handleSnapchatterContactDataRequest:(id)arg1;
- (void)handleSnapchatterFetchDataRequest:(id)arg1;
- (void)handleSnapchatterSuggestDataRequest:(id)arg1;
- (void)handleSnapchatterUpdateDataRequest:(id)arg1;
- (id)initWithFriendsMutator:(id)arg1 userInfoProvider:(id)arg2 userInfoMutator:(id)arg3 adaptor:(CDUnknownBlockType)arg4 requestManager:(id)arg5 preferences:(id)arg6;
- (void)multiAddFriendsWithUpdateRequest:(id)arg1 completionQueue:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)prefetchSuggestedSnapchattersWithCompletionQueue:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)promoteAddFriendsSuggestionsOfUserIds:(id)arg1 completionQueue:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)setDisplayNameWithUpdateRequest:(id)arg1 completionQueue:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)setSnapStreakForUsername:(id)arg1 snapstreakCount:(long long)arg2 expirationServerTimestamp:(id)arg3 completionQueue:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)unblockSnapchatterWithUpdateRequest:(id)arg1 completionQueue:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)updateFriendRequestViewed:(id)arg1 completionQueue:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)updateRecentFriends:(id)arg1 completionQueue:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)updateSuggestionsViewed:(id)arg1 completionQueue:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;

@end
