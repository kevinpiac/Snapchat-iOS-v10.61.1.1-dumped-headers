//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSObject, UIEvent;
@protocol OS_dispatch_queue, SCIdleMonitorScrollController;

@protocol SCAppLifeCycleManager <NSObject>
- (void)markEndOfBackgroundLaunch:(_Bool)arg1;
- (void)markForegroundLaunchStarted;
- (void)markMainViewControllerLoaded:(id <SCIdleMonitorScrollController>)arg1;
- (void)markStartCompleteWithCompletionHandler:(void (^)(void))arg1;
- (void)receiveTouchEvent:(UIEvent *)arg1;
- (void)unmarkStartComplete;
- (void)waitUntilIdleForTag:(const char *)arg1 callbackQueue:(NSObject<OS_dispatch_queue> *)arg2 block:(void (^)(void))arg3;
- (void)waitUntilStartCompleteButBlockSwipeForTag:(const char *)arg1 callbackQueue:(NSObject<OS_dispatch_queue> *)arg2 block:(void (^)(void))arg3;
- (void)waitUntilStartCompleteForTag:(const char *)arg1 callbackQueue:(NSObject<OS_dispatch_queue> *)arg2 block:(void (^)(void))arg3;
- (void)waitUntilStartCompleteForTag:(const char *)arg1 highPriority:(_Bool)arg2 callbackQueue:(NSObject<OS_dispatch_queue> *)arg3 block:(void (^)(void))arg4;
- (void)waitUntilStartCompleteOrBackgroundLaunchIdleForTag:(const char *)arg1 callbackQueue:(NSObject<OS_dispatch_queue> *)arg2 block:(void (^)(void))arg3;
@end

