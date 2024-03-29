//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class SCDocObjectContext, SCLazy, SCPreferences, SCSnapchattersSuggestService, SCTimeProvider;
@protocol SCPerforming;

@interface SCSnapchattersSuggestRequestCoordinator : NSObject
{
    SCDocObjectContext *_docObjectContext;
    id <SCPerforming> _docObjectPerformer;
    id <SCPerforming> _servicePerformer;
    SCSnapchattersSuggestService *_suggestService;
    SCLazy *_suggestedSnapchatterSyncRepository;
    SCTimeProvider *_currentDateProvider;
    SCPreferences *_preferences;
}

- (void).cxx_destruct;
- (void)_fetchSuggestionWithSuggestRequest:(id)arg1 completionQueue:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)_hideAllSuggestionWithSuggestRequest:(id)arg1 completionQueue:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)_hideSuggestionWithSuggestRequest:(id)arg1 completionQueue:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)_processFetchSuggestionWithSuggestedFriendResponse:(id)arg1 serverSyncVersion:(id)arg2 error:(id)arg3 completionQueue:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)_processHideSuggestedSnapchatter:(id)arg1 error:(id)arg2 completionQueue:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)fetchSuggestionWithSuggestRequest:(id)arg1 completionQueue:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)hideAllSuggestionWithSuggestRequest:(id)arg1 completionQueue:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)hideSuggestionWithSuggestRequest:(id)arg1 completionQueue:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)initWithDocObjectContext:(id)arg1 docObjectPerformer:(id)arg2 servicePerformer:(id)arg3 suggestService:(id)arg4 suggestedSnapchatterSyncRepository:(id)arg5 currentDateProvider:(id)arg6 preferences:(id)arg7;

@end

