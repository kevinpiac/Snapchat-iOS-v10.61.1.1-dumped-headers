//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCAUserTrackedEvent.h"

@class NSString;

@interface SCARegistrationUserEmailFail : SCAUserTrackedEvent
{
    long long errorMessage;
    NSString *longClientId;
}

- (void).cxx_destruct;
- (id)asDictionary;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (long long)getErrorMessage;
- (id)getEventName;
- (long long)getEventQoS;
- (id)getLongClientId;
- (double)getPerUserSamplingRate;
- (id)init;
- (void)setErrorMessage:(long long)arg1;
- (void)setLongClientId:(id)arg1;

@end

