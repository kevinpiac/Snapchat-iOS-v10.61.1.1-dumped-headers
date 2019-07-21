//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCACommerceApiEventBase.h"

@class NSString;

@interface SCACommerceCreditCardApiEvent : SCACommerceApiEventBase
{
    long long cardType;
    NSString *paymentMethodId;
}

- (void).cxx_destruct;
- (id)asDictionary;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (long long)getCardType;
- (id)getEventName;
- (long long)getEventQoS;
- (id)getPaymentMethodId;
- (double)getPerUserSamplingRate;
- (id)init;
- (void)setCardType:(long long)arg1;
- (void)setPaymentMethodId:(id)arg1;

@end
