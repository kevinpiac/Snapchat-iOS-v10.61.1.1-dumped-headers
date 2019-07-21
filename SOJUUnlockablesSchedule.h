//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SOJUUnlockablesSchedule-Protocol.h"

@class NSArray, NSNumber, NSString;

@interface SOJUUnlockablesSchedule : NSObject <SOJUUnlockablesSchedule>
{
    NSString *_schedulingType;
    NSString *_startDateTime;
    NSString *_endDateTime;
    NSString *_timezone;
    NSNumber *_useLocalTimezone;
    NSString *_repetitionFrequency;
    NSString *_repetitionEndDateTime;
    NSString *_weeklyFrequency;
    NSArray *_repeatIntervals;
}

+ (_Bool)canInitFromProto;
+ (unsigned long long *)fasterCodingKeys;
+ (unsigned long long)fasterCodingVersion;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)decodeWithFasterDecoder:(id)arg1;
@property(readonly, copy) NSString *description;
- (void)encodeWithCoder:(id)arg1;
- (void)encodeWithFasterCoder:(id)arg1;
@property(readonly, copy, nonatomic) NSString *endDateTime; // @synthesize endDateTime=_endDateTime;
@property(readonly) unsigned long long hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithJSONDictionary:(id)arg1;
- (id)initWithProtoBinary:(id)arg1;
- (id)initWithProtoBuf:(id)arg1;
- (id)initWithSchedulingType:(id)arg1 startDateTime:(id)arg2 endDateTime:(id)arg3 timezone:(id)arg4 useLocalTimezone:(id)arg5 repetitionFrequency:(id)arg6 repetitionEndDateTime:(id)arg7 weeklyFrequency:(id)arg8 repeatIntervals:(id)arg9;
- (_Bool)isEqual:(id)arg1;
- (_Bool)preferFasterCoding;
@property(readonly, copy, nonatomic) NSArray *repeatIntervals; // @synthesize repeatIntervals=_repeatIntervals;
@property(readonly, copy, nonatomic) NSString *repetitionEndDateTime; // @synthesize repetitionEndDateTime=_repetitionEndDateTime;
@property(readonly, copy, nonatomic) NSString *repetitionFrequency; // @synthesize repetitionFrequency=_repetitionFrequency;
- (long long)repetitionFrequencyEnum;
@property(readonly, copy, nonatomic) NSString *schedulingType; // @synthesize schedulingType=_schedulingType;
- (long long)schedulingTypeEnum;
- (void)setObject:(id)arg1 forUInt64Key:(unsigned long long)arg2;
@property(readonly, copy, nonatomic) NSString *startDateTime; // @synthesize startDateTime=_startDateTime;
@property(readonly, copy, nonatomic) NSString *timezone; // @synthesize timezone=_timezone;
- (id)toDictionary;
- (id)toJson;
@property(readonly, copy, nonatomic) NSNumber *useLocalTimezone; // @synthesize useLocalTimezone=_useLocalTimezone;
- (_Bool)useLocalTimezoneValue;
@property(readonly, copy, nonatomic) NSString *weeklyFrequency; // @synthesize weeklyFrequency=_weeklyFrequency;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

