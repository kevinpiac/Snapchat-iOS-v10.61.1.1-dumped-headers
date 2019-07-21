//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SOJUIdentityCreateMischiefResponse-Protocol.h"

@class NSString, SOJUIdentityMischief;

@interface SOJUIdentityCreateMischiefResponse : NSObject <SOJUIdentityCreateMischiefResponse>
{
    NSString *_requestUuid;
    SOJUIdentityMischief *_sojuNewMischief;
    NSString *_errorType;
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
@property(readonly, copy, nonatomic) NSString *errorType; // @synthesize errorType=_errorType;
- (long long)errorTypeEnum;
@property(readonly) unsigned long long hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithJSONDictionary:(id)arg1;
- (id)initWithRequestUuid:(id)arg1 sojuNewMischief:(id)arg2 errorType:(id)arg3;
- (_Bool)isEqual:(id)arg1;
- (_Bool)preferFasterCoding;
@property(readonly, copy, nonatomic) NSString *requestUuid; // @synthesize requestUuid=_requestUuid;
- (void)setObject:(id)arg1 forUInt64Key:(unsigned long long)arg2;
@property(readonly, copy, nonatomic) SOJUIdentityMischief *sojuNewMischief; // @synthesize sojuNewMischief=_sojuNewMischief;
- (id)toDictionary;
- (id)toJson;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end
