//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData, NSString, SCArSegmentationDownloadedInput, SCAudioDownloadedInput, SCGeoFilterLoadingMetaData, SCLens, SCSnapchatSticker, SOJUGeofilterImageMetadata, UIImage;

@interface SCGeoFilterImage : NSObject
{
    _Bool _skipFilteredImageCheck;
    NSData *_imageData;
    NSString *_filterId;
    long long _scaleSetting;
    unsigned long long _positionSetting;
    long long _mediaFilterSubType;
    SOJUGeofilterImageMetadata *_extraImageMetadata;
    NSString *_croppedImageUrlString;
    SCGeoFilterLoadingMetaData *_loadingMetaData;
    NSString *_encryptedGeoData;
    SCArSegmentationDownloadedInput *_contextFilterInput;
    SCAudioDownloadedInput *_audioInput;
    SCLens *_postCaptureLens;
    NSData *_croppedImageData;
    SCSnapchatSticker *_croppedImageSticker;
    UIImage *_filteredCaptureImage;
    NSData *_dynamicResourceImageData;
}

- (void).cxx_destruct;
@property(retain, nonatomic) SCAudioDownloadedInput *audioInput; // @synthesize audioInput=_audioInput;
@property(retain, nonatomic) SCArSegmentationDownloadedInput *contextFilterInput; // @synthesize contextFilterInput=_contextFilterInput;
@property(retain, nonatomic) NSData *croppedImageData; // @synthesize croppedImageData=_croppedImageData;
@property(retain, nonatomic) SCSnapchatSticker *croppedImageSticker; // @synthesize croppedImageSticker=_croppedImageSticker;
@property(retain, nonatomic) NSString *croppedImageUrlString; // @synthesize croppedImageUrlString=_croppedImageUrlString;
@property(retain, nonatomic) NSData *dynamicResourceImageData; // @synthesize dynamicResourceImageData=_dynamicResourceImageData;
@property(copy, nonatomic) NSString *encryptedGeoData; // @synthesize encryptedGeoData=_encryptedGeoData;
@property(retain, nonatomic) SOJUGeofilterImageMetadata *extraImageMetadata; // @synthesize extraImageMetadata=_extraImageMetadata;
@property(readonly, copy, nonatomic) NSString *filterId; // @synthesize filterId=_filterId;
@property(copy, nonatomic) UIImage *filteredCaptureImage; // @synthesize filteredCaptureImage=_filteredCaptureImage;
@property(readonly, copy, nonatomic) NSData *imageData; // @synthesize imageData=_imageData;
- (id)initWithImageData:(id)arg1 filterId:(id)arg2 geoFilterLoadingMetaData:(id)arg3 scaleSetting:(long long)arg4 positionSetting:(unsigned long long)arg5 mediaFilterSubType:(long long)arg6;
- (_Bool)isReadyForDisplay;
@property(retain, nonatomic) SCGeoFilterLoadingMetaData *loadingMetaData; // @synthesize loadingMetaData=_loadingMetaData;
@property(readonly, nonatomic) long long mediaFilterSubType; // @synthesize mediaFilterSubType=_mediaFilterSubType;
@property(readonly, nonatomic) unsigned long long positionSetting; // @synthesize positionSetting=_positionSetting;
@property(retain, nonatomic) SCLens *postCaptureLens; // @synthesize postCaptureLens=_postCaptureLens;
@property(readonly, nonatomic) long long scaleSetting; // @synthesize scaleSetting=_scaleSetting;
@property(nonatomic) _Bool skipFilteredImageCheck; // @synthesize skipFilteredImageCheck=_skipFilteredImageCheck;

@end

