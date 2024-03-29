//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCImageProcessVideoExportSession.h"

@class NSDate, UIColor;

@interface SCImageProcessSpectaclesVideoExportSession : SCImageProcessVideoExportSession
{
    struct CGSize _videoSourceSize;
    struct CGSize _outputSize;
    UIColor *_videoCircleColor;
    struct CGSize _videoCirclePadding;
    _Bool _videoCircleMask;
    NSDate *_creationDate;
}

- (void).cxx_destruct;
- (id)_createPixelBufferAdaptor:(id)arg1 attributes:(id)arg2 outputSize:(struct CGSize)arg3;
- (id)_createVideoHandler:(struct opaqueCMSampleBuffer *)arg1 imageProcessQueue:(id)arg2 GPUCommands:(id)arg3 CPUCommands:(id)arg4 rightStereoGPUCommands:(id)arg5 leftStereoGPUCommands:(id)arg6 assetReader:(id)arg7 assetWriter:(id)arg8 readerOutput:(id)arg9 writerInput:(id)arg10 stereoWriterInput:(id)arg11 pixelBufferAdaptor:(id)arg12 stereoPixelBufferAdaptor:(id)arg13 orientation:(long long)arg14 viewportTransform:(struct CGAffineTransform)arg15 cpuBufferTransform:(struct CGAffineTransform)arg16 queue:(id)arg17 maxFrameRate:(int)arg18 presentationTimeScale:(double)arg19 magicMomentActive:(_Bool)arg20 magicMomentFrames:(long long)arg21;
- (id)_getVideoOutputSettings;
- (id)_replaceYUVCommandsForCPUCommands:(id)arg1;
- (id)_replaceYUVCommandsForGPUCommands:(id)arg1;
- (void)_writeMetadata:(id)arg1;
- (id)initWithQueue:(id)arg1 GPUCommands:(id)arg2 CPUCommands:(id)arg3 rightStereoGPUCommands:(id)arg4 leftStereoGPUCommands:(id)arg5 videoAsset:(id)arg6 backgroundAudioData:(id)arg7 overridingAudioData:(id)arg8 outputURL:(id)arg9 outputSize:(struct CGSize)arg10 outputPlaybackRate:(double)arg11 outputTimeRanges:(id)arg12 maxKeyFrameInterval:(unsigned long long)arg13 shouldLimitFrameRateForCameraRoll:(_Bool)arg14 outputBitrate:(double)arg15 transform:(struct CGAffineTransform)arg16 orientation:(long long)arg17 viewportTransform:(struct CGAffineTransform)arg18 cpuBufferTransform:(struct CGAffineTransform)arg19 audio:(_Bool)arg20 rawDataURL:(id)arg21 audioProcessingWrapper:(id)arg22 videoCircleColor:(id)arg23 videoCirclePadding:(struct CGSize)arg24 videoCircleMask:(_Bool)arg25 spectaclesContentCreateTimeUtc:(id)arg26 magicMomentConfig:(id)arg27;

@end

