//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSNotificationCenter, NSOperationQueue, NSUserDefaults;

@interface SCAppStateTracker : NSObject
{
    NSUserDefaults *_userDefaults;
    NSOperationQueue *_mainQueue;
    long long _previousSessionApplicationState;
    NSNotificationCenter *_notificationCenter;
}

- (void).cxx_destruct;
- (long long)_appStateFromSerializedString:(id)arg1;
- (void)_applicationEnteredBackground;
- (void)_applicationEnteredForeground;
- (id)_serializedAppState:(long long)arg1;
@property(nonatomic) long long applicationState;
- (void)dealloc;
- (id)initWithDefaults;
- (id)initWithUserDefaults:(id)arg1 mainQueue:(id)arg2 notificationCenter:(id)arg3;
@property(nonatomic) __weak NSOperationQueue *mainQueue; // @synthesize mainQueue=_mainQueue;
@property(nonatomic) __weak NSNotificationCenter *notificationCenter; // @synthesize notificationCenter=_notificationCenter;
@property(nonatomic) long long previousSessionApplicationState; // @synthesize previousSessionApplicationState=_previousSessionApplicationState;
- (void)setPreviousSessionAppState:(long long)arg1;
@property(retain, nonatomic) NSUserDefaults *userDefaults; // @synthesize userDefaults=_userDefaults;
- (void)startTrackingApplication:(id)arg1;

@end

