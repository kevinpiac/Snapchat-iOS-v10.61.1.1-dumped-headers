//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SOJUGeoGeoLocation-Protocol.h"

@class NSNumber, NSString;

@interface SOJUGeoGeoLocation : NSObject <SOJUGeoGeoLocation>
{
    NSNumber *_timestamp;
    NSNumber *_lat;
    NSNumber *_lon;
    NSNumber *_altitude;
    NSNumber *_horizontalAccuracy;
    NSNumber *_speed;
}

+ (_Bool)canInitFromProto;
+ (unsigned long long *)fasterCodingKeys;
+ (unsigned long long)fasterCodingVersion;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSNumber *altitude; // @synthesize altitude=_altitude;
- (double)altitudeValue;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)decodeWithFasterDecoder:(id)arg1;
@property(readonly, copy) NSString *description;
- (void)encodeWithCoder:(id)arg1;
- (void)encodeWithFasterCoder:(id)arg1;
@property(readonly) unsigned long long hash;
@property(readonly, copy, nonatomic) NSNumber *horizontalAccuracy; // @synthesize horizontalAccuracy=_horizontalAccuracy;
- (double)horizontalAccuracyValue;
- (id)initWithCoder:(id)arg1;
- (id)initWithJSONDictionary:(id)arg1;
- (id)initWithTimestamp:(id)arg1 lat:(id)arg2 lon:(id)arg3 altitude:(id)arg4 horizontalAccuracy:(id)arg5 speed:(id)arg6;
- (_Bool)isEqual:(id)arg1;
@property(readonly, copy, nonatomic) NSNumber *lat; // @synthesize lat=_lat;
- (double)latValue;
@property(readonly, copy, nonatomic) NSNumber *lon; // @synthesize lon=_lon;
- (double)lonValue;
- (_Bool)preferFasterCoding;
- (void)setObject:(id)arg1 forUInt64Key:(unsigned long long)arg2;
@property(readonly, copy, nonatomic) NSNumber *speed; // @synthesize speed=_speed;
- (double)speedValue;
@property(readonly, copy, nonatomic) NSNumber *timestamp; // @synthesize timestamp=_timestamp;
- (double)timestampValue;
- (id)toDictionary;
- (id)toJson;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

