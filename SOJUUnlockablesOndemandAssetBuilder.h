//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSNumber, NSString, SOJUUnlockablesOndemandAssetDraft, SOJUUnlockablesOndemandImageFilter;

@interface SOJUUnlockablesOndemandAssetBuilder : NSObject
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

+ (id)withJUUnlockablesOndemandAsset:(id)arg1;
- (void).cxx_destruct;
- (id)build;
- (id)setAssetDraft:(id)arg1;
- (id)setIdValue:(id)arg1;
- (id)setImageFilter:(id)arg1;
- (id)setIsUpdate:(id)arg1;
- (id)setIsUpdateValue:(_Bool)arg1;
- (id)setLensPreviewThumbnailImage:(id)arg1;
- (id)setName:(id)arg1;
- (id)setProductType:(id)arg1;
- (id)setProductTypeEnum:(long long)arg1;
- (id)setScheduledEnd:(id)arg1;
- (id)setScheduledEndValue:(long long)arg1;
- (id)setScheduledStart:(id)arg1;
- (id)setScheduledStartValue:(long long)arg1;
- (id)setStatus:(id)arg1;
- (id)setStatusEnum:(long long)arg1;
- (id)setSubmissionTime:(id)arg1;
- (id)setSubmissionTimeValue:(long long)arg1;

@end
