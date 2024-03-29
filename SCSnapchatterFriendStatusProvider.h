//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCSnapchattersDataRequestListener-Protocol.h"
#import "SCUpdateAnnouncing-Protocol.h"

@class NSDictionary, NSString, SCLazy, SCQueuePerformer, SCUpdateListenerAnnouncer;

@interface SCSnapchatterFriendStatusProvider : NSObject <SCSnapchattersDataRequestListener, SCUpdateAnnouncing>
{
    SCUpdateListenerAnnouncer *_updateAnnouncer;
    SCQueuePerformer *_dataModelUpdatePerformer;
    SCLazy *_snapchattersDataProvider;
    SCLazy *_snapchattersDataTracker;
    NSDictionary *_snapchatterIdToAddFriendStatus;
    NSString *_usernameToTrack;
    long long _addFriendStatusForUsername;
}

+ (id)announcerIdentifier;
- (void).cxx_destruct;
- (long long)_addFriendStatusBasedOnSnapchatter:(id)arg1;
- (void)_dispatchAddFriendStatusUpdate;
- (_Bool)_isAcceptingFriendRequestRelatedStatus:(long long)arg1;
- (void)_updateAddFriendStatus:(long long)arg1 forSnapchatterId:(id)arg2;
- (void)_updateAddFriendStatusBasedOnAction:(long long)arg1 forSnapchatterId:(id)arg2;
- (void)_updateAddFriendStatusToNonBlockedStateIfNecessaryForSnapchatterId:(id)arg1;
- (void)_updateAddFriendStatusToPostAcceptedStateAfterDelayForSnapchatterId:(id)arg1;
- (void)_updateAddFriendStatusToPostAcceptedStateIfNecessaryForSnapchatterId:(id)arg1;
- (void)_updateAddFriendStatusToPostAddedStateAfterDelayForSnapchatterId:(id)arg1;
- (void)_updateAddFriendStatusToPostAddedStateIfNecessaryForSnapchatterId:(id)arg1;
- (void)_updateAddFriendStatusToPostUnblockedStateAfterDelayForSnapchatterId:(id)arg1;
- (void)addSnapchattersToTrack:(id)arg1;
- (void)addUpdateListener:(id)arg1;
- (void)didEndSnapchattersUpdateDataRequest:(id)arg1 withSuccess:(_Bool)arg2;
- (void)didStartSnapchattersUpdateDataRequest:(id)arg1;
- (id)initWithSnapchattersDataFetcher:(id)arg1 snapchattersDataTracker:(id)arg2;
- (void)removeAllTrackedSnapchatters;
- (void)removeUpdateListener:(id)arg1;
- (id)snapchatterIdToFriendStatus;
- (long long)statusForSnapchatterId:(id)arg1;
- (long long)statusForSnapchatterUsername:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

