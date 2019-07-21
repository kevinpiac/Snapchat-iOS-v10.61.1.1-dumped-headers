//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCAUserTrackedEvent.h"

@class NSString;

@interface SCAAppApplicationLoginOdlvFailure : SCAUserTrackedEvent
{
    long long otpType;
    long long actionType;
    NSString *loginFlowSessionId;
    NSString *longClientId;
}

- (void).cxx_destruct;
- (id)asDictionary;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (long long)getActionType;
- (id)getEventName;
- (long long)getEventQoS;
- (id)getLoginFlowSessionId;
- (id)getLongClientId;
- (long long)getOtpType;
- (double)getPerUserSamplingRate;
- (id)init;
- (void)setActionType:(long long)arg1;
- (void)setLoginFlowSessionId:(id)arg1;
- (void)setLongClientId:(id)arg1;
- (void)setOtpType:(long long)arg1;

@end

