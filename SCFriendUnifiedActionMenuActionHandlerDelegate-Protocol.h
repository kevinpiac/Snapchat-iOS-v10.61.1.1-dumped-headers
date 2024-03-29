//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString, SCFriendUnifiedActionMenuActionHandler, SCFriendUnifiedProfileConfiguration, SCSnapchatter;

@protocol SCFriendUnifiedActionMenuActionHandlerDelegate <NSObject>
- (void)dismissUnifiedActionMenuWithFriendUnifiedActionMenuActionHandler:(SCFriendUnifiedActionMenuActionHandler *)arg1 showAnimation:(_Bool)arg2;

@optional
- (void)navigateToAudioCallWithFriendUnifiedActionMenuActionHandler:(SCFriendUnifiedActionMenuActionHandler *)arg1 snapchatter:(SCSnapchatter *)arg2;
- (void)navigateToChatWithFriendUnifiedActionMenuActionHandler:(SCFriendUnifiedActionMenuActionHandler *)arg1 snapchatter:(SCSnapchatter *)arg2;
- (void)navigateToVideoCallWithFriendUnifiedActionMenuActionHandler:(SCFriendUnifiedActionMenuActionHandler *)arg1 snapchatter:(SCSnapchatter *)arg2;
- (void)presentCameraWithFriendUnifiedActionMenuActionHandler:(SCFriendUnifiedActionMenuActionHandler *)arg1 snapchatter:(SCSnapchatter *)arg2;
- (void)presentUnifiedProfileWithFriendUnifiedActionMenuActionHandler:(SCFriendUnifiedActionMenuActionHandler *)arg1 snapchatter:(SCSnapchatter *)arg2 configuration:(SCFriendUnifiedProfileConfiguration *)arg3 sourcePageType:(NSString *)arg4;
@end

