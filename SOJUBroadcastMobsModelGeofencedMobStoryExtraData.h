//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SOJUBroadcastMobsModelGeofencedMobStoryExtraData-Protocol.h"

@class NSNumber, NSString, SOJUBroadcastMobsModelLocation;

@interface SOJUBroadcastMobsModelGeofencedMobStoryExtraData : NSObject <SOJUBroadcastMobsModelGeofencedMobStoryExtraData>
{
    SOJUBroadcastMobsModelLocation *_center;
    NSNumber *_radius;
    NSString *_privacyType;
}

+ (_Bool)canInitFromProto;
+ (unsigned long long *)fasterCodingKeys;
+ (unsigned long long)fasterCodingVersion;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) SOJUBroadcastMobsModelLocation *center; // @synthesize center=_center;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)decodeWithFasterDecoder:(id)arg1;
@property(readonly, copy) NSString *description;
- (void)encodeWithCoder:(id)arg1;
- (void)encodeWithFasterCoder:(id)arg1;
@property(readonly) unsigned long long hash;
- (id)initWithCenter:(id)arg1 radius:(id)arg2 privacyType:(id)arg3;
- (id)initWithCoder:(id)arg1;
- (id)initWithJSONDictionary:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (_Bool)preferFasterCoding;
@property(readonly, copy, nonatomic) NSString *privacyType; // @synthesize privacyType=_privacyType;
- (long long)privacyTypeEnum;
@property(readonly, copy, nonatomic) NSNumber *radius; // @synthesize radius=_radius;
- (double)radiusValue;
- (void)setObject:(id)arg1 forUInt64Key:(unsigned long long)arg2;
- (id)toDictionary;
- (id)toJson;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

