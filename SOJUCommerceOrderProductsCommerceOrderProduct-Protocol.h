//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"
#import "NSObject-Protocol.h"
#import "SOJUCommerceOrderProduct-Protocol.h"

@class NSString, SOJUCommerceVariantImages;

@protocol SOJUCommerceOrderProductsCommerceOrderProduct <NSObject, NSCoding, NSCopying, SOJUCommerceOrderProduct>
@property(readonly, copy, nonatomic) SOJUCommerceVariantImages *imageList;
@property(readonly, copy, nonatomic) NSString *name;
@property(readonly, copy, nonatomic) NSString *platform;
@property(readonly, copy, nonatomic) NSString *productId;
@property(readonly, copy, nonatomic) NSString *productImageUrl;
@property(readonly, copy, nonatomic) NSString *productType;
@property(readonly, copy, nonatomic) NSString *storeId;
@property(readonly, copy, nonatomic) NSString *type;
@property(readonly, copy, nonatomic) NSString *variantDescription;
@property(readonly, copy, nonatomic) NSString *variantId;
@end

