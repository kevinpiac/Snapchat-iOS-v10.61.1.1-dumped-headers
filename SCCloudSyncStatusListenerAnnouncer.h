//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCCloudSyncStatusListener-Protocol.h"

@class NSString;

@interface SCCloudSyncStatusListenerAnnouncer : NSObject <SCCloudSyncStatusListener>
{
    struct mutex _mutex;
    struct shared_ptr<std::__1::vector<__weak id<SCCloudSyncStatusListener>, std::__1::allocator<__weak id<SCCloudSyncStatusListener>>>> _listeners;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (_Bool)addListener:(id)arg1;
- (void)cloudSync:(id)arg1 didChangeEntrySyncStatus:(unsigned long long)arg2 entryId:(id)arg3 snapId:(id)arg4;
- (void)cloudSync:(id)arg1 didChangeProgress:(float)arg2;
- (void)cloudSync:(id)arg1 didChangeStatus:(unsigned long long)arg2 isBackingUpNow:(_Bool)arg3 mayUpload:(_Bool)arg4 requiresUpgrade:(_Bool)arg5;
@property(readonly, copy) NSString *description;
- (void)removeListener:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

