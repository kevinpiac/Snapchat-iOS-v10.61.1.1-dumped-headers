//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCTraceEnabled-Protocol.h"

@class AVAssetWriter, AVAssetWriterInput, FBKVOController, NSString, SCImageProcessAssetWriterInputPixelBufferAdaptor, SCQueuePerformer, SCVideoEncoderOutputSettings;
@protocol SCVideoEncoderDelegate;

@interface SCVideoEncoder : NSObject <SCTraceEnabled>
{
    SCQueuePerformer *_performer;
    id <SCVideoEncoderDelegate> _delegate;
    SCVideoEncoderOutputSettings *_outputSettings;
    AVAssetWriter *_assetWriter;
    AVAssetWriterInput *_assetWriterAudioInput;
    AVAssetWriterInput *_assetWriterVideoInput;
    FBKVOController *_observeController;
    SCImageProcessAssetWriterInputPixelBufferAdaptor *_pixelBufferAdaptor;
    struct opaqueCMSampleBuffer *_currentVideoSampleBuffer;
    CDStruct_1b6d18a9 _currentPresentationTime;
    struct __CVBuffer *_currentVideoPixelBuffer;
    struct opaqueCMSampleBuffer *_nextVideoSampleBuffer;
    CDStruct_1b6d18a9 _nextPresentationTime;
    struct __CVBuffer *_nextVideoPixelBuffer;
    struct opaqueCMSampleBuffer *_audioSampleBuffer;
    CDStruct_1b6d18a9 _endSessionTime;
    CDUnknownBlockType _videoFrameProcessingBlock;
}

- (void).cxx_destruct;
- (void)_appendVideoSampleBuffer:(struct opaqueCMSampleBuffer *)arg1;
- (void)_assetWriterStatusChanged:(id)arg1;
- (void)_completeEncoding;
- (void)_convertPlaneInputPixelBuffer:(struct __CVBuffer *)arg1 outputPixelBuffer:(struct __CVBuffer *)arg2 planeIndex:(unsigned long long)arg3 parallel:(_Bool)arg4;
- (struct __CVBuffer *)_createOutputPixelBuffer;
- (struct opaqueCMSampleBuffer *)_fetchNextVideoSampleBufferWithFrameProvider:(id)arg1 currentPresentationTime:(CDStruct_1b6d18a9)arg2 maxFrameRate:(unsigned long long)arg3;
- (struct CGSize)_getSourcePixelBufferSizeWithInputSize:(struct CGSize)arg1;
- (_Bool)_isValidPixelBuffer:(struct __CVBuffer *)arg1;
- (id)_videoEncoderAudioOutputSettings;
- (id)_videoEncoderVideoOutputSettings;
- (void)cancelEncoding;
- (void)dealloc;
- (id)initWithPerformer:(id)arg1 outputURL:(id)arg2 settings:(id)arg3 delegate:(id)arg4 error:(id *)arg5;
- (_Bool)prepareEncodingWithFirstAudioSampleBuffer:(struct opaqueCMSampleBuffer *)arg1 firstVideoSampleBuffer:(struct opaqueCMSampleBuffer *)arg2 videoFrameProcessingBlock:(CDUnknownBlockType)arg3 error:(id *)arg4;
- (void)startEncodingWithVideoTranscodingFrameProvider:(id)arg1 frameProviderPerformer:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

