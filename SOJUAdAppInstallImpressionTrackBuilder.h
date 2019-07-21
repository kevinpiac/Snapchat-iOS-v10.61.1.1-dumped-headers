//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSNumber, NSString, SOJUAdTopsnapVolumes;

@interface SOJUAdAppInstallImpressionTrackBuilder : NSObject
{
    NSNumber *_topsnapTimeViewedSeconds;
    NSNumber *_topsnapMediaDurationSeconds;
    NSNumber *_swiped;
    NSNumber *_renderedTimestampInMilliSeconds;
    NSNumber *_deltaBetweenReceiveAndRenderMillis;
    NSNumber *_swipeCount;
    NSString *_creativeId;
    NSNumber *_topsnapAudioPlaybackVolume;
    NSNumber *_longformAudioPlaybackVolume;
    NSNumber *_topsnapTimeViewedBeforeInteractionSeconds;
    SOJUAdTopsnapVolumes *_topsnapVolumes;
    NSNumber *_topsnapMaxContinuousTimeViewedSeconds;
    NSNumber *_topsnapAudibleTimeViewedSeconds;
    NSString *_topsnapMediaType;
}

+ (id)withJUAdAppInstallImpressionTrack:(id)arg1;
- (void).cxx_destruct;
- (id)build;
- (id)setCreativeId:(id)arg1;
- (id)setDeltaBetweenReceiveAndRenderMillis:(id)arg1;
- (id)setDeltaBetweenReceiveAndRenderMillisValue:(long long)arg1;
- (id)setLongformAudioPlaybackVolume:(id)arg1;
- (id)setLongformAudioPlaybackVolumeValue:(float)arg1;
- (id)setRenderedTimestampInMilliSeconds:(id)arg1;
- (id)setRenderedTimestampInMilliSecondsValue:(long long)arg1;
- (id)setSwipeCount:(id)arg1;
- (id)setSwipeCountValue:(int)arg1;
- (id)setSwiped:(id)arg1;
- (id)setSwipedValue:(_Bool)arg1;
- (id)setTopsnapAudibleTimeViewedSeconds:(id)arg1;
- (id)setTopsnapAudibleTimeViewedSecondsValue:(float)arg1;
- (id)setTopsnapAudioPlaybackVolume:(id)arg1;
- (id)setTopsnapAudioPlaybackVolumeValue:(float)arg1;
- (id)setTopsnapMaxContinuousTimeViewedSeconds:(id)arg1;
- (id)setTopsnapMaxContinuousTimeViewedSecondsValue:(float)arg1;
- (id)setTopsnapMediaDurationSeconds:(id)arg1;
- (id)setTopsnapMediaDurationSecondsValue:(float)arg1;
- (id)setTopsnapMediaType:(id)arg1;
- (id)setTopsnapMediaTypeEnum:(long long)arg1;
- (id)setTopsnapTimeViewedBeforeInteractionSeconds:(id)arg1;
- (id)setTopsnapTimeViewedBeforeInteractionSecondsValue:(float)arg1;
- (id)setTopsnapTimeViewedSeconds:(id)arg1;
- (id)setTopsnapTimeViewedSecondsValue:(float)arg1;
- (id)setTopsnapVolumes:(id)arg1;

@end

