//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCCFriendsFeedStatusHandling-Protocol.h"

@class NSString, SCLazy, SCQueuePerformer;
@protocol SCComposerFriendsFeedCurrentUserInfoProviding;

@interface SCComposerFriendsFeedStatusHandler : NSObject <SCCFriendsFeedStatusHandling>
{
    CDUnknownBlockType _matcher;
    SCLazy *_friendsFeedDataCoordinator;
    id <SCComposerFriendsFeedCurrentUserInfoProviding> _currentUserInfoProvider;
    SCQueuePerformer *_performer;
}

- (void).cxx_destruct;
- (void)fetchWithCallback:(CDUnknownBlockType)arg1;
- (id)initWithMatcher:(CDUnknownBlockType)arg1 friendsFeedDataCoordinator:(id)arg2 currentUserInfoProvider:(id)arg3;
- (CDUnknownBlockType)subscribeWithCallback:(CDUnknownBlockType)arg1;
- (id)toJavaScript;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

