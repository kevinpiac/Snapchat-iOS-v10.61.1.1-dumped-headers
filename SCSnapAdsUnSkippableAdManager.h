//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSMutableSet;

@interface SCSnapAdsUnSkippableAdManager : NSObject
{
    NSMutableSet *_skippableAdRequestIds;
    NSMutableDictionary *_adRequestClientIdToMediaInfoMap;
    NSMutableDictionary *_imageKeyToAdRequestClientIdMap;
    NSMutableSet *_adRequestClientIdsForAdsStartedAsUnSkippable;
}

+ (id)shared;
- (void).cxx_destruct;
- (double)_accumulatedLongformTimeViewedForAdRequestClientId:(id)arg1;
- (id)_updateImageKey:(id)arg1 withMediaStartTime:(double)arg2;
- (void)clear;
- (void)didCloseViewForAdRequestClientId:(id)arg1 itemId:(id)arg2 context:(id)arg3 params:(id)arg4 lastInteraction:(id)arg5 playlistItemController:(id)arg6 mediaManager:(id)arg7 experimentManager:(id)arg8;
- (void)didFullyViewedForAdRequestClientId:(id)arg1 itemId:(id)arg2 playlistItemController:(id)arg3;
- (void)didStartViewForAdRequestClientId:(id)arg1 isUnSkippableAd:(_Bool)arg2;
- (void)didViewAdRequestClientId:(id)arg1 itemId:(id)arg2 longformTimeViewedInSec:(double)arg3 playlistItemController:(id)arg4;
- (id)extraPagePropertiesForAdRequestClientId:(id)arg1 experimentManager:(id)arg2;
- (void)imageForImageKey:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)imageKeyForAd:(id)arg1;
- (id)init;
- (_Bool)isUnSkippableAd:(id)arg1;
- (_Bool)isUnSkippableAdWhenStartViewing:(id)arg1;
- (void)markFullViewForAd:(id)arg1;
- (double)mediaStartTimeForAd:(id)arg1;
- (void)trackUnSkippableAdIfNecessary:(id)arg1;
- (void)updateMediaStartTimeSec:(double)arg1 videoUrl:(id)arg2 imageKey:(id)arg3 isStreamingMedia:(_Bool)arg4 forAd:(id)arg5;
- (_Bool)useGeneratedImageForImageKey:(id)arg1;

@end

