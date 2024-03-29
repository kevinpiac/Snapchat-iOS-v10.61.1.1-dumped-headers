//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SOJUGalleryWeatherInfoFilter-Protocol.h"

@class NSArray, NSNumber, NSString;

@interface SOJUGalleryWeatherInfoFilter : NSObject <SOJUGalleryWeatherInfoFilter>
{
    NSNumber *_celsius;
    NSNumber *_fahrenheit;
    NSString *_locationName;
    NSArray *_hourlyForecasts;
    NSArray *_dailyForecasts;
    NSString *_viewType;
}

+ (_Bool)canInitFromProto;
+ (unsigned long long *)fasterCodingKeys;
+ (unsigned long long)fasterCodingVersion;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSNumber *celsius; // @synthesize celsius=_celsius;
- (int)celsiusValue;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, copy, nonatomic) NSArray *dailyForecasts; // @synthesize dailyForecasts=_dailyForecasts;
- (void)decodeWithFasterDecoder:(id)arg1;
@property(readonly, copy) NSString *description;
- (void)encodeWithCoder:(id)arg1;
- (void)encodeWithFasterCoder:(id)arg1;
@property(readonly, copy, nonatomic) NSNumber *fahrenheit; // @synthesize fahrenheit=_fahrenheit;
- (int)fahrenheitValue;
@property(readonly) unsigned long long hash;
@property(readonly, copy, nonatomic) NSArray *hourlyForecasts; // @synthesize hourlyForecasts=_hourlyForecasts;
- (id)initWithCelsius:(id)arg1 fahrenheit:(id)arg2 locationName:(id)arg3 hourlyForecasts:(id)arg4 dailyForecasts:(id)arg5 viewType:(id)arg6;
- (id)initWithCoder:(id)arg1;
- (id)initWithJSONDictionary:(id)arg1;
- (_Bool)isEqual:(id)arg1;
@property(readonly, copy, nonatomic) NSString *locationName; // @synthesize locationName=_locationName;
- (_Bool)preferFasterCoding;
- (void)setObject:(id)arg1 forUInt64Key:(unsigned long long)arg2;
- (id)toDictionary;
- (id)toJson;
@property(readonly, copy, nonatomic) NSString *viewType; // @synthesize viewType=_viewType;
- (long long)viewTypeEnum;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

