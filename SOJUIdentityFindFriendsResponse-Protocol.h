//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"
#import "NSObject-Protocol.h"

@class NSArray, NSNumber, NSString;

@protocol SOJUIdentityFindFriendsResponse <NSObject, NSCoding, NSCopying>
@property(readonly, copy, nonatomic) NSString *contentSuggestionPagePosition;
@property(readonly, copy, nonatomic) NSNumber *isTrimmed;
@property(readonly, copy, nonatomic) NSNumber *lastAddressBookUpdatedDate;
@property(readonly, copy, nonatomic) NSArray *officialAccountSuggestionsOrdering;
@property(readonly, copy, nonatomic) NSArray *registrationSuggestedFriendOrdering;
@property(readonly, copy, nonatomic) NSArray *results;
@property(readonly, copy, nonatomic) NSArray *suggestedFriendResultsV2;
@property(readonly, copy, nonatomic) NSArray *suggestedPublisherResults;
@end

