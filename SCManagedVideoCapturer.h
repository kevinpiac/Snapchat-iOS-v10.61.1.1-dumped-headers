//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCAudioCaptureSessionDelegate-Protocol.h"
#import "SCCapturerBufferedVideoWriterDelegate-Protocol.h"
#import "SCManagedAudioDataSource-Protocol.h"
#import "SCManagedVideoCapturerTimeObserverDelegate-Protocol.h"
#import "SCManagedVideoDataSourceListener-Protocol.h"

@class CIContext, NSDictionary, NSError, NSString, NSURL, SCAudioCaptureSession, SCAudioConfigurationToken, SCCapturerBufferedVideoWriter, SCManagedAudioDataSourceListenerAnnouncer, SCManagedVideoCapturerTimeObserver, SCPromise, SCQueuePerformer, SCVideoFrameRawDataCollector, UIImage;
@protocol OS_dispatch_semaphore, SCManagedVideoCapturerDelegate;

@interface SCManagedVideoCapturer : NSObject <SCCapturerBufferedVideoWriterDelegate, SCAudioCaptureSessionDelegate, SCManagedVideoCapturerTimeObserverDelegate, SCManagedVideoDataSourceListener, SCManagedAudioDataSource>
{
    double _maxDuration;
    double _recordStartTime;
    SCCapturerBufferedVideoWriter *_videoWriter;
    _Bool _hasWritten;
    SCQueuePerformer *_performer;
    SCQueuePerformer *_videoPreparationPerformer;
    SCAudioCaptureSession *_audioCaptureSession;
    NSError *_lastError;
    UIImage *_placeholderImage;
    _Bool _isVideoSnap;
    NSDictionary *_videoOutputSettings;
    double _stopTime;
    long long _stopSession;
    SCAudioConfigurationToken *_preparedAudioConfiguration;
    SCAudioConfigurationToken *_audioConfiguration;
    NSObject<OS_dispatch_semaphore> *_startRecordingSemaphore;
    long long _rawDataFrameNum;
    NSURL *_rawDataURL;
    SCVideoFrameRawDataCollector *_videoFrameRawDataCollector;
    CDStruct_1b6d18a9 _startSessionTime;
    double _startSessionRealTime;
    CDStruct_1b6d18a9 _endSessionTime;
    unsigned int _sessionId;
    _Bool _shouldProcessTimedTasks;
    SCManagedVideoCapturerTimeObserver *_timeObserver;
    struct CGSize _outputSize;
    _Bool _isFrontFacingCamera;
    SCPromise *_recordedVideoPromise;
    SCManagedAudioDataSourceListenerAnnouncer *_announcer;
    long long _codecType;
    double _zoomFactor;
    NSString *_captureSessionID;
    CIContext *_ciContext;
    _Bool _audioQueueStarted;
    NSURL *_outputURL;
    id <SCManagedVideoCapturerDelegate> _delegate;
    unsigned long long _status;
    CDStruct_1b6d18a9 _firstWrittenAudioBufferDelay;
}

- (void).cxx_destruct;
- (void)_addVideoRawDataWithPixelBuffer:(struct __CVBuffer *)arg1;
- (id)_appendInfo:(id)arg1 forInfoKey:(id)arg2 toError:(id)arg3;
- (void)_beginAudioQueueRecordingWithCompleteHandler:(CDUnknownBlockType)arg1;
- (double)_checkAndReportVideoDurationForURL:(id)arg1 videoPromise:(id)arg2;
- (_Bool)_checkAndReportZeroVideoSizeForURL:(id)arg1 videoPromise:(id)arg2;
- (void)_cleanup;
- (void)_disposeAudioRecording;
- (void)_generatePlaceholderImageWithPixelBuffer:(struct __CVBuffer *)arg1;
- (id)_getVideoPreparationPerformer;
- (id)_handleRetryBeginAudioRecordingErrorCode:(long long)arg1 error:(id)arg2 micResult:(id)arg3;
- (_Bool)_isBottomMicBrokenCode:(long long)arg1;
- (void)_processAudioSampleBuffer:(struct opaqueCMSampleBuffer *)arg1;
- (void)_processVideoSampleBuffer:(struct opaqueCMSampleBuffer *)arg1;
- (void)_retryRequestRecordingWithCompleteHandler:(CDUnknownBlockType)arg1;
- (void)_stopRecording;
- (void)_willStopRecording;
@property(readonly, nonatomic) CDStruct_4565c1ff activeSession;
- (void)addListener:(id)arg1;
- (void)addTimedTask:(id)arg1;
@property(readonly, nonatomic) SCAudioCaptureSession *audioCaptureSession;
- (void)audioCaptureSession:(id)arg1 didOutputSampleBuffer:(struct opaqueCMSampleBuffer *)arg2;
@property(readonly, nonatomic) _Bool audioQueueStarted; // @synthesize audioQueueStarted=_audioQueueStarted;
- (void)cancelRecordingAsynchronously;
- (id)ciContext;
- (void)clearTimedTasks;
- (struct CGSize)cropSize:(struct CGSize)arg1 toAspectRatio:(double)arg2;
- (void)dealloc;
- (id)defaultRecordingOutputSettingsWithDeviceFormat:(id)arg1;
- (struct CGSize)defaultSizeForDeviceFormat:(id)arg1;
@property(nonatomic) __weak id <SCManagedVideoCapturerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) CDStruct_1b6d18a9 firstWrittenAudioBufferDelay; // @synthesize firstWrittenAudioBufferDelay=_firstWrittenAudioBufferDelay;
- (id)init;
@property(readonly, nonatomic) _Bool isStreaming;
- (_Bool)managedVideoCapturerTimeObserver:(id)arg1 shouldProcessTimedTask:(id)arg2;
- (void)managedVideoDataSource:(id)arg1 didOutputSampleBuffer:(struct opaqueCMSampleBuffer *)arg2 devicePosition:(unsigned long long)arg3;
@property(readonly, copy, nonatomic) NSURL *outputURL; // @synthesize outputURL=_outputURL;
@property(readonly, nonatomic) SCQueuePerformer *performer; // @synthesize performer=_performer;
- (void)removeListener:(id)arg1;
@property unsigned long long status; // @synthesize status=_status;
- (void)setZoomFactor:(double)arg1;
- (CDStruct_4565c1ff)startRecordingAsynchronouslyWithOutputSettings:(id)arg1 audioConfiguration:(id)arg2 maxDuration:(double)arg3 toURL:(id)arg4 deviceFormat:(id)arg5 orientation:(long long)arg6 captureSessionID:(id)arg7;
- (void)startStreamingWithAudioConfiguration:(id)arg1;
- (void)stopRecordingAsynchronously;
- (void)stopStreaming;
- (void)videoWriterDidFailWritingWithError:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
