//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSNotificationCenter, NSString, SCAppNotification, SCChatViewHeader, SCUserSession, UIView;
@protocol SCChatViewControllerParentDelegate, SCTV3TableContentInsetUpdater, SCTalkClientController;

@protocol SCTV3ClientDependenciesProvider <NSObject>
- (_Bool)chatFullyVisibile;
- (SCChatViewHeader *)chatHeader;
- (NSNotificationCenter *)cognacChatDockEventCenter;
- (UIView *)containerView;
- (NSString *)conversationId;
- (void)hideStatusBarFromActionSource:(long long)arg1;
- (_Bool)isFullScreenPlayerShown;
- (_Bool)isInPreviewMode;
- (void)leavePreviewMode:(_Bool)arg1;
- (id <SCChatViewControllerParentDelegate>)parentDelegate;
- (UIView *)presenceContainer;
- (void)setSourceNotification:(SCAppNotification *)arg1;
- (void)showStatusBarFromActionSource:(long long)arg1;
- (SCAppNotification *)sourceNotification;
- (id <SCTV3TableContentInsetUpdater>)tableInsetUpdater;
- (id <SCTalkClientController>)talkClientController;
- (SCUserSession *)userSession;
@end

