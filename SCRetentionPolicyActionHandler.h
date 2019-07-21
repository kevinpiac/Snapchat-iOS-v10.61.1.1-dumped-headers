//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCActionHandling-Protocol.h"

@class NSString, UIViewController;
@protocol SCChatMessageActionHandling, SCRetentionPolicyDelegate;

@interface SCRetentionPolicyActionHandler : NSObject <SCActionHandling>
{
    NSString *_conversationId;
    id <SCChatMessageActionHandling> _chatMessageActionHandler;
    unsigned long long _messageRetentionInMinutes;
    UIViewController *_presentingViewController;
    id <SCRetentionPolicyDelegate> _delegate;
}

- (void).cxx_destruct;
- (void)_didChangeRetentionPolicyWithSuccess:(_Bool)arg1 retentionInMinutes:(unsigned long long)arg2;
- (void)_didSelectRententionPolicy:(unsigned long long)arg1;
- (void)_presentAlertForFailedRetentionChange;
- (void)_presentViewController:(id)arg1;
- (void)_processChatSendResult:(long long)arg1 retentionInMinutes:(unsigned long long)arg2;
- (id)_retentionPolicyController;
- (void)_updateRententionPolicyTo:(unsigned long long)arg1;
@property(readonly, nonatomic) __weak id <SCRetentionPolicyDelegate> delegate; // @synthesize delegate=_delegate;
- (_Bool)handleActionWithSender:(id)arg1 actionModel:(id)arg2 fromSourceView:(id)arg3;
- (id)initConversationId:(id)arg1 presentingViewController:(id)arg2 chatMessageActionHandler:(id)arg3 delegate:(id)arg4;
@property(nonatomic) __weak UIViewController *presentingViewController; // @synthesize presentingViewController=_presentingViewController;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

