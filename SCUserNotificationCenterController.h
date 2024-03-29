//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCAppNotificationProviderDelegate-Protocol.h"

@class SCAppNotificationBatcher, SCBitmojiNotificationImageJob, SCNotificationAttachmentFileAccessor, SCUserSession;

@interface SCUserNotificationCenterController : NSObject <SCAppNotificationProviderDelegate>
{
    SCAppNotificationBatcher *_notificationBatcher;
    SCNotificationAttachmentFileAccessor *_fileAccessor;
    SCBitmojiNotificationImageJob *_imageJob;
    SCUserSession *_userSession;
}

- (void).cxx_destruct;
- (void)_displayNotifications:(id)arg1;
- (void)_removeAllNotificationsExcept:(id)arg1;
- (id)attachmentForIdentifier:(id)arg1 error:(id *)arg2;
- (_Bool)canDisplayNotification:(id)arg1;
- (void)clearNotificationData;
- (void)createRequestForNotification:(id)arg1 withImage:(id)arg2;
- (void)didApplicationStateChange:(_Bool)arg1 withCurrentNotifications:(id)arg2;
- (void)displayNotification:(id)arg1;
- (void)displayNotificationWithBitmoji:(id)arg1;
- (void)enqueueNotificationRequest:(id)arg1 notification:(id)arg2;
- (void)hideNotification:(id)arg1;
- (id)init;
- (void)logDisplayNotification:(id)arg1;
@property(retain, nonatomic) SCUserSession *userSession; // @synthesize userSession=_userSession;

@end

