//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSNumber, NSString, SOJUAdLensPerformanceMetrics, SOJUAdUnlockableAttachmentImpression;

@interface SOJUAdLensImpressionTrackBuilder : NSObject
{
    NSString *_lensId;
    NSNumber *_totalSwipedViewMillis;
    NSString *_lensOptionId;
    NSNumber *_swipedOverCount;
    NSNumber *_withSnapSend;
    NSNumber *_withStoryPost;
    NSNumber *_withMemoriesSave;
    NSNumber *_withSelfieCamera;
    NSNumber *_withWorldCamera;
    NSNumber *_isAudioOn;
    NSNumber *_lensIndexPos;
    NSString *_rawAdData;
    NSString *_encryptedSponsoredUnlockableTargetingInfoData;
    NSString *_rankingId;
    NSString *_rankingData;
    SOJUAdUnlockableAttachmentImpression *_attachmentImpression;
    NSString *_encGeoData;
    NSNumber *_withAttachmentOpen;
    NSString *_attachmentType;
    NSNumber *_snapSendRecipientCount;
    NSNumber *_snapSendCount;
    NSNumber *_storyPostCount;
    NSNumber *_memoriesSaveCount;
    NSNumber *_captureTimeMillis;
    NSNumber *_postCaptureTimeMillis;
    NSNumber *_maxSwipeTimeMillis;
    NSNumber *_maxContinuousTimeMillis;
    NSNumber *_totalTimeMillis;
    NSNumber *_reactionTimestamp;
    NSNumber *_shareTimestamp;
    NSNumber *_swipeUpTimestamp;
    NSNumber *_saveTimestamp;
    NSNumber *_screenshotTimestamp;
    NSNumber *_unlockType;
    NSString *_lensCreativeId;
    NSNumber *_firstFaceRenderTimestamp;
    NSNumber *_firstTriggerTimestamp;
    SOJUAdLensPerformanceMetrics *_lensPerformanceMetrics;
}

+ (id)withJUAdLensImpressionTrack:(id)arg1;
- (void).cxx_destruct;
- (id)build;
- (id)setAttachmentImpression:(id)arg1;
- (id)setAttachmentType:(id)arg1;
- (id)setAttachmentTypeEnum:(long long)arg1;
- (id)setCaptureTimeMillis:(id)arg1;
- (id)setCaptureTimeMillisValue:(long long)arg1;
- (id)setEncGeoData:(id)arg1;
- (id)setEncryptedSponsoredUnlockableTargetingInfoData:(id)arg1;
- (id)setFirstFaceRenderTimestamp:(id)arg1;
- (id)setFirstFaceRenderTimestampValue:(long long)arg1;
- (id)setFirstTriggerTimestamp:(id)arg1;
- (id)setFirstTriggerTimestampValue:(long long)arg1;
- (id)setIsAudioOn:(id)arg1;
- (id)setIsAudioOnValue:(_Bool)arg1;
- (id)setLensCreativeId:(id)arg1;
- (id)setLensId:(id)arg1;
- (id)setLensIndexPos:(id)arg1;
- (id)setLensIndexPosValue:(long long)arg1;
- (id)setLensOptionId:(id)arg1;
- (id)setLensPerformanceMetrics:(id)arg1;
- (id)setMaxContinuousTimeMillis:(id)arg1;
- (id)setMaxContinuousTimeMillisValue:(long long)arg1;
- (id)setMaxSwipeTimeMillis:(id)arg1;
- (id)setMaxSwipeTimeMillisValue:(long long)arg1;
- (id)setMemoriesSaveCount:(id)arg1;
- (id)setMemoriesSaveCountValue:(long long)arg1;
- (id)setPostCaptureTimeMillis:(id)arg1;
- (id)setPostCaptureTimeMillisValue:(long long)arg1;
- (id)setRankingData:(id)arg1;
- (id)setRankingId:(id)arg1;
- (id)setRawAdData:(id)arg1;
- (id)setReactionTimestamp:(id)arg1;
- (id)setReactionTimestampValue:(long long)arg1;
- (id)setSaveTimestamp:(id)arg1;
- (id)setSaveTimestampValue:(long long)arg1;
- (id)setScreenshotTimestamp:(id)arg1;
- (id)setScreenshotTimestampValue:(long long)arg1;
- (id)setShareTimestamp:(id)arg1;
- (id)setShareTimestampValue:(long long)arg1;
- (id)setSnapSendCount:(id)arg1;
- (id)setSnapSendCountValue:(long long)arg1;
- (id)setSnapSendRecipientCount:(id)arg1;
- (id)setSnapSendRecipientCountValue:(long long)arg1;
- (id)setStoryPostCount:(id)arg1;
- (id)setStoryPostCountValue:(long long)arg1;
- (id)setSwipeUpTimestamp:(id)arg1;
- (id)setSwipeUpTimestampValue:(long long)arg1;
- (id)setSwipedOverCount:(id)arg1;
- (id)setSwipedOverCountValue:(long long)arg1;
- (id)setTotalSwipedViewMillis:(id)arg1;
- (id)setTotalSwipedViewMillisValue:(long long)arg1;
- (id)setTotalTimeMillis:(id)arg1;
- (id)setTotalTimeMillisValue:(long long)arg1;
- (id)setUnlockType:(id)arg1;
- (id)setUnlockTypeEnum:(long long)arg1;
- (id)setUnlockTypeValue:(int)arg1;
- (id)setWithAttachmentOpen:(id)arg1;
- (id)setWithAttachmentOpenValue:(_Bool)arg1;
- (id)setWithMemoriesSave:(id)arg1;
- (id)setWithMemoriesSaveValue:(_Bool)arg1;
- (id)setWithSelfieCamera:(id)arg1;
- (id)setWithSelfieCameraValue:(_Bool)arg1;
- (id)setWithSnapSend:(id)arg1;
- (id)setWithSnapSendValue:(_Bool)arg1;
- (id)setWithStoryPost:(id)arg1;
- (id)setWithStoryPostValue:(_Bool)arg1;
- (id)setWithWorldCamera:(id)arg1;
- (id)setWithWorldCameraValue:(_Bool)arg1;

@end

