//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCMapViewportListener-Protocol.h"

@class NSString;

@interface SCMapViewportListenerAnnouncer : NSObject <SCMapViewportListener>
{
    struct mutex _mutex;
    struct shared_ptr<std::__1::vector<__weak id<SCMapViewportListener>, std::__1::allocator<__weak id<SCMapViewportListener>>>> _listeners;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (_Bool)addListener:(id)arg1;
@property(readonly, copy) NSString *description;
- (void)mapViewport:(id)arg1 regionDidChangeAnimated:(_Bool)arg2;
- (void)mapViewport:(id)arg1 regionWillChangeAnimated:(_Bool)arg2;
- (void)mapViewportDidChangeFollowingUserLocation:(id)arg1 animated:(_Bool)arg2;
- (void)mapViewportDidChangeTarget:(id)arg1;
- (void)mapViewportIsChanging:(id)arg1;
- (void)removeListener:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

