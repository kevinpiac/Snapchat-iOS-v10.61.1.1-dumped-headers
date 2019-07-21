//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SOJUGalleryServletGetCollectionsResponse-Protocol.h"

@class NSArray, NSNumber, NSString, SOJUGalleryServletQuota;

@interface SOJUGalleryServletGetCollectionsResponse : NSObject <SOJUGalleryServletGetCollectionsResponse>
{
    NSNumber *_serviceStatusCode;
    NSString *_userString;
    NSNumber *_backoffTime;
    NSString *_debugInfo;
    SOJUGalleryServletQuota *_quota;
    NSNumber *_totalEntryCount;
    NSArray *_collections;
}

+ (_Bool)canInitFromProto;
+ (unsigned long long *)fasterCodingKeys;
+ (unsigned long long)fasterCodingVersion;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSNumber *backoffTime; // @synthesize backoffTime=_backoffTime;
- (long long)backoffTimeValue;
@property(readonly, copy, nonatomic) NSArray *collections; // @synthesize collections=_collections;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, copy, nonatomic) NSString *debugInfo; // @synthesize debugInfo=_debugInfo;
- (void)decodeWithFasterDecoder:(id)arg1;
@property(readonly, copy) NSString *description;
- (void)encodeWithCoder:(id)arg1;
- (void)encodeWithFasterCoder:(id)arg1;
@property(readonly) unsigned long long hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithJSONDictionary:(id)arg1;
- (id)initWithServiceStatusCode:(id)arg1 userString:(id)arg2 backoffTime:(id)arg3 debugInfo:(id)arg4 quota:(id)arg5 totalEntryCount:(id)arg6 collections:(id)arg7;
- (_Bool)isEqual:(id)arg1;
- (_Bool)preferFasterCoding;
@property(readonly, copy, nonatomic) SOJUGalleryServletQuota *quota; // @synthesize quota=_quota;
@property(readonly, copy, nonatomic) NSNumber *serviceStatusCode; // @synthesize serviceStatusCode=_serviceStatusCode;
- (long long)serviceStatusCodeEnum;
- (int)serviceStatusCodeValue;
- (void)setObject:(id)arg1 forUInt64Key:(unsigned long long)arg2;
- (id)toDictionary;
- (id)toJson;
@property(readonly, copy, nonatomic) NSNumber *totalEntryCount; // @synthesize totalEntryCount=_totalEntryCount;
- (int)totalEntryCountValue;
@property(readonly, copy, nonatomic) NSString *userString; // @synthesize userString=_userString;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

