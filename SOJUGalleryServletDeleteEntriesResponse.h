//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SOJUGalleryServletDeleteEntriesResponse-Protocol.h"

@class NSArray, NSNumber, NSString, SOJUGalleryServletQuota;

@interface SOJUGalleryServletDeleteEntriesResponse : NSObject <SOJUGalleryServletDeleteEntriesResponse>
{
    NSArray *_entries;
    NSNumber *_lastSeqnum;
    NSNumber *_serviceStatusCode;
    NSString *_userString;
    NSNumber *_backoffTime;
    NSString *_debugInfo;
    SOJUGalleryServletQuota *_quota;
    NSNumber *_totalEntryCount;
}

+ (_Bool)canInitFromProto;
+ (unsigned long long *)fasterCodingKeys;
+ (unsigned long long)fasterCodingVersion;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSNumber *backoffTime; // @synthesize backoffTime=_backoffTime;
- (long long)backoffTimeValue;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, copy, nonatomic) NSString *debugInfo; // @synthesize debugInfo=_debugInfo;
- (void)decodeWithFasterDecoder:(id)arg1;
@property(readonly, copy) NSString *description;
- (void)encodeWithCoder:(id)arg1;
- (void)encodeWithFasterCoder:(id)arg1;
@property(readonly, copy, nonatomic) NSArray *entries; // @synthesize entries=_entries;
@property(readonly) unsigned long long hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithEntries:(id)arg1 lastSeqnum:(id)arg2 serviceStatusCode:(id)arg3 userString:(id)arg4 backoffTime:(id)arg5 debugInfo:(id)arg6 quota:(id)arg7 totalEntryCount:(id)arg8;
- (id)initWithJSONDictionary:(id)arg1;
- (id)initWithProtoBinary:(id)arg1;
- (id)initWithProtoBuf:(id)arg1;
- (_Bool)isEqual:(id)arg1;
@property(readonly, copy, nonatomic) NSNumber *lastSeqnum; // @synthesize lastSeqnum=_lastSeqnum;
- (long long)lastSeqnumValue;
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
