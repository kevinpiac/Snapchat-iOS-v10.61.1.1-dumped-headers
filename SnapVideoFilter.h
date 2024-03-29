//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class AVAssetReader, AVAssetWriter, AVAssetWriterInput, AVAssetWriterInputPixelBufferAdaptor, NSArray, NSData, NSDate, NSString, NSURL, NSValue, SCCroppingState, SCImageProcessCommand, SCImageProcessSpectaclesVideoExportSession, SCManagedFrameHealthChecker, SCMultiSnapDrawingCache, SCMultiSnapOverlayState, SCSnapVideoFilterAudioState, SCSnapVideoFilterUpdateListenerAnnouncer, SCVideoAssetMutator, SCVideoAssetRandomAccessor, SCVideoTranscodingSession, UIImage;
@protocol OS_dispatch_queue, SCPreviewVideoProvider, SCSnapVideoFilterAdaptor, SnapVideoFilterDelegate;

@interface SnapVideoFilter : NSObject
{
    AVAssetReader *_assetReader;
    AVAssetWriter *_assetWriter;
    AVAssetWriterInput *_writerVideoInput;
    AVAssetWriterInput *_writerAudioInput;
    AVAssetWriterInputPixelBufferAdaptor *_pixelBufferAdaptor;
    NSObject<OS_dispatch_queue> *_queue;
    struct opaqueCMSampleBuffer *_audioSampleBuffer;
    CDUnknownBlockType _completion;
    SCImageProcessSpectaclesVideoExportSession *_spectaclesVideoExportSession;
    SCVideoTranscodingSession *_videoTranscodingSession;
    SCVideoAssetRandomAccessor *_videoAssetRandomAccessor;
    SCVideoAssetMutator *_videoAssetMutator;
    _Bool _useOverlayImageAsMask;
    _Bool _highQuality;
    _Bool _audioEnabled;
    _Bool _isSpectaclesVideo;
    _Bool _videoCircleRenderer;
    _Bool _videoCircleColorBlack;
    _Bool _videoCircleMask;
    _Bool _savesToCameraRoll;
    int _cameraDirection;
    id <SnapVideoFilterDelegate> _delegate;
    id <SCPreviewVideoProvider> _videoProvider;
    SCSnapVideoFilterUpdateListenerAnnouncer *_updateAnnouncer;
    UIImage *_snapImage;
    double _imageDuration;
    long long _frameRate;
    long long _bitrate;
    unsigned long long _mediaSource;
    unsigned long long _mediaDestination;
    NSData *_backgroundAudioData;
    NSData *_overridingAudioData;
    NSString *_filterName;
    SCImageProcessCommand *_lensCommand;
    NSArray *_selectedFilterConfigs;
    SCImageProcessCommand *_spectaclesStereoRightCommand;
    SCImageProcessCommand *_spectaclesStereoLeftCommand;
    long long _overlayImageFileSizeBits;
    NSURL *_overlayImageURL;
    UIImage *_overlayImage;
    NSData *_overlayImagePNGData;
    UIImage *_overlayImageForThumbnail;
    long long _qualityLevel;
    NSDate *_createTimeUtc;
    double _videoPlaybackRate;
    double _videoTargetAspectRatio;
    long long _videoTargetOrientation;
    long long _thumbnailOrientation;
    NSArray *_timeRanges;
    SCCroppingState *_croppingState;
    double _croppingAspectRatio;
    UIImage *_watermarkOverlay;
    long long _multiSnapNumSegments;
    double _multiSnapOriginalVideoDuration;
    NSValue *_multiSnapTimeRange;
    id <SCPreviewVideoProvider> _multiSnapSourceVideoProvider;
    SCMultiSnapOverlayState *_multiSnapOverlayState;
    SCMultiSnapDrawingCache *_multiSnapDrawingCache;
    SCSnapVideoFilterAudioState *_audioState;
    NSString *_uuid;
    NSData *_thumbnailData;
    NSArray *_videoTrackedImages;
    NSString *_captureSessionID;
    unsigned long long _segmentIndex;
    CDUnknownBlockType _progressBlock;
    SCManagedFrameHealthChecker *_frameHealthChecker;
    long long _snapSource;
    NSArray *_GPUCommands;
    NSArray *_CPUCommands;
    id <SCSnapVideoFilterAdaptor> _adaptor;
    struct CGSize _videoCirclePadding;
    struct CGSize _overlaySize;
    struct CGSize _videoTargetSize;
    CDStruct_1b6d18a9 _magicMomentFrameTime;
}

+ (id)_videoTrackedImageForGeoFilterWithOverlay:(id)arg1 snap:(id)arg2 hasAnimatedSticker:(_Bool)arg3 semaphore:(id)arg4 belowStickers:(_Bool *)arg5 userSession:(id)arg6;
+ (id)backgroundPerformer;
+ (id)baseVideoPath;
+ (_Bool)spectaclesMediaNeedsCroppingForExport:(struct CGSize)arg1;
+ (id)videoTrackedImagesFromSnapOverlay:(id)arg1 snap:(id)arg2 videoTargetSize:(struct CGSize)arg3 croppingState:(id)arg4 isLagunaVideo:(_Bool)arg5 isExporting:(_Bool)arg6 userSession:(id)arg7;
+ (id)videoTrackedImagesFromSnapOverlay:(id)arg1 snap:(id)arg2 videoTargetSize:(struct CGSize)arg3 isLagunaVideo:(_Bool)arg4 isExporting:(_Bool)arg5 userSession:(id)arg6;
- (void).cxx_destruct;
@property(copy, nonatomic) NSArray *CPUCommands; // @synthesize CPUCommands=_CPUCommands;
@property(copy, nonatomic) NSArray *GPUCommands; // @synthesize GPUCommands=_GPUCommands;
- (id)_GPUCommandsForLensCommand:(id)arg1 videoTrackedImages:(id)arg2 drawCommandTranformProviders:(id)arg3 overlayImageBitmap:(struct CGImage *)arg4 overlayOutputSize:(struct CGSize)arg5;
- (void)_checkIfUrlIsValidForAVAsset:(id)arg1 forVideoSnap:(id)arg2;
- (void)_completeSpectaclesExportWithAsset:(id)arg1 spectaclesContentCreateTimeUtc:(id)arg2;
- (void)_completeWithURL:(id)arg1 error:(id)arg2;
- (void)_filterVideoWithFixedOutputSize:(struct CGSize)arg1;
- (void)_finishWritingWithAsset:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_generateCommandsForAnimatedImage;
- (void)_generateCommandsForStaticImage;
- (void)_generateCommandsForVideoWithVideoSourceSize:(struct CGSize)arg1;
- (struct CGRect)_overlayImageRectForTargetVideoSize;
- (id)_prepareOutputURL;
- (id)_prepareOutputURLFromTempFileURL:(id)arg1 addToActivePath:(_Bool)arg2;
- (void)_prepareSpectaclesMedia:(id)arg1 snap:(id)arg2 snapOverlay:(id)arg3 isExporting:(_Bool)arg4 userSession:(id)arg5 videoTargetSize:(struct CGSize)arg6 spectaclesExportFormat:(long long)arg7;
- (void)_retrieveMediaUploadQuality:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_reverseAssetWithOriginalAudio:(id)arg1 outputURL:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_setupWriterAudioInputForAsset:(id)arg1;
- (void)_setupWriterVideoInputForAsset:(id)arg1;
- (_Bool)_shouldEnableContentAdaptiveVideoExportWithVideoAsset:(id)arg1 rawDataURL:(id)arg2;
- (void)_transcodeInputAnimatedImageWithOutputBitrate:(long long)arg1 videoTargetSize:(struct CGSize)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_transcodeInputSpectaclesVideoWithOutputBitrate:(long long)arg1 videoTargetSize:(struct CGSize)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_transcodeInputVideoWithOutputBitrate:(long long)arg1 videoTargetSize:(struct CGSize)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_transcodeSpectaclesVideoWithOutputBitrate:(long long)arg1 videoTargetSize:(struct CGSize)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_transcodeVideoWithOutputBitrate:(long long)arg1 videoTargetSize:(struct CGSize)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_videoProcessingDidCancelWithParameters:(id)arg1;
- (void)_videoProcessingDidFailWithError:(id)arg1 commands:(id)arg2 parameters:(id)arg3;
@property(retain, nonatomic) id <SCSnapVideoFilterAdaptor> adaptor; // @synthesize adaptor=_adaptor;
@property(nonatomic) _Bool audioEnabled; // @synthesize audioEnabled=_audioEnabled;
@property(copy, nonatomic) SCSnapVideoFilterAudioState *audioState; // @synthesize audioState=_audioState;
@property(copy, nonatomic) NSData *backgroundAudioData; // @synthesize backgroundAudioData=_backgroundAudioData;
@property(nonatomic) long long bitrate; // @synthesize bitrate=_bitrate;
@property(nonatomic) int cameraDirection; // @synthesize cameraDirection=_cameraDirection;
- (void)cancelProcessing;
@property(copy, nonatomic) NSString *captureSessionID; // @synthesize captureSessionID=_captureSessionID;
- (void)configureAsAnimatableImagePreview;
- (void)convertOverlayImageToPNGData;
- (void)createThumbnailWithAsset:(id)arg1;
@property(retain, nonatomic) NSDate *createTimeUtc; // @synthesize createTimeUtc=_createTimeUtc;
@property(nonatomic) double croppingAspectRatio; // @synthesize croppingAspectRatio=_croppingAspectRatio;
@property(retain, nonatomic) SCCroppingState *croppingState; // @synthesize croppingState=_croppingState;
@property(nonatomic) __weak id <SnapVideoFilterDelegate> delegate; // @synthesize delegate=_delegate;
- (void)filterImageCompletion:(CDUnknownBlockType)arg1;
@property(copy, nonatomic) NSString *filterName; // @synthesize filterName=_filterName;
- (void)filterVideo;
- (void)filterVideoCompletion:(CDUnknownBlockType)arg1;
- (void)filterVideoSnap:(id)arg1 cloudFile:(id)arg2 encryptedContentManager:(id)arg3 reverseAudioCache:(id)arg4 respectSnapOrientation:(_Bool)arg5 scaleMalibu:(_Bool)arg6 blendOverlayIntoVideo:(_Bool)arg7 highQuality:(_Bool)arg8 videoTargetSize:(struct CGSize)arg9 isExporting:(_Bool)arg10 spectaclesExportFormat:(long long)arg11 userSession:(id)arg12 queue:(id)arg13 completion:(CDUnknownBlockType)arg14;
- (void)filterVideoSnap:(id)arg1 cloudFile:(id)arg2 encryptedContentManager:(id)arg3 reverseAudioCache:(id)arg4 respectSnapOrientation:(_Bool)arg5 scaleMalibu:(_Bool)arg6 blendOverlayIntoVideo:(_Bool)arg7 highQuality:(_Bool)arg8 videoTargetSize:(struct CGSize)arg9 isExporting:(_Bool)arg10 userSession:(id)arg11 queue:(id)arg12 completion:(CDUnknownBlockType)arg13;
- (void)filterVideoWithOutputBitrate:(long long)arg1 videoTargetSize:(struct CGSize)arg2 completion:(CDUnknownBlockType)arg3;
@property(retain, nonatomic) SCManagedFrameHealthChecker *frameHealthChecker; // @synthesize frameHealthChecker=_frameHealthChecker;
@property(nonatomic) long long frameRate; // @synthesize frameRate=_frameRate;
- (void)generateStaticImageAtTime:(CDStruct_1b6d18a9)arg1 completion:(CDUnknownBlockType)arg2;
- (_Bool)hasEdits;
@property(nonatomic) _Bool highQuality; // @synthesize highQuality=_highQuality;
@property(nonatomic) double imageDuration; // @synthesize imageDuration=_imageDuration;
@property(nonatomic) _Bool imageHasAnimatedContent;
- (id)initFromSnapVideoFilterState:(id)arg1 adaptor:(id)arg2;
- (id)initWithMediaSource:(unsigned long long)arg1 mediaDestination:(unsigned long long)arg2 adaptor:(id)arg3;
@property(nonatomic) _Bool isSpectaclesVideo; // @synthesize isSpectaclesVideo=_isSpectaclesVideo;
@property(retain, nonatomic) SCImageProcessCommand *lensCommand; // @synthesize lensCommand=_lensCommand;
@property(nonatomic) CDStruct_1b6d18a9 magicMomentFrameTime; // @synthesize magicMomentFrameTime=_magicMomentFrameTime;
@property(nonatomic) unsigned long long mediaDestination; // @synthesize mediaDestination=_mediaDestination;
@property(nonatomic) unsigned long long mediaSource; // @synthesize mediaSource=_mediaSource;
@property(retain, nonatomic) SCMultiSnapDrawingCache *multiSnapDrawingCache; // @synthesize multiSnapDrawingCache=_multiSnapDrawingCache;
@property(nonatomic) long long multiSnapNumSegments; // @synthesize multiSnapNumSegments=_multiSnapNumSegments;
@property(nonatomic) double multiSnapOriginalVideoDuration; // @synthesize multiSnapOriginalVideoDuration=_multiSnapOriginalVideoDuration;
@property(retain, nonatomic) SCMultiSnapOverlayState *multiSnapOverlayState; // @synthesize multiSnapOverlayState=_multiSnapOverlayState;
@property(retain, nonatomic) id <SCPreviewVideoProvider> multiSnapSourceVideoProvider; // @synthesize multiSnapSourceVideoProvider=_multiSnapSourceVideoProvider;
@property(retain, nonatomic) NSValue *multiSnapTimeRange; // @synthesize multiSnapTimeRange=_multiSnapTimeRange;
- (_Bool)needsVideoCircleRenderer;
@property(retain, nonatomic) UIImage *overlayImage; // @synthesize overlayImage=_overlayImage;
@property(nonatomic) long long overlayImageFileSizeBits; // @synthesize overlayImageFileSizeBits=_overlayImageFileSizeBits;
@property(retain, nonatomic) UIImage *overlayImageForThumbnail; // @synthesize overlayImageForThumbnail=_overlayImageForThumbnail;
@property(copy, nonatomic) NSData *overlayImagePNGData; // @synthesize overlayImagePNGData=_overlayImagePNGData;
@property(retain, nonatomic) NSURL *overlayImageURL; // @synthesize overlayImageURL=_overlayImageURL;
@property(nonatomic) struct CGSize overlaySize; // @synthesize overlaySize=_overlaySize;
@property(copy, nonatomic) NSData *overridingAudioData; // @synthesize overridingAudioData=_overridingAudioData;
@property(copy, nonatomic) CDUnknownBlockType progressBlock; // @synthesize progressBlock=_progressBlock;
@property(readonly, nonatomic) long long qualityLevel; // @synthesize qualityLevel=_qualityLevel;
@property(nonatomic) _Bool savesToCameraRoll; // @synthesize savesToCameraRoll=_savesToCameraRoll;
@property(nonatomic) unsigned long long segmentIndex; // @synthesize segmentIndex=_segmentIndex;
@property(copy, nonatomic) NSArray *selectedFilterConfigs; // @synthesize selectedFilterConfigs=_selectedFilterConfigs;
@property(retain, nonatomic) UIImage *snapImage; // @synthesize snapImage=_snapImage;
@property(nonatomic) long long snapSource; // @synthesize snapSource=_snapSource;
@property(retain, nonatomic) SCImageProcessCommand *spectaclesStereoLeftCommand; // @synthesize spectaclesStereoLeftCommand=_spectaclesStereoLeftCommand;
@property(retain, nonatomic) SCImageProcessCommand *spectaclesStereoRightCommand; // @synthesize spectaclesStereoRightCommand=_spectaclesStereoRightCommand;
@property(nonatomic) long long thumbnailOrientation; // @synthesize thumbnailOrientation=_thumbnailOrientation;
@property(copy, nonatomic) NSArray *timeRanges; // @synthesize timeRanges=_timeRanges;
@property(nonatomic) _Bool useOverlayImageAsMask; // @synthesize useOverlayImageAsMask=_useOverlayImageAsMask;
@property(nonatomic) _Bool videoCircleColorBlack; // @synthesize videoCircleColorBlack=_videoCircleColorBlack;
@property(nonatomic) _Bool videoCircleMask; // @synthesize videoCircleMask=_videoCircleMask;
@property(nonatomic) struct CGSize videoCirclePadding; // @synthesize videoCirclePadding=_videoCirclePadding;
@property(nonatomic) _Bool videoCircleRenderer; // @synthesize videoCircleRenderer=_videoCircleRenderer;
@property(nonatomic) double videoPlaybackRate; // @synthesize videoPlaybackRate=_videoPlaybackRate;
@property(retain, nonatomic) id <SCPreviewVideoProvider> videoProvider; // @synthesize videoProvider=_videoProvider;
@property(nonatomic) double videoTargetAspectRatio; // @synthesize videoTargetAspectRatio=_videoTargetAspectRatio;
@property(nonatomic) long long videoTargetOrientation; // @synthesize videoTargetOrientation=_videoTargetOrientation;
@property(copy, nonatomic) NSArray *videoTrackedImages; // @synthesize videoTrackedImages=_videoTrackedImages;
@property(retain, nonatomic) UIImage *watermarkOverlay; // @synthesize watermarkOverlay=_watermarkOverlay;
- (id)snapVideoFilterState;
- (id)tempFileURL;
- (id)tempReverseFileURL;
@property(readonly, copy, nonatomic) NSData *thumbnailData; // @synthesize thumbnailData=_thumbnailData;
@property(readonly, copy, nonatomic) NSString *transcodingTaskId;
@property(readonly, nonatomic) SCSnapVideoFilterUpdateListenerAnnouncer *updateAnnouncer; // @synthesize updateAnnouncer=_updateAnnouncer;
@property(readonly, copy, nonatomic) NSString *uuid; // @synthesize uuid=_uuid;
- (id)videoCircleColor;
@property(readonly, nonatomic) struct CGSize videoTargetSize; // @synthesize videoTargetSize=_videoTargetSize;

@end

