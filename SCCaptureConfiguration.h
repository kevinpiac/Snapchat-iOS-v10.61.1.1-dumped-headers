//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class AVCaptureVideoPreviewLayer, NSMutableSet, UIView;
@protocol LSAGLView;

@interface SCCaptureConfiguration : NSObject
{
    _Bool _sealed;
    NSMutableSet *_dirtyKeys;
    _Bool _isRunning;
    _Bool _isNightModeActive;
    _Bool _lowLightCondition;
    _Bool _adjustingExposure;
    _Bool _flashSupported;
    _Bool _torchSupported;
    _Bool _flashActive;
    _Bool _torchActive;
    _Bool _lensesActive;
    _Bool _arSessionActive;
    _Bool _liveVideoStreaming;
    unsigned long long _devicePosition;
    double _zoomFactor;
    AVCaptureVideoPreviewLayer *_videoPreviewLayer;
    UIView<LSAGLView> *_videoPreviewGLView;
    CDStruct_4565c1ff _captureSessionInfo;
}

- (void).cxx_destruct;
- (_Bool)_configurationSealed;
@property(nonatomic) _Bool adjustingExposure; // @synthesize adjustingExposure=_adjustingExposure;
@property(nonatomic) _Bool arSessionActive; // @synthesize arSessionActive=_arSessionActive;
@property(nonatomic) CDStruct_4565c1ff captureSessionInfo; // @synthesize captureSessionInfo=_captureSessionInfo;
@property(nonatomic) unsigned long long devicePosition; // @synthesize devicePosition=_devicePosition;
- (id)dirtyKeys;
@property(nonatomic) _Bool flashActive; // @synthesize flashActive=_flashActive;
@property(nonatomic) _Bool flashSupported; // @synthesize flashSupported=_flashSupported;
- (id)init;
@property(nonatomic) _Bool isNightModeActive; // @synthesize isNightModeActive=_isNightModeActive;
@property(nonatomic) _Bool isRunning; // @synthesize isRunning=_isRunning;
@property(nonatomic) _Bool lensesActive; // @synthesize lensesActive=_lensesActive;
@property(nonatomic) _Bool liveVideoStreaming; // @synthesize liveVideoStreaming=_liveVideoStreaming;
@property(nonatomic) _Bool lowLightCondition; // @synthesize lowLightCondition=_lowLightCondition;
- (void)seal;
@property(nonatomic) _Bool torchActive; // @synthesize torchActive=_torchActive;
@property(nonatomic) _Bool torchSupported; // @synthesize torchSupported=_torchSupported;
@property(retain, nonatomic) UIView<LSAGLView> *videoPreviewGLView; // @synthesize videoPreviewGLView=_videoPreviewGLView;
@property(retain, nonatomic) AVCaptureVideoPreviewLayer *videoPreviewLayer; // @synthesize videoPreviewLayer=_videoPreviewLayer;
@property(nonatomic) double zoomFactor; // @synthesize zoomFactor=_zoomFactor;

@end
