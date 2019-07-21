//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSString, SCCommerceAddressDataModel;

@interface SCCommercePaymentCardDataModel : NSObject <NSCopying>
{
    SCCommerceAddressDataModel *_billingAddress;
    NSString *_cardNumber;
    NSString *_expiryMonth;
    NSString *_expiryYear;
    NSString *_cvv;
    NSString *_brandname;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) SCCommerceAddressDataModel *billingAddress; // @synthesize billingAddress=_billingAddress;
@property(readonly, copy, nonatomic) NSString *brandname; // @synthesize brandname=_brandname;
@property(readonly, copy, nonatomic) NSString *cardNumber; // @synthesize cardNumber=_cardNumber;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, copy, nonatomic) NSString *cvv; // @synthesize cvv=_cvv;
@property(readonly, copy, nonatomic) NSString *expiryMonth; // @synthesize expiryMonth=_expiryMonth;
@property(readonly, copy, nonatomic) NSString *expiryYear; // @synthesize expiryYear=_expiryYear;
- (unsigned long long)hash;
- (id)initWithBillingAddress:(id)arg1 cardNumber:(id)arg2 expiryMonth:(id)arg3 expiryYear:(id)arg4 cvv:(id)arg5 brandname:(id)arg6;
- (_Bool)isEqual:(id)arg1;

@end

