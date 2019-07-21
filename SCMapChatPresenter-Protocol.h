//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSArray, NSString, SCAppNotification, SCDeepLinkURL, UIViewController;

@protocol SCMapChatPresenter <NSObject>
- (void)presentChatOnViewController:(UIViewController *)arg1 username:(NSString *)arg2 deeplinkURL:(SCDeepLinkURL *)arg3 notification:(SCAppNotification *)arg4 source:(long long)arg5 subpageName:(NSString *)arg6;
- (void)presentGroupChatOnViewController:(UIViewController *)arg1 groupId:(NSString *)arg2 deeplinkURL:(SCDeepLinkURL *)arg3 notification:(SCAppNotification *)arg4 source:(long long)arg5 subpageName:(NSString *)arg6;
- (void)presentGroupCreationOnViewController:(UIViewController *)arg1 recipientUserIds:(NSArray *)arg2 source:(long long)arg3;
- (_Bool)viewControllerIsChatAndHasActiveCall:(UIViewController *)arg1;
@end

