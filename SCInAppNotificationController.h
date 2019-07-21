//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCAppNotificationSequencerDelegate-Protocol.h"
#import "SCInAppNotificationViewV2Delegate-Protocol.h"

@class NSMutableDictionary, NSString, SCAppNotification, SCAppNotificationSequencer, SCInAppNotificationViewV2;
@protocol SCInAppNotificationDisplayProtocol, SCInAppNotificationPressedDelegate;

@interface SCInAppNotificationController : NSObject <SCAppNotificationSequencerDelegate, SCInAppNotificationViewV2Delegate>
{
    SCInAppNotificationViewV2 *_view;
    id <SCInAppNotificationDisplayProtocol> _vcForPolicy;
    _Bool _didPauseMediaForVC;
    SCAppNotification *_currentNotification;
    NSMutableDictionary *_notificationWaitPeriods;
    SCAppNotificationSequencer *_inAppNotificationPresenter;
    id <SCInAppNotificationPressedDelegate> _delegate;
}

- (void).cxx_destruct;
- (void)applicationDidBackground:(id)arg1;
@property(readonly, nonatomic) __weak id <SCInAppNotificationPressedDelegate> delegate; // @synthesize delegate=_delegate;
- (void)didChangeDisplayProtocol:(id)arg1;
- (void)didPauseTimer;
- (void)didResumeTimer;
- (void)ensureView;
- (void)handleCurrentNotificationDidChange:(id)arg1 didInterrupt:(_Bool)arg2;
- (void)handleNotificationPressed:(id)arg1 withAction:(id)arg2;
- (void)handleQueuedNotificationRevoked:(id)arg1;
@property(readonly, nonatomic) SCAppNotificationSequencer *inAppNotificationPresenter; // @synthesize inAppNotificationPresenter=_inAppNotificationPresenter;
- (id)initWithDelegate:(id)arg1;
- (void)maybePauseVCPlaybackForNotification:(id)arg1;
- (void)maybeResumeVCPlayback;
- (id)otherParticipant;
- (void)shouldIgnoreNotificationTapEvent:(id)arg1 withAction:(id)arg2 callback:(CDUnknownBlockType)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

