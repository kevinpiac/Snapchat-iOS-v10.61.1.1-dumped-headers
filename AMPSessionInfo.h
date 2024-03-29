//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class AMPEvent, NSDate, NSString;

@interface AMPSessionInfo : NSObject
{
    NSString *_currentSessionId;
    long long _currentSessionSequenceId;
    double _currentSessionStartRelativeSeconds;
    double _currentSessionTimeInBackgroundSeconds;
    long long _currentSessionApplicationState;
    double _previousSessionEndRelativeSeconds;
    NSDate *_previousSessionEndDate;
    AMPEvent *_previousSessionEndEvent;
}

- (void).cxx_destruct;
@property(nonatomic) long long currentSessionApplicationState; // @synthesize currentSessionApplicationState=_currentSessionApplicationState;
@property(retain, nonatomic) NSString *currentSessionId; // @synthesize currentSessionId=_currentSessionId;
@property(nonatomic) long long currentSessionSequenceId; // @synthesize currentSessionSequenceId=_currentSessionSequenceId;
@property(nonatomic) double currentSessionStartRelativeSeconds; // @synthesize currentSessionStartRelativeSeconds=_currentSessionStartRelativeSeconds;
@property(nonatomic) double currentSessionTimeInBackgroundSeconds; // @synthesize currentSessionTimeInBackgroundSeconds=_currentSessionTimeInBackgroundSeconds;
- (id)description;
- (unsigned long long)hash;
- (id)initWithCurrentSessionId:(id)arg1 currentSessionSequenceId:(long long)arg2 currentSessionStartRelativeSeconds:(double)arg3 currentSessionTimeInBackgroundSeconds:(double)arg4 currentSessionApplicationState:(long long)arg5 previousSessionEndRelativeSeconds:(double)arg6 previousSessionEndDate:(id)arg7 previousSessionEndEvent:(id)arg8;
- (_Bool)isEqual:(id)arg1;
- (_Bool)isEqualToInfo:(id)arg1;
@property(retain, nonatomic) NSDate *previousSessionEndDate; // @synthesize previousSessionEndDate=_previousSessionEndDate;
@property(retain, nonatomic) AMPEvent *previousSessionEndEvent; // @synthesize previousSessionEndEvent=_previousSessionEndEvent;
@property(nonatomic) double previousSessionEndRelativeSeconds; // @synthesize previousSessionEndRelativeSeconds=_previousSessionEndRelativeSeconds;

@end

