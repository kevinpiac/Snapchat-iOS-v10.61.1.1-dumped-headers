//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"
#import "NamedEvent-Protocol.h"

@class NSNumber;

@interface SCATranscodingFrameStatistics : NSObject <NamedEvent, NSCopying>
{
    NSNumber *VideoDecoderOutOfOrderFrameCount;
    NSNumber *VideoDecoderProcessedFrameCount;
    NSNumber *VideoDecoderDroppedFrameCount;
    NSNumber *AudioDecoderOutOfOrderFrameCount;
    NSNumber *AudioDecoderProcessedFrameCount;
    NSNumber *AudioDecoderDroppedFrameCount;
    NSNumber *MuxerVideoOutOfOrderFrameCount;
    NSNumber *MuxerVideoProcessedFrameCount;
    NSNumber *MuxerVideoDroppedFrameCount;
    NSNumber *MuxerAudioOutOfOrderFrameCount;
    NSNumber *MuxerAudioProcessedFrameCount;
    NSNumber *MuxerAudioDroppedFrameCount;
}

- (void).cxx_destruct;
- (id)asDictionary;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (long long)getAudioDecoderDroppedFrameCount;
- (long long)getAudioDecoderOutOfOrderFrameCount;
- (long long)getAudioDecoderProcessedFrameCount;
- (id)getEventName;
- (long long)getEventQoS;
- (long long)getMuxerAudioDroppedFrameCount;
- (long long)getMuxerAudioOutOfOrderFrameCount;
- (long long)getMuxerAudioProcessedFrameCount;
- (long long)getMuxerVideoDroppedFrameCount;
- (long long)getMuxerVideoOutOfOrderFrameCount;
- (long long)getMuxerVideoProcessedFrameCount;
- (double)getPerEventSamplingRate;
- (double)getPerUserSamplingRate;
- (long long)getVideoDecoderDroppedFrameCount;
- (long long)getVideoDecoderOutOfOrderFrameCount;
- (long long)getVideoDecoderProcessedFrameCount;
- (void)setAudioDecoderDroppedFrameCount:(long long)arg1;
- (void)setAudioDecoderOutOfOrderFrameCount:(long long)arg1;
- (void)setAudioDecoderProcessedFrameCount:(long long)arg1;
- (void)setMuxerAudioDroppedFrameCount:(long long)arg1;
- (void)setMuxerAudioOutOfOrderFrameCount:(long long)arg1;
- (void)setMuxerAudioProcessedFrameCount:(long long)arg1;
- (void)setMuxerVideoDroppedFrameCount:(long long)arg1;
- (void)setMuxerVideoOutOfOrderFrameCount:(long long)arg1;
- (void)setMuxerVideoProcessedFrameCount:(long long)arg1;
- (void)setVideoDecoderDroppedFrameCount:(long long)arg1;
- (void)setVideoDecoderOutOfOrderFrameCount:(long long)arg1;
- (void)setVideoDecoderProcessedFrameCount:(long long)arg1;

@end

