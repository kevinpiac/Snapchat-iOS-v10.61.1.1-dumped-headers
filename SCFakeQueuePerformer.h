//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCPerforming-Protocol.h"

@class NSMutableArray, NSString;

@interface SCFakeQueuePerformer : NSObject <SCPerforming>
{
    _Bool _performImmediately;
    NSMutableArray *_pendingBlocks;
}

- (void).cxx_destruct;
- (void)assertQueue;
- (id)init;
- (id)initWithPerformImmediately:(_Bool)arg1;
- (_Bool)isCurrentPerformer;
- (void)perform:(CDUnknownBlockType)arg1;
- (void)perform:(CDUnknownBlockType)arg1 after:(double)arg2;
- (void)performAndWait:(CDUnknownBlockType)arg1;
- (void)performImmediatelyIfCurrentPerformer:(CDUnknownBlockType)arg1;
- (void)performOnGroupNotification_DEPRECATED:(id)arg1 block:(CDUnknownBlockType)arg2;
- (void)performWithBarrier:(CDUnknownBlockType)arg1;
- (void)performWithQoS:(unsigned int)arg1 block:(CDUnknownBlockType)arg2;
- (id)queue;
- (void)runAllPendingBlocks;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

