//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCSession-Protocol.h"

@class NSString;

@interface SCSession : NSObject <SCSession>
{
    NSString *_type;
    NSString *_name;
    double _startTime;
    double _endTime;
    NSString *_referrer;
    long long _exitEvent;
    NSString *_previousSessionName;
    double _lastGPSOnTime;
    double _totalGPSOnTime;
    double _lastCameraOnTime;
    double _totalCameraOnTime;
}

+ (unsigned long long *)fasterCodingKeys;
+ (unsigned long long)fasterCodingVersion;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)decodeWithFasterDecoder:(id)arg1;
@property(readonly, copy) NSString *description;
- (void)encodeWithCoder:(id)arg1;
- (void)encodeWithFasterCoder:(id)arg1;
@property(readonly, nonatomic) double endTime; // @synthesize endTime=_endTime;
@property(readonly, nonatomic) long long exitEvent; // @synthesize exitEvent=_exitEvent;
@property(readonly) unsigned long long hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithType:(id)arg1 name:(id)arg2 startTime:(double)arg3 endTime:(double)arg4 referrer:(id)arg5 exitEvent:(long long)arg6 previousSessionName:(id)arg7 lastGPSOnTime:(double)arg8 totalGPSOnTime:(double)arg9 lastCameraOnTime:(double)arg10 totalCameraOnTime:(double)arg11;
- (_Bool)isEqual:(id)arg1;
@property(readonly, nonatomic) double lastCameraOnTime; // @synthesize lastCameraOnTime=_lastCameraOnTime;
@property(readonly, nonatomic) double lastGPSOnTime; // @synthesize lastGPSOnTime=_lastGPSOnTime;
@property(readonly, copy, nonatomic) NSString *name; // @synthesize name=_name;
- (_Bool)preferFasterCoding;
@property(readonly, copy, nonatomic) NSString *previousSessionName; // @synthesize previousSessionName=_previousSessionName;
@property(readonly, copy, nonatomic) NSString *referrer; // @synthesize referrer=_referrer;
- (void)setFloat64:(double)arg1 forUInt64Key:(unsigned long long)arg2;
- (void)setObject:(id)arg1 forUInt64Key:(unsigned long long)arg2;
- (void)setSInt32:(int)arg1 forUInt64Key:(unsigned long long)arg2;
@property(readonly, nonatomic) double startTime; // @synthesize startTime=_startTime;
@property(readonly, nonatomic) double totalCameraOnTime; // @synthesize totalCameraOnTime=_totalCameraOnTime;
@property(readonly, nonatomic) double totalGPSOnTime; // @synthesize totalGPSOnTime=_totalGPSOnTime;
@property(readonly, copy, nonatomic) NSString *type; // @synthesize type=_type;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

