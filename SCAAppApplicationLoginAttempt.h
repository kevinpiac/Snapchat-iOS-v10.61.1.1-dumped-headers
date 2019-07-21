//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCAUserTrackedEvent.h"

@class NSNumber, NSString;

@interface SCAAppApplicationLoginAttempt : SCAUserTrackedEvent
{
    NSNumber *hasLoggedInBefore;
    long long loginSource;
    NSString *loginFlowSessionId;
    NSString *longClientId;
}

- (void).cxx_destruct;
- (id)asDictionary;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)getEventName;
- (long long)getEventQoS;
- (_Bool)getHasLoggedInBefore;
- (id)getLoginFlowSessionId;
- (long long)getLoginSource;
- (id)getLongClientId;
- (double)getPerUserSamplingRate;
- (id)init;
- (void)setHasLoggedInBefore:(_Bool)arg1;
- (void)setLoginFlowSessionId:(id)arg1;
- (void)setLoginSource:(long long)arg1;
- (void)setLongClientId:(id)arg1;

@end

