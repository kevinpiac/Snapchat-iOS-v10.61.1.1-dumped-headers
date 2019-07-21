//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSMutableSet, NSString, SCSearchPlayerLoggingStatus;
@protocol SCSearchLoggingHelperDelegate;

@interface SCSearchGeneralLoggingHelper : NSObject
{
    NSMutableDictionary *_resultsOnScreenLogged;
    NSMutableDictionary *_resultsLogged;
    NSMutableSet *_queriesLogged;
    long long _queryId;
    NSMutableDictionary *_cacheKeyToCachedSessionId;
    NSMutableDictionary *_cacheKeyToCachedQueryId;
    NSMutableDictionary *_queryUUIDtoQueryId;
    NSMutableDictionary *_sectionToLatestQueryUUID;
    NSMutableDictionary *_queryUUIDtoResultsQueryUUID;
    NSMutableDictionary *_sectionToScrollValue;
    long long _queryIdForLastSectionToPlayDynamicStory;
    long long _scaledRandomNumber;
    SCSearchPlayerLoggingStatus *_playerStatus;
    NSString *_querySuggestText;
    long long _querySuggestionType;
    NSString *_experimentSettings;
    unsigned long long _numberOfSearchVCPresenting;
    id <SCSearchLoggingHelperDelegate> _delegate;
}

+ (id)_removeNullsFromDictionary:(id)arg1;
+ (id)queryIdentifierFromCurrentQuery:(id)arg1 resultsQuery:(id)arg2;
+ (id)queryIdentifierFromCurrentQueryUUID:(id)arg1 resultsQueryUUID:(id)arg2;
- (void).cxx_destruct;
- (long long)_actionFromActionIdentifier:(id)arg1;
- (_Bool)_actionIsOpenStory:(id)arg1;
- (void)_announceQueryForSession:(id)arg1 queryId:(long long)arg2 queryType:(long long)arg3 querySource:(long long)arg4 context:(id)arg5 entityId:(id)arg6 queryText:(id)arg7 queryResults:(id)arg8 isSuggestedQuery:(_Bool)arg9 resultsType:(long long)arg10 experimentSettings:(id)arg11 s2CellId:(unsigned long long)arg12 source:(long long)arg13;
- (id)_checkIsCachedResult:(id)arg1;
- (id)_loggingDictionaryKeysForQueryUUID:(id)arg1 sectionType:(id)arg2;
- (id)_populateAndUpdateQueryId:(id)arg1;
- (id)_searchResultIdentifierForSectionType:(id)arg1 identifier:(id)arg2 viewModel:(id)arg3 indexPath:(id)arg4;
- (id)_searchResultIdentifiersForViewModels:(id)arg1 identifier:(id)arg2 sectionType:(id)arg3;
- (id)_searchResultMatchingTypeForSectionType:(id)arg1 identifier:(id)arg2 viewModel:(id)arg3;
- (id)_searchResultRankingIdForIdentifier:(id)arg1 viewModel:(id)arg2 indexPath:(id)arg3;
- (id)_searchResultSuggestTypeIdentifier:(id)arg1 viewModel:(id)arg2;
- (long long)_searchResultsTypeFromExtraData:(id)arg1;
- (void)_updateActionMetadata:(id)arg1 sectionType:(id)arg2;
- (void)_updateDictionaryScrollValue:(id)arg1 withIdentifier:(id)arg2;
- (void)_updateDictionarySourceIfNecessary:(id)arg1;
@property(nonatomic) __weak id <SCSearchLoggingHelperDelegate> delegate; // @synthesize delegate=_delegate;
- (long long)getCurrentQueryId;
- (id)handleEventWithEventName:(id)arg1 identifier:(id)arg2 extraData:(id)arg3;
- (id)init;
- (void)resetAllData;
- (long long)scaledRandomNumberWithEvent:(id)arg1;

@end

