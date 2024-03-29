//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"
#import "NSObject-Protocol.h"

@class NSArray, NSData, NSString, NSURL, SCCroppingState, SCSnapVideoFilterAudioState, SCSnapVideoFilterMultiSnapSegmentState;

@protocol SCSnapVideoFilterState <NSObject, NSCoding, NSCopying>
@property(readonly, nonatomic) _Bool audioEnabled;
@property(readonly, copy, nonatomic) SCSnapVideoFilterAudioState *audioState;
@property(readonly, nonatomic) long long bitrate;
@property(readonly, nonatomic) int cameraDirection;
@property(readonly, nonatomic) double croppingAspectRatio;
@property(readonly, copy, nonatomic) SCCroppingState *croppingState;
@property(readonly, copy, nonatomic) NSString *drawingData;
@property(readonly, copy, nonatomic) NSString *filterName;
@property(readonly, nonatomic) long long frameRate;
@property(readonly, nonatomic) _Bool highQuality;
@property(readonly, nonatomic) double imageDuration;
@property(readonly, nonatomic) _Bool isLagunaVideo;
@property(readonly, nonatomic) unsigned long long mediaDestination;
@property(readonly, nonatomic) unsigned long long mediaSource;
@property(readonly, copy, nonatomic) SCSnapVideoFilterMultiSnapSegmentState *multiSnapSegmentState;
@property(readonly, nonatomic) long long overlayImageFileSizeBits;
@property(readonly, copy, nonatomic) NSData *overlayImageForThumbnailPNGData;
@property(readonly, copy, nonatomic) NSData *overlayImagePNGData;
@property(readonly, copy, nonatomic) NSURL *overlayImageURL;
@property(readonly, copy, nonatomic) NSData *overridingAudioData;
@property(readonly, nonatomic) long long qualityLevel;
@property(readonly, copy, nonatomic) NSData *snapImagePNGData;
@property(readonly, nonatomic) long long snapSource;
@property(readonly, copy, nonatomic) NSData *thumbnailData;
@property(readonly, nonatomic) long long thumbnailOrientation;
@property(readonly, copy, nonatomic) NSArray *timeRanges;
@property(readonly, nonatomic) _Bool useOverlayImageAsMask;
@property(readonly, copy, nonatomic) NSString *uuid;
@property(readonly, nonatomic) _Bool videoCircleColorBlack;
@property(readonly, nonatomic) _Bool videoCircleMask;
@property(readonly, nonatomic) struct CGSize videoCirclePadding;
@property(readonly, nonatomic) _Bool videoCircleRenderer;
@property(readonly, nonatomic) double videoPlaybackRate;
@property(readonly, nonatomic) double videoTargetAspectRatio;
@property(readonly, nonatomic) long long videoTargetOrientation;
@property(readonly, copy, nonatomic) NSArray *videoTrackedImageStates;
@property(readonly, copy, nonatomic) NSURL *videoURL;
@end

