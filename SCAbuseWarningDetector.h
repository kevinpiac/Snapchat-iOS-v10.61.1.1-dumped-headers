//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class SCDisposableObserverLifecycle, SCObservable;
@protocol SCActiveUserSessionWorkflowDelegate;

@interface SCAbuseWarningDetector : NSObject
{
    SCObservable *_allUpdates;
    id <SCActiveUserSessionWorkflowDelegate> _delegate;
    SCDisposableObserverLifecycle *_observerLifecycle;
}

- (void).cxx_destruct;
- (void)_checkAllUpdatesForAbuseWarning:(id)arg1;
- (id)initWithAllUpdates:(id)arg1 delegate:(id)arg2;
- (void)startDetectingAbuseWarnings;

@end

