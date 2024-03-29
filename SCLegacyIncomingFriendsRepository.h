//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCIncomingFriendsRepository-Protocol.h"

@class SCBehaviorSubject, SCObservable, SCQueuePerformer;

@interface SCLegacyIncomingFriendsRepository : NSObject <SCIncomingFriendsRepository>
{
    CDUnknownBlockType _incomingFriendsProvider;
    CDUnknownBlockType _incomingFriendAdaptor;
    SCQueuePerformer *_performer;
    struct mutex _lock;
    SCBehaviorSubject *_unviewedIncomingFriends;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)_nextUnviewedIncomingFriends:(id)arg1;
- (void)_updateUnviewedIncomingFriends;
- (id)initWithIncomingFriendsProvider:(CDUnknownBlockType)arg1 incomingFriendAdaptor:(CDUnknownBlockType)arg2 notificationName:(id)arg3 notificationCenter:(id)arg4;
@property(readonly, nonatomic) SCObservable *unviewedIncomingFriends;

@end

