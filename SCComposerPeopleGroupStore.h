//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCCGroupStoring-Protocol.h"

@class NSString, SCLazy, SCQueuePerformer;

@interface SCComposerPeopleGroupStore : NSObject <SCCGroupStoring>
{
    SCLazy *_groupsDataFetcher;
    SCLazy *_groupsDataTracker;
    SCQueuePerformer *_performer;
}

- (void).cxx_destruct;
- (void)getGroupsWithCompletion:(CDUnknownBlockType)arg1;
- (id)initWithGroupDataFetcher:(id)arg1 groupDataTracker:(id)arg2;
- (CDUnknownBlockType)onGroupsUpdatedWithCallback:(CDUnknownBlockType)arg1;
- (id)toJavaScript;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

