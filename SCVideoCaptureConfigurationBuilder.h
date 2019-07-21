//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface SCVideoCaptureConfigurationBuilder : NSObject
{
    unsigned long long _recordingMethod;
    NSString *_captureSessionId;
    NSString *_activeLensId;
    _Bool _lensEnabled;
    _Bool _isSnappable;
    _Bool _isSnapWithDepth;
    _Bool _isStoppingRecording;
    _Bool _lensInitiatedCapture;
}

+ (id)withVideoCaptureConfiguration:(id)arg1;
- (void).cxx_destruct;
- (id)build;
- (id)setActiveLensId:(id)arg1;
- (id)setCaptureSessionId:(id)arg1;
- (id)setIsSnapWithDepth:(_Bool)arg1;
- (id)setIsSnappable:(_Bool)arg1;
- (id)setIsStoppingRecording:(_Bool)arg1;
- (id)setLensEnabled:(_Bool)arg1;
- (id)setLensInitiatedCapture:(_Bool)arg1;
- (id)setRecordingMethod:(unsigned long long)arg1;

@end
