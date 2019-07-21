//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class SCQueuePerformer;
@protocol OS_dispatch_source;

@interface SCContextStateHandler : NSObject
{
    long long _pendingState;
    long long _currentState;
    long long _previousState;
    CDUnknownFunctionPointerType _logViewerDisplayFunction;
    long long _logViewerTypeID;
    SCQueuePerformer *_performer;
    NSObject<OS_dispatch_source> *_timer;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (id)_contextStatesDict;
- (void)_handleStateTransitionFrom:(long long)arg1 to:(long long)arg2;
- (void)_resetTimer;
- (void)_startTimer;
- (void)_transitToPendingState;
- (void)_transitionToContextState:(long long)arg1;
- (long long)currentContextState;
- (id)init;
- (long long)previousContextState;
- (void)setLogViewerDisplayFunction:(CDUnknownFunctionPointerType)arg1;
- (void)transitionToContextState:(long long)arg1;

@end

