//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCAdDataSource.h"

@class NSString;

@interface SCCognacAdDataSource : SCAdDataSource
{
    NSString *_gameId;
    NSString *_slotId;
    NSString *_buildId;
    NSString *_requestId;
    NSString *_sessionId;
}

- (void).cxx_destruct;
- (unsigned long long)adProductType;
- (id)adSkipEvent;
- (id)adViewContextForGroup:(id)arg1;
- (id)extraPagePropertiesForDataModel:(id)arg1;
- (_Bool)isAdContentLoopingForDataModel:(id)arg1;
- (void)logAndTrackNoFill;
- (void)makeAdRequestWithAdRequestCompletionBlock:(CDUnknownBlockType)arg1 adMediaLoadCompletionBlock:(CDUnknownBlockType)arg2;
- (id)mediaLoadContexts;
- (_Bool)shouldCachePendingAdAfterTearDown;
- (_Bool)shouldInsertPlaylistItem;
- (_Bool)shouldInsertPlaylistItemGroup;
- (id)targetingParameters;
- (void)updateTrackInfoWithGameId:(id)arg1 buildId:(id)arg2 slotId:(id)arg3 requestId:(id)arg4 sessionId:(id)arg5;

@end

