//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCSnapchattersDataRequestListener-Protocol.h"

@class NSString;

@interface SCSnapchattersDataRequestListenerAnnouncer : NSObject <SCSnapchattersDataRequestListener>
{
    struct mutex _mutex;
    struct shared_ptr<std::__1::vector<__weak id<SCSnapchattersDataRequestListener>, std::__1::allocator<__weak id<SCSnapchattersDataRequestListener>>>> _listeners;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (_Bool)addListener:(id)arg1;
@property(readonly, copy) NSString *description;
- (void)didEndSnapchattersContactDataRequest:(id)arg1 withResult:(id)arg2;
- (void)didEndSnapchattersFetchDataRequest:(id)arg1 withSuccess:(_Bool)arg2;
- (void)didEndSnapchattersSuggestDataRequest:(id)arg1 withSuccess:(_Bool)arg2;
- (void)didEndSnapchattersUpdateDataRequest:(id)arg1 withSuccess:(_Bool)arg2;
- (void)didStartSnapchattersContactDataRequest:(id)arg1;
- (void)didStartSnapchattersFetchDataRequest:(id)arg1;
- (void)didStartSnapchattersSuggestDataRequest:(id)arg1;
- (void)didStartSnapchattersUpdateDataRequest:(id)arg1;
- (void)removeListener:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

