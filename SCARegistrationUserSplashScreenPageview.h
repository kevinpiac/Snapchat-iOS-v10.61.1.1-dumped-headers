//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCAUserTrackedEvent.h"

@class NSNumber, NSString;

@interface SCARegistrationUserSplashScreenPageview : SCAUserTrackedEvent
{
    NSNumber *hasLoggedInBefore;
    long long registrationVersion;
    long long additionalInfo;
    NSString *channelId;
    NSString *longClientId;
}

- (void).cxx_destruct;
- (id)asDictionary;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (long long)getAdditionalInfo;
- (id)getChannelId;
- (id)getEventName;
- (long long)getEventQoS;
- (_Bool)getHasLoggedInBefore;
- (id)getLongClientId;
- (double)getPerUserSamplingRate;
- (long long)getRegistrationVersion;
- (id)init;
- (void)setAdditionalInfo:(long long)arg1;
- (void)setChannelId:(id)arg1;
- (void)setHasLoggedInBefore:(_Bool)arg1;
- (void)setLongClientId:(id)arg1;
- (void)setRegistrationVersion:(long long)arg1;

@end

