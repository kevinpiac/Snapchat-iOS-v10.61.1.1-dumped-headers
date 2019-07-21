//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCAUserTrackedEvent.h"

@class NSDate, NSNumber, NSString;

@interface SCARegistrationUserSignupPasswordPageview : SCAUserTrackedEvent
{
    NSNumber *hasLoggedInBefore;
    NSNumber *retry;
    long long registrationVersion;
    long long source;
    NSString *longClientId;
    NSDate *lastPageviewTs;
}

- (void).cxx_destruct;
- (id)asDictionary;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)getEventName;
- (long long)getEventQoS;
- (_Bool)getHasLoggedInBefore;
- (id)getLastPageviewTs;
- (id)getLongClientId;
- (double)getPerUserSamplingRate;
- (long long)getRegistrationVersion;
- (_Bool)getRetry;
- (long long)getSource;
- (id)init;
- (void)setHasLoggedInBefore:(_Bool)arg1;
- (void)setLastPageviewTs:(id)arg1;
- (void)setLongClientId:(id)arg1;
- (void)setRegistrationVersion:(long long)arg1;
- (void)setRetry:(_Bool)arg1;
- (void)setSource:(long long)arg1;

@end

