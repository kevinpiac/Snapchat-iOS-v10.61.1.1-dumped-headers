//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCAUserTrackedEvent.h"

@class NSNumber, NSString;

@interface SCACameraVideoSnapNoAudioError : SCAUserTrackedEvent
{
    NSNumber *isFixed;
    long long fixedErrorType;
    long long unfixableErrorType;
    NSString *errorMessage;
}

- (void).cxx_destruct;
- (id)asDictionary;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)getErrorMessage;
- (id)getEventName;
- (long long)getEventQoS;
- (long long)getFixedErrorType;
- (_Bool)getIsFixed;
- (double)getPerUserSamplingRate;
- (long long)getUnfixableErrorType;
- (id)init;
- (void)setErrorMessage:(id)arg1;
- (void)setFixedErrorType:(long long)arg1;
- (void)setIsFixed:(_Bool)arg1;
- (void)setUnfixableErrorType:(long long)arg1;

@end

