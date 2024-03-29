//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class AVAsset, NSArray;

@protocol SCMultiSnapV2PlayerHandler
- (AVAsset *)currentPlayingAVAsset;
- (void)resumeVideo;
- (void)seekToStartOfSnapAtIndex:(long long)arg1;
- (void)setSnapAtIndex:(long long)arg1 enabled:(_Bool)arg2;
- (void)stopPlayingAndSeekSmoothlyToSeconds:(double)arg1;
- (NSArray *)thumbnailFuturesForAVAsset:(AVAsset *)arg1 atTimes:(NSArray *)arg2;
- (void)updateMultiSnapTimeRanges:(NSArray *)arg1 includesDeletion:(_Bool)arg2;
@end

