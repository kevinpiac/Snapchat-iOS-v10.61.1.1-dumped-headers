//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface SCManagedRecordingInterruptionReporter : NSObject
{
    _Bool _isRecording;
}

- (void)didReleaseCaptureButton;
- (void)didReleaseVolumeButton;
- (void)didTimerReachEnd;
@property(nonatomic) _Bool isRecording; // @synthesize isRecording=_isRecording;
- (void)willBeginRecording;
- (void)willPresentPreviewForVideo;
- (void)willStopRecordingByLenses;

@end

