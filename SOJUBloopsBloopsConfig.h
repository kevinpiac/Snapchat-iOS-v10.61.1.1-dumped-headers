//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SOJUBloopsBloopsConfig-Protocol.h"

@class NSString, SOJUBloopsBloopsConfigResources;

@interface SOJUBloopsBloopsConfig : NSObject <SOJUBloopsBloopsConfig>
{
    NSString *_configUrl;
    NSString *_modelsPrefixUrl;
    SOJUBloopsBloopsConfigResources *_resources;
}

+ (_Bool)canInitFromProto;
+ (unsigned long long *)fasterCodingKeys;
+ (unsigned long long)fasterCodingVersion;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *configUrl; // @synthesize configUrl=_configUrl;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)decodeWithFasterDecoder:(id)arg1;
@property(readonly, copy) NSString *description;
- (void)encodeWithCoder:(id)arg1;
- (void)encodeWithFasterCoder:(id)arg1;
@property(readonly) unsigned long long hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithConfigUrl:(id)arg1 modelsPrefixUrl:(id)arg2 resources:(id)arg3;
- (id)initWithJSONDictionary:(id)arg1;
- (_Bool)isEqual:(id)arg1;
@property(readonly, copy, nonatomic) NSString *modelsPrefixUrl; // @synthesize modelsPrefixUrl=_modelsPrefixUrl;
- (_Bool)preferFasterCoding;
@property(readonly, copy, nonatomic) SOJUBloopsBloopsConfigResources *resources; // @synthesize resources=_resources;
- (void)setObject:(id)arg1 forUInt64Key:(unsigned long long)arg2;
- (id)toDictionary;
- (id)toJson;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

