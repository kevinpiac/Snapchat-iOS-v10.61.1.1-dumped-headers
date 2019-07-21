//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCATalkCallEventBase.h"

@class NSNumber;

@interface SCATalkCallAttempt : SCATalkCallEventBase
{
    NSNumber *withIncomingCallAbandon;
    NSNumber *withCallStartFromPhoneRecentList;
    NSNumber *userPresentCount;
    NSNumber *filterLensCount;
    NSNumber *selfieModeActivationCount;
    long long endPhase;
}

- (void).cxx_destruct;
- (id)asDictionary;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (long long)getEndPhase;
- (id)getEventName;
- (long long)getEventQoS;
- (long long)getFilterLensCount;
- (double)getPerUserSamplingRate;
- (long long)getSelfieModeActivationCount;
- (long long)getUserPresentCount;
- (_Bool)getWithCallStartFromPhoneRecentList;
- (_Bool)getWithIncomingCallAbandon;
- (id)init;
- (id)initWithCallUUID:(id)arg1 initialMediaType:(long long)arg2 endPhase:(long long)arg3 intParams:(id)arg4 floatParams:(id)arg5 correspondentId:(id)arg6;
- (void)setEndPhase:(long long)arg1;
- (void)setFilterLensCount:(long long)arg1;
- (void)setSelfieModeActivationCount:(long long)arg1;
- (void)setUserPresentCount:(long long)arg1;
- (void)setWithCallStartFromPhoneRecentList:(_Bool)arg1;
- (void)setWithIncomingCallAbandon:(_Bool)arg1;

@end

