//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SOJUCommerceProductInfo-Protocol.h"

@class NSArray, NSNumber, NSString, SOJUCommerceCustomBitmojiInfo, SOJUCommerceSnapCodeInfo, SOJUCommerceStoreInfo, SOJUCommerceUnlockableInfo, SOJUCommerceVariantImages;

@interface SOJUCommerceProductInfo : NSObject <SOJUCommerceProductInfo>
{
    NSString *_idValue;
    NSString *_descriptionHtml;
    NSArray *_images;
    NSArray *_variants;
    NSString *_vendor;
    NSString *_commercePartner;
    NSString *_storeId;
    NSString *_title;
    NSArray *_productVariantCategories;
    SOJUCommerceStoreInfo *_storeInfo;
    SOJUCommerceVariantImages *_imageList;
    NSNumber *_shouldUseWebviewDeprecated;
    NSString *_snapcodeUrl;
    NSNumber *_checkoutItemLimit;
    SOJUCommerceUnlockableInfo *_unlockableInfo;
    SOJUCommerceSnapCodeInfo *_productScanCardInfo;
    NSNumber *_isPdpShareable;
    NSString *_type;
    SOJUCommerceCustomBitmojiInfo *_customBitmojiInfo;
    NSArray *_imageDetailsList;
}

+ (_Bool)canInitFromProto;
+ (unsigned long long *)fasterCodingKeys;
+ (unsigned long long)fasterCodingVersion;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSNumber *checkoutItemLimit; // @synthesize checkoutItemLimit=_checkoutItemLimit;
- (int)checkoutItemLimitValue;
@property(readonly, copy, nonatomic) NSString *commercePartner; // @synthesize commercePartner=_commercePartner;
- (long long)commercePartnerEnum;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, copy, nonatomic) SOJUCommerceCustomBitmojiInfo *customBitmojiInfo; // @synthesize customBitmojiInfo=_customBitmojiInfo;
- (void)decodeWithFasterDecoder:(id)arg1;
@property(readonly, copy) NSString *description;
@property(readonly, copy, nonatomic) NSString *descriptionHtml; // @synthesize descriptionHtml=_descriptionHtml;
- (void)encodeWithCoder:(id)arg1;
- (void)encodeWithFasterCoder:(id)arg1;
@property(readonly) unsigned long long hash;
@property(readonly, copy, nonatomic) NSString *idValue; // @synthesize idValue=_idValue;
@property(readonly, copy, nonatomic) NSArray *imageDetailsList; // @synthesize imageDetailsList=_imageDetailsList;
@property(readonly, copy, nonatomic) SOJUCommerceVariantImages *imageList; // @synthesize imageList=_imageList;
@property(readonly, copy, nonatomic) NSArray *images; // @synthesize images=_images;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdValue:(id)arg1 descriptionHtml:(id)arg2 images:(id)arg3 variants:(id)arg4 vendor:(id)arg5 commercePartner:(id)arg6 storeId:(id)arg7 title:(id)arg8 productVariantCategories:(id)arg9 storeInfo:(id)arg10 imageList:(id)arg11 shouldUseWebviewDeprecated:(id)arg12 snapcodeUrl:(id)arg13 checkoutItemLimit:(id)arg14 unlockableInfo:(id)arg15 productScanCardInfo:(id)arg16 isPdpShareable:(id)arg17 type:(id)arg18 customBitmojiInfo:(id)arg19 imageDetailsList:(id)arg20;
- (id)initWithJSONDictionary:(id)arg1;
- (_Bool)isAllSoldOut;
- (_Bool)isEqual:(id)arg1;
@property(readonly, copy, nonatomic) NSNumber *isPdpShareable; // @synthesize isPdpShareable=_isPdpShareable;
- (_Bool)isPdpShareableValue;
- (_Bool)isValidModel;
- (_Bool)preferFasterCoding;
@property(readonly, copy, nonatomic) SOJUCommerceSnapCodeInfo *productScanCardInfo; // @synthesize productScanCardInfo=_productScanCardInfo;
@property(readonly, copy, nonatomic) NSArray *productVariantCategories; // @synthesize productVariantCategories=_productVariantCategories;
- (void)setObject:(id)arg1 forUInt64Key:(unsigned long long)arg2;
@property(readonly, copy, nonatomic) NSNumber *shouldUseWebviewDeprecated; // @synthesize shouldUseWebviewDeprecated=_shouldUseWebviewDeprecated;
- (_Bool)shouldUseWebviewDeprecatedValue;
@property(readonly, copy, nonatomic) NSString *snapcodeUrl; // @synthesize snapcodeUrl=_snapcodeUrl;
@property(readonly, copy, nonatomic) NSString *storeId; // @synthesize storeId=_storeId;
@property(readonly, copy, nonatomic) SOJUCommerceStoreInfo *storeInfo; // @synthesize storeInfo=_storeInfo;
@property(readonly, copy, nonatomic) NSString *title; // @synthesize title=_title;
- (id)toDictionary;
- (id)toJson;
@property(readonly, copy, nonatomic) NSString *type; // @synthesize type=_type;
- (long long)typeEnum;
@property(readonly, copy, nonatomic) SOJUCommerceUnlockableInfo *unlockableInfo; // @synthesize unlockableInfo=_unlockableInfo;
@property(readonly, copy, nonatomic) NSArray *variants; // @synthesize variants=_variants;
@property(readonly, copy, nonatomic) NSString *vendor; // @synthesize vendor=_vendor;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

