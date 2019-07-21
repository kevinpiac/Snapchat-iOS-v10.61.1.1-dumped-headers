//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCAUserTrackedEvent.h"

@class NSString;

@interface SCARegistrationUserFocusOnUsername : SCAUserTrackedEvent
{
    long long registrationVersion;
    NSString *usernameSuggestion;
    NSString *longClientId;
}

- (void).cxx_destruct;
- (id)asDictionary;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)getEventName;
- (long long)getEventQoS;
- (id)getLongClientId;
- (double)getPerUserSamplingRate;
- (long long)getRegistrationVersion;
- (id)getUsernameSuggestion;
- (id)init;
- (void)setLongClientId:(id)arg1;
- (void)setRegistrationVersion:(long long)arg1;
- (void)setUsernameSuggestion:(id)arg1;

@end
