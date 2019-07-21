//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSNotificationCenter, SCCapturerTokenProvider, SCObservable, UIApplication, UIWindow;

@interface SCSystemScope : NSObject
{
    UIApplication *_application;
    NSNotificationCenter *_notificationCenter;
    UIWindow *_window;
    SCObservable *_applicationLifecycleEvents;
    SCObservable *_notificationLifecycleEvents;
    SCObservable *_backgroundPrefetchHandler;
    SCCapturerTokenProvider *_capturerTokenProvider;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) UIApplication *application; // @synthesize application=_application;
@property(readonly, nonatomic) SCObservable *applicationLifecycleEvents; // @synthesize applicationLifecycleEvents=_applicationLifecycleEvents;
@property(readonly, nonatomic) SCObservable *backgroundPrefetchHandler; // @synthesize backgroundPrefetchHandler=_backgroundPrefetchHandler;
@property(readonly, nonatomic) SCCapturerTokenProvider *capturerTokenProvider; // @synthesize capturerTokenProvider=_capturerTokenProvider;
- (id)initWithApplication:(id)arg1 applicationLifecycleEvents:(id)arg2 notificationLifecycleEvents:(id)arg3 backgroundPrefetchHandler:(id)arg4 notificationCenter:(id)arg5 capturerTokenProvider:(id)arg6 window:(id)arg7;
- (id)legacyUserLifecycle;
@property(readonly, nonatomic) NSNotificationCenter *notificationCenter; // @synthesize notificationCenter=_notificationCenter;
@property(readonly, nonatomic) SCObservable *notificationLifecycleEvents; // @synthesize notificationLifecycleEvents=_notificationLifecycleEvents;
- (void)setLegacyUserLifecycle:(id)arg1;
@property(readonly, nonatomic) UIWindow *window; // @synthesize window=_window;

@end

