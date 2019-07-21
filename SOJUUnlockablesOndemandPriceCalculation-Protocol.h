//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"
#import "NSObject-Protocol.h"

@class NSArray, NSString, SOJUUnlockablesOndemandBundleDiscountRef, SOJUUnlockablesOndemandDiscountCodeReference, SOJUUnlockablesOndemandMonetaryAmount;

@protocol SOJUUnlockablesOndemandPriceCalculation <NSObject, NSCoding, NSCopying>
@property(readonly, copy, nonatomic) SOJUUnlockablesOndemandMonetaryAmount *amount;
@property(readonly, copy, nonatomic) SOJUUnlockablesOndemandBundleDiscountRef *bundleDiscountRef;
@property(readonly, copy, nonatomic) SOJUUnlockablesOndemandDiscountCodeReference *discountCodeRef;
@property(readonly, copy, nonatomic) NSString *mobilePaymentProductId;
@property(readonly, copy, nonatomic) NSArray *pricingRules;
@property(readonly, copy, nonatomic) NSString *quoteId;
@property(readonly, copy, nonatomic) SOJUUnlockablesOndemandMonetaryAmount *receiptTaxAmount;
@property(readonly, copy, nonatomic) SOJUUnlockablesOndemandMonetaryAmount *taxAmount;
@end

