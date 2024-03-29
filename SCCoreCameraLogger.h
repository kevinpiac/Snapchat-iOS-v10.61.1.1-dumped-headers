//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, SCQueuePerformer;

@interface SCCoreCameraLogger : NSObject
{
    SCQueuePerformer *_performer;
    NSMutableDictionary *_cameraCreationDelayParameters;
    NSMutableDictionary *_cameraCreationDelaySplits;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (void)_addSplitPointForKey:(id)arg1 atTime:(double)arg2;
- (void)_completeLogCameraCreationDelayEventWithIsImage:(_Bool)arg1 atTime:(double)arg2;
- (long long)_latencyMillisWithStartTime:(double)arg1 endTime:(double)arg2 timeAdjustment:(double)arg3;
- (void)_logCameraCreationDelayBlizzardEventWithLatencyMillis:(long long)arg1;
- (void)_logCameraCreationDelayGrapheneEventWithLatencyMillis:(long long)arg1;
- (void)_logCameraCreationDelayPerformanceEventWithLatencyMillis:(long long)arg1;
- (void)cancelCameraCreationDelayEvent;
- (id)init;
- (void)logCameraCreationDelayEventStartWithCaptureSessionId:(id)arg1 filterLensId:(id)arg2 underLowLightCondition:(_Bool)arg3 isNightModeActive:(_Bool)arg4 isBackCamera:(_Bool)arg5 isMainCamera:(_Bool)arg6 isFlashEnabled:(_Bool)arg7;
- (void)logCameraCreationDelaySplitPointCameraCaptureContentReady;
- (void)logCameraCreationDelaySplitPointPreCaptureOperationFinishedAt:(double)arg1;
- (void)logCameraCreationDelaySplitPointPreCaptureOperationRequested;
- (void)logCameraCreationDelaySplitPointPreviewAnimationComplete:(_Bool)arg1;
- (void)logCameraCreationDelaySplitPointPreviewDisplayedForImage:(_Bool)arg1;
- (void)logCameraCreationDelaySplitPointPreviewFinishedPreparation;
- (void)logCameraCreationDelaySplitPointPreviewFirstFramePlayed:(_Bool)arg1;
- (void)logCameraCreationDelaySplitPointRecordingGestureFinished;
- (void)logCameraCreationDelaySplitPointStillImageCaptureApi:(id)arg1;
- (void)updatedCameraCreationDelayWithContentDuration:(double)arg1;

@end

