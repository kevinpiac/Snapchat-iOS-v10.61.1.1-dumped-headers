//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCUpdateAnnouncing-Protocol.h"

@class NSArray, NSString, SCQueuePerformer, SCUpdateListenerAnnouncer;

@interface SCSettingsOptInEntityDataStore : NSObject <SCUpdateAnnouncing>
{
    NSArray *_entities;
    SCUpdateListenerAnnouncer *_updateAnnouncer;
    SCQueuePerformer *_entitiesPerformer;
    NSString *_queryText;
}

+ (id)announcerIdentifier;
- (void).cxx_destruct;
- (void)_announceDataStoreUpdate;
- (void)_dispatchAnnounceDataStoreUpdate;
- (id)_entities;
- (id)_entitiesForQuery:(id)arg1;
- (id)_optedInEntities;
- (id)_pendingEntities;
- (void)_saveEntities:(id)arg1;
- (void)_updateEntity:(id)arg1 toOptInState:(unsigned long long)arg2;
- (void)addUpdateListener:(id)arg1;
- (id)allEntities;
- (id)allEntitiesForQuery:(id)arg1;
- (id)init;
- (id)optedInEntities;
- (id)pendingEntities;
@property(retain, nonatomic) NSString *queryText; // @synthesize queryText=_queryText;
- (void)removeUpdateListener:(id)arg1;
- (void)saveEntities:(id)arg1;
- (void)updateEntity:(id)arg1 toOptInState:(unsigned long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

