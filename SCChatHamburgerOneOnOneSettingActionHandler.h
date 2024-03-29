//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCActionHandling-Protocol.h"

@class NSString, SCNotificationStatusActionHandler, SCRetentionPolicyActionHandler, SCShareUsernameActionHandler, SCSnapchattersActionHandler;

@interface SCChatHamburgerOneOnOneSettingActionHandler : NSObject <SCActionHandling>
{
    SCSnapchattersActionHandler *_snapchatterActionHandler;
    SCShareUsernameActionHandler *_shareUsernameActionHandler;
    SCNotificationStatusActionHandler *_notificationStatusActionHandler;
    SCRetentionPolicyActionHandler *_retentionPolicyActionHandler;
}

- (void).cxx_destruct;
- (_Bool)handleActionWithSender:(id)arg1 actionModel:(id)arg2 fromSourceView:(id)arg3;
- (id)initWithSnapchatter:(id)arg1 snapchattersDataMutator:(id)arg2 userInfoProvider:(id)arg3 friendScoreCoordinator:(id)arg4 conversationId:(id)arg5 userSession:(id)arg6 presentingViewController:(id)arg7 requestManager:(id)arg8 chatMessageActionHandler:(id)arg9 notificationStatusCompletionDelegate:(id)arg10 retentionPolicyCompletionDelegate:(id)arg11;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

