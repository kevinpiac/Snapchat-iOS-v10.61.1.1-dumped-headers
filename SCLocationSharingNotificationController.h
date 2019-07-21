//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class SCUserSession, SCUserToolTipStatus;

@interface SCLocationSharingNotificationController : NSObject
{
    SCUserSession *_userSession;
    SCUserToolTipStatus *_userToolTipStatus;
}

- (void).cxx_destruct;
- (void)_ensureHasLocationSharingPreferencesWithCompletion:(CDUnknownBlockType)arg1;
- (void)_setSeenMapLocationSharingNotificationIfNeeded;
- (void)_willEnterForeground;
- (void)handleInAppNotification:(id)arg1 navigationController:(id)arg2;
- (void)handleInAppNotificationDismissed:(id)arg1;
- (id)initWithUserSession:(id)arg1;
- (void)showNotificationIfNeeded;
- (void)updateLastMapOpenDate;
@property(readonly, nonatomic) __weak SCUserSession *userSession; // @synthesize userSession=_userSession;
@property(readonly, nonatomic) SCUserToolTipStatus *userToolTipStatus; // @synthesize userToolTipStatus=_userToolTipStatus;

@end
