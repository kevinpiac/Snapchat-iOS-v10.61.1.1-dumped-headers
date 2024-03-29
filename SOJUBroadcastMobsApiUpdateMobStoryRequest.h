//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SOJUBroadcastMobsApiUpdateMobStoryRequest-Protocol.h"

@class NSArray, NSNumber, NSString, SOJUBroadcastMobsModelLocation;

@interface SOJUBroadcastMobsApiUpdateMobStoryRequest : NSObject <SOJUBroadcastMobsApiUpdateMobStoryRequest>
{
    NSString *_idValue;
    NSString *_typeVal;
    NSString *_displayName;
    NSArray *_contributors;
    SOJUBroadcastMobsModelLocation *_geoFenceCenter;
    NSString *_geoSubtext;
    NSString *_privacyType;
    NSArray *_viewers;
    NSNumber *_enableAutosave;
    NSString *_mischiefId;
}

+ (_Bool)canInitFromProto;
+ (unsigned long long *)fasterCodingKeys;
+ (unsigned long long)fasterCodingVersion;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSArray *contributors; // @synthesize contributors=_contributors;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)decodeWithFasterDecoder:(id)arg1;
@property(readonly, copy) NSString *description;
@property(readonly, copy, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
@property(readonly, copy, nonatomic) NSNumber *enableAutosave; // @synthesize enableAutosave=_enableAutosave;
- (_Bool)enableAutosaveValue;
- (void)encodeWithCoder:(id)arg1;
- (void)encodeWithFasterCoder:(id)arg1;
@property(readonly, copy, nonatomic) SOJUBroadcastMobsModelLocation *geoFenceCenter; // @synthesize geoFenceCenter=_geoFenceCenter;
@property(readonly, copy, nonatomic) NSString *geoSubtext; // @synthesize geoSubtext=_geoSubtext;
@property(readonly) unsigned long long hash;
@property(readonly, copy, nonatomic) NSString *idValue; // @synthesize idValue=_idValue;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdValue:(id)arg1 typeVal:(id)arg2 displayName:(id)arg3 contributors:(id)arg4 geoFenceCenter:(id)arg5 geoSubtext:(id)arg6 privacyType:(id)arg7 viewers:(id)arg8 enableAutosave:(id)arg9 mischiefId:(id)arg10;
- (id)initWithJSONDictionary:(id)arg1;
- (_Bool)isEqual:(id)arg1;
@property(readonly, copy, nonatomic) NSString *mischiefId; // @synthesize mischiefId=_mischiefId;
- (_Bool)preferFasterCoding;
@property(readonly, copy, nonatomic) NSString *privacyType; // @synthesize privacyType=_privacyType;
- (long long)privacyTypeEnum;
- (void)setObject:(id)arg1 forUInt64Key:(unsigned long long)arg2;
- (id)toDictionary;
- (id)toJson;
@property(readonly, copy, nonatomic) NSString *typeVal; // @synthesize typeVal=_typeVal;
- (long long)typeValEnum;
@property(readonly, copy, nonatomic) NSArray *viewers; // @synthesize viewers=_viewers;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

