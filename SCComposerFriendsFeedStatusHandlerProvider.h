//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCCFriendsFeedStatusHandlerProviding-Protocol.h"

@class NSString, SCLazy, SCQueuePerformer;
@protocol SCComposerFriendsFeedCurrentUserInfoProviding;

@interface SCComposerFriendsFeedStatusHandlerProvider : NSObject <SCCFriendsFeedStatusHandlerProviding>
{
    SCLazy *_friendsFeedDataCoordinator;
    id <SCComposerFriendsFeedCurrentUserInfoProviding> _currentUserInfoProvider;
    SCLazy *_defaultFeedStatus;
    SCQueuePerformer *_performer;
}

- (void).cxx_destruct;
- (id)getDefaultFeedStatus;
- (void)getHandlerForGroupsWithIds:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (void)getHandlerForUsersWithIds:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (id)initWithFriendsFeedDataCoordinator:(id)arg1 currentUserInfoProvider:(id)arg2;
- (id)toJavaScript;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

