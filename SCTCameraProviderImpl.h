//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "AVCaptureVideoDataOutputSampleBufferDelegate-Protocol.h"
#import "SCCameraLiveDisplayCustomer-Protocol.h"
#import "SCManagedCapturerListener-Protocol.h"
#import "SCManagedVideoDataSourceListener-Protocol.h"
#import "SCTCameraProvider-Protocol.h"

@class NSString, SCManagedCapturerState, SCUserSession;
@protocol SCCapturer, SCTCameraProviderDelegate;

@interface SCTCameraProviderImpl : NSObject <SCManagedCapturerListener, SCManagedVideoDataSourceListener, AVCaptureVideoDataOutputSampleBufferDelegate, SCTCameraProvider, SCCameraLiveDisplayCustomer>
{
    id <SCTCameraProviderDelegate> delegate;
    id <SCCapturer> _capturer;
    SCUserSession *_userSession;
    SCManagedCapturerState *_captureState;
}

- (void).cxx_destruct;
- (void)activateLensesWithCompletion:(CDUnknownBlockType)arg1;
@property(copy, nonatomic) SCManagedCapturerState *captureState; // @synthesize captureState=_captureState;
- (void)deactivateLensesWithCompletion:(CDUnknownBlockType)arg1;
- (void)dealloc;
@property(nonatomic) __weak id <SCTCameraProviderDelegate> delegate; // @synthesize delegate;
- (id)getCameraPreview;
- (_Bool)hasMultipleCameras;
- (id)initWithUserSession:(id)arg1 capturer:(id)arg2;
- (id)lensProcessingCore;
- (void)managedCapturer:(id)arg1 didChangeState:(id)arg2;
- (void)managedVideoDataSource:(id)arg1 didOutputSampleBuffer:(struct opaqueCMSampleBuffer *)arg2 devicePosition:(unsigned long long)arg3;
- (void)relinquishCameraPreview;
- (void)setAutofocusAndExposurePointOfInterest:(struct CGPoint)arg1 viewSize:(struct CGSize)arg2;
- (void)setDevicePositionAsynchronouslyToFront:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
@property(retain, nonatomic) SCUserSession *userSession; // @synthesize userSession=_userSession;
- (id)startRunningAsynchronouslyWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)stopRunningAsynchronously:(id)arg1 after:(double)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
