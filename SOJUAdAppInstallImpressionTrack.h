//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SOJUAdAppInstallImpressionTrack-Protocol.h"

@class NSNumber, NSString, SOJUAdTopsnapVolumes;

@interface SOJUAdAppInstallImpressionTrack : NSObject <SOJUAdAppInstallImpressionTrack>
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

+ (_Bool)canInitFromProto;
+ (unsigned long long *)fasterCodingKeys;
+ (unsigned long long)fasterCodingVersion;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, copy, nonatomic) NSString *creativeId; // @synthesize creativeId=_creativeId;
- (void)decodeWithFasterDecoder:(id)arg1;
@property(readonly, copy, nonatomic) NSNumber *deltaBetweenReceiveAndRenderMillis; // @synthesize deltaBetweenReceiveAndRenderMillis=_deltaBetweenReceiveAndRenderMillis;
- (long long)deltaBetweenReceiveAndRenderMillisValue;
@property(readonly, copy) NSString *description;
- (void)encodeWithCoder:(id)arg1;
- (void)encodeWithFasterCoder:(id)arg1;
@property(readonly) unsigned long long hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithJSONDictionary:(id)arg1;
- (id)initWithTopsnapTimeViewedSeconds:(id)arg1 topsnapMediaDurationSeconds:(id)arg2 swiped:(id)arg3 renderedTimestampInMilliSeconds:(id)arg4 deltaBetweenReceiveAndRenderMillis:(id)arg5 swipeCount:(id)arg6 creativeId:(id)arg7 topsnapAudioPlaybackVolume:(id)arg8 longformAudioPlaybackVolume:(id)arg9 topsnapTimeViewedBeforeInteractionSeconds:(id)arg10 topsnapVolumes:(id)arg11 topsnapMaxContinuousTimeViewedSeconds:(id)arg12 topsnapAudibleTimeViewedSeconds:(id)arg13 topsnapMediaType:(id)arg14;
- (_Bool)isEqual:(id)arg1;
@property(readonly, copy, nonatomic) NSNumber *longformAudioPlaybackVolume; // @synthesize longformAudioPlaybackVolume=_longformAudioPlaybackVolume;
- (float)longformAudioPlaybackVolumeValue;
- (_Bool)preferFasterCoding;
@property(readonly, copy, nonatomic) NSNumber *renderedTimestampInMilliSeconds; // @synthesize renderedTimestampInMilliSeconds=_renderedTimestampInMilliSeconds;
- (long long)renderedTimestampInMilliSecondsValue;
- (void)setObject:(id)arg1 forUInt64Key:(unsigned long long)arg2;
@property(readonly, copy, nonatomic) NSNumber *swipeCount; // @synthesize swipeCount=_swipeCount;
- (int)swipeCountValue;
@property(readonly, copy, nonatomic) NSNumber *swiped; // @synthesize swiped=_swiped;
- (_Bool)swipedValue;
- (id)toDictionary;
- (id)toJson;
@property(readonly, copy, nonatomic) NSNumber *topsnapAudibleTimeViewedSeconds; // @synthesize topsnapAudibleTimeViewedSeconds=_topsnapAudibleTimeViewedSeconds;
- (float)topsnapAudibleTimeViewedSecondsValue;
@property(readonly, copy, nonatomic) NSNumber *topsnapAudioPlaybackVolume; // @synthesize topsnapAudioPlaybackVolume=_topsnapAudioPlaybackVolume;
- (float)topsnapAudioPlaybackVolumeValue;
@property(readonly, copy, nonatomic) NSNumber *topsnapMaxContinuousTimeViewedSeconds; // @synthesize topsnapMaxContinuousTimeViewedSeconds=_topsnapMaxContinuousTimeViewedSeconds;
- (float)topsnapMaxContinuousTimeViewedSecondsValue;
@property(readonly, copy, nonatomic) NSNumber *topsnapMediaDurationSeconds; // @synthesize topsnapMediaDurationSeconds=_topsnapMediaDurationSeconds;
- (float)topsnapMediaDurationSecondsValue;
@property(readonly, copy, nonatomic) NSString *topsnapMediaType; // @synthesize topsnapMediaType=_topsnapMediaType;
- (long long)topsnapMediaTypeEnum;
@property(readonly, copy, nonatomic) NSNumber *topsnapTimeViewedBeforeInteractionSeconds; // @synthesize topsnapTimeViewedBeforeInteractionSeconds=_topsnapTimeViewedBeforeInteractionSeconds;
- (float)topsnapTimeViewedBeforeInteractionSecondsValue;
@property(readonly, copy, nonatomic) NSNumber *topsnapTimeViewedSeconds; // @synthesize topsnapTimeViewedSeconds=_topsnapTimeViewedSeconds;
- (float)topsnapTimeViewedSecondsValue;
@property(readonly, copy, nonatomic) SOJUAdTopsnapVolumes *topsnapVolumes; // @synthesize topsnapVolumes=_topsnapVolumes;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

