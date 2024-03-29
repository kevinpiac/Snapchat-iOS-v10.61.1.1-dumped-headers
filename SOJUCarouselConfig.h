//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SOJUCarouselConfig-Protocol.h"

@class NSDictionary, NSNumber, NSString;

@interface SOJUCarouselConfig : NSObject <SOJUCarouselConfig>
{
    NSString *_configurationId;
    NSString *_versionId;
    NSNumber *_clientCacheExpirationDateTime;
    NSDictionary *_baseOverrides;
    NSDictionary *_filterOverride;
}

+ (_Bool)canInitFromProto;
+ (unsigned long long *)fasterCodingKeys;
+ (unsigned long long)fasterCodingVersion;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSDictionary *baseOverrides; // @synthesize baseOverrides=_baseOverrides;
@property(readonly, copy, nonatomic) NSNumber *clientCacheExpirationDateTime; // @synthesize clientCacheExpirationDateTime=_clientCacheExpirationDateTime;
- (long long)clientCacheExpirationDateTimeValue;
@property(readonly, copy, nonatomic) NSString *configurationId; // @synthesize configurationId=_configurationId;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)decodeWithFasterDecoder:(id)arg1;
@property(readonly, copy) NSString *description;
- (void)encodeWithCoder:(id)arg1;
- (void)encodeWithFasterCoder:(id)arg1;
@property(readonly, copy, nonatomic) NSDictionary *filterOverride; // @synthesize filterOverride=_filterOverride;
@property(readonly) unsigned long long hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithConfigurationId:(id)arg1 versionId:(id)arg2 clientCacheExpirationDateTime:(id)arg3 baseOverrides:(id)arg4 filterOverride:(id)arg5;
- (id)initWithJSONDictionary:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (_Bool)preferFasterCoding;
- (void)setObject:(id)arg1 forUInt64Key:(unsigned long long)arg2;
- (id)toDictionary;
- (id)toJson;
@property(readonly, copy, nonatomic) NSString *versionId; // @synthesize versionId=_versionId;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

