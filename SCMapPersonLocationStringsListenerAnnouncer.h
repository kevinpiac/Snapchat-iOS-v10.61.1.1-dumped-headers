//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCMapPersonLocationStringsListener-Protocol.h"

@class NSString;

@interface SCMapPersonLocationStringsListenerAnnouncer : NSObject <SCMapPersonLocationStringsListener>
{
    struct mutex _mutex;
    struct shared_ptr<std::__1::vector<__weak id<SCMapPersonLocationStringsListener>, std::__1::allocator<__weak id<SCMapPersonLocationStringsListener>>>> _listeners;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (_Bool)addListener:(id)arg1;
@property(readonly, copy) NSString *description;
- (void)personLocationStringsProviderDidUpdate:(id)arg1;
- (void)removeListener:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

