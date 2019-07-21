//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCAUserTrackedEvent.h"

@class NSNumber, NSString;

@interface SCACameraContentRecoveryAttempt : SCAUserTrackedEvent
{
    NSNumber *captureToRecoveryTimeSec;
    NSNumber *recoveryAttemptCount;
    NSNumber *success;
    long long mediaType;
    long long contentLossReason;
    long long contentRecoverySkipReason;
    NSString *captureSessionId;
}

- (void).cxx_destruct;
- (id)asDictionary;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)getCaptureSessionId;
- (long long)getCaptureToRecoveryTimeSec;
- (long long)getContentLossReason;
- (long long)getContentRecoverySkipReason;
- (id)getEventName;
- (long long)getEventQoS;
- (long long)getMediaType;
- (double)getPerUserSamplingRate;
- (long long)getRecoveryAttemptCount;
- (_Bool)getSuccess;
- (id)init;
- (void)setCaptureSessionId:(id)arg1;
- (void)setCaptureToRecoveryTimeSec:(long long)arg1;
- (void)setContentLossReason:(long long)arg1;
- (void)setContentRecoverySkipReason:(long long)arg1;
- (void)setMediaType:(long long)arg1;
- (void)setRecoveryAttemptCount:(long long)arg1;
- (void)setSuccess:(_Bool)arg1;

@end
