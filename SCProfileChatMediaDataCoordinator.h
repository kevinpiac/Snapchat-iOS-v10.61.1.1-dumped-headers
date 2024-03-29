//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCUpdateAnnouncing-Protocol.h"

@class NSArray, NSDictionary, NSNumber, NSString, SCProfileChatMediaDataStore, SCProfileChatMediaSavedMessagesFetcher, SCQueuePerformer, SCUpdateListenerAnnouncer, SCUserSession;

@interface SCProfileChatMediaDataCoordinator : NSObject <SCUpdateAnnouncing>
{
    SCUserSession *_userSession;
    NSString *_ownerId;
    NSString *_conversationId;
    long long _conversationType;
    NSNumber *_messageRetentionInMinutes;
    SCProfileChatMediaDataStore *_chatMediaDataStore;
    SCProfileChatMediaSavedMessagesFetcher *_messagesFetcher;
    SCUpdateListenerAnnouncer *_updateAnnouncer;
    SCQueuePerformer *_performer;
    _Bool _hasMoreChatMedia;
    NSDictionary *_paginationSeqNum;
    NSString *_checksum;
    _Bool _isFetching;
    _Bool _hasRefreshedFirstPage;
    NSArray *_chatMedia;
    NSDictionary *_mediaIdToChatMedia;
    NSDictionary *_generalMediaIdToChatMedia;
}

+ (id)announcerIdentifier;
- (void).cxx_destruct;
- (void)_announceUpdate;
- (void)_appendChatMedia:(id)arg1;
- (void)_deleteMedia:(id)arg1;
- (void)_fetchFromDataStoreAndRefreshFromRemote;
- (void)_fetchMoreFromRemote;
- (void)_rebuildChatMediaIndex;
- (void)_replaceChatMedia:(id)arg1;
- (void)_saveMedia:(id)arg1;
- (_Bool)_setFetchingIfNotFetching;
- (void)_setNotFetching;
- (void)_unsaveMedia:(id)arg1;
- (void)addUpdateListener:(id)arg1;
- (id)chatMedia;
- (id)chatMediaForGeneralMediaId:(id)arg1;
- (id)chatMediaForId:(id)arg1;
- (void)deleteMedia:(id)arg1;
- (void)fetchMoreChatMedia;
- (_Bool)hasMoreChatMedia;
- (id)initWithUserSession:(id)arg1 ownerId:(id)arg2 conversationId:(id)arg3 conversationType:(long long)arg4 messageRetentionInMinutes:(id)arg5 chatMediaDataStore:(id)arg6;
- (_Bool)isFetchingMedia;
- (void)removeUpdateListener:(id)arg1;
- (void)saveMedia:(id)arg1;
- (void)unsaveMedia:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

