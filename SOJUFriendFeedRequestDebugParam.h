//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SOJUFriendFeedRequestDebugParam-Protocol.h"

@class NSArray, NSNumber, NSString;

@interface SOJUFriendFeedRequestDebugParam : NSObject <SOJUFriendFeedRequestDebugParam>
{
    NSNumber *_isDebugRequest;
    NSNumber *_disableFriendsSignalMemcache;
    NSNumber *_disableStoriesAdapter;
    NSNumber *_disableFriendsSignalAdapter;
    NSNumber *_disableConversationsAdapter;
    NSNumber *_disableConversationsMultiGetAdapter;
    NSArray *_trackItems;
    NSNumber *_isReplayRequest;
    NSNumber *_numRecentConversationsToFetch;
    NSNumber *_numStoriesToSelectFromRanking;
    NSNumber *_numFriendsToSelectFromRanking;
    NSString *_conversationsScoringModelToUse;
    NSString *_storiesScoringModelToUse;
    NSString *_friendsScoringModelToUse;
    NSNumber *_shouldReturnAllSignals;
    NSNumber *_disableConversationsPreFetchAdapter;
    NSString *_studyIdToUse;
    NSNumber *_shouldReturnDebugInfoHtml;
    NSNumber *_shouldReturnStoryScores;
}

+ (_Bool)canInitFromProto;
+ (unsigned long long *)fasterCodingKeys;
+ (unsigned long long)fasterCodingVersion;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *conversationsScoringModelToUse; // @synthesize conversationsScoringModelToUse=_conversationsScoringModelToUse;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)decodeWithFasterDecoder:(id)arg1;
@property(readonly, copy) NSString *description;
@property(readonly, copy, nonatomic) NSNumber *disableConversationsAdapter; // @synthesize disableConversationsAdapter=_disableConversationsAdapter;
- (_Bool)disableConversationsAdapterValue;
@property(readonly, copy, nonatomic) NSNumber *disableConversationsMultiGetAdapter; // @synthesize disableConversationsMultiGetAdapter=_disableConversationsMultiGetAdapter;
- (_Bool)disableConversationsMultiGetAdapterValue;
@property(readonly, copy, nonatomic) NSNumber *disableConversationsPreFetchAdapter; // @synthesize disableConversationsPreFetchAdapter=_disableConversationsPreFetchAdapter;
- (_Bool)disableConversationsPreFetchAdapterValue;
@property(readonly, copy, nonatomic) NSNumber *disableFriendsSignalAdapter; // @synthesize disableFriendsSignalAdapter=_disableFriendsSignalAdapter;
- (_Bool)disableFriendsSignalAdapterValue;
@property(readonly, copy, nonatomic) NSNumber *disableFriendsSignalMemcache; // @synthesize disableFriendsSignalMemcache=_disableFriendsSignalMemcache;
- (_Bool)disableFriendsSignalMemcacheValue;
@property(readonly, copy, nonatomic) NSNumber *disableStoriesAdapter; // @synthesize disableStoriesAdapter=_disableStoriesAdapter;
- (_Bool)disableStoriesAdapterValue;
- (void)encodeWithCoder:(id)arg1;
- (void)encodeWithFasterCoder:(id)arg1;
@property(readonly, copy, nonatomic) NSString *friendsScoringModelToUse; // @synthesize friendsScoringModelToUse=_friendsScoringModelToUse;
@property(readonly) unsigned long long hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithIsDebugRequest:(id)arg1 disableFriendsSignalMemcache:(id)arg2 disableStoriesAdapter:(id)arg3 disableFriendsSignalAdapter:(id)arg4 disableConversationsAdapter:(id)arg5 disableConversationsMultiGetAdapter:(id)arg6 trackItems:(id)arg7 isReplayRequest:(id)arg8 numRecentConversationsToFetch:(id)arg9 numStoriesToSelectFromRanking:(id)arg10 numFriendsToSelectFromRanking:(id)arg11 conversationsScoringModelToUse:(id)arg12 storiesScoringModelToUse:(id)arg13 friendsScoringModelToUse:(id)arg14 shouldReturnAllSignals:(id)arg15 disableConversationsPreFetchAdapter:(id)arg16 studyIdToUse:(id)arg17 shouldReturnDebugInfoHtml:(id)arg18 shouldReturnStoryScores:(id)arg19;
- (id)initWithJSONDictionary:(id)arg1;
@property(readonly, copy, nonatomic) NSNumber *isDebugRequest; // @synthesize isDebugRequest=_isDebugRequest;
- (_Bool)isDebugRequestValue;
- (_Bool)isEqual:(id)arg1;
@property(readonly, copy, nonatomic) NSNumber *isReplayRequest; // @synthesize isReplayRequest=_isReplayRequest;
- (_Bool)isReplayRequestValue;
@property(readonly, copy, nonatomic) NSNumber *numFriendsToSelectFromRanking; // @synthesize numFriendsToSelectFromRanking=_numFriendsToSelectFromRanking;
- (int)numFriendsToSelectFromRankingValue;
@property(readonly, copy, nonatomic) NSNumber *numRecentConversationsToFetch; // @synthesize numRecentConversationsToFetch=_numRecentConversationsToFetch;
- (int)numRecentConversationsToFetchValue;
@property(readonly, copy, nonatomic) NSNumber *numStoriesToSelectFromRanking; // @synthesize numStoriesToSelectFromRanking=_numStoriesToSelectFromRanking;
- (int)numStoriesToSelectFromRankingValue;
- (_Bool)preferFasterCoding;
- (void)setObject:(id)arg1 forUInt64Key:(unsigned long long)arg2;
@property(readonly, copy, nonatomic) NSNumber *shouldReturnAllSignals; // @synthesize shouldReturnAllSignals=_shouldReturnAllSignals;
- (_Bool)shouldReturnAllSignalsValue;
@property(readonly, copy, nonatomic) NSNumber *shouldReturnDebugInfoHtml; // @synthesize shouldReturnDebugInfoHtml=_shouldReturnDebugInfoHtml;
- (_Bool)shouldReturnDebugInfoHtmlValue;
@property(readonly, copy, nonatomic) NSNumber *shouldReturnStoryScores; // @synthesize shouldReturnStoryScores=_shouldReturnStoryScores;
- (_Bool)shouldReturnStoryScoresValue;
@property(readonly, copy, nonatomic) NSString *storiesScoringModelToUse; // @synthesize storiesScoringModelToUse=_storiesScoringModelToUse;
@property(readonly, copy, nonatomic) NSString *studyIdToUse; // @synthesize studyIdToUse=_studyIdToUse;
- (id)toDictionary;
- (id)toJson;
@property(readonly, copy, nonatomic) NSArray *trackItems; // @synthesize trackItems=_trackItems;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end
