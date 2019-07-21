//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class StreamRankingExperimentalFeatures;

@interface StreamRankingScores : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) float combinedScore; // @dynamic combinedScore;
@property(nonatomic) float engagementScore; // @dynamic engagementScore;
@property(retain, nonatomic) StreamRankingExperimentalFeatures *experimentalRankingFeatures; // @dynamic experimentalRankingFeatures;
@property(nonatomic) float freshnessScore; // @dynamic freshnessScore;
@property(nonatomic) _Bool hasExperimentalRankingFeatures; // @dynamic hasExperimentalRankingFeatures;
@property(nonatomic) float qualityScore; // @dynamic qualityScore;
@property(nonatomic) float reachScore; // @dynamic reachScore;
@property(nonatomic) float volumeScore; // @dynamic volumeScore;

@end

