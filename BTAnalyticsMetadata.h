//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface BTAnalyticsMetadata : NSObject
{
}

+ (_Bool)isAppExtension;
+ (id)metadata;
+ (void)setObject:(id)arg1 forKey:(id)arg2 inDictionary:(id)arg3;
- (id)deviceAppGeneratedPersistentUuid;
- (double)deviceLocationLatitude;
- (double)deviceLocationLongitude;
- (id)deviceManufacturer;
- (id)deviceModel;
- (_Bool)deviceRooted;
- (id)deviceScreenOrientation;
- (id)iosBaseSDK;
- (id)iosDeploymentTarget;
- (id)iosDeviceName;
- (id)iosIdentifierForVendor;
- (_Bool)iosIsCocoapods;
- (id)iosSystemName;
- (_Bool)isSimulator;
- (_Bool)isVenmoInstalled;
- (id)merchantAppId;
- (id)merchantAppName;
- (id)merchantAppVersion;
- (id)platform;
- (id)platformVersion;
- (id)sdkVersion;
- (id)userInterfaceOrientation;

@end

