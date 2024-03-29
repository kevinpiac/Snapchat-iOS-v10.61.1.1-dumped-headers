//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCTraceEnabled-Protocol.h"

@class NSOperationQueue, NSString, SCDisposableObserver, SCDisposableObserverLifecycle, SCLazy, SCObservable, SCTimeProvider;

@interface SCMemoryBackgroundReporter : NSObject <SCTraceEnabled>
{
    SCLazy *_grapheneLogger;
    SCLazy *_blizzardLogger;
    SCDisposableObserverLifecycle *_observerLifecycle;
    SCObservable *_appLifecycleEventObservable;
    SCObservable *_memoryUsageSnapshotObservable;
    SCDisposableObserver *_memoryUsageSnapshotObserver;
    SCTimeProvider *_timeProvider;
    NSOperationQueue *_memoryBackgroundReportQueue;
    double _appForegroundEpochSeconds;
}

- (void).cxx_destruct;
- (void)_didEnterBackground;
- (void)_logMemoryUsage:(id)arg1 timeBucket:(long long)arg2;
- (void)_reportBlizzardAppMemoryUsage:(id)arg1 timeBucket:(long long)arg2;
- (void)_reportHistogramForMetricID:(id)arg1 value:(unsigned long long)arg2 timeBucket:(long long)arg3;
- (void)_willEnterForeground;
- (void)beginSubscription;
- (id)initWithGrapheneLogger:(id)arg1 blizzardLogger:(id)arg2 appLifecycleEvent:(id)arg3 memoryUsageSnapshot:(id)arg4 timeProvider:(id)arg5 reportQueue:(id)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

