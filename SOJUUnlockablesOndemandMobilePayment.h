//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SOJUUnlockablesOndemandMobilePayment-Protocol.h"

@class NSNumber, NSString, SOJUUnlockablesOndemandMobileLocalizedMonetaryAmount;

@interface SOJUUnlockablesOndemandMobilePayment : NSObject <SOJUUnlockablesOndemandMobilePayment>
{
    NSString *_platform;
    NSString *_productId;
    NSString *_paymentUserAgent;
    NSNumber *_isEligibleToPay;
    NSNumber *_isEligibleToRefund;
    NSString *_receipt;
    NSString *_signature;
    SOJUUnlockablesOndemandMobileLocalizedMonetaryAmount *_localizedMonetaryAmount;
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
@property(readonly) unsigned long long hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithJSONDictionary:(id)arg1;
- (id)initWithPlatform:(id)arg1 productId:(id)arg2 paymentUserAgent:(id)arg3 isEligibleToPay:(id)arg4 isEligibleToRefund:(id)arg5 receipt:(id)arg6 signature:(id)arg7 localizedMonetaryAmount:(id)arg8;
@property(readonly, copy, nonatomic) NSNumber *isEligibleToPay; // @synthesize isEligibleToPay=_isEligibleToPay;
- (_Bool)isEligibleToPayValue;
@property(readonly, copy, nonatomic) NSNumber *isEligibleToRefund; // @synthesize isEligibleToRefund=_isEligibleToRefund;
- (_Bool)isEligibleToRefundValue;
- (_Bool)isEqual:(id)arg1;
@property(readonly, copy, nonatomic) SOJUUnlockablesOndemandMobileLocalizedMonetaryAmount *localizedMonetaryAmount; // @synthesize localizedMonetaryAmount=_localizedMonetaryAmount;
@property(readonly, copy, nonatomic) NSString *paymentUserAgent; // @synthesize paymentUserAgent=_paymentUserAgent;
@property(readonly, copy, nonatomic) NSString *platform; // @synthesize platform=_platform;
- (long long)platformEnum;
- (_Bool)preferFasterCoding;
@property(readonly, copy, nonatomic) NSString *productId; // @synthesize productId=_productId;
@property(readonly, copy, nonatomic) NSString *receipt; // @synthesize receipt=_receipt;
- (void)setObject:(id)arg1 forUInt64Key:(unsigned long long)arg2;
@property(readonly, copy, nonatomic) NSString *signature; // @synthesize signature=_signature;
- (id)toDictionary;
- (id)toJson;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

