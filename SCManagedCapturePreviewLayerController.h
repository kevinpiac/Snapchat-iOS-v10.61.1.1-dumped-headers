//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCManagedCapturerListener-Protocol.h"
#import "SCManagedSampleBufferDisplayController-Protocol.h"

@class AVCaptureVideoPreviewLayer, CAMetalLayer, FBKVOController, NSMutableSet, NSString, SCCoreCameraOpenLogger, SCManagedCapturePreviewView, SCQueuePerformer, UIView;
@protocol LSAGLView, MTLCommandQueue, MTLRenderPipelineState, OS_dispatch_semaphore, SCManagedCapturePreviewLayerControllerDelegate;

@interface SCManagedCapturePreviewLayerController : NSObject <SCManagedCapturerListener, SCManagedSampleBufferDisplayController>
{
    SCCoreCameraOpenLogger *_cameraOpenLogger;
    SCManagedCapturePreviewView *_view;
    struct CGSize _drawableSize;
    _Bool _shouldLogOnNextFrameReceived;
    SCQueuePerformer *_performer;
    FBKVOController *_renderingKVO;
    CAMetalLayer *_metalLayer;
    id <MTLCommandQueue> _commandQueue;
    id <MTLRenderPipelineState> _renderPipelineState;
    struct __CVMetalTextureCache *_textureCache;
    NSObject<OS_dispatch_semaphore> *_commandBufferSemaphore;
    _Bool _containOutdatedPreview;
    _Bool _requireToFlushOutdatedPreview;
    NSMutableSet *_tokenSet;
    unsigned long long _cannotAcquireDrawable;
    _Bool _renderSuspended;
    AVCaptureVideoPreviewLayer *_videoPreviewLayer;
    UIView<LSAGLView> *_videoPreviewGLView;
    id <SCManagedCapturePreviewLayerControllerDelegate> _delegate;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (void)_flushOutdatedPreview;
- (void)applicationDidBecomeActive;
- (void)applicationDidEnterBackground;
- (void)applicationWillEnterForeground;
- (void)applicationWillResignActive;
@property(nonatomic) __weak id <SCManagedCapturePreviewLayerControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)endDisplayingOutdatedPreview:(id)arg1;
- (void)enqueueSampleBuffer:(struct opaqueCMSampleBuffer *)arg1;
- (void)flushOutdatedPreview;
- (id)init;
- (id)keepDisplayingOutdatedPreview;
- (void)logOnNextFrameReceivedWithLogger:(id)arg1;
- (void)managedCapturer:(id)arg1 didChangeVideoPreviewGLView:(id)arg2;
- (void)managedCapturer:(id)arg1 didChangeVideoPreviewLayer:(id)arg2;
- (void)pause;
@property(nonatomic) _Bool renderSuspended; // @synthesize renderSuspended=_renderSuspended;
- (void)resume;
- (void)setManagedCapturer:(id)arg1;
- (void)setupPreviewLayer;
- (void)setupRenderPipeline;
@property(readonly, nonatomic) UIView<LSAGLView> *videoPreviewGLView; // @synthesize videoPreviewGLView=_videoPreviewGLView;
@property(readonly, nonatomic) AVCaptureVideoPreviewLayer *videoPreviewLayer; // @synthesize videoPreviewLayer=_videoPreviewLayer;
@property(readonly, nonatomic) UIView *view;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

