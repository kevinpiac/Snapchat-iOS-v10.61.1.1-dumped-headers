//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCAUserTrackedEvent.h"

@class NSNumber, NSString;

@interface SCARegistrationUserCaptchaSuccess : SCAUserTrackedEvent
{
    NSNumber *attemptCount;
    NSNumber *imageCount;
    NSNumber *withResetPassword;
    long long registrationVersion;
    NSString *longClientId;
}

- (void).cxx_destruct;
- (id)asDictionary;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (long long)getAttemptCount;
- (id)getEventName;
- (long long)getEventQoS;
- (long long)getImageCount;
- (id)getLongClientId;
- (double)getPerUserSamplingRate;
- (long long)getRegistrationVersion;
- (_Bool)getWithResetPassword;
- (id)init;
- (void)setAttemptCount:(long long)arg1;
- (void)setImageCount:(long long)arg1;
- (void)setLongClientId:(id)arg1;
- (void)setRegistrationVersion:(long long)arg1;
- (void)setWithResetPassword:(_Bool)arg1;

@end

