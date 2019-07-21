//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SOJUGalleryServletSensorBlob-Protocol.h"

@class NSNumber, NSString;

@interface SOJUGalleryServletSensorBlob : NSObject <SOJUGalleryServletSensorBlob>
{
    NSString *_data;
    NSNumber *_sensorMajorVersion;
    NSNumber *_sensorMinorVersion;
}

+ (_Bool)canInitFromProto;
+ (unsigned long long *)fasterCodingKeys;
+ (unsigned long long)fasterCodingVersion;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, copy, nonatomic) NSString *data; // @synthesize data=_data;
- (void)decodeWithFasterDecoder:(id)arg1;
@property(readonly, copy) NSString *description;
- (void)encodeWithCoder:(id)arg1;
- (void)encodeWithFasterCoder:(id)arg1;
@property(readonly) unsigned long long hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithData:(id)arg1 sensorMajorVersion:(id)arg2 sensorMinorVersion:(id)arg3;
- (id)initWithJSONDictionary:(id)arg1;
- (id)initWithProtoBinary:(id)arg1;
- (id)initWithProtoBuf:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (_Bool)preferFasterCoding;
@property(readonly, copy, nonatomic) NSNumber *sensorMajorVersion; // @synthesize sensorMajorVersion=_sensorMajorVersion;
- (int)sensorMajorVersionValue;
@property(readonly, copy, nonatomic) NSNumber *sensorMinorVersion; // @synthesize sensorMinorVersion=_sensorMinorVersion;
- (int)sensorMinorVersionValue;
- (void)setObject:(id)arg1 forUInt64Key:(unsigned long long)arg2;
- (id)toDictionary;
- (id)toJson;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end
