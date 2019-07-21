//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class GPBBoolValue, GPBInt64Value, GPBStringValue, NSData, SCAdsUnlockableAttachmentImpression;

@interface SCAdsFilterImpressionTrack : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) SCAdsUnlockableAttachmentImpression *attachmentImpression; // @dynamic attachmentImpression;
@property(nonatomic) int attachmentType; // @dynamic attachmentType;
@property(retain, nonatomic) GPBInt64Value *captureTimeMillis; // @dynamic captureTimeMillis;
@property(copy, nonatomic) NSData *encGeoData; // @dynamic encGeoData;
@property(copy, nonatomic) NSData *encryptedAdTrackData; // @dynamic encryptedAdTrackData;
@property(copy, nonatomic) NSData *encryptedSponsoredUnlockableTargetingInfoData; // @dynamic encryptedSponsoredUnlockableTargetingInfoData;
@property(retain, nonatomic) GPBInt64Value *filterGeofilterIndexPos; // @dynamic filterGeofilterIndexPos;
@property(retain, nonatomic) GPBInt64Value *filterIndexPos; // @dynamic filterIndexPos;
@property(retain, nonatomic) GPBInt64Value *firstSeenTimestamp; // @dynamic firstSeenTimestamp;
@property(retain, nonatomic) GPBStringValue *geofilterId; // @dynamic geofilterId;
@property(nonatomic) int geofilterType; // @dynamic geofilterType;
@property(nonatomic) _Bool hasAttachmentImpression; // @dynamic hasAttachmentImpression;
@property(nonatomic) _Bool hasCaptureTimeMillis; // @dynamic hasCaptureTimeMillis;
@property(nonatomic) _Bool hasFilterGeofilterIndexPos; // @dynamic hasFilterGeofilterIndexPos;
@property(nonatomic) _Bool hasFilterIndexPos; // @dynamic hasFilterIndexPos;
@property(nonatomic) _Bool hasFirstSeenTimestamp; // @dynamic hasFirstSeenTimestamp;
@property(nonatomic) _Bool hasGeofilterId; // @dynamic hasGeofilterId;
@property(nonatomic) _Bool hasMaxContinuousTimeMillis; // @dynamic hasMaxContinuousTimeMillis;
@property(nonatomic) _Bool hasMaxSwipeTimeMillis; // @dynamic hasMaxSwipeTimeMillis;
@property(nonatomic) _Bool hasMemoriesSaveCount; // @dynamic hasMemoriesSaveCount;
@property(nonatomic) _Bool hasPostCaptureTimeMillis; // @dynamic hasPostCaptureTimeMillis;
@property(nonatomic) _Bool hasReactionTimestamp; // @dynamic hasReactionTimestamp;
@property(nonatomic) _Bool hasSaveTimestamp; // @dynamic hasSaveTimestamp;
@property(nonatomic) _Bool hasScreenshotTimestamp; // @dynamic hasScreenshotTimestamp;
@property(nonatomic) _Bool hasShareTimestamp; // @dynamic hasShareTimestamp;
@property(nonatomic) _Bool hasSnapSendCount; // @dynamic hasSnapSendCount;
@property(nonatomic) _Bool hasSnapSendRecipientCount; // @dynamic hasSnapSendRecipientCount;
@property(nonatomic) _Bool hasStoryPostCount; // @dynamic hasStoryPostCount;
@property(nonatomic) _Bool hasSwipeUpTimestamp; // @dynamic hasSwipeUpTimestamp;
@property(nonatomic) _Bool hasSwipedOverCount; // @dynamic hasSwipedOverCount;
@property(nonatomic) _Bool hasTotalSwipedViewMillis; // @dynamic hasTotalSwipedViewMillis;
@property(nonatomic) _Bool hasTotalTimeMillis; // @dynamic hasTotalTimeMillis;
@property(nonatomic) _Bool hasWithAttachmentOpen; // @dynamic hasWithAttachmentOpen;
@property(nonatomic) _Bool hasWithMemoriesSave; // @dynamic hasWithMemoriesSave;
@property(nonatomic) _Bool hasWithSnapSend; // @dynamic hasWithSnapSend;
@property(nonatomic) _Bool hasWithStoryPost; // @dynamic hasWithStoryPost;
@property(retain, nonatomic) GPBInt64Value *maxContinuousTimeMillis; // @dynamic maxContinuousTimeMillis;
@property(retain, nonatomic) GPBInt64Value *maxSwipeTimeMillis; // @dynamic maxSwipeTimeMillis;
@property(retain, nonatomic) GPBInt64Value *memoriesSaveCount; // @dynamic memoriesSaveCount;
@property(retain, nonatomic) GPBInt64Value *postCaptureTimeMillis; // @dynamic postCaptureTimeMillis;
@property(copy, nonatomic) NSData *rankingData; // @dynamic rankingData;
@property(copy, nonatomic) NSData *rankingId; // @dynamic rankingId;
@property(retain, nonatomic) GPBInt64Value *reactionTimestamp; // @dynamic reactionTimestamp;
@property(retain, nonatomic) GPBInt64Value *saveTimestamp; // @dynamic saveTimestamp;
@property(retain, nonatomic) GPBInt64Value *screenshotTimestamp; // @dynamic screenshotTimestamp;
@property(retain, nonatomic) GPBInt64Value *shareTimestamp; // @dynamic shareTimestamp;
@property(retain, nonatomic) GPBInt64Value *snapSendCount; // @dynamic snapSendCount;
@property(retain, nonatomic) GPBInt64Value *snapSendRecipientCount; // @dynamic snapSendRecipientCount;
@property(retain, nonatomic) GPBInt64Value *storyPostCount; // @dynamic storyPostCount;
@property(retain, nonatomic) GPBInt64Value *swipeUpTimestamp; // @dynamic swipeUpTimestamp;
@property(retain, nonatomic) GPBInt64Value *swipedOverCount; // @dynamic swipedOverCount;
@property(retain, nonatomic) GPBInt64Value *totalSwipedViewMillis; // @dynamic totalSwipedViewMillis;
@property(retain, nonatomic) GPBInt64Value *totalTimeMillis; // @dynamic totalTimeMillis;
@property(retain, nonatomic) GPBBoolValue *withAttachmentOpen; // @dynamic withAttachmentOpen;
@property(retain, nonatomic) GPBBoolValue *withMemoriesSave; // @dynamic withMemoriesSave;
@property(retain, nonatomic) GPBBoolValue *withSnapSend; // @dynamic withSnapSend;
@property(retain, nonatomic) GPBBoolValue *withStoryPost; // @dynamic withStoryPost;

@end

