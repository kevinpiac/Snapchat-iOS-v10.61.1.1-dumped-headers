//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCGroupsStorage-Protocol.h"

@class NSDictionary, NSString, SCQueuePerformer;

@interface SCArroyoGroupsStorage : NSObject <SCGroupsStorage>
{
    NSDictionary *_inMemoryGroupStorage;
    SCQueuePerformer *_performer;
}

- (void).cxx_destruct;
- (id)allGroups;
- (id)groupById:(id)arg1;
- (id)init;
- (void)putGroup:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)putGroups:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)removeGroupById:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

