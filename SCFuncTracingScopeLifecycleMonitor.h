//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCScopeLifecycleMonitor-Protocol.h"

@class NSCountedSet, NSMapTable;
@protocol SCScopeLifecycleFuncTracer;

@interface SCFuncTracingScopeLifecycleMonitor : NSObject <SCScopeLifecycleMonitor>
{
    id <SCScopeLifecycleFuncTracer> _funcTracer;
    unsigned int _baseUID;
    NSMapTable *_lifecycleToTraceEventUID;
    NSMapTable *_lifecycleToSubLifecycleUIDs;
    NSCountedSet *_inUseUIDS;
}

- (void).cxx_destruct;
- (id)_traceMessageForLifecycle:(id)arg1;
- (void)entryPoint:(id)arg1 beganInLifecycle:(id)arg2;
- (void)entryPoint:(id)arg1 beginningInLifecycle:(id)arg2;
- (void)entryPoint:(id)arg1 endedInLifecycle:(id)arg2;
- (void)entryPoint:(id)arg1 endingInLifecycle:(id)arg2;
- (id)initWithFuncTracer:(id)arg1 baseUID:(unsigned int)arg2;
- (void)lifecycleBegan:(id)arg1;
- (void)lifecycleBeginning:(id)arg1;
- (void)lifecycleEnded:(id)arg1;
- (void)lifecycleEnding:(id)arg1;
- (void)scope:(id)arg1 willBeExposedFromLifecycle:(id)arg2;
- (void)scope:(id)arg1 willBeRemovedFromLifecycle:(id)arg2;
- (void)services:(id)arg1 willBeExposedInLifecycle:(id)arg2;

@end

