//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SOJUUnlockablesOndemandAsset-Protocol.h"

@class NSNumber, NSString, SOJUUnlockablesOndemandAssetDraft, SOJUUnlockablesOndemandImageFilter;

@interface SOJUUnlockablesOndemandAsset : NSObject <SOJUUnlockablesOndemandAsset>
{
    NSString *_idValue;
    SOJUUnlockablesOndemandImageFilter *_imageFilter;
    NSString *_name;
    NSNumber *_scheduledStart;
    NSNumber *_scheduledEnd;
    NSNumber *_submissionTime;
    NSString *_status;
    NSString *_productType;
    SOJUUnlockablesOndemandImageFilter *_lensPreviewThumbnailImage;
    SOJUUnlockablesOndemandAssetDraft *_assetDraft;
    NSNumber *_isUpdate;
}

+ (_Bool)canInitFromProto;
+ (unsigned long long *)fasterCodingKeys;
+ (unsigned long long)fasterCodingVersion;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) SOJUUnlockablesOndemandAssetDraft *assetDraft; // @synthesize assetDraft=_assetDraft;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)decodeWithFasterDecoder:(id)arg1;
@property(readonly, copy) NSString *description;
- (void)encodeWithCoder:(id)arg1;
- (void)encodeWithFasterCoder:(id)arg1;
@property(readonly) unsigned long long hash;
@property(readonly, copy, nonatomic) NSString *idValue; // @synthesize idValue=_idValue;
@property(readonly, copy, nonatomic) SOJUUnlockablesOndemandImageFilter *imageFilter; // @synthesize imageFilter=_imageFilter;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdValue:(id)arg1 imageFilter:(id)arg2 name:(id)arg3 scheduledStart:(id)arg4 scheduledEnd:(id)arg5 submissionTime:(id)arg6 status:(id)arg7 productType:(id)arg8 lensPreviewThumbnailImage:(id)arg9 assetDraft:(id)arg10 isUpdate:(id)arg11;
- (id)initWithJSONDictionary:(id)arg1;
- (_Bool)isEqual:(id)arg1;
@property(readonly, copy, nonatomic) NSNumber *isUpdate; // @synthesize isUpdate=_isUpdate;
- (_Bool)isUpdateValue;
@property(readonly, copy, nonatomic) SOJUUnlockablesOndemandImageFilter *lensPreviewThumbnailImage; // @synthesize lensPreviewThumbnailImage=_lensPreviewThumbnailImage;
@property(readonly, copy, nonatomic) NSString *name; // @synthesize name=_name;
- (_Bool)preferFasterCoding;
@property(readonly, copy, nonatomic) NSString *productType; // @synthesize productType=_productType;
- (long long)productTypeEnum;
@property(readonly, copy, nonatomic) NSNumber *scheduledEnd; // @synthesize scheduledEnd=_scheduledEnd;
- (long long)scheduledEndValue;
@property(readonly, copy, nonatomic) NSNumber *scheduledStart; // @synthesize scheduledStart=_scheduledStart;
- (long long)scheduledStartValue;
- (void)setObject:(id)arg1 forUInt64Key:(unsigned long long)arg2;
@property(readonly, copy, nonatomic) NSString *status; // @synthesize status=_status;
- (long long)statusEnum;
@property(readonly, copy, nonatomic) NSNumber *submissionTime; // @synthesize submissionTime=_submissionTime;
- (long long)submissionTimeValue;
- (id)toDictionary;
- (id)toJson;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

