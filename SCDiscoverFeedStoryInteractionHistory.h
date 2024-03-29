//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"

@class NSString, SCDiscoverFeedInteractionEventBooleanType, SCDiscoverFeedInteractionEventFloatType, SCDiscoverFeedInteractionEventIntegerType;

@interface SCDiscoverFeedStoryInteractionHistory : NSObject <NSCopying, NSCoding>
{
    unsigned int _storyDurationSec;
    unsigned int _entryEvent;
    unsigned int _exitEvent;
    unsigned int _longImpressionCount;
    unsigned int _qualifiedLongImpressionCount;
    unsigned int _numSnapsViewedFromLatestVersion;
    unsigned int _totalWatchTimeOnLatestVersion;
    unsigned int _totalImpressionTimeOnLatestVersion;
    unsigned int _totalQualifiedImpressionTimeOnLatestVersion;
    unsigned int _numSnapsInLatestVersion;
    unsigned long long _storyDedupeFp;
    SCDiscoverFeedInteractionEventBooleanType *_isSubscribed;
    SCDiscoverFeedInteractionEventBooleanType *_isHidden;
    SCDiscoverFeedInteractionEventFloatType *_shortImpressionScore;
    SCDiscoverFeedInteractionEventFloatType *_longImpressionScore;
    SCDiscoverFeedInteractionEventFloatType *_qualifiedLongImpressionScore;
    SCDiscoverFeedInteractionEventFloatType *_shortViewScore;
    SCDiscoverFeedInteractionEventFloatType *_longViewScore;
    NSString *_longImpressionThumbnailId;
    NSString *_longViewThumbnailId;
    unsigned long long _latestVersion;
    unsigned long long _latestWatchedVersion;
    unsigned long long _tapStoryKey;
    SCDiscoverFeedInteractionEventIntegerType *_numberOfWatches;
    SCDiscoverFeedInteractionEventIntegerType *_snapCompletionPercent;
    SCDiscoverFeedInteractionEventFloatType *_decayedNumSnapsViewed;
    SCDiscoverFeedInteractionEventFloatType *_decayedTotalWatchTime;
    SCDiscoverFeedInteractionEventFloatType *_decayedTotalImpressionTime;
    SCDiscoverFeedInteractionEventFloatType *_decayedTotalQualifiedImpressionTime;
    long long _storyType;
}

- (void).cxx_destruct;
- (long long)_compareInteractionHistoryByLongImpression:(id)arg1;
- (long long)_compareInteractionHistoryByNumberOfWatches:(id)arg1;
- (long long)compareWithInteractionHistory:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, copy, nonatomic) SCDiscoverFeedInteractionEventFloatType *decayedNumSnapsViewed; // @synthesize decayedNumSnapsViewed=_decayedNumSnapsViewed;
@property(readonly, copy, nonatomic) SCDiscoverFeedInteractionEventFloatType *decayedTotalImpressionTime; // @synthesize decayedTotalImpressionTime=_decayedTotalImpressionTime;
@property(readonly, copy, nonatomic) SCDiscoverFeedInteractionEventFloatType *decayedTotalQualifiedImpressionTime; // @synthesize decayedTotalQualifiedImpressionTime=_decayedTotalQualifiedImpressionTime;
@property(readonly, copy, nonatomic) SCDiscoverFeedInteractionEventFloatType *decayedTotalWatchTime; // @synthesize decayedTotalWatchTime=_decayedTotalWatchTime;
- (void)encodeWithCoder:(id)arg1;
@property(readonly, nonatomic) unsigned int entryEvent; // @synthesize entryEvent=_entryEvent;
@property(readonly, nonatomic) unsigned int exitEvent; // @synthesize exitEvent=_exitEvent;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithStoryDedupeFp:(unsigned long long)arg1 isSubscribed:(id)arg2 isHidden:(id)arg3 shortImpressionScore:(id)arg4 longImpressionScore:(id)arg5 qualifiedLongImpressionScore:(id)arg6 shortViewScore:(id)arg7 longViewScore:(id)arg8 longImpressionThumbnailId:(id)arg9 longViewThumbnailId:(id)arg10 latestVersion:(unsigned long long)arg11 latestWatchedVersion:(unsigned long long)arg12 tapStoryKey:(unsigned long long)arg13 numberOfWatches:(id)arg14 snapCompletionPercent:(id)arg15 storyDurationSec:(unsigned int)arg16 entryEvent:(unsigned int)arg17 exitEvent:(unsigned int)arg18 longImpressionCount:(unsigned int)arg19 qualifiedLongImpressionCount:(unsigned int)arg20 numSnapsViewedFromLatestVersion:(unsigned int)arg21 totalWatchTimeOnLatestVersion:(unsigned int)arg22 totalImpressionTimeOnLatestVersion:(unsigned int)arg23 totalQualifiedImpressionTimeOnLatestVersion:(unsigned int)arg24 numSnapsInLatestVersion:(unsigned int)arg25 decayedNumSnapsViewed:(id)arg26 decayedTotalWatchTime:(id)arg27 decayedTotalImpressionTime:(id)arg28 decayedTotalQualifiedImpressionTime:(id)arg29 storyType:(long long)arg30;
- (_Bool)isEqual:(id)arg1;
@property(readonly, copy, nonatomic) SCDiscoverFeedInteractionEventBooleanType *isHidden; // @synthesize isHidden=_isHidden;
@property(readonly, copy, nonatomic) SCDiscoverFeedInteractionEventBooleanType *isSubscribed; // @synthesize isSubscribed=_isSubscribed;
@property(readonly, nonatomic) unsigned long long latestVersion; // @synthesize latestVersion=_latestVersion;
@property(readonly, nonatomic) unsigned long long latestWatchedVersion; // @synthesize latestWatchedVersion=_latestWatchedVersion;
@property(readonly, nonatomic) unsigned int longImpressionCount; // @synthesize longImpressionCount=_longImpressionCount;
@property(readonly, copy, nonatomic) SCDiscoverFeedInteractionEventFloatType *longImpressionScore; // @synthesize longImpressionScore=_longImpressionScore;
@property(readonly, copy, nonatomic) NSString *longImpressionThumbnailId; // @synthesize longImpressionThumbnailId=_longImpressionThumbnailId;
@property(readonly, copy, nonatomic) SCDiscoverFeedInteractionEventFloatType *longViewScore; // @synthesize longViewScore=_longViewScore;
@property(readonly, copy, nonatomic) NSString *longViewThumbnailId; // @synthesize longViewThumbnailId=_longViewThumbnailId;
@property(readonly, nonatomic) unsigned int numSnapsInLatestVersion; // @synthesize numSnapsInLatestVersion=_numSnapsInLatestVersion;
@property(readonly, nonatomic) unsigned int numSnapsViewedFromLatestVersion; // @synthesize numSnapsViewedFromLatestVersion=_numSnapsViewedFromLatestVersion;
@property(readonly, copy, nonatomic) SCDiscoverFeedInteractionEventIntegerType *numberOfWatches; // @synthesize numberOfWatches=_numberOfWatches;
@property(readonly, nonatomic) unsigned int qualifiedLongImpressionCount; // @synthesize qualifiedLongImpressionCount=_qualifiedLongImpressionCount;
@property(readonly, copy, nonatomic) SCDiscoverFeedInteractionEventFloatType *qualifiedLongImpressionScore; // @synthesize qualifiedLongImpressionScore=_qualifiedLongImpressionScore;
@property(readonly, copy, nonatomic) SCDiscoverFeedInteractionEventFloatType *shortImpressionScore; // @synthesize shortImpressionScore=_shortImpressionScore;
@property(readonly, copy, nonatomic) SCDiscoverFeedInteractionEventFloatType *shortViewScore; // @synthesize shortViewScore=_shortViewScore;
@property(readonly, copy, nonatomic) SCDiscoverFeedInteractionEventIntegerType *snapCompletionPercent; // @synthesize snapCompletionPercent=_snapCompletionPercent;
@property(readonly, nonatomic) unsigned long long storyDedupeFp; // @synthesize storyDedupeFp=_storyDedupeFp;
@property(readonly, nonatomic) unsigned int storyDurationSec; // @synthesize storyDurationSec=_storyDurationSec;
@property(readonly, nonatomic) long long storyType; // @synthesize storyType=_storyType;
@property(readonly, nonatomic) unsigned long long tapStoryKey; // @synthesize tapStoryKey=_tapStoryKey;
@property(readonly, nonatomic) unsigned int totalImpressionTimeOnLatestVersion; // @synthesize totalImpressionTimeOnLatestVersion=_totalImpressionTimeOnLatestVersion;
@property(readonly, nonatomic) unsigned int totalQualifiedImpressionTimeOnLatestVersion; // @synthesize totalQualifiedImpressionTimeOnLatestVersion=_totalQualifiedImpressionTimeOnLatestVersion;
@property(readonly, nonatomic) unsigned int totalWatchTimeOnLatestVersion; // @synthesize totalWatchTimeOnLatestVersion=_totalWatchTimeOnLatestVersion;
- (_Bool)wasFullyViewedRecently;

@end

