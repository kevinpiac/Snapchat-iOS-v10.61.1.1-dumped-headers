//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SOJUUnlockablesOndemandLineItemProperties-Protocol.h"

@class NSString;

@interface SOJUUnlockablesOndemandLineItemProperties : NSObject <SOJUUnlockablesOndemandLineItemProperties>
{
    NSString *_usageType;
    NSString *_purchaserTimezone;
    NSString *_displayName;
    NSString *_sponsoredBrandName;
    NSString *_geoStoryName;
    NSString *_geoStoryId;
}

+ (_Bool)canInitFromProto;
+ (unsigned long long *)fasterCodingKeys;
+ (unsigned long long)fasterCodingVersion;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)decodeWithFasterDecoder:(id)arg1;
@property(readonly, copy) NSString *description;
@property(readonly, copy, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
- (void)encodeWithCoder:(id)arg1;
- (void)encodeWithFasterCoder:(id)arg1;
@property(readonly, copy, nonatomic) NSString *geoStoryId; // @synthesize geoStoryId=_geoStoryId;
@property(readonly, copy, nonatomic) NSString *geoStoryName; // @synthesize geoStoryName=_geoStoryName;
@property(readonly) unsigned long long hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithJSONDictionary:(id)arg1;
- (id)initWithUsageType:(id)arg1 purchaserTimezone:(id)arg2 displayName:(id)arg3 sponsoredBrandName:(id)arg4 geoStoryName:(id)arg5 geoStoryId:(id)arg6;
- (_Bool)isEqual:(id)arg1;
- (_Bool)preferFasterCoding;
@property(readonly, copy, nonatomic) NSString *purchaserTimezone; // @synthesize purchaserTimezone=_purchaserTimezone;
- (void)setObject:(id)arg1 forUInt64Key:(unsigned long long)arg2;
@property(readonly, copy, nonatomic) NSString *sponsoredBrandName; // @synthesize sponsoredBrandName=_sponsoredBrandName;
- (id)toDictionary;
- (id)toJson;
@property(readonly, copy, nonatomic) NSString *usageType; // @synthesize usageType=_usageType;
- (long long)usageTypeEnum;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

