//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCDataCoordinating-Protocol.h"
#import "SCFriendEventListener-Protocol.h"
#import "SCSnapchattersDataTracking-Protocol.h"

@class NSSet, NSString, SCDataCoordinatorListenerAnnouncer, SCQueuePerformer, SCSnapchattersDataRequestListenerAnnouncer;
@protocol SCLegacyFriendsTracker;

@interface SCLegacySnapchattersDataTracker : NSObject <SCFriendEventListener, SCSnapchattersDataTracking, SCDataCoordinating>
{
    id <SCLegacyFriendsTracker> _friendsTracker;
    SCSnapchattersDataRequestListenerAnnouncer *_announcer;
    SCDataCoordinatorListenerAnnouncer *_dataCoordinatorAnnouncer;
    SCQueuePerformer *_performer;
    NSSet *_inProcessingSnapchatterIds;
    struct mutex _inProcessingSnapchatterIdsLock;
}

+ (id)dataCoordinatorIdentifier;
- (id).cxx_construct;
- (void).cxx_destruct;
- (id)_fakeContactDataRequest;
- (void)_fetchContactsDidFail;
- (void)_fetchContactsDidReturnNoContact;
- (void)_fetchContactsDidSuccess:(id)arg1;
- (void)_updateInProcessingSnapchatterUserIds;
- (void)addDataUpdateListener:(id)arg1;
- (void)addListener:(id)arg1;
- (void)didEndSnapchattersFetchDataRequest:(id)arg1 withSuccess:(_Bool)arg2;
- (void)didEndSnapchattersSuggestDataRequest:(id)arg1 withSuccess:(_Bool)arg2;
- (void)didEndSnapchattersUpdateDataRequest:(id)arg1 withSuccess:(_Bool)arg2;
- (void)didStartSnapchattersFetchDataRequest:(id)arg1;
- (void)didStartSnapchattersSuggestDataRequest:(id)arg1;
- (void)didStartSnapchattersUpdateDataRequest:(id)arg1;
- (void)handleDataRequest:(id)arg1;
- (id)inProcessingSnapchatterIds;
- (id)initWithFriendsTracker:(id)arg1;
- (void)removeDataUpdateListener:(id)arg1;
- (void)removeListener:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

