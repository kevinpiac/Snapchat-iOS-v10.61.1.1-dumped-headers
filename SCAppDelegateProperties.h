//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCAppDelegatePropertiesProtocol-Protocol.h"

@class SCAppNotification, SCAppStateTracker, SCBehaviorSubject, SCCapturerToken, SCFailedUserEventNotificationController, SCHockeyAppDelegate, SCInAppNotificationController, SCQueuePerformer, SCSnapchatScopeGraph, SCStartupCaptureHardwareWarmer, SCStructuredStartupLogger, SCUserNotificationCenterController, SCUserSession, UIWindow;

@interface SCAppDelegateProperties : NSObject <SCAppDelegatePropertiesProtocol>
{
    _Bool _didBecomeActiveWithRemoteNotification;
    _Bool _didLaunchWhenProtectedDataUnavailable;
    _Bool _didLaunchWithDidFinishLaunching;
    _Bool _didUserTriggerEmergencyMode;
    SCBehaviorSubject *_applicationLifecycleEvents;
    SCAppNotification *_appNotification;
    SCAppStateTracker *_appStateTracker;
    SCBehaviorSubject *_backgroundPrefetchHandler;
    SCStartupCaptureHardwareWarmer *_captureHardwareWarmer;
    SCCapturerToken *_capturerToken;
    SCFailedUserEventNotificationController *_failedUserEventNotificationController;
    SCHockeyAppDelegate *_hockeyAppDelegate;
    SCInAppNotificationController *_inAppNotificationController;
    SCAppNotification *_launchingNotification;
    SCBehaviorSubject *_notificationLifecycleEvents;
    SCQueuePerformer *_performer;
    SCAppNotification *_remoteNotificationFromLaunch;
    SCSnapchatScopeGraph *_scopeGraph;
    SCStructuredStartupLogger *_structuredStartupLogger;
    SCUserNotificationCenterController *_userNotificationCenterController;
    SCUserSession *_userSession;
    UIWindow *_window;
}

- (void).cxx_destruct;
@property(retain, nonatomic) SCAppNotification *appNotification; // @synthesize appNotification=_appNotification;
@property(retain, nonatomic) SCAppStateTracker *appStateTracker; // @synthesize appStateTracker=_appStateTracker;
@property(retain, nonatomic) SCBehaviorSubject *applicationLifecycleEvents; // @synthesize applicationLifecycleEvents=_applicationLifecycleEvents;
@property(retain, nonatomic) SCBehaviorSubject *backgroundPrefetchHandler; // @synthesize backgroundPrefetchHandler=_backgroundPrefetchHandler;
@property(readonly, nonatomic) SCStartupCaptureHardwareWarmer *captureHardwareWarmer; // @synthesize captureHardwareWarmer=_captureHardwareWarmer;
@property(retain, nonatomic) SCCapturerToken *capturerToken; // @synthesize capturerToken=_capturerToken;
@property(nonatomic) _Bool didBecomeActiveWithRemoteNotification; // @synthesize didBecomeActiveWithRemoteNotification=_didBecomeActiveWithRemoteNotification;
@property(nonatomic) _Bool didLaunchWhenProtectedDataUnavailable; // @synthesize didLaunchWhenProtectedDataUnavailable=_didLaunchWhenProtectedDataUnavailable;
@property(nonatomic) _Bool didLaunchWithDidFinishLaunching; // @synthesize didLaunchWithDidFinishLaunching=_didLaunchWithDidFinishLaunching;
@property(nonatomic) _Bool didUserTriggerEmergencyMode; // @synthesize didUserTriggerEmergencyMode=_didUserTriggerEmergencyMode;
@property(retain, nonatomic) SCFailedUserEventNotificationController *failedUserEventNotificationController; // @synthesize failedUserEventNotificationController=_failedUserEventNotificationController;
@property(retain, nonatomic) SCHockeyAppDelegate *hockeyAppDelegate; // @synthesize hockeyAppDelegate=_hockeyAppDelegate;
@property(retain, nonatomic) SCInAppNotificationController *inAppNotificationController; // @synthesize inAppNotificationController=_inAppNotificationController;
- (id)init;
@property(retain, nonatomic) SCAppNotification *launchingNotification; // @synthesize launchingNotification=_launchingNotification;
@property(retain, nonatomic) SCBehaviorSubject *notificationLifecycleEvents; // @synthesize notificationLifecycleEvents=_notificationLifecycleEvents;
@property(readonly, nonatomic) SCQueuePerformer *performer; // @synthesize performer=_performer;
@property(retain, nonatomic) SCAppNotification *remoteNotificationFromLaunch; // @synthesize remoteNotificationFromLaunch=_remoteNotificationFromLaunch;
@property(retain, nonatomic) SCSnapchatScopeGraph *scopeGraph; // @synthesize scopeGraph=_scopeGraph;
@property(retain, nonatomic) SCUserNotificationCenterController *userNotificationCenterController; // @synthesize userNotificationCenterController=_userNotificationCenterController;
@property(retain, nonatomic) SCUserSession *userSession; // @synthesize userSession=_userSession;
@property(retain, nonatomic) UIWindow *window; // @synthesize window=_window;
@property(readonly, nonatomic) SCStructuredStartupLogger *structuredStartupLogger; // @synthesize structuredStartupLogger=_structuredStartupLogger;

@end

