//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SOJUScannableActionBarcodeOffer-Protocol.h"

@class NSNumber, NSString;

@interface SOJUScannableActionBarcodeOffer : NSObject <SOJUScannableActionBarcodeOffer>
{
    NSString *_merchantIcon;
    NSString *_productTitle;
    NSString *_productImageurl;
    NSString *_offerPriceLocalized;
    NSString *_viewOnUrl;
    NSNumber *_customerRating;
    NSString *_actionHint;
}

+ (_Bool)canInitFromProto;
+ (unsigned long long *)fasterCodingKeys;
+ (unsigned long long)fasterCodingVersion;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *actionHint; // @synthesize actionHint=_actionHint;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, copy, nonatomic) NSNumber *customerRating; // @synthesize customerRating=_customerRating;
- (float)customerRatingValue;
- (void)decodeWithFasterDecoder:(id)arg1;
@property(readonly, copy) NSString *description;
- (void)encodeWithCoder:(id)arg1;
- (void)encodeWithFasterCoder:(id)arg1;
@property(readonly) unsigned long long hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithJSONDictionary:(id)arg1;
- (id)initWithMerchantIcon:(id)arg1 productTitle:(id)arg2 productImageurl:(id)arg3 offerPriceLocalized:(id)arg4 viewOnUrl:(id)arg5 customerRating:(id)arg6 actionHint:(id)arg7;
- (_Bool)isEqual:(id)arg1;
@property(readonly, copy, nonatomic) NSString *merchantIcon; // @synthesize merchantIcon=_merchantIcon;
@property(readonly, copy, nonatomic) NSString *offerPriceLocalized; // @synthesize offerPriceLocalized=_offerPriceLocalized;
- (_Bool)preferFasterCoding;
@property(readonly, copy, nonatomic) NSString *productImageurl; // @synthesize productImageurl=_productImageurl;
@property(readonly, copy, nonatomic) NSString *productTitle; // @synthesize productTitle=_productTitle;
- (void)setObject:(id)arg1 forUInt64Key:(unsigned long long)arg2;
- (id)toDictionary;
- (id)toJson;
@property(readonly, copy, nonatomic) NSString *viewOnUrl; // @synthesize viewOnUrl=_viewOnUrl;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

