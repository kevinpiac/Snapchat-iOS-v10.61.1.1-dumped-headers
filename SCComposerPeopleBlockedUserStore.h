//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCCBlockedUserStoring-Protocol.h"

@class NSString, SCLazy;

@interface SCComposerPeopleBlockedUserStore : NSObject <SCCBlockedUserStoring>
{
    SCLazy *_blockedSnapchatterFetcher;
    SCLazy *_snapchattersDataTracker;
}

- (void).cxx_destruct;
- (void)getBlockedUsersWithCompletion:(CDUnknownBlockType)arg1;
- (id)initWithBlockedSnapchatterFetcher:(id)arg1 snapchattersDataTracker:(id)arg2;
- (CDUnknownBlockType)onBlockedUsersUpdatedWithCallback:(CDUnknownBlockType)arg1;
- (id)toJavaScript;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
