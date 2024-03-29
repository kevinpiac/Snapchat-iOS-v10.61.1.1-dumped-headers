//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, SCPreferences, SCQueuePerformer;

@interface SCCognacServiceCoordinatorPersistentStorage : NSObject
{
    SCPreferences *_preferences;
    SCQueuePerformer *_performer;
    NSMutableDictionary *_conversationLastInteractedDates;
}

- (void).cxx_destruct;
- (void)_loadConversationLastInteractedDatesFromPreferences;
- (void)_pruneConversationLastInteractedDates;
- (id)_recentInteractedConversationIds;
- (void)_saveConversationLastInteractedDatesToPreferences;
- (void)_updateLastInteractedDateWithConversationId:(id)arg1;
- (id)initWithPreferences:(id)arg1;
- (id)recentInteractedConversationIds;
- (void)updateLastInteractedDateWithConversationId:(id)arg1;

@end

