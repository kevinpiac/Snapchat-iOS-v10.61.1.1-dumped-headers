//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SOJUUnlockablesOndemandPriceCalculation-Protocol.h"

@class NSArray, NSString, SOJUUnlockablesOndemandBundleDiscountRef, SOJUUnlockablesOndemandDiscountCodeReference, SOJUUnlockablesOndemandMonetaryAmount;

@interface SOJUUnlockablesOndemandPriceCalculation : NSObject <SOJUUnlockablesOndemandPriceCalculation>
{
    NSArray *_pricingRules;
    SOJUUnlockablesOndemandMonetaryAmount *_amount;
    NSString *_mobilePaymentProductId;
    SOJUUnlockablesOndemandMonetaryAmount *_taxAmount;
    SOJUUnlockablesOndemandMonetaryAmount *_receiptTaxAmount;
    NSString *_quoteId;
    SOJUUnlockablesOndemandDiscountCodeReference *_discountCodeRef;
    SOJUUnlockablesOndemandBundleDiscountRef *_bundleDiscountRef;
}

+ (_Bool)canInitFromProto;
+ (unsigned long long *)fasterCodingKeys;
+ (unsigned long long)fasterCodingVersion;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) SOJUUnlockablesOndemandMonetaryAmount *amount; // @synthesize amount=_amount;
@property(readonly, copy, nonatomic) SOJUUnlockablesOndemandBundleDiscountRef *bundleDiscountRef; // @synthesize bundleDiscountRef=_bundleDiscountRef;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)decodeWithFasterDecoder:(id)arg1;
@property(readonly, copy) NSString *description;
@property(readonly, copy, nonatomic) SOJUUnlockablesOndemandDiscountCodeReference *discountCodeRef; // @synthesize discountCodeRef=_discountCodeRef;
- (void)encodeWithCoder:(id)arg1;
- (void)encodeWithFasterCoder:(id)arg1;
@property(readonly) unsigned long long hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithJSONDictionary:(id)arg1;
- (id)initWithPricingRules:(id)arg1 amount:(id)arg2 mobilePaymentProductId:(id)arg3 taxAmount:(id)arg4 receiptTaxAmount:(id)arg5 quoteId:(id)arg6 discountCodeRef:(id)arg7 bundleDiscountRef:(id)arg8;
- (_Bool)isEqual:(id)arg1;
@property(readonly, copy, nonatomic) NSString *mobilePaymentProductId; // @synthesize mobilePaymentProductId=_mobilePaymentProductId;
- (_Bool)preferFasterCoding;
@property(readonly, copy, nonatomic) NSArray *pricingRules; // @synthesize pricingRules=_pricingRules;
@property(readonly, copy, nonatomic) NSString *quoteId; // @synthesize quoteId=_quoteId;
@property(readonly, copy, nonatomic) SOJUUnlockablesOndemandMonetaryAmount *receiptTaxAmount; // @synthesize receiptTaxAmount=_receiptTaxAmount;
- (void)setObject:(id)arg1 forUInt64Key:(unsigned long long)arg2;
@property(readonly, copy, nonatomic) SOJUUnlockablesOndemandMonetaryAmount *taxAmount; // @synthesize taxAmount=_taxAmount;
- (id)toDictionary;
- (id)toJson;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end
