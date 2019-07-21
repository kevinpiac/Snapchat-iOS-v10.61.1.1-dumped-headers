//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCCameraPreviewEventDelegate-Protocol.h"
#import "SCFeatureCameraBottomUIContender-Protocol.h"
#import "SCFeatureImageCaptureDelegate-Protocol.h"
#import "SCFeatureVideoCaptureDelegate-Protocol.h"

@class SCBatchCaptureConfiguration, SCFuture;
@protocol SCFeatureBatchCaptureDelegate;

@protocol SCFeatureBatchCapture <SCCameraPreviewEventDelegate, SCFeatureImageCaptureDelegate, SCFeatureVideoCaptureDelegate, SCFeatureCameraBottomUIContender>
- (SCBatchCaptureConfiguration *)batchCaptureConfiguration;
@property(nonatomic) __weak id <SCFeatureBatchCaptureDelegate> delegate;
@property(readonly, nonatomic, getter=isActivated) _Bool activated;
- (void)prepareForRecording;
- (void)reset;
- (void)setIsCapturing:(_Bool)arg1;
- (void)setLastSegmentSnappablesDataWithFuture:(SCFuture *)arg1;
- (_Bool)shouldShowPreviewButton;
@end

