//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SOJUConfigConfigResponse-Protocol.h"

@class NSDictionary, NSString;

@interface SOJUConfigConfigResponse : NSObject <SOJUConfigConfigResponse>
{
    NSDictionary *_stringConfigs;
    NSDictionary *_floatConfigs;
    NSDictionary *_longConfigs;
    NSDictionary *_booleanConfigs;
}

+ (_Bool)canInitFromProto;
+ (unsigned long long *)fasterCodingKeys;
+ (unsigned long long)fasterCodingVersion;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSDictionary *booleanConfigs; // @synthesize booleanConfigs=_booleanConfigs;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)decodeWithFasterDecoder:(id)arg1;
@property(readonly, copy) NSString *description;
- (void)encodeWithCoder:(id)arg1;
- (void)encodeWithFasterCoder:(id)arg1;
@property(readonly, copy, nonatomic) NSDictionary *floatConfigs; // @synthesize floatConfigs=_floatConfigs;
@property(readonly) unsigned long long hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithJSONDictionary:(id)arg1;
- (id)initWithStringConfigs:(id)arg1 floatConfigs:(id)arg2 longConfigs:(id)arg3 booleanConfigs:(id)arg4;
- (_Bool)isEqual:(id)arg1;
@property(readonly, copy, nonatomic) NSDictionary *longConfigs; // @synthesize longConfigs=_longConfigs;
- (_Bool)preferFasterCoding;
- (void)setObject:(id)arg1 forUInt64Key:(unsigned long long)arg2;
@property(readonly, copy, nonatomic) NSDictionary *stringConfigs; // @synthesize stringConfigs=_stringConfigs;
- (id)toDictionary;
- (id)toJson;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

