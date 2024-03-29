//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SOJUUnlockablesOndemandAssetDraft-Protocol.h"

@class NSArray, NSNumber, NSString;

@interface SOJUUnlockablesOndemandAssetDraft : NSObject <SOJUUnlockablesOndemandAssetDraft>
{
    NSString *_imageUrl;
    NSString *_thumbnailUrl;
    NSArray *_backgroundImageUrls;
    NSString *_defaultFontName;
    NSString *_defaultFontUrl;
    NSNumber *_defaultWidth;
    NSNumber *_defaultHeight;
    NSString *_productType;
    NSString *_idValue;
    NSString *_templateInstanceId;
    NSString *_templateId;
    NSString *_categoryId;
    NSArray *_textBoxSpecArray;
    NSArray *_stickers;
    NSString *_imagePngBase64;
}

+ (id)buildAssetDraftWithCreativeData:(id)arg1 thumbnailImageData:(id)arg2;
+ (_Bool)canInitFromProto;
+ (unsigned long long *)fasterCodingKeys;
+ (unsigned long long)fasterCodingVersion;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSArray *backgroundImageUrls; // @synthesize backgroundImageUrls=_backgroundImageUrls;
@property(readonly, copy, nonatomic) NSString *categoryId; // @synthesize categoryId=_categoryId;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)decodeWithFasterDecoder:(id)arg1;
@property(readonly, copy, nonatomic) NSString *defaultFontName; // @synthesize defaultFontName=_defaultFontName;
@property(readonly, copy, nonatomic) NSString *defaultFontUrl; // @synthesize defaultFontUrl=_defaultFontUrl;
@property(readonly, copy, nonatomic) NSNumber *defaultHeight; // @synthesize defaultHeight=_defaultHeight;
- (int)defaultHeightValue;
@property(readonly, copy, nonatomic) NSNumber *defaultWidth; // @synthesize defaultWidth=_defaultWidth;
- (int)defaultWidthValue;
@property(readonly, copy) NSString *description;
- (void)encodeWithCoder:(id)arg1;
- (void)encodeWithFasterCoder:(id)arg1;
@property(readonly) unsigned long long hash;
@property(readonly, copy, nonatomic) NSString *idValue; // @synthesize idValue=_idValue;
@property(readonly, copy, nonatomic) NSString *imagePngBase64; // @synthesize imagePngBase64=_imagePngBase64;
@property(readonly, copy, nonatomic) NSString *imageUrl; // @synthesize imageUrl=_imageUrl;
- (id)initWithCoder:(id)arg1;
- (id)initWithImageUrl:(id)arg1 thumbnailUrl:(id)arg2 backgroundImageUrls:(id)arg3 defaultFontName:(id)arg4 defaultFontUrl:(id)arg5 defaultWidth:(id)arg6 defaultHeight:(id)arg7 productType:(id)arg8 idValue:(id)arg9 templateInstanceId:(id)arg10 templateId:(id)arg11 categoryId:(id)arg12 textBoxSpecArray:(id)arg13 stickers:(id)arg14 imagePngBase64:(id)arg15;
- (id)initWithJSONDictionary:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (_Bool)preferFasterCoding;
@property(readonly, copy, nonatomic) NSString *productType; // @synthesize productType=_productType;
- (long long)productTypeEnum;
- (void)setObject:(id)arg1 forUInt64Key:(unsigned long long)arg2;
@property(readonly, copy, nonatomic) NSArray *stickers; // @synthesize stickers=_stickers;
- (id)templateData;
@property(readonly, copy, nonatomic) NSString *templateId; // @synthesize templateId=_templateId;
@property(readonly, copy, nonatomic) NSString *templateInstanceId; // @synthesize templateInstanceId=_templateInstanceId;
@property(readonly, copy, nonatomic) NSArray *textBoxSpecArray; // @synthesize textBoxSpecArray=_textBoxSpecArray;
@property(readonly, copy, nonatomic) NSString *thumbnailUrl; // @synthesize thumbnailUrl=_thumbnailUrl;
- (id)toDictionary;
- (id)toJson;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

