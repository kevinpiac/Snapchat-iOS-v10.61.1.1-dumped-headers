//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class GPBInt64ObjectDictionary, SCSUPEngagementStats;

@interface SCSUPPublisherEngagement : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) SCSUPEngagementStats *aggregatedExclusiveShowsStats; // @dynamic aggregatedExclusiveShowsStats;
@property(retain, nonatomic) SCSUPEngagementStats *aggregatedShowsStats; // @dynamic aggregatedShowsStats;
@property(nonatomic) _Bool hasAggregatedExclusiveShowsStats; // @dynamic hasAggregatedExclusiveShowsStats;
@property(nonatomic) _Bool hasAggregatedShowsStats; // @dynamic hasAggregatedShowsStats;
@property(retain, nonatomic) GPBInt64ObjectDictionary *publisherStats; // @dynamic publisherStats;
@property(readonly, nonatomic) unsigned long long publisherStats_Count; // @dynamic publisherStats_Count;
@property(retain, nonatomic) GPBInt64ObjectDictionary *windowedPublisherStats; // @dynamic windowedPublisherStats;
@property(readonly, nonatomic) unsigned long long windowedPublisherStats_Count; // @dynamic windowedPublisherStats_Count;

@end

