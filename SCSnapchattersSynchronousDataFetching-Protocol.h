//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class NSArray, NSString, SCSnapchatter;

@protocol SCSnapchattersSynchronousDataFetching
- (_Bool)areSuggestedSnapchattersAvailable:(NSArray *)arg1;
- (SCSnapchatter *)incomingSnapchatterFromUserId:(NSString *)arg1;
- (SCSnapchatter *)incomingSnapchatterFromUsername:(NSString *)arg1;
- (NSArray *)incomingSnapchattersFromUserIds:(NSArray *)arg1;
- (NSArray *)incomingSnapchattersFromUsernames:(NSArray *)arg1;
- (NSArray *)nonFriendContactSnapchatters;
- (NSArray *)officialAccountSuggestedSnapchattersFromRegistration;
- (NSArray *)outOfContactSuggestedSnapchattersFromRegistration;
- (SCSnapchatter *)outgoingSnapchatterFromUserId:(NSString *)arg1;
- (SCSnapchatter *)outgoingSnapchatterFromUsername:(NSString *)arg1;
- (NSArray *)outgoingSnapchattersFromUserIds:(NSArray *)arg1;
- (NSArray *)outgoingSnapchattersFromUsernames:(NSArray *)arg1;
- (unsigned long long)quickAddSnapchattersForSendToCount;
- (NSArray *)suggestedPublishersFromRegistration;
- (NSArray *)suggestedSnapchattersForNewUser;
@end

