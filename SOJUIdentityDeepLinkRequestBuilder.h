//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface SOJUIdentityDeepLinkRequestBuilder : NSObject
{
    NSString *_timestamp;
    NSString *_reqToken;
    NSString *_username;
    NSString *_deepLinkAction;
    NSString *_friendUsername;
    NSString *_linkId;
}

+ (id)withJUIdentityDeepLinkRequest:(id)arg1;
- (void).cxx_destruct;
- (id)build;
- (id)setDeepLinkAction:(id)arg1;
- (id)setDeepLinkActionEnum:(long long)arg1;
- (id)setFriendUsername:(id)arg1;
- (id)setLinkId:(id)arg1;
- (id)setReqToken:(id)arg1;
- (id)setTimestamp:(id)arg1;
- (id)setUsername:(id)arg1;

@end

