//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCAUserTrackedEvent.h"

@class NSNumber, NSString;

@interface SCAOperaSnapPlayback : SCAUserTrackedEvent
{
    NSNumber *stalledOnStart;
    NSNumber *stalledOnExit;
    NSNumber *stallDurationOnStartMs;
    NSNumber *midPlaybackStallCount;
    NSNumber *midPlaybackStallDurationTotalMs;
    NSNumber *mediaDurationMs;
    NSNumber *viewTimeMs;
    NSNumber *snapViewIndex;
    NSNumber *droppedFrameCount;
    NSNumber *longformVideo;
    long long operaVersion;
    long long viewSource;
    long long contentType;
    long long playbackItemType;
    long long mediaType;
    long long galleryMediaType;
    long long playbackMode;
    long long exitEvent;
    long long entryEvent;
    NSString *mediaId;
    NSString *operaSessionId;
    NSString *mediaGroupId;
    NSString *mediaPlaybackSessionId;
    NSString *stallInfo;
    NSString *mediaEncodingVariant;
    NSString *mediaEncoding;
}

- (void).cxx_destruct;
- (id)asDictionary;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (long long)getContentType;
- (long long)getDroppedFrameCount;
- (long long)getEntryEvent;
- (id)getEventName;
- (long long)getEventQoS;
- (long long)getExitEvent;
- (long long)getGalleryMediaType;
- (_Bool)getLongformVideo;
- (long long)getMediaDurationMs;
- (id)getMediaEncoding;
- (id)getMediaEncodingVariant;
- (id)getMediaGroupId;
- (id)getMediaId;
- (id)getMediaPlaybackSessionId;
- (long long)getMediaType;
- (long long)getMidPlaybackStallCount;
- (long long)getMidPlaybackStallDurationTotalMs;
- (id)getOperaSessionId;
- (long long)getOperaVersion;
- (double)getPerUserSamplingRate;
- (long long)getPlaybackItemType;
- (long long)getPlaybackMode;
- (long long)getSnapViewIndex;
- (long long)getStallDurationOnStartMs;
- (id)getStallInfo;
- (_Bool)getStalledOnExit;
- (_Bool)getStalledOnStart;
- (long long)getViewSource;
- (long long)getViewTimeMs;
- (id)init;
- (void)setContentType:(long long)arg1;
- (void)setDroppedFrameCount:(long long)arg1;
- (void)setEntryEvent:(long long)arg1;
- (void)setExitEvent:(long long)arg1;
- (void)setGalleryMediaType:(long long)arg1;
- (void)setLongformVideo:(_Bool)arg1;
- (void)setMediaDurationMs:(long long)arg1;
- (void)setMediaEncoding:(id)arg1;
- (void)setMediaEncodingVariant:(id)arg1;
- (void)setMediaGroupId:(id)arg1;
- (void)setMediaId:(id)arg1;
- (void)setMediaPlaybackSessionId:(id)arg1;
- (void)setMediaType:(long long)arg1;
- (void)setMidPlaybackStallCount:(long long)arg1;
- (void)setMidPlaybackStallDurationTotalMs:(long long)arg1;
- (void)setOperaSessionId:(id)arg1;
- (void)setOperaVersion:(long long)arg1;
- (void)setPlaybackItemType:(long long)arg1;
- (void)setPlaybackMode:(long long)arg1;
- (void)setSnapViewIndex:(long long)arg1;
- (void)setStallDurationOnStartMs:(long long)arg1;
- (void)setStallInfo:(id)arg1;
- (void)setStalledOnExit:(_Bool)arg1;
- (void)setStalledOnStart:(_Bool)arg1;
- (void)setViewSource:(long long)arg1;
- (void)setViewTimeMs:(long long)arg1;

@end

