//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class SCFriendsFeedSnapReplayAnimationStateManager, User;
@protocol SCChatMessageActionHandling, SCSnapReplayControllerV3Delegate;

@interface SCSnapReplayControllerV3 : NSObject
{
    id <SCSnapReplayControllerV3Delegate> _delegate;
    id <SCChatMessageActionHandling> _actionHandler;
    User *_user;
    long long _context;
    SCFriendsFeedSnapReplayAnimationStateManager *_snapReplayAnimationStateManager;
}

- (void).cxx_destruct;
- (void)_attemptReplayOfSnap:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)_cancelActionForSnap:(id)arg1;
- (void)_decrementUserCreditsForSnap:(id)arg1 user:(id)arg2;
- (void)_handleFetchOfSnap:(id)arg1 forUser:(id)arg2;
- (id)_paidReplayActionForSnap:(id)arg1 user:(id)arg2;
- (void)_payToReplaySnap:(id)arg1 forUser:(id)arg2;
- (id)_replayActionForSnap:(id)arg1 user:(id)arg2;
- (void)_replaySnap:(id)arg1 forUser:(id)arg2;
- (void)_showAlertViewCoordiatorWithActionText:(id)arg1 actions:(id)arg2 snap:(id)arg3;
- (void)_showFreeReplayAlertViewForSnap:(id)arg1 user:(id)arg2;
- (void)_showReplayCreditUpdatePromptForSnap:(id)arg1 user:(id)arg2;
- (void)attemptReplayOfSnap:(id)arg1 inConversation:(id)arg2;
- (id)initWithDelegate:(id)arg1 context:(long long)arg2 actionHandler:(id)arg3 snapReplayAnimationStateManager:(id)arg4 user:(id)arg5;

@end

