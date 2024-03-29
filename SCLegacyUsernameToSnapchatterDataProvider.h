//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCUsernameToSnapchatterFetching-Protocol.h"

@protocol SCLegacyFriendsProvider;

@interface SCLegacyUsernameToSnapchatterDataProvider : NSObject <SCUsernameToSnapchatterFetching>
{
    id <SCLegacyFriendsProvider> _friendsProvider;
}

- (void).cxx_destruct;
- (id)_snapchatterWithUsername:(id)arg1;
- (struct NSDictionary *)_snapchattersWithUsernames:(id)arg1;
- (struct NSDictionary *)_usernameSnapchatterMap;
- (id)initWithFriendsProvider:(id)arg1;
- (void)snapchatterWithUsername:(id)arg1 completionQueue:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)snapchattersWithUsernames:(id)arg1 completionQueue:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;

@end

