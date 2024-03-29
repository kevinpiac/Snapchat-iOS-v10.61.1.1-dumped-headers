//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCChatExternalAPIProvider-Protocol.h"

@class NSString, SCUserSession, User;
@protocol SCChatConversationFetcher, SCChatMediaFileManager, SCChatMessageSender, SCChatRequestManager, SCChatStoryLoader, SCNotificationManager, SCSnapLogger;

@interface SCChatExternalAPIProvider : NSObject <SCChatExternalAPIProvider>
{
    id <SCChatMessageSender> _messageSender;
    id <SCChatConversationFetcher> _conversationFetcher;
    id <SCChatMediaFileManager> _mediaFileManager;
    id <SCChatStoryLoader> _storyLoader;
    id <SCSnapLogger> _snapLogger;
    id <SCChatRequestManager> _chatRequestManager;
    SCUserSession *_userSession;
    User *_user;
    id <SCNotificationManager> _notificationManager;
}

- (void).cxx_destruct;
- (id)birthday;
- (CDUnknownBlockType)cacheEncryptionKeyManagerGetterBlock;
- (id)chatMediaFileManager;
- (id)chatRequestManager;
- (id)conversationFetcher;
- (void)createSimpleTicketWithTitle:(id)arg1 email:(id)arg2;
- (id)experimentManager;
- (id)fideliusManager;
- (id)fideliusUnwrapper;
- (id)galleryLogger;
- (id)initWithUser:(id)arg1 userSession:(id)arg2 friendsFeedUFSDataCoordinator:(id)arg3 docObjectContext:(id)arg4;
- (id)logger;
- (id)messageReceiver;
- (id)messageSender;
- (id)notificationManager;
- (id)preloadController;
- (id)snapLogger;
- (id)storyLoader;
- (id)tooltipManager;
- (id)userHelper;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

