//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SOJUPaymentsBillingAddress-Protocol.h"

@class NSString;

@interface SOJUPaymentsBillingAddress : NSObject <SOJUPaymentsBillingAddress>
{
    NSString *_firstName;
    NSString *_lastName;
    NSString *_addressLine1;
    NSString *_addressLine2;
    NSString *_city;
    NSString *_state;
    NSString *_postalCode;
    NSString *_countryCode;
}

+ (_Bool)canInitFromProto;
+ (unsigned long long *)fasterCodingKeys;
+ (unsigned long long)fasterCodingVersion;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *addressLine1; // @synthesize addressLine1=_addressLine1;
@property(readonly, copy, nonatomic) NSString *addressLine2; // @synthesize addressLine2=_addressLine2;
@property(readonly, copy, nonatomic) NSString *city; // @synthesize city=_city;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, copy, nonatomic) NSString *countryCode; // @synthesize countryCode=_countryCode;
- (long long)countryCodeEnum;
- (void)decodeWithFasterDecoder:(id)arg1;
@property(readonly, copy) NSString *description;
- (void)encodeWithCoder:(id)arg1;
- (void)encodeWithFasterCoder:(id)arg1;
@property(readonly, copy, nonatomic) NSString *firstName; // @synthesize firstName=_firstName;
@property(readonly) unsigned long long hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithFirstName:(id)arg1 lastName:(id)arg2 addressLine1:(id)arg3 addressLine2:(id)arg4 city:(id)arg5 state:(id)arg6 postalCode:(id)arg7 countryCode:(id)arg8;
- (id)initWithJSONDictionary:(id)arg1;
- (_Bool)isEqual:(id)arg1;
@property(readonly, copy, nonatomic) NSString *lastName; // @synthesize lastName=_lastName;
@property(readonly, copy, nonatomic) NSString *postalCode; // @synthesize postalCode=_postalCode;
- (_Bool)preferFasterCoding;
- (void)setObject:(id)arg1 forUInt64Key:(unsigned long long)arg2;
@property(readonly, copy, nonatomic) NSString *state; // @synthesize state=_state;
- (id)toDictionary;
- (id)toJson;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

