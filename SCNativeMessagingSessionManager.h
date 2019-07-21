//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCNMessagingSessionDelegate-Protocol.h"
#import "SCNMessagingUploadDelegate-Protocol.h"
#import "SCNativeMessagingSessionManaging-Protocol.h"
#import "SCNetworkConnectivityListener-Protocol.h"

@class NSString, SCArroyoConversationDataUpdateAnnouncer, SCArroyoFeedDataUpdateAnnouncer, SCArroyoNotificationsDelegateAdaptor, SCNMessagingSession, SCNMessagingSessionParameters, SCNativeFeedManager, SCUserSession;
@protocol SCNGrpcAuthContextDelegate, SCNMessagingKeyProvider;

@interface SCNativeMessagingSessionManager : NSObject <SCNMessagingSessionDelegate, SCNMessagingUploadDelegate, SCNetworkConnectivityListener, SCNativeMessagingSessionManaging>
{
    SCNMessagingSessionParameters *_nativeSessionParams;
    id <SCNMessagingKeyProvider> _keyProvider;
    SCNMessagingSession *_nativeSession;
    SCArroyoConversationDataUpdateAnnouncer *_conversationDataUpdateAnnouncer;
    SCArroyoFeedDataUpdateAnnouncer *_feedDataUpdateAnnouncer;
    SCArroyoNotificationsDelegateAdaptor *_notificationsDelegateAdaptor;
    SCUserSession *_userSession;
    SCNativeFeedManager *_feedManager;
    id <SCNGrpcAuthContextDelegate> _authContextDelegate;
}

- (void).cxx_destruct;
- (id)conversationDataUpdateAnnouncer;
- (void)createSession;
- (void)dealloc;
- (void)dispose;
- (void)endSession;
- (id)getAuthContextDelegate;
- (id)getFeedManager;
- (id)getNativeConversationManager;
- (id)getNativeSession;
- (id)initWithUserSession:(id)arg1 keyProvider:(id)arg2;
- (void)networkConnectivityStatusDidChange:(long long)arg1;
- (void)onConnectionStateChanged:(long long)arg1;
- (void)setNotificationsDelegate:(id)arg1;
- (void)uploadMedia:(id)arg1 callback:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

