//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCLensDataProviderListener-Protocol.h"

@class NSString;

@interface SCLensDataProviderListenerAnnouncer : NSObject <SCLensDataProviderListener>
{
    struct mutex _mutex;
    struct shared_ptr<std::__1::vector<__weak id<SCLensDataProviderListener>, std::__1::allocator<__weak id<SCLensDataProviderListener>>>> _listeners;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (_Bool)addListener:(id)arg1;
@property(readonly, copy) NSString *description;
- (void)lensDataProvider:(id)arg1 didUpdateAllLenses:(id)arg2 requiresAnimation:(_Bool)arg3;
- (void)lensDataProvider:(id)arg1 didUpdateLens:(id)arg2 contentUpdateType:(long long)arg3;
- (void)removeListener:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

