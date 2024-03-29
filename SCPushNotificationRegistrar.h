//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface SCPushNotificationRegistrar : NSObject
{
}

+ (void)_didRegisterUserNotificationSettings:(_Bool)arg1;
+ (void)_legacyRegisterUserNotificationSettings;
+ (void)_legacyUpdateNotificationsSettings;
+ (void)_registerUserNotificationSettings;
+ (void)_updateNotificationsSetting:(_Bool)arg1;
+ (void)didFailToRegisterForRemoteNotificationsWithError:(id)arg1;
+ (void)didInvalidatePushTokenForType:(id)arg1;
+ (void)didRegisterForRemoteNotificationsWithDeviceToken:(id)arg1 userAdapter:(id)arg2;
+ (void)didRegisterUserNotificationSettings:(id)arg1;
+ (void)didShowNotificationPrompt;
+ (void)didUpdatePushCredentials:(id)arg1 forType:(id)arg2 userAdapter:(id)arg3;
+ (_Bool)hasRegisteredAPNSToken;
+ (_Bool)isRegisteredForPushNotifications;
+ (_Bool)notificationsPermissionNotGranted;
+ (void)registerTokensWithBackend:(id)arg1;
+ (void)registerTokensWithBackendDirectUserSession:(id)arg1 userAdapter:(id)arg2;
+ (void)registerUserNotificationSettings:(id)arg1;
+ (void)updateNotificationsSetting:(_Bool)arg1;
+ (void)updatePushDefaultsIfChanged;

@end

