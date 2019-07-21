//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString;

@protocol AMPEventFieldProvider <NSObject>
- (long long)appStartupType;
- (NSString *)appVersion;
- (NSString *)clientId;
- (long long)connectionDownloadBandwidthBps;
- (long long)connectivityType;
- (long long)deeplinkSourceType;
- (NSString *)deviceModel;
- (NSString *)devicePlatform;
- (long long)friendCount;
- (_Bool)hasBitmoji;
- (_Bool)isAppOpenFromDeepLink;
- (NSString *)linkId;
- (NSString *)osVersion;
- (NSString *)schemeName;
- (_Bool)travelModeEnabled;
- (NSString *)userAgent;
- (NSString *)userLocale;
- (NSString *)userName;
@end

