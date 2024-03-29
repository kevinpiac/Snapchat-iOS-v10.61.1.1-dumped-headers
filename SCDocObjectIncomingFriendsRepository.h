//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCIncomingFriendsRepository-Protocol.h"

@class NSOperationQueue, SCDocObjectContext, SCLazy, SCObservable, SCQueuePerformer, SCSnapchattersFetchedResultObserverRepository;

@interface SCDocObjectIncomingFriendsRepository : NSObject <SCIncomingFriendsRepository>
{
    SCDocObjectContext *_docObjectContext;
    SCSnapchattersFetchedResultObserverRepository *_snapchattersFetchedResultObserverRepository;
    SCQueuePerformer *_performer;
    NSOperationQueue *_operationQueue;
    SCObservable *_incomingFriendsLastViewedTimestamp;
    SCObservable *_incomingSnapchattersObservable;
    SCLazy *_userInfoRepository;
}

- (void).cxx_destruct;
- (void)_fetchAndObserveIncomingSnapchatters;
- (id)initWithDocObjectContext:(id)arg1 snapchattersFetchedResultObserverRepository:(id)arg2 incomingFriendsLastViewedTimestamp:(id)arg3 userInfoRepository:(id)arg4;
@property(readonly, nonatomic) SCObservable *unviewedIncomingFriends;

@end

