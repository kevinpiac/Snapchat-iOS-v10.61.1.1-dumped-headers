//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SOJUAdTopsnapVolumes-Protocol.h"

@class NSNumber, NSString;

@interface SOJUAdTopsnapVolumes : NSObject <SOJUAdTopsnapVolumes>
{
    NSNumber *_maxVolumeAtStart;
    NSNumber *_maxVolumeAt25PercentMediaDuration;
    NSNumber *_maxVolumeAt50PercentMediaDuration;
    NSNumber *_maxVolumeAt75PercentMediaDuration;
    NSNumber *_maxVolumeAt97PercentMediaDuration;
    NSNumber *_maxVolumeAt100PercentMediaDuration;
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
@property(readonly) unsigned long long hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithJSONDictionary:(id)arg1;
- (id)initWithMaxVolumeAtStart:(id)arg1 maxVolumeAt25PercentMediaDuration:(id)arg2 maxVolumeAt50PercentMediaDuration:(id)arg3 maxVolumeAt75PercentMediaDuration:(id)arg4 maxVolumeAt97PercentMediaDuration:(id)arg5 maxVolumeAt100PercentMediaDuration:(id)arg6;
- (_Bool)isEqual:(id)arg1;
@property(readonly, copy, nonatomic) NSNumber *maxVolumeAt100PercentMediaDuration; // @synthesize maxVolumeAt100PercentMediaDuration=_maxVolumeAt100PercentMediaDuration;
- (float)maxVolumeAt100PercentMediaDurationValue;
@property(readonly, copy, nonatomic) NSNumber *maxVolumeAt25PercentMediaDuration; // @synthesize maxVolumeAt25PercentMediaDuration=_maxVolumeAt25PercentMediaDuration;
- (float)maxVolumeAt25PercentMediaDurationValue;
@property(readonly, copy, nonatomic) NSNumber *maxVolumeAt50PercentMediaDuration; // @synthesize maxVolumeAt50PercentMediaDuration=_maxVolumeAt50PercentMediaDuration;
- (float)maxVolumeAt50PercentMediaDurationValue;
@property(readonly, copy, nonatomic) NSNumber *maxVolumeAt75PercentMediaDuration; // @synthesize maxVolumeAt75PercentMediaDuration=_maxVolumeAt75PercentMediaDuration;
- (float)maxVolumeAt75PercentMediaDurationValue;
@property(readonly, copy, nonatomic) NSNumber *maxVolumeAt97PercentMediaDuration; // @synthesize maxVolumeAt97PercentMediaDuration=_maxVolumeAt97PercentMediaDuration;
- (float)maxVolumeAt97PercentMediaDurationValue;
@property(readonly, copy, nonatomic) NSNumber *maxVolumeAtStart; // @synthesize maxVolumeAtStart=_maxVolumeAtStart;
- (float)maxVolumeAtStartValue;
- (_Bool)preferFasterCoding;
- (void)setObject:(id)arg1 forUInt64Key:(unsigned long long)arg2;
- (id)toDictionary;
- (id)toJson;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

