//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "EventWithQoS-Protocol.h"
#import "MapSerializable-Protocol.h"
#import "NSCopying-Protocol.h"
#import "NamedEvent-Protocol.h"
#import "SampledEvent-Protocol.h"

@class NSDate, NSNumber, NSString;

@interface SCAEventBase : NSObject <NamedEvent, EventWithQoS, SampledEvent, MapSerializable, NSCopying>
{
    NSNumber *sequenceId;
    NSNumber *friendCount;
    NSNumber *appTravelMode;
    NSNumber *connectionDownloadBandwidthBps;
    NSNumber *hasBitmoji;
    NSNumber *logQueueSequenceId;
    long long deviceConnectivity;
    long long appType;
    long long appVariant;
    long long appStartupType;
    long long tokenStatus;
    NSString *userAgent;
    NSString *country;
    NSString *city;
    NSString *region;
    NSString *deviceModel;
    NSString *clientId;
    NSString *locale;
    NSString *osType;
    NSString *osVersion;
    NSString *osMinorVersion;
    NSString *appVersion;
    NSString *appBuild;
    NSString *sessionId;
    NSString *referrer;
    NSString *logQueueName;
    NSDate *clientTs;
    NSDate *clientUploadTs;
    NSDate *firstUploadAttemptTs;
    NSDate *serverTs;
    NSDate *eventTs;
    NSDate *eventHourTs;
    NSDate *eventTime;
    NSDate *transformerProcessingTime;
}

- (void).cxx_destruct;
- (id)asDictionary;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)getAppBuild;
- (long long)getAppStartupType;
- (_Bool)getAppTravelMode;
- (long long)getAppType;
- (long long)getAppVariant;
- (id)getAppVersion;
- (id)getCity;
- (id)getClientId;
- (id)getClientTs;
- (id)getClientUploadTs;
- (long long)getConnectionDownloadBandwidthBps;
- (id)getCountry;
- (long long)getDeviceConnectivity;
- (id)getDeviceModel;
- (id)getEventHourTs;
- (id)getEventName;
- (long long)getEventQoS;
- (id)getEventTime;
- (id)getEventTs;
- (id)getFirstUploadAttemptTs;
- (long long)getFriendCount;
- (_Bool)getHasBitmoji;
- (id)getLocale;
- (id)getLogQueueName;
- (long long)getLogQueueSequenceId;
- (id)getOsMinorVersion;
- (id)getOsType;
- (id)getOsVersion;
- (double)getPerEventSamplingRate;
- (double)getPerUserSamplingRate;
- (id)getReferrer;
- (id)getRegion;
- (long long)getSequenceId;
- (id)getServerTs;
- (id)getSessionId;
- (long long)getTokenStatus;
- (id)getTransformerProcessingTime;
- (id)getUserAgent;
- (id)init;
- (void)pauseTimer;
- (void)resetTimer;
- (void)resumeTimer;
- (void)setAppBuild:(id)arg1;
- (void)setAppStartupType:(long long)arg1;
- (void)setAppTravelMode:(_Bool)arg1;
- (void)setAppType:(long long)arg1;
- (void)setAppVariant:(long long)arg1;
- (void)setAppVersion:(id)arg1;
- (void)setCity:(id)arg1;
- (void)setClientId:(id)arg1;
- (void)setClientTs:(id)arg1;
- (void)setClientUploadTs:(id)arg1;
- (void)setConnectionDownloadBandwidthBps:(long long)arg1;
- (void)setCountry:(id)arg1;
- (void)setDeviceConnectivity:(long long)arg1;
- (void)setDeviceModel:(id)arg1;
- (void)setEventHourTs:(id)arg1;
- (void)setEventTime:(id)arg1;
- (void)setEventTs:(id)arg1;
- (void)setFirstUploadAttemptTs:(id)arg1;
- (void)setFriendCount:(long long)arg1;
- (void)setHasBitmoji:(_Bool)arg1;
- (void)setLocale:(id)arg1;
- (void)setLogQueueName:(id)arg1;
- (void)setLogQueueSequenceId:(long long)arg1;
- (void)setOsMinorVersion:(id)arg1;
- (void)setOsType:(id)arg1;
- (void)setOsVersion:(id)arg1;
- (void)setReferrer:(id)arg1;
- (void)setRegion:(id)arg1;
- (void)setSequenceId:(long long)arg1;
- (void)setServerTs:(id)arg1;
- (void)setSessionId:(id)arg1;
- (void)setTokenStatus:(long long)arg1;
- (void)setTransformerProcessingTime:(id)arg1;
- (void)setUserAgent:(id)arg1;
- (void)startTimer;
- (double)totalElapsedTime;

@end

