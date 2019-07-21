//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCManagedVideoDataSourceListener-Protocol.h"

@class NSString;

@interface SCManagedVideoDataSourceListenerAnnouncer : NSObject <SCManagedVideoDataSourceListener>
{
    struct mutex _mutex;
    struct shared_ptr<std::__1::vector<__weak id<SCManagedVideoDataSourceListener>, std::__1::allocator<__weak id<SCManagedVideoDataSourceListener>>>> _listeners;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (_Bool)addListener:(id)arg1;
@property(readonly, copy) NSString *description;
- (void)managedVideoDataSource:(id)arg1 didDropSampleBufferWithTimeStamp:(double)arg2 reason:(id)arg3 devicePosition:(unsigned long long)arg4;
- (void)managedVideoDataSource:(id)arg1 didOutputSampleBuffer:(struct opaqueCMSampleBuffer *)arg2 devicePosition:(unsigned long long)arg3;
- (void)removeListener:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

