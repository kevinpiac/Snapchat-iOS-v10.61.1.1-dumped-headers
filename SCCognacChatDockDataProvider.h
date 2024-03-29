//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCCognacDataStorageUpdateListener-Protocol.h"
#import "SCTCognacPresenceListener-Protocol.h"

@class NSDictionary, NSString, SCCognacChatDockEntryInfo, SCCognacDataStorage, SCCognacServiceCoordinator, SCCognacSnapchatterService, SCQueuePerformer, SCUpdateListenerAnnouncer;
@protocol SCTCognacController;

@interface SCCognacChatDockDataProvider : NSObject <SCTCognacPresenceListener, SCCognacDataStorageUpdateListener>
{
    SCCognacDataStorage *_dataStorage;
    SCCognacServiceCoordinator *_serviceCoordinator;
    SCQueuePerformer *_performer;
    NSString *_conversationId;
    id <SCTCognacController> _talkController;
    SCCognacSnapchatterService *_snapchatterService;
    NSString *_currentUsername;
    _Bool _activated;
    SCCognacChatDockEntryInfo *_activeEntry;
    SCUpdateListenerAnnouncer *_updateAnnouncer;
    NSDictionary *_appInstanceIdToParticipants;
}

+ (id)announcerIdentifier;
- (void).cxx_destruct;
- (void)_buildChatDockEntry;
- (void)_buildChatDockEntryInfoWithConversationId:(id)arg1 appInstanceDataModel:(id)arg2 participants:(id)arg3 snapchatters:(id)arg4 colors:(id)arg5 triggerType:(unsigned long long)arg6;
- (void)_buildChatDockEntryInfoWithConversationId:(id)arg1 appInstanceDataModel:(id)arg2 triggerType:(unsigned long long)arg3;
- (void)_buildChatDockEntryInfoWithConversationId:(id)arg1 triggerType:(unsigned long long)arg2;
- (void)_buildChatDockEntryWithAppInstanceArrayResult:(id)arg1;
- (void)_buildChatDockEntryWithAppInstanceResult:(id)arg1;
- (void)_clearChatDockEntryWithCompletion:(CDUnknownBlockType)arg1;
- (void)_fetchChatDockEntryWithConversationId:(id)arg1;
@property _Bool activated; // @synthesize activated=_activated;
@property(copy) SCCognacChatDockEntryInfo *activeEntry; // @synthesize activeEntry=_activeEntry;
@property(copy) NSDictionary *appInstanceIdToParticipants; // @synthesize appInstanceIdToParticipants=_appInstanceIdToParticipants;
- (void)clear;
- (void)cognacDataStorageDidUpdateWithResult:(id)arg1;
- (id)initWithDataStorage:(id)arg1 serviceCoordinator:(id)arg2 snapchatterService:(id)arg3 currentUsername:(id)arg4;
- (void)onPresenceUpdate;
- (void)setChatDockActivated:(_Bool)arg1;
@property(readonly, nonatomic) SCUpdateListenerAnnouncer *updateAnnouncer; // @synthesize updateAnnouncer=_updateAnnouncer;
- (void)updateConversationId:(id)arg1 talkController:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

