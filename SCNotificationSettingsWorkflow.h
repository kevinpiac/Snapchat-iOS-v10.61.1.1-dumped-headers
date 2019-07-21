//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class SCDisposableObserverLifecycle, SCLazy, SCObservable;

@interface SCNotificationSettingsWorkflow : NSObject
{
    SCLazy *_lazyNotificationSettingsPresenter;
    SCDisposableObserverLifecycle *_notificationLifecycle;
    SCObservable *_notificationLifecycleEvents;
}

- (void).cxx_destruct;
- (void)_openSettingsForNotification:(id)arg1;
- (id)initWithNotificationSettingsPresenter:(id)arg1 notificationLifecycleEvents:(id)arg2;
- (void)startSubscribingToNotificationEvents;
- (void)stopSubscribingToNotificationEvents;

@end

