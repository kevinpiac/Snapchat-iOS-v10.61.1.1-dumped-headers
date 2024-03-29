//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCAppNotificationProviderDelegate-Protocol.h"
#import "SCTPhoneCallListener-Protocol.h"

@class NSDate, NSMutableArray, NSString, NSTimer, SCAppNotification, SCUserSession;
@protocol SCAppNotificationSequencerDelegate, SCInAppNotificationDisplayProtocol;

@interface SCAppNotificationSequencer : NSObject <SCAppNotificationProviderDelegate, SCTPhoneCallListener>
{
    NSTimer *_requeryPolicyTimer;
    NSTimer *_currentNotificationTimer;
    NSDate *_currentNotificationExpectedEndTime;
    NSMutableArray *_highPriorityNotifications;
    NSMutableArray *_notifications;
    double _pausedNotificationTimeRemaining;
    SCAppNotification *_pausedNotification;
    SCAppNotification *_activeNotification;
    id <SCAppNotificationSequencerDelegate> _delegate;
    id <SCInAppNotificationDisplayProtocol> _displayProtocol;
    SCUserSession *_userSession;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) SCAppNotification *activeNotification; // @synthesize activeNotification=_activeNotification;
- (_Bool)canDisplayNotification:(id)arg1;
- (void)clearAllNotifications;
@property(readonly, nonatomic) __weak id <SCAppNotificationSequencerDelegate> delegate; // @synthesize delegate=_delegate;
- (id)dequeueNextNotification;
- (void)didApplicationStateChange:(_Bool)arg1 withCurrentNotifications:(id)arg2;
- (void)displayNextNotification;
- (void)displayNotification:(id)arg1;
- (void)displayNotification:(id)arg1 forInterval:(double)arg2;
@property(nonatomic) __weak id <SCInAppNotificationDisplayProtocol> displayProtocol; // @synthesize displayProtocol=_displayProtocol;
- (void)enqueueNotification:(id)arg1;
- (void)expireActiveNotification:(id)arg1;
- (void)hideNotification:(id)arg1;
- (id)initWithDelegate:(id)arg1;
- (void)onPhoneActivityChanged:(_Bool)arg1;
- (void)pauseTimer;
- (void)requeryPolicy:(id)arg1;
- (void)resumeTimer;
@property(retain, nonatomic) SCUserSession *userSession; // @synthesize userSession=_userSession;
- (void)suppressActiveNotification;
- (void)updateActiveNotificationProperty:(id)arg1 withInterruption:(_Bool)arg2;
- (void)verifyWhetherAnyPendingNotificationsShouldBeRevoked;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

