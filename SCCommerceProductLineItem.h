//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSDictionary, NSNumber, NSString, SCCommerceCurrency;

@interface SCCommerceProductLineItem : NSObject <NSCopying>
{
    NSString *_productId;
    NSString *_variantId;
    NSNumber *_quantity;
    NSString *_title;
    SCCommerceCurrency *_unitPrice;
    SCCommerceCurrency *_linePrice;
    SCCommerceCurrency *_strikethroughUnitPrice;
    SCCommerceCurrency *_strikethroughLinePrice;
    NSString *_type;
    NSDictionary *_assetInfo;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSDictionary *assetInfo; // @synthesize assetInfo=_assetInfo;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;
- (id)initWithProductId:(id)arg1 variantId:(id)arg2 quantity:(id)arg3 title:(id)arg4 unitPrice:(id)arg5 linePrice:(id)arg6 strikethroughUnitPrice:(id)arg7 strikethroughLinePrice:(id)arg8 type:(id)arg9 assetInfo:(id)arg10;
- (_Bool)isEqual:(id)arg1;
@property(readonly, copy, nonatomic) SCCommerceCurrency *linePrice; // @synthesize linePrice=_linePrice;
@property(readonly, copy, nonatomic) NSString *productId; // @synthesize productId=_productId;
@property(readonly, copy, nonatomic) NSNumber *quantity; // @synthesize quantity=_quantity;
@property(readonly, copy, nonatomic) SCCommerceCurrency *strikethroughLinePrice; // @synthesize strikethroughLinePrice=_strikethroughLinePrice;
@property(readonly, copy, nonatomic) SCCommerceCurrency *strikethroughUnitPrice; // @synthesize strikethroughUnitPrice=_strikethroughUnitPrice;
@property(readonly, copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(readonly, copy, nonatomic) NSString *type; // @synthesize type=_type;
@property(readonly, copy, nonatomic) SCCommerceCurrency *unitPrice; // @synthesize unitPrice=_unitPrice;
@property(readonly, copy, nonatomic) NSString *variantId; // @synthesize variantId=_variantId;

@end

