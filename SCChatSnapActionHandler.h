//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCActionHandling-Protocol.h"

@class NSString, SCChatAnimationDataCoordinator, SCChatLogger, SCLazy, SCSnapLogger;
@protocol SCChatFullscreenMediaChatTableCellDelegate, SCChatMessageActionHandling;

@interface SCChatSnapActionHandler : NSObject <SCActionHandling>
{
    id <SCChatMessageActionHandling> _messageActionHandler;
    id <SCChatFullscreenMediaChatTableCellDelegate> _delegate;
    SCLazy *_replayController;
    SCChatAnimationDataCoordinator *_animationDataCoordinator;
    SCChatLogger *_chatLogger;
    SCSnapLogger *_snapLogger;
}

- (void).cxx_destruct;
- (void)_performSnapPressToReplayAction:(id)arg1;
- (void)_performSnapTapToLoadAction:(id)arg1;
- (void)_performSnapTapToViewAction:(id)arg1 sourceView:(id)arg2;
- (_Bool)handleActionWithSender:(id)arg1 actionModel:(id)arg2 fromSourceView:(id)arg3;
- (id)initWithMessageActionHandler:(id)arg1 delegate:(id)arg2 replayController:(id)arg3 animationDataCoordinator:(id)arg4 chatLogger:(id)arg5 snapLogger:(id)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

