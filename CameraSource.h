//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "AVCaptureVideoDataOutputSampleBufferDelegate-Protocol.h"

@class AVCaptureDevice, AVCaptureSession, NSString;

@interface CameraSource : NSObject <AVCaptureVideoDataOutputSampleBufferDelegate>
{
    struct IosCamera *_owner;
    AVCaptureSession *_session;
    AVCaptureDevice *_device;
    NSString *_index;
    int _width;
    int _height;
    int _fps;
}

- (void).cxx_destruct;
- (void)addDeviceInput:(id)arg1;
- (id)addOutput;
- (void)captureOutput:(id)arg1 didOutputSampleBuffer:(struct opaqueCMSampleBuffer *)arg2 fromConnection:(id)arg3;
- (void)changeDevice:(id)arg1;
- (void)configureDevice:(id)arg1 withWidth:(int)arg2 withHeight:(int)arg3 withFps:(int)arg4;
- (void)dealloc;
- (id)initWithOwner:(struct IosCamera *)arg1;
- (void)onDeviceOrientationDidChange:(id)arg1;
- (void)onError:(id)arg1;
- (void)reconfigureDevice:(int)arg1 withHeight:(int)arg2 withFps:(int)arg3;
- (_Bool)running;
- (void)setupConnection:(id)arg1 fps:(int)arg2;
- (id)setupDeviceWithIndex:(id)arg1 withWidth:(int)arg2 withHeight:(int)arg3 withFps:(int)arg4;
- (void)start;
- (void)stop;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

