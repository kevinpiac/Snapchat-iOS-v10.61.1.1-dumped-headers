//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCNetworkingUserProfile-Protocol.h"

@class NSDictionary, NSString;

@interface SCNetworkingUserProfile : NSObject <SCNetworkingUserProfile>
{
    double _ttl;
    double _bornTime;
    NSDictionary *_userProfileResponseDict;
}

+ (unsigned long long *)fasterCodingKeys;
+ (unsigned long long)fasterCodingVersion;
+ (id)predictionWithJSONDictionary:(id)arg1;
- (void).cxx_destruct;
@property(readonly, nonatomic) double bornTime; // @synthesize bornTime=_bornTime;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)decodeWithFasterDecoder:(id)arg1;
@property(readonly, copy) NSString *description;
- (void)encodeWithCoder:(id)arg1;
- (void)encodeWithFasterCoder:(id)arg1;
@property(readonly) unsigned long long hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithTtl:(double)arg1 bornTime:(double)arg2 userProfileResponseDict:(id)arg3;
- (_Bool)isEqual:(id)arg1;
- (_Bool)isExpired;
- (_Bool)preferFasterCoding;
- (void)setFloat64:(double)arg1 forUInt64Key:(unsigned long long)arg2;
- (void)setObject:(id)arg1 forUInt64Key:(unsigned long long)arg2;
@property(readonly, nonatomic) double ttl; // @synthesize ttl=_ttl;
@property(readonly, copy, nonatomic) NSDictionary *userProfileResponseDict; // @synthesize userProfileResponseDict=_userProfileResponseDict;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

