//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCAUserTrackedEvent.h"

@class NSNumber, NSString;

@interface SCAStorySnapPostLatency : SCAUserTrackedEvent
{
    NSNumber *withSuccess;
    NSNumber *totalLatencySecs;
    NSNumber *uploadSize;
    NSNumber *mediaDurationSecs;
    NSNumber *withMultiSnap;
    NSNumber *withDirectSnapSend;
    NSNumber *withAnimated;
    NSNumber *withMediaUpload;
    NSNumber *withDirectUploadUrl;
    NSNumber *withOverlay;
    NSNumber *withAutoRetry;
    NSNumber *storyPostCount;
    long long context;
    long long mediaType;
    long long originalMediaType;
    NSString *storySnapId;
    NSString *captureSessionId;
    NSString *postSessionClientId;
}

- (void).cxx_destruct;
- (id)asDictionary;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)getCaptureSessionId;
- (long long)getContext;
- (id)getEventName;
- (long long)getEventQoS;
- (double)getMediaDurationSecs;
- (long long)getMediaType;
- (long long)getOriginalMediaType;
- (double)getPerUserSamplingRate;
- (id)getPostSessionClientId;
- (long long)getStoryPostCount;
- (id)getStorySnapId;
- (double)getTotalLatencySecs;
- (long long)getUploadSize;
- (_Bool)getWithAnimated;
- (_Bool)getWithAutoRetry;
- (_Bool)getWithDirectSnapSend;
- (_Bool)getWithDirectUploadUrl;
- (_Bool)getWithMediaUpload;
- (_Bool)getWithMultiSnap;
- (_Bool)getWithOverlay;
- (_Bool)getWithSuccess;
- (id)init;
- (void)setCaptureSessionId:(id)arg1;
- (void)setContext:(long long)arg1;
- (void)setMediaDurationSecs:(double)arg1;
- (void)setMediaType:(long long)arg1;
- (void)setOriginalMediaType:(long long)arg1;
- (void)setPostSessionClientId:(id)arg1;
- (void)setStoryPostCount:(long long)arg1;
- (void)setStorySnapId:(id)arg1;
- (void)setTotalLatencySecs:(double)arg1;
- (void)setUploadSize:(long long)arg1;
- (void)setWithAnimated:(_Bool)arg1;
- (void)setWithAutoRetry:(_Bool)arg1;
- (void)setWithDirectSnapSend:(_Bool)arg1;
- (void)setWithDirectUploadUrl:(_Bool)arg1;
- (void)setWithMediaUpload:(_Bool)arg1;
- (void)setWithMultiSnap:(_Bool)arg1;
- (void)setWithOverlay:(_Bool)arg1;
- (void)setWithSuccess:(_Bool)arg1;

@end

