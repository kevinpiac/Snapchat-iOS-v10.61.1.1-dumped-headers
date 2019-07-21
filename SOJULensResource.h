//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SOJULensResource-Protocol.h"

@class NSNumber, NSString;

@interface SOJULensResource : NSObject <SOJULensResource>
{
    NSString *_resourceType;
    NSString *_quality;
    NSString *_archiveLink;
    NSString *_checksum;
    NSString *_signature;
    NSNumber *_lastUpdated;
    NSNumber *_algorithmVersion;
}

+ (_Bool)canInitFromProto;
+ (unsigned long long *)fasterCodingKeys;
+ (unsigned long long)fasterCodingVersion;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSNumber *algorithmVersion; // @synthesize algorithmVersion=_algorithmVersion;
- (int)algorithmVersionValue;
@property(readonly, copy, nonatomic) NSString *archiveLink; // @synthesize archiveLink=_archiveLink;
@property(readonly, copy, nonatomic) NSString *checksum; // @synthesize checksum=_checksum;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)decodeWithFasterDecoder:(id)arg1;
@property(readonly, copy) NSString *description;
- (void)encodeWithCoder:(id)arg1;
- (void)encodeWithFasterCoder:(id)arg1;
@property(readonly) unsigned long long hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithJSONDictionary:(id)arg1;
- (id)initWithProtoBinary:(id)arg1;
- (id)initWithProtoBuf:(id)arg1;
- (id)initWithResourceType:(id)arg1 quality:(id)arg2 archiveLink:(id)arg3 checksum:(id)arg4 signature:(id)arg5 lastUpdated:(id)arg6 algorithmVersion:(id)arg7;
- (_Bool)isEqual:(id)arg1;
@property(readonly, copy, nonatomic) NSNumber *lastUpdated; // @synthesize lastUpdated=_lastUpdated;
- (long long)lastUpdatedValue;
- (_Bool)preferFasterCoding;
@property(readonly, copy, nonatomic) NSString *quality; // @synthesize quality=_quality;
- (long long)qualityEnum;
@property(readonly, copy, nonatomic) NSString *resourceType; // @synthesize resourceType=_resourceType;
- (long long)resourceTypeEnum;
- (void)setObject:(id)arg1 forUInt64Key:(unsigned long long)arg2;
@property(readonly, copy, nonatomic) NSString *signature; // @synthesize signature=_signature;
- (id)toDictionary;
- (id)toJson;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

