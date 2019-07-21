//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class BTPostalAddress, NSSet, NSString;

@interface BTPaymentRequest : NSObject <NSCopying>
{
    _Bool _shouldHideCallToAction;
    _Bool _noShipping;
    _Bool _presentViewControllersFromTop;
    _Bool _showDefaultPaymentMethodNonceFirst;
    NSString *_summaryTitle;
    NSString *_summaryDescription;
    NSString *_displayAmount;
    NSString *_callToActionText;
    NSString *_amount;
    NSString *_currencyCode;
    BTPostalAddress *_shippingAddress;
    NSSet *_additionalPayPalScopes;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSSet *additionalPayPalScopes; // @synthesize additionalPayPalScopes=_additionalPayPalScopes;
@property(copy, nonatomic) NSString *amount; // @synthesize amount=_amount;
@property(copy, nonatomic) NSString *callToActionText; // @synthesize callToActionText=_callToActionText;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(copy, nonatomic) NSString *currencyCode; // @synthesize currencyCode=_currencyCode;
@property(copy, nonatomic) NSString *displayAmount; // @synthesize displayAmount=_displayAmount;
- (id)init;
@property(nonatomic) _Bool noShipping; // @synthesize noShipping=_noShipping;
@property(nonatomic) _Bool presentViewControllersFromTop; // @synthesize presentViewControllersFromTop=_presentViewControllersFromTop;
@property(retain, nonatomic) BTPostalAddress *shippingAddress; // @synthesize shippingAddress=_shippingAddress;
@property(nonatomic) _Bool shouldHideCallToAction; // @synthesize shouldHideCallToAction=_shouldHideCallToAction;
@property(nonatomic) _Bool showDefaultPaymentMethodNonceFirst; // @synthesize showDefaultPaymentMethodNonceFirst=_showDefaultPaymentMethodNonceFirst;
@property(copy, nonatomic) NSString *summaryDescription; // @synthesize summaryDescription=_summaryDescription;
@property(copy, nonatomic) NSString *summaryTitle; // @synthesize summaryTitle=_summaryTitle;

@end
