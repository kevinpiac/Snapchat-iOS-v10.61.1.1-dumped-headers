//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCOpenUnifiedProfileActionHandlerDelegate-Protocol.h"
#import "SCReplyDelegate-Protocol.h"
#import "SCStartChatDelegate-Protocol.h"

@class NSString, SCModalChatViewController, SCUserSession, UIViewController;

@interface SCAddFriendsSnapAndChatDelegate : NSObject <SCReplyDelegate, SCStartChatDelegate, SCOpenUnifiedProfileActionHandlerDelegate>
{
    SCUserSession *_userSession;
    UIViewController *_presentingViewController;
    SCModalChatViewController *_chatViewController;
}

- (void).cxx_destruct;
- (void)_didPressSnapButton:(id)arg1;
- (void)_navigateToChatWithUsername:(id)arg1 deepLinkURL:(id)arg2;
- (void)_presentingChatPageAnimated:(_Bool)arg1;
- (void)_setConversationByChatIdentifier:(id)arg1 deepLinkURL:(id)arg2;
- (void)didFollowThrough;
- (id)initWithUserSession:(id)arg1 presentingViewController:(id)arg2;
- (void)navigateToChatView;
- (void)navigateToChatViewAnimated:(_Bool)arg1;
- (void)openUnifiedProfileActionHandler:(id)arg1 navigateToChatWithUsername:(id)arg2 deepLinkURL:(id)arg3;
- (void)replyWithParameter:(id)arg1;
- (_Bool)replyingToStoryWithChat;
- (void)setConversationByChatIdentifier:(id)arg1 deepLinkURL:(id)arg2 chatPageSource:(long long)arg3 navigationAction:(long long)arg4 subpageName:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

