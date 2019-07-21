//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCChatMessageReleaser-Protocol.h"

@class NSNumber, NSString, SCChatConversationViewModelV3;
@protocol SCChatMessageActionHandling;

@interface SCArroyoMessageReleaser : NSObject <SCChatMessageReleaser>
{
    id <SCChatMessageActionHandling> _actionHandler;
    SCChatConversationViewModelV3 *_conversationViewModel;
    _Bool _releasingAllowed;
    _Bool _didCompletelySwipeIn;
    NSNumber *_lastReadMessageId;
    NSNumber *_lastReleasedMessageId;
}

- (void).cxx_destruct;
- (void)_markMessagesAsRead;
- (void)_markMessagesAsReleased;
- (void)allowMessageReleasing;
- (void)blockMessageReleasing;
- (void)didConversationViewModelChange:(id)arg1;
- (void)didViewModelsChangeForConversationId:(id)arg1;
- (id)initWithActionHandler:(id)arg1;
- (void)viewDidBecomeActive;
- (void)viewDidFullyAppear;
- (void)viewDidSwipeIn;
- (void)viewDidSwipeOut;
- (void)viewWillResignActive;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

