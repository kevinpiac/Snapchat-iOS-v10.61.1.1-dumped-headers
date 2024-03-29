//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SOJUWeatherResponse-Protocol.h"

@class NSArray, NSNumber, NSString;

@interface SOJUWeatherResponse : NSObject <SOJUWeatherResponse>
{
    NSNumber *_latitude;
    NSNumber *_longitude;
    NSNumber *_timestamp;
    NSNumber *_fahrenheit;
    NSNumber *_celsius;
    NSString *_severeCondition;
    NSString *_locationName;
    NSArray *_hourlyForecasts;
    NSNumber *_hourlyBoundary;
    NSArray *_dailyForecasts;
    NSNumber *_dailyBoundary;
}

+ (_Bool)canInitFromProto;
+ (unsigned long long *)fasterCodingKeys;
+ (unsigned long long)fasterCodingVersion;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSNumber *celsius; // @synthesize celsius=_celsius;
- (float)celsiusValue;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, copy, nonatomic) NSNumber *dailyBoundary; // @synthesize dailyBoundary=_dailyBoundary;
- (long long)dailyBoundaryValue;
@property(readonly, copy, nonatomic) NSArray *dailyForecasts; // @synthesize dailyForecasts=_dailyForecasts;
- (void)decodeWithFasterDecoder:(id)arg1;
@property(readonly, copy) NSString *description;
- (void)encodeWithCoder:(id)arg1;
- (void)encodeWithFasterCoder:(id)arg1;
@property(readonly, copy, nonatomic) NSNumber *fahrenheit; // @synthesize fahrenheit=_fahrenheit;
- (float)fahrenheitValue;
@property(readonly) unsigned long long hash;
@property(readonly, copy, nonatomic) NSNumber *hourlyBoundary; // @synthesize hourlyBoundary=_hourlyBoundary;
- (long long)hourlyBoundaryValue;
@property(readonly, copy, nonatomic) NSArray *hourlyForecasts; // @synthesize hourlyForecasts=_hourlyForecasts;
- (id)initWithCoder:(id)arg1;
- (id)initWithJSONDictionary:(id)arg1;
- (id)initWithLatitude:(id)arg1 longitude:(id)arg2 timestamp:(id)arg3 fahrenheit:(id)arg4 celsius:(id)arg5 severeCondition:(id)arg6 locationName:(id)arg7 hourlyForecasts:(id)arg8 hourlyBoundary:(id)arg9 dailyForecasts:(id)arg10 dailyBoundary:(id)arg11;
- (_Bool)isEqual:(id)arg1;
@property(readonly, copy, nonatomic) NSNumber *latitude; // @synthesize latitude=_latitude;
- (double)latitudeValue;
@property(readonly, copy, nonatomic) NSString *locationName; // @synthesize locationName=_locationName;
@property(readonly, copy, nonatomic) NSNumber *longitude; // @synthesize longitude=_longitude;
- (double)longitudeValue;
- (_Bool)preferFasterCoding;
- (void)setObject:(id)arg1 forUInt64Key:(unsigned long long)arg2;
@property(readonly, copy, nonatomic) NSString *severeCondition; // @synthesize severeCondition=_severeCondition;
@property(readonly, copy, nonatomic) NSNumber *timestamp; // @synthesize timestamp=_timestamp;
- (long long)timestampValue;
- (id)toDictionary;
- (id)toJson;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

