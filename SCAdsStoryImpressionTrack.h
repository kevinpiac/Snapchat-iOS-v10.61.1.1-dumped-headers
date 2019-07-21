//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class GPBBoolValue, GPBFloatValue, GPBInt32Value, NSData, NSMutableArray, SCAdsTileImpressionTrack;

@interface SCAdsStoryImpressionTrack : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(copy, nonatomic) NSData *creativeId; // @dynamic creativeId;
@property(nonatomic) int exitEvent; // @dynamic exitEvent;
@property(nonatomic) _Bool hasIsAudioOn; // @dynamic hasIsAudioOn;
@property(nonatomic) _Bool hasMediaDurationSeconds; // @dynamic hasMediaDurationSeconds;
@property(nonatomic) _Bool hasSnapCount; // @dynamic hasSnapCount;
@property(nonatomic) _Bool hasTileImpression; // @dynamic hasTileImpression;
@property(nonatomic) _Bool hasTimeViewedSeconds; // @dynamic hasTimeViewedSeconds;
@property(nonatomic) _Bool hasTotalSwipeUps; // @dynamic hasTotalSwipeUps;
@property(nonatomic) _Bool hasUniqueSwipeUps; // @dynamic hasUniqueSwipeUps;
@property(nonatomic) _Bool hasViewedSnapIndex; // @dynamic hasViewedSnapIndex;
@property(retain, nonatomic) GPBBoolValue *isAudioOn; // @dynamic isAudioOn;
@property(retain, nonatomic) GPBFloatValue *mediaDurationSeconds; // @dynamic mediaDurationSeconds;
@property(retain, nonatomic) GPBInt32Value *snapCount; // @dynamic snapCount;
@property(retain, nonatomic) NSMutableArray *snapImpressionsArray; // @dynamic snapImpressionsArray;
@property(readonly, nonatomic) unsigned long long snapImpressionsArray_Count; // @dynamic snapImpressionsArray_Count;
@property(retain, nonatomic) SCAdsTileImpressionTrack *tileImpression; // @dynamic tileImpression;
@property(retain, nonatomic) GPBFloatValue *timeViewedSeconds; // @dynamic timeViewedSeconds;
@property(retain, nonatomic) GPBInt32Value *totalSwipeUps; // @dynamic totalSwipeUps;
@property(retain, nonatomic) GPBInt32Value *uniqueSwipeUps; // @dynamic uniqueSwipeUps;
@property(retain, nonatomic) GPBInt32Value *viewedSnapIndex; // @dynamic viewedSnapIndex;

@end

