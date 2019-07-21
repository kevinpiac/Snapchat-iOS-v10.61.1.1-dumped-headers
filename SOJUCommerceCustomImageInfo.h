//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SOJUCommerceCustomImageInfo-Protocol.h"

@class NSNumber, NSString, SOJUCommerceCustomImageFrame;

@interface SOJUCommerceCustomImageInfo : NSObject <SOJUCommerceCustomImageInfo>
{
    NSString *_externalImageId;
    NSNumber *_productImageHeight;
    NSNumber *_productImageWidth;
    SOJUCommerceCustomImageFrame *_customImageFrame;
    NSString *_customImageRotationAngle;
}

+ (_Bool)canInitFromProto;
+ (unsigned long long *)fasterCodingKeys;
+ (unsigned long long)fasterCodingVersion;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, copy, nonatomic) SOJUCommerceCustomImageFrame *customImageFrame; // @synthesize customImageFrame=_customImageFrame;
@property(readonly, copy, nonatomic) NSString *customImageRotationAngle; // @synthesize customImageRotationAngle=_customImageRotationAngle;
- (void)decodeWithFasterDecoder:(id)arg1;
@property(readonly, copy) NSString *description;
- (void)encodeWithCoder:(id)arg1;
- (void)encodeWithFasterCoder:(id)arg1;
@property(readonly, copy, nonatomic) NSString *externalImageId; // @synthesize externalImageId=_externalImageId;
@property(readonly) unsigned long long hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithExternalImageId:(id)arg1 productImageHeight:(id)arg2 productImageWidth:(id)arg3 customImageFrame:(id)arg4 customImageRotationAngle:(id)arg5;
- (id)initWithJSONDictionary:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (_Bool)preferFasterCoding;
@property(readonly, copy, nonatomic) NSNumber *productImageHeight; // @synthesize productImageHeight=_productImageHeight;
- (int)productImageHeightValue;
@property(readonly, copy, nonatomic) NSNumber *productImageWidth; // @synthesize productImageWidth=_productImageWidth;
- (int)productImageWidthValue;
- (void)setObject:(id)arg1 forUInt64Key:(unsigned long long)arg2;
- (id)toDictionary;
- (id)toJson;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

