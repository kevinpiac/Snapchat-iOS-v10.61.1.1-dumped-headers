//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCCachingMediaRequest-Protocol.h"
#import "SCProgressReporting-Protocol.h"

@class NSString, SCCachingMediaRequestGroup, SCSentinel;
@protocol OS_dispatch_queue, SCProgressReceiving;

@interface SCCachingMediaRequest : NSObject <SCCachingMediaRequest, SCProgressReporting>
{
    CDUnknownBlockType _resultHandler;
    NSObject<OS_dispatch_queue> *_queue;
    unsigned long long _deliveryMode;
    SCSentinel *_sentinel;
    CDUnknownBlockType _cacheMisshandler;
    id <SCProgressReceiving> _progressReceiver;
    SCCachingMediaRequestGroup *_requestGroup;
}

- (void).cxx_destruct;
- (void)cancel;
- (id)initWithDeliveryMode:(unsigned long long)arg1 queue:(id)arg2 cacheMissHandler:(CDUnknownBlockType)arg3 resultHandler:(CDUnknownBlockType)arg4;
@property(readonly, nonatomic) _Bool isCancelled;
- (void)perform:(id)arg1 fromCache:(_Bool)arg2 sourceLevel:(long long)arg3 final:(_Bool)arg4;
- (void)performCacheMiss;
@property(nonatomic) __weak id <SCProgressReceiving> progressReceiver; // @synthesize progressReceiver=_progressReceiver;
@property(nonatomic) __weak SCCachingMediaRequestGroup *requestGroup; // @synthesize requestGroup=_requestGroup;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

