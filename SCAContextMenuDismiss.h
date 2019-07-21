//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCAContextMenuBase.h"

@class NSNumber, NSString;

@interface SCAContextMenuDismiss : SCAContextMenuBase
{
    NSNumber *viewTimeSec;
    NSNumber *cardLoadCount;
    NSNumber *tapCount;
    NSNumber *venueDistanceMeter;
    NSNumber *hasAttachment;
    NSNumber *scrollDistanceSeenPixel;
    NSNumber *scrollDistanceAvailablePixel;
    NSNumber *cardRequestOverallLatencyMs;
    NSNumber *cardRequestServerLatencyMs;
    NSNumber *cardRequestQueueWaitMs;
    NSNumber *cardRequestTransmitLatencyMs;
    NSNumber *textSentCount;
    NSNumber *snapSentCount;
    NSNumber *stickerSentCount;
    NSNumber *videoCallCount;
    NSNumber *audioCallCount;
    NSNumber *videoNoteSendCount;
    NSNumber *audioNoteSendCount;
    long long enterType;
    long long exitType;
    NSString *cardsAvailableIds;
    NSString *cardsSeenIds;
}

- (void).cxx_destruct;
- (id)asDictionary;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (long long)getAudioCallCount;
- (long long)getAudioNoteSendCount;
- (long long)getCardLoadCount;
- (long long)getCardRequestOverallLatencyMs;
- (long long)getCardRequestQueueWaitMs;
- (long long)getCardRequestServerLatencyMs;
- (long long)getCardRequestTransmitLatencyMs;
- (id)getCardsAvailableIds;
- (id)getCardsSeenIds;
- (long long)getEnterType;
- (id)getEventName;
- (long long)getEventQoS;
- (long long)getExitType;
- (_Bool)getHasAttachment;
- (double)getPerUserSamplingRate;
- (long long)getScrollDistanceAvailablePixel;
- (long long)getScrollDistanceSeenPixel;
- (long long)getSnapSentCount;
- (long long)getStickerSentCount;
- (long long)getTapCount;
- (long long)getTextSentCount;
- (long long)getVenueDistanceMeter;
- (long long)getVideoCallCount;
- (long long)getVideoNoteSendCount;
- (double)getViewTimeSec;
- (id)init;
- (void)setAudioCallCount:(long long)arg1;
- (void)setAudioNoteSendCount:(long long)arg1;
- (void)setCardLoadCount:(long long)arg1;
- (void)setCardRequestOverallLatencyMs:(long long)arg1;
- (void)setCardRequestQueueWaitMs:(long long)arg1;
- (void)setCardRequestServerLatencyMs:(long long)arg1;
- (void)setCardRequestTransmitLatencyMs:(long long)arg1;
- (void)setCardsAvailableIds:(id)arg1;
- (void)setCardsSeenIds:(id)arg1;
- (void)setEnterType:(long long)arg1;
- (void)setExitType:(long long)arg1;
- (void)setHasAttachment:(_Bool)arg1;
- (void)setScrollDistanceAvailablePixel:(long long)arg1;
- (void)setScrollDistanceSeenPixel:(long long)arg1;
- (void)setSnapSentCount:(long long)arg1;
- (void)setStickerSentCount:(long long)arg1;
- (void)setTapCount:(long long)arg1;
- (void)setTextSentCount:(long long)arg1;
- (void)setVenueDistanceMeter:(long long)arg1;
- (void)setVideoCallCount:(long long)arg1;
- (void)setVideoNoteSendCount:(long long)arg1;
- (void)setViewTimeSec:(double)arg1;

@end

