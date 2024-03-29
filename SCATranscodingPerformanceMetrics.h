//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"
#import "NamedEvent-Protocol.h"

@class NSNumber;

@interface SCATranscodingPerformanceMetrics : NSObject <NamedEvent, NSCopying>
{
    NSNumber *setupCount;
    NSNumber *setupMs;
    NSNumber *mixerCount;
    NSNumber *mixerMs;
    NSNumber *videoExtractorCount;
    NSNumber *videoExtractorMs;
    NSNumber *audioExtractorCount;
    NSNumber *audioExtractorMs;
    NSNumber *videoDecoderCount;
    NSNumber *videoDecoderMs;
    NSNumber *audioDecoderCount;
    NSNumber *audioDecoderMs;
    NSNumber *videoEncoderCount;
    NSNumber *videoEncoderMs;
    NSNumber *audioEncoderCount;
    NSNumber *audioEncoderMs;
    NSNumber *videoRendererCount;
    NSNumber *videoRendererMs;
    NSNumber *videoBufferedRendererCount;
    NSNumber *videoBufferedRendererMs;
    NSNumber *videoDecoderInputBufferNum;
    NSNumber *videoDecoderOutputBufferNum;
    NSNumber *videoEncoderInputBufferNum;
    NSNumber *videoEncoderOutputBufferNum;
}

- (void).cxx_destruct;
- (id)asDictionary;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (long long)getAudioDecoderCount;
- (long long)getAudioDecoderMs;
- (long long)getAudioEncoderCount;
- (long long)getAudioEncoderMs;
- (long long)getAudioExtractorCount;
- (long long)getAudioExtractorMs;
- (id)getEventName;
- (long long)getEventQoS;
- (long long)getMixerCount;
- (long long)getMixerMs;
- (double)getPerEventSamplingRate;
- (double)getPerUserSamplingRate;
- (long long)getSetupCount;
- (long long)getSetupMs;
- (long long)getVideoBufferedRendererCount;
- (long long)getVideoBufferedRendererMs;
- (long long)getVideoDecoderCount;
- (long long)getVideoDecoderInputBufferNum;
- (long long)getVideoDecoderMs;
- (long long)getVideoDecoderOutputBufferNum;
- (long long)getVideoEncoderCount;
- (long long)getVideoEncoderInputBufferNum;
- (long long)getVideoEncoderMs;
- (long long)getVideoEncoderOutputBufferNum;
- (long long)getVideoExtractorCount;
- (long long)getVideoExtractorMs;
- (long long)getVideoRendererCount;
- (long long)getVideoRendererMs;
- (void)setAudioDecoderCount:(long long)arg1;
- (void)setAudioDecoderMs:(long long)arg1;
- (void)setAudioEncoderCount:(long long)arg1;
- (void)setAudioEncoderMs:(long long)arg1;
- (void)setAudioExtractorCount:(long long)arg1;
- (void)setAudioExtractorMs:(long long)arg1;
- (void)setMixerCount:(long long)arg1;
- (void)setMixerMs:(long long)arg1;
- (void)setSetupCount:(long long)arg1;
- (void)setSetupMs:(long long)arg1;
- (void)setVideoBufferedRendererCount:(long long)arg1;
- (void)setVideoBufferedRendererMs:(long long)arg1;
- (void)setVideoDecoderCount:(long long)arg1;
- (void)setVideoDecoderInputBufferNum:(long long)arg1;
- (void)setVideoDecoderMs:(long long)arg1;
- (void)setVideoDecoderOutputBufferNum:(long long)arg1;
- (void)setVideoEncoderCount:(long long)arg1;
- (void)setVideoEncoderInputBufferNum:(long long)arg1;
- (void)setVideoEncoderMs:(long long)arg1;
- (void)setVideoEncoderOutputBufferNum:(long long)arg1;
- (void)setVideoExtractorCount:(long long)arg1;
- (void)setVideoExtractorMs:(long long)arg1;
- (void)setVideoRendererCount:(long long)arg1;
- (void)setVideoRendererMs:(long long)arg1;

@end

