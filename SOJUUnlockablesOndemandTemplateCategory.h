//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SOJUUnlockablesOndemandTemplateCategory-Protocol.h"

@class NSNumber, NSString, SOJUUnlockablesOndemandTemplateList;

@interface SOJUUnlockablesOndemandTemplateCategory : NSObject <SOJUUnlockablesOndemandTemplateCategory>
{
    NSString *_idValue;
    NSString *_name;
    NSString *_imageUrl;
    SOJUUnlockablesOndemandTemplateList *_templates;
    NSString *_productType;
    NSNumber *_isClassicLens;
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
@property(readonly, copy, nonatomic) NSString *idValue; // @synthesize idValue=_idValue;
@property(readonly, copy, nonatomic) NSString *imageUrl; // @synthesize imageUrl=_imageUrl;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdValue:(id)arg1 name:(id)arg2 imageUrl:(id)arg3 templates:(id)arg4 productType:(id)arg5 isClassicLens:(id)arg6;
- (id)initWithJSONDictionary:(id)arg1;
@property(readonly, copy, nonatomic) NSNumber *isClassicLens; // @synthesize isClassicLens=_isClassicLens;
- (_Bool)isClassicLensValue;
- (_Bool)isEqual:(id)arg1;
@property(readonly, copy, nonatomic) NSString *name; // @synthesize name=_name;
- (_Bool)preferFasterCoding;
@property(readonly, copy, nonatomic) NSString *productType; // @synthesize productType=_productType;
- (long long)productTypeEnum;
- (void)setObject:(id)arg1 forUInt64Key:(unsigned long long)arg2;
@property(readonly, copy, nonatomic) SOJUUnlockablesOndemandTemplateList *templates; // @synthesize templates=_templates;
- (id)toDictionary;
- (id)toJson;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

