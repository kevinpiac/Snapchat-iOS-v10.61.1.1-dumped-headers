//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class SCCameraVolumeButtonHandler;
@protocol SCFeatureVolumeButtonCapture;

@protocol SCFeatureVolumeButtonCaptureDelegate
- (void)volumeButtonCaptureBegan;
- (void)volumeButtonCaptureEnded;
- (SCCameraVolumeButtonHandler *)volumeButtonCaptureHandler:(id <SCFeatureVolumeButtonCapture>)arg1;
- (_Bool)volumeButtonCaptureShouldAllowBegin:(id <SCFeatureVolumeButtonCapture>)arg1;
- (_Bool)volumeButtonCaptureShouldAllowEnd:(id <SCFeatureVolumeButtonCapture>)arg1;
@end

