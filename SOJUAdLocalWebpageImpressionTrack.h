//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SOJUAdLocalWebpageImpressionTrack-Protocol.h"

@class NSNumber, NSString, SOJUAdTopsnapVolumes;

@interface SOJUAdLocalWebpageImpressionTrack : NSObject <SOJUAdLocalWebpageImpressionTrack>
{
    NSNumber *_topsnapTimeViewedSeconds;
    NSNumber *_topsnapMediaDurationSeconds;
    NSNumber *_longformTimeViewedSeconds;
    NSNumber *_swiped;
    NSNumber *_renderedTimestampInMilliSeconds;
    NSNumber *_deltaBetweenReceiveAndRenderMillis;
    NSNumber *_pageHeight;
    NSNumber *_pageHeightSeen;
    NSNumber *_pageCurrentOffset;
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
- (id)initWithTopsnapTimeViewedSeconds:(id)arg1 topsnapMediaDurationSeconds:(id)arg2 longformTimeViewedSeconds:(id)arg3 swiped:(id)arg4 renderedTimestampInMilliSeconds:(id)arg5 deltaBetweenReceiveAndRenderMillis:(id)arg6 pageHeight:(id)arg7 pageHeightSeen:(id)arg8 pageCurrentOffset:(id)arg9 swipeCount:(id)arg10 creativeId:(id)arg11 topsnapAudioPlaybackVolume:(id)arg12 longformAudioPlaybackVolume:(id)arg13 topsnapTimeViewedBeforeInteractionSeconds:(id)arg14 topsnapVolumes:(id)arg15 topsnapMaxContinuousTimeViewedSeconds:(id)arg16 topsnapAudibleTimeViewedSeconds:(id)arg17 topsnapMediaType:(id)arg18;
- (_Bool)isEqual:(id)arg1;
@property(readonly, copy, nonatomic) NSNumber *longformAudioPlaybackVolume; // @synthesize longformAudioPlaybackVolume=_longformAudioPlaybackVolume;
- (float)longformAudioPlaybackVolumeValue;
@property(readonly, copy, nonatomic) NSNumber *longformTimeViewedSeconds; // @synthesize longformTimeViewedSeconds=_longformTimeViewedSeconds;
- (float)longformTimeViewedSecondsValue;
@property(readonly, copy, nonatomic) NSNumber *pageCurrentOffset; // @synthesize pageCurrentOffset=_pageCurrentOffset;
- (int)pageCurrentOffsetValue;
@property(readonly, copy, nonatomic) NSNumber *pageHeight; // @synthesize pageHeight=_pageHeight;
@property(readonly, copy, nonatomic) NSNumber *pageHeightSeen; // @synthesize pageHeightSeen=_pageHeightSeen;
- (int)pageHeightSeenValue;
- (int)pageHeightValue;
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
