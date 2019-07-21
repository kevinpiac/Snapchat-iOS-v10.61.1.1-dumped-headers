//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCSnapchattersSynchronousDataFetching-Protocol.h"
#import "SCTraceEnabled-Protocol.h"

@class NSString;
@protocol SCLegacyFriendsProvider;

@interface SCLegacySnapchattersSynchronousDataFetcher : NSObject <SCTraceEnabled, SCSnapchattersSynchronousDataFetching>
{
    id <SCLegacyFriendsProvider> _friendsProvider;
}

- (void).cxx_destruct;
- (_Bool)areSuggestedSnapchattersAvailable:(id)arg1;
- (id)incomingSnapchatterFromUserId:(id)arg1;
- (id)incomingSnapchatterFromUsername:(id)arg1;
- (id)incomingSnapchattersFromUserIds:(id)arg1;
- (id)incomingSnapchattersFromUsernames:(id)arg1;
- (id)initWithFriendsProvider:(id)arg1;
- (id)nonFriendContactSnapchatters;
- (id)officialAccountSuggestedSnapchattersFromRegistration;
- (id)outOfContactSuggestedSnapchattersFromRegistration;
- (id)outgoingSnapchatterFromUserId:(id)arg1;
- (id)outgoingSnapchatterFromUsername:(id)arg1;
- (id)outgoingSnapchattersFromUserIds:(id)arg1;
- (id)outgoingSnapchattersFromUsernames:(id)arg1;
- (unsigned long long)quickAddSnapchattersForSendToCount;
- (id)suggestedPublishersFromRegistration;
- (id)suggestedSnapchattersForNewUser;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

