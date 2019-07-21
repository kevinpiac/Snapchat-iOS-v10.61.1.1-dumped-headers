//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSError, NSString, SCAGallerySavingComplete, SCSnapCommonLoggingParameters;

@interface SCGallerySavingSessionStatus : NSObject
{
    _Bool _hasCameraSaveError;
    _Bool _hasGallerySaveError;
    _Bool _isPreviewSave;
    _Bool _didSaveToCameraRollSuccess;
    NSString *_savingToGallerySessionId;
    NSString *_savingToCameraRollSessionId;
    NSError *_cameraSaveError;
    NSError *_gallerySaveError;
    long long _savingSource;
    SCAGallerySavingComplete *_savingCompleteEvent;
    double _savingStartTime;
    SCSnapCommonLoggingParameters *_previewLogParams;
    NSString *_gallerySnapId;
    NSString *_galleryMediaId;
    NSString *_galleryEntryId;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSError *cameraSaveError; // @synthesize cameraSaveError=_cameraSaveError;
@property(nonatomic) _Bool didSaveToCameraRollSuccess; // @synthesize didSaveToCameraRollSuccess=_didSaveToCameraRollSuccess;
@property(copy, nonatomic) NSString *galleryEntryId; // @synthesize galleryEntryId=_galleryEntryId;
@property(copy, nonatomic) NSString *galleryMediaId; // @synthesize galleryMediaId=_galleryMediaId;
@property(retain, nonatomic) NSError *gallerySaveError; // @synthesize gallerySaveError=_gallerySaveError;
@property(copy, nonatomic) NSString *gallerySnapId; // @synthesize gallerySnapId=_gallerySnapId;
@property(nonatomic) _Bool hasCameraSaveError; // @synthesize hasCameraSaveError=_hasCameraSaveError;
@property(nonatomic) _Bool hasGallerySaveError; // @synthesize hasGallerySaveError=_hasGallerySaveError;
- (id)initWithSavingToGallerySessionId:(id)arg1 savingToCameraRollSessionId:(id)arg2;
@property(nonatomic) _Bool isPreviewSave; // @synthesize isPreviewSave=_isPreviewSave;
@property(retain, nonatomic) SCSnapCommonLoggingParameters *previewLogParams; // @synthesize previewLogParams=_previewLogParams;
@property(retain, nonatomic) SCAGallerySavingComplete *savingCompleteEvent; // @synthesize savingCompleteEvent=_savingCompleteEvent;
@property(nonatomic) long long savingSource; // @synthesize savingSource=_savingSource;
@property(nonatomic) double savingStartTime; // @synthesize savingStartTime=_savingStartTime;
@property(copy, nonatomic) NSString *savingToCameraRollSessionId; // @synthesize savingToCameraRollSessionId=_savingToCameraRollSessionId;
@property(copy, nonatomic) NSString *savingToGallerySessionId; // @synthesize savingToGallerySessionId=_savingToGallerySessionId;

@end
