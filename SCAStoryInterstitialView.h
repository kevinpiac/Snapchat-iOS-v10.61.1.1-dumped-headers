//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCAUserTrackedEvent.h"

@class NSNumber, NSString;

@interface SCAStoryInterstitialView : SCAUserTrackedEvent
{
    NSNumber *viewTimeSec;
    NSNumber *absoluteStoryIndex;
    NSNumber *relativeStoryIndex;
    long long entryEvent;
    long long exitEvent;
    long long type;
    long long source;
    long long storyType;
    long long storyTypeSpecific;
    long long viewSource;
    NSString *posterId;
    NSString *rankingModelId;
    NSString *rankingId;
    NSString *serverRankingId;
    NSString *editionId;
    NSString *ghost_poster_id;
}

- (void).cxx_destruct;
- (id)asDictionary;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (long long)getAbsoluteStoryIndex;
- (id)getEditionId;
- (long long)getEntryEvent;
- (id)getEventName;
- (long long)getEventQoS;
- (long long)getExitEvent;
- (id)getGhost_poster_id;
- (double)getPerUserSamplingRate;
- (id)getPosterId;
- (id)getRankingId;
- (id)getRankingModelId;
- (long long)getRelativeStoryIndex;
- (id)getServerRankingId;
- (long long)getSource;
- (long long)getStoryType;
- (long long)getStoryTypeSpecific;
- (long long)getType;
- (long long)getViewSource;
- (double)getViewTimeSec;
- (id)init;
- (void)setAbsoluteStoryIndex:(long long)arg1;
- (void)setEditionId:(id)arg1;
- (void)setEntryEvent:(long long)arg1;
- (void)setExitEvent:(long long)arg1;
- (void)setGhost_poster_id:(id)arg1;
- (void)setPosterId:(id)arg1;
- (void)setRankingId:(id)arg1;
- (void)setRankingModelId:(id)arg1;
- (void)setRelativeStoryIndex:(long long)arg1;
- (void)setServerRankingId:(id)arg1;
- (void)setSource:(long long)arg1;
- (void)setStoryType:(long long)arg1;
- (void)setStoryTypeSpecific:(long long)arg1;
- (void)setType:(long long)arg1;
- (void)setViewSource:(long long)arg1;
- (void)setViewTimeSec:(double)arg1;

@end

