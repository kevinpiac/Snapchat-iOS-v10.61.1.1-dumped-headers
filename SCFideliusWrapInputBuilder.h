//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString, SOJUSecurityFideliusFriendsKeysResponse;

@interface SCFideliusWrapInputBuilder : NSObject
{
    NSArray *_recipientUsernames;
    NSString *_clientId;
    NSString *_key;
    SOJUSecurityFideliusFriendsKeysResponse *_rewrapFriendKeys;
    long long _rewrapCount;
}

+ (id)withFideliusWrapInput:(id)arg1;
- (void).cxx_destruct;
- (id)build;
- (id)setClientId:(id)arg1;
- (id)setKey:(id)arg1;
- (id)setRecipientUsernames:(id)arg1;
- (id)setRewrapCount:(long long)arg1;
- (id)setRewrapFriendKeys:(id)arg1;

@end

