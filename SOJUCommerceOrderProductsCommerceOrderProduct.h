//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SOJUCommerceOrderProductsCommerceOrderProduct-Protocol.h"

@class NSString, SOJUCommerceVariantImages;

@interface SOJUCommerceOrderProductsCommerceOrderProduct : NSObject <SOJUCommerceOrderProductsCommerceOrderProduct>
{
    NSString *_type;
    NSString *_name;
    NSString *_platform;
    NSString *_storeId;
    NSString *_productId;
    NSString *_variantId;
    NSString *_variantDescription;
    NSString *_productImageUrl;
    SOJUCommerceVariantImages *_imageList;
    NSString *_productType;
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
@property(readonly, copy, nonatomic) SOJUCommerceVariantImages *imageList; // @synthesize imageList=_imageList;
- (id)initWithCoder:(id)arg1;
- (id)initWithJSONDictionary:(id)arg1;
- (id)initWithType:(id)arg1 name:(id)arg2 platform:(id)arg3 storeId:(id)arg4 productId:(id)arg5 variantId:(id)arg6 variantDescription:(id)arg7 productImageUrl:(id)arg8 imageList:(id)arg9 productType:(id)arg10;
- (_Bool)isEqual:(id)arg1;
@property(readonly, copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(readonly, copy, nonatomic) NSString *platform; // @synthesize platform=_platform;
- (_Bool)preferFasterCoding;
@property(readonly, copy, nonatomic) NSString *productId; // @synthesize productId=_productId;
@property(readonly, copy, nonatomic) NSString *productImageUrl; // @synthesize productImageUrl=_productImageUrl;
@property(readonly, copy, nonatomic) NSString *productType; // @synthesize productType=_productType;
- (long long)productTypeEnum;
- (void)setObject:(id)arg1 forUInt64Key:(unsigned long long)arg2;
@property(readonly, copy, nonatomic) NSString *storeId; // @synthesize storeId=_storeId;
- (id)toDictionary;
- (id)toJson;
@property(readonly, copy, nonatomic) NSString *type; // @synthesize type=_type;
@property(readonly, copy, nonatomic) NSString *variantDescription; // @synthesize variantDescription=_variantDescription;
@property(readonly, copy, nonatomic) NSString *variantId; // @synthesize variantId=_variantId;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

