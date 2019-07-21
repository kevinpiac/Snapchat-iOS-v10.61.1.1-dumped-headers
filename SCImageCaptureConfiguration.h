//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCImageCaptureConfiguration-Protocol.h"

@class NSNumber, NSString, SCManagedCapturerState;

@interface SCImageCaptureConfiguration : NSObject <SCImageCaptureConfiguration>
{
    _Bool _isStabilizationDisabled;
    _Bool _shouldCaptureFromVideo;
    _Bool _lensInitiatedCapture;
    _Bool _isMainCamera;
    float _isoSpeedRating;
    float _exposureTime;
    float _fieldOfView;
    long long _mode;
    NSNumber *_exposureCaptureDeadline;
    double _aspectRatio;
    NSString *_captureSessionID;
    double _zoomFactor;
    SCManagedCapturerState *_capturerState;
}

+ (unsigned long long *)fasterCodingKeys;
+ (unsigned long long)fasterCodingVersion;
- (void).cxx_destruct;
@property(readonly, nonatomic) double aspectRatio; // @synthesize aspectRatio=_aspectRatio;
@property(readonly, copy, nonatomic) NSString *captureSessionID; // @synthesize captureSessionID=_captureSessionID;
@property(readonly, copy, nonatomic) SCManagedCapturerState *capturerState; // @synthesize capturerState=_capturerState;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)decodeWithFasterDecoder:(id)arg1;
@property(readonly, copy) NSString *description;
- (void)encodeWithCoder:(id)arg1;
- (void)encodeWithFasterCoder:(id)arg1;
@property(readonly, copy, nonatomic) NSNumber *exposureCaptureDeadline; // @synthesize exposureCaptureDeadline=_exposureCaptureDeadline;
@property(readonly, nonatomic) float exposureTime; // @synthesize exposureTime=_exposureTime;
@property(readonly, nonatomic) float fieldOfView; // @synthesize fieldOfView=_fieldOfView;
@property(readonly) unsigned long long hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithMode:(long long)arg1 isoSpeedRating:(float)arg2 exposureTime:(float)arg3 exposureCaptureDeadline:(id)arg4 isStabilizationDisabled:(_Bool)arg5 aspectRatio:(double)arg6 captureSessionID:(id)arg7 shouldCaptureFromVideo:(_Bool)arg8 zoomFactor:(double)arg9 capturerState:(id)arg10 fieldOfView:(float)arg11 lensInitiatedCapture:(_Bool)arg12 isMainCamera:(_Bool)arg13;
- (_Bool)isEqual:(id)arg1;
@property(readonly, nonatomic) _Bool isMainCamera; // @synthesize isMainCamera=_isMainCamera;
@property(readonly, nonatomic) _Bool isStabilizationDisabled; // @synthesize isStabilizationDisabled=_isStabilizationDisabled;
@property(readonly, nonatomic) float isoSpeedRating; // @synthesize isoSpeedRating=_isoSpeedRating;
@property(readonly, nonatomic) _Bool lensInitiatedCapture; // @synthesize lensInitiatedCapture=_lensInitiatedCapture;
@property(readonly, nonatomic) long long mode; // @synthesize mode=_mode;
- (_Bool)preferFasterCoding;
- (void)setBool:(_Bool)arg1 forUInt64Key:(unsigned long long)arg2;
- (void)setFloat32:(float)arg1 forUInt64Key:(unsigned long long)arg2;
- (void)setFloat64:(double)arg1 forUInt64Key:(unsigned long long)arg2;
- (void)setObject:(id)arg1 forUInt64Key:(unsigned long long)arg2;
- (void)setSInt32:(int)arg1 forUInt64Key:(unsigned long long)arg2;
@property(readonly, nonatomic) _Bool shouldCaptureFromVideo; // @synthesize shouldCaptureFromVideo=_shouldCaptureFromVideo;
@property(readonly, nonatomic) double zoomFactor; // @synthesize zoomFactor=_zoomFactor;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

