//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface SCManagedLensProcessorStateBuilder : NSObject
{
    unsigned long long _devicePosition;
    long long _aspectRatioNumerator;
    long long _aspectRatioDenominator;
    float _fieldOfView;
    long long _inputOrientation;
    _Bool _audioSessionActive;
    long long _secretFeatureMode;
    _Bool _audioSessionModeVideoRecording;
    long long _processingMode;
    _Bool _shouldMuteAllSounds;
    _Bool _shouldProcessARFrames;
    _Bool _lensesActive;
    unsigned long long _coreState;
    _Bool _detectingCategory;
}

+ (id)withManagedLensProcessorState:(id)arg1;
- (id)build;
- (id)setAspectRatioDenominator:(long long)arg1;
- (id)setAspectRatioNumerator:(long long)arg1;
- (id)setAudioSessionActive:(_Bool)arg1;
- (id)setAudioSessionModeVideoRecording:(_Bool)arg1;
- (id)setCoreState:(unsigned long long)arg1;
- (id)setDetectingCategory:(_Bool)arg1;
- (id)setDevicePosition:(unsigned long long)arg1;
- (id)setFieldOfView:(float)arg1;
- (id)setInputOrientation:(long long)arg1;
- (id)setLensesActive:(_Bool)arg1;
- (id)setProcessingMode:(long long)arg1;
- (id)setSecretFeatureMode:(long long)arg1;
- (id)setShouldMuteAllSounds:(_Bool)arg1;
- (id)setShouldProcessARFrames:(_Bool)arg1;

@end

