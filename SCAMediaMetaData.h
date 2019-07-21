//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"
#import "NamedEvent-Protocol.h"

@class NSNumber, NSString, SCAResolution;

@interface SCAMediaMetaData : NSObject <NamedEvent, NSCopying>
{
    NSNumber *fileSize;
    NSNumber *videoFrameRate;
    NSNumber *gopSize;
    NSNumber *videoDurationMs;
    NSNumber *videoBitrate;
    NSNumber *audioBitrate;
    long long dataFormat;
    long long orientation;
    NSString *mediaFormat;
    SCAResolution *resolution;
}

- (void).cxx_destruct;
- (id)asDictionary;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (long long)getAudioBitrate;
- (long long)getDataFormat;
- (id)getEventName;
- (long long)getEventQoS;
- (long long)getFileSize;
- (long long)getGopSize;
- (id)getMediaFormat;
- (long long)getOrientation;
- (double)getPerEventSamplingRate;
- (double)getPerUserSamplingRate;
- (id)getResolution;
- (long long)getVideoBitrate;
- (long long)getVideoDurationMs;
- (double)getVideoFrameRate;
- (id)init;
- (void)setAudioBitrate:(long long)arg1;
- (void)setDataFormat:(long long)arg1;
- (void)setFileSize:(long long)arg1;
- (void)setGopSize:(long long)arg1;
- (void)setMediaFormat:(id)arg1;
- (void)setOrientation:(long long)arg1;
- (void)setResolution:(id)arg1;
- (void)setVideoBitrate:(long long)arg1;
- (void)setVideoDurationMs:(long long)arg1;
- (void)setVideoFrameRate:(double)arg1;

@end

