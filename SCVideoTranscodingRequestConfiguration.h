//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"

@class NSArray, NSData, NSString, NSURL, SCCroppingState, SCSnapVideoFilterAudioState;

@interface SCVideoTranscodingRequestConfiguration : NSObject <NSCopying, NSCoding>
{
    _Bool _useOverlayImageAsMask;
    _Bool _highQuality;
    _Bool _audioEnabled;
    _Bool _isLagunaVideo;
    _Bool _videoCircleRenderer;
    _Bool _videoCircleColorBlack;
    _Bool _videoCircleMask;
    unsigned long long _mediaSource;
    unsigned long long _mediaDestination;
    NSString *_uuid;
    long long _expectedOutputBitrate;
    long long _qualityLevel;
    NSData *_overridingAudioData;
    NSData *_backgroundAudioData;
    NSString *_filterName;
    long long _overlayImageFileSizeBits;
    NSURL *_overlayImageURL;
    NSData *_overlayImagePNGData;
    double _videoPlaybackRate;
    double _videoTargetAspectRatio;
    long long _videoTargetOrientation;
    NSArray *_videoTrackedImageStates;
    SCSnapVideoFilterAudioState *_audioState;
    SCCroppingState *_croppingState;
    double _croppingAspectRatio;
    struct CGSize _videoTargetSize;
    struct CGSize _videoCirclePadding;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool audioEnabled; // @synthesize audioEnabled=_audioEnabled;
@property(readonly, copy, nonatomic) SCSnapVideoFilterAudioState *audioState; // @synthesize audioState=_audioState;
@property(readonly, copy, nonatomic) NSData *backgroundAudioData; // @synthesize backgroundAudioData=_backgroundAudioData;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, nonatomic) double croppingAspectRatio; // @synthesize croppingAspectRatio=_croppingAspectRatio;
@property(readonly, copy, nonatomic) SCCroppingState *croppingState; // @synthesize croppingState=_croppingState;
- (void)encodeWithCoder:(id)arg1;
@property(readonly, nonatomic) long long expectedOutputBitrate; // @synthesize expectedOutputBitrate=_expectedOutputBitrate;
@property(readonly, copy, nonatomic) NSString *filterName; // @synthesize filterName=_filterName;
- (unsigned long long)hash;
@property(readonly, nonatomic) _Bool highQuality; // @synthesize highQuality=_highQuality;
- (id)initWithCoder:(id)arg1;
- (id)initWithMediaSource:(unsigned long long)arg1 mediaDestination:(unsigned long long)arg2 uuid:(id)arg3 expectedOutputBitrate:(long long)arg4 videoTargetSize:(struct CGSize)arg5 qualityLevel:(long long)arg6 overridingAudioData:(id)arg7 backgroundAudioData:(id)arg8 useOverlayImageAsMask:(_Bool)arg9 filterName:(id)arg10 overlayImageFileSizeBits:(long long)arg11 overlayImageURL:(id)arg12 overlayImagePNGData:(id)arg13 highQuality:(_Bool)arg14 audioEnabled:(_Bool)arg15 isLagunaVideo:(_Bool)arg16 videoPlaybackRate:(double)arg17 videoTargetAspectRatio:(double)arg18 videoTargetOrientation:(long long)arg19 videoTrackedImageStates:(id)arg20 audioState:(id)arg21 videoCircleRenderer:(_Bool)arg22 videoCircleColorBlack:(_Bool)arg23 videoCirclePadding:(struct CGSize)arg24 videoCircleMask:(_Bool)arg25 croppingState:(id)arg26 croppingAspectRatio:(double)arg27;
- (_Bool)isEqual:(id)arg1;
@property(readonly, nonatomic) _Bool isLagunaVideo; // @synthesize isLagunaVideo=_isLagunaVideo;
@property(readonly, nonatomic) unsigned long long mediaDestination; // @synthesize mediaDestination=_mediaDestination;
@property(readonly, nonatomic) unsigned long long mediaSource; // @synthesize mediaSource=_mediaSource;
@property(readonly, nonatomic) long long overlayImageFileSizeBits; // @synthesize overlayImageFileSizeBits=_overlayImageFileSizeBits;
@property(readonly, copy, nonatomic) NSData *overlayImagePNGData; // @synthesize overlayImagePNGData=_overlayImagePNGData;
@property(readonly, copy, nonatomic) NSURL *overlayImageURL; // @synthesize overlayImageURL=_overlayImageURL;
@property(readonly, copy, nonatomic) NSData *overridingAudioData; // @synthesize overridingAudioData=_overridingAudioData;
@property(readonly, nonatomic) long long qualityLevel; // @synthesize qualityLevel=_qualityLevel;
@property(readonly, nonatomic) _Bool useOverlayImageAsMask; // @synthesize useOverlayImageAsMask=_useOverlayImageAsMask;
@property(readonly, copy, nonatomic) NSString *uuid; // @synthesize uuid=_uuid;
@property(readonly, nonatomic) _Bool videoCircleColorBlack; // @synthesize videoCircleColorBlack=_videoCircleColorBlack;
@property(readonly, nonatomic) _Bool videoCircleMask; // @synthesize videoCircleMask=_videoCircleMask;
@property(readonly, nonatomic) struct CGSize videoCirclePadding; // @synthesize videoCirclePadding=_videoCirclePadding;
@property(readonly, nonatomic) _Bool videoCircleRenderer; // @synthesize videoCircleRenderer=_videoCircleRenderer;
@property(readonly, nonatomic) double videoPlaybackRate; // @synthesize videoPlaybackRate=_videoPlaybackRate;
@property(readonly, nonatomic) double videoTargetAspectRatio; // @synthesize videoTargetAspectRatio=_videoTargetAspectRatio;
@property(readonly, nonatomic) long long videoTargetOrientation; // @synthesize videoTargetOrientation=_videoTargetOrientation;
@property(readonly, nonatomic) struct CGSize videoTargetSize; // @synthesize videoTargetSize=_videoTargetSize;
@property(readonly, copy, nonatomic) NSArray *videoTrackedImageStates; // @synthesize videoTrackedImageStates=_videoTrackedImageStates;

@end

