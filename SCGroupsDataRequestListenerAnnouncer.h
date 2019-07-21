//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCGroupsDataRequestListener-Protocol.h"

@interface SCGroupsDataRequestListenerAnnouncer : NSObject <SCGroupsDataRequestListener>
{
    struct mutex _mutex;
    struct shared_ptr<std::__1::vector<__weak id<SCGroupsDataRequestListener>, std::__1::allocator<__weak id<SCGroupsDataRequestListener>>>> _listeners;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (_Bool)addListener:(id)arg1;
- (id)description;
- (void)didUpdateGroupsDataRequest:(long long)arg1 groupId:(id)arg2;
- (void)removeListener:(id)arg1;

@end
