//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class NSString;

@protocol SCInviteFriendStateListener
- (void)didEndFetchingFriendDeeplinkForPhoneNumber:(NSString *)arg1 deeplink:(NSString *)arg2 success:(_Bool)arg3;
- (void)didEndInvitingFriendWithPhoneNumber:(NSString *)arg1 success:(_Bool)arg2;
- (void)didStartFetchingFriendDeeplinkForPhoneNumber:(NSString *)arg1;
@end

