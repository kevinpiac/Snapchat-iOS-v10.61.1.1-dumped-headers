//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCARegistrationResponseUserTrackedEvent.h"

@class NSString;

@interface SCARegistrationResponseRegister : SCARegistrationResponseUserTrackedEvent
{
    long long errorSource;
    NSString *preferredVerificationMethod;
    NSString *longClientId;
}

- (void).cxx_destruct;
- (id)asDictionary;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (long long)getErrorSource;
- (id)getEventName;
- (long long)getEventQoS;
- (id)getLongClientId;
- (double)getPerUserSamplingRate;
- (id)getPreferredVerificationMethod;
- (id)init;
- (void)setErrorSource:(long long)arg1;
- (void)setLongClientId:(id)arg1;
- (void)setPreferredVerificationMethod:(id)arg1;

@end
