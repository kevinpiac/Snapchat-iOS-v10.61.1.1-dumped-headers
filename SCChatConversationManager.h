//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCChatConversationManager-Protocol.h"
#import "SCChatConversationStoreListener-Protocol.h"
#import "SCChatMessageReceiveListener-Protocol.h"
#import "SCGroupManagerListener-Protocol.h"
#import "SCSnapchattersDataRequestListener-Protocol.h"

@class NSMutableDictionary, NSString, SCArchiveLoader, SCArroyoMessagingActionHandler, SCArroyoMetadataCorrectionManager, SCChatActionMenuDataCoordinator, SCChatAnimationDataCoordinator, SCChatConversationBatchFetcher, SCChatConversationDataCoordinator, SCChatConversationUpdater, SCChatLastInteractionManager, SCChatMediaCache, SCChatMediaReferenceManager, SCChatMediaRequestManager, SCChatMediaStateManager, SCChatSendBlockAssigner, SCChatSnapViewVerifier, SCChatSyncLatencyLogger, SCChatV3ConversationStore, SCChatV3FeedUpdater, SCChatV3MessageReceiver, SCChatV3MessageSender, SCChatV3MessageStateHandler, SCChatV3MetadataStore, SCChatV3NotificationProcessor, SCLazy;
@protocol SCChatConversationAPI, SCChatConversationFetcher, SCChatExternalAPIProvider, SCChatMediaFileManager, SCChatMediaMessageSender, SCChatMediaPrefetching, SCChatMessageActionHandling, SCChatMessageSending, SCConversationWithMetadataAnnouncer, SCConversationWithMetadataAnnouncer><SCChatActiveConversationMonitor, SCGroupActionHandler, SCGroupManager, SCMediaSendTaskManager, SCMediaUploader, SCNotificationProcessor, SCTalkManager;

@interface SCChatConversationManager : NSObject <SCGroupManagerListener, SCSnapchattersDataRequestListener, SCChatConversationManager, SCChatConversationStoreListener, SCChatMessageReceiveListener>
{
    NSString *_username;
    NSString *_userId;
    SCLazy *_arroyoConversationIdsManager;
    SCChatConversationUpdater *_conversationUpdater;
    SCChatConversationDataCoordinator *_conversationDataCoordinator;
    id <SCConversationWithMetadataAnnouncer> _conversationV3MetadataUpdater;
    id <SCConversationWithMetadataAnnouncer><SCChatActiveConversationMonitor> _arroyoConversationUpdater;
    SCLazy *_lazyDocObjectContext;
    SCChatV3ConversationStore *_conversationStore;
    SCChatV3MetadataStore *_metadataStore;
    SCChatV3MessageSender *_messageSender;
    SCChatV3MessageReceiver *_messageReceiver;
    SCChatMediaRequestManager *_mediaRequestManager;
    SCChatMediaStateManager *_mediaStateManager;
    id <SCChatMessageActionHandling> _messageActionHandler;
    SCArroyoMessagingActionHandler *_arroyoMessageActionHandler;
    id <SCGroupActionHandler> _groupActionHandler;
    SCChatV3MessageStateHandler *_messageStateHandler;
    SCChatV3FeedUpdater *_feedUpdater;
    SCChatMediaReferenceManager *_mediaReferenceManager;
    SCChatSnapViewVerifier *_snapViewVerifier;
    id <SCChatExternalAPIProvider> _provider;
    SCChatMediaCache *_chatMediaCache;
    SCLazy *_chatContentDelivery;
    id <SCMediaSendTaskManager> _mediaSendTaskManager;
    id <SCChatMediaFileManager> _mediaFileManager;
    id <SCChatMediaPrefetching> _mediaPrefetcher;
    id <SCChatConversationFetcher> _conversationFetcher;
    SCChatAnimationDataCoordinator *_animationDataCoordinator;
    SCChatActionMenuDataCoordinator *_actionMenuDataCoordinator;
    SCLazy *_storiesDataCoordinator;
    id <SCChatMediaMessageSender> _mediaMessageSender;
    id <SCMediaUploader> _mediaUploader;
    SCArroyoMetadataCorrectionManager *_metadataCorrectionManager;
    id <SCChatConversationAPI> _conversationAPI;
    SCArchiveLoader *_conversationLoader;
    id <SCGroupManager> _groupManager;
    SCLazy *_groupsDataCreator;
    SCChatV3NotificationProcessor *_notificationProcessor;
    id <SCNotificationProcessor> _arroyoNotificationProcessor;
    SCLazy *_snapchattersDataFetcher;
    SCLazy *_userInfoProvider;
    NSMutableDictionary *_userToPendingChatConversations;
    NSMutableDictionary *_userToPendingMischiefs;
    id <SCTalkManager> _talkManager;
    long long _activeConversationSource;
    id <SCChatMessageSending> _chatMessageSender;
    SCChatSendBlockAssigner *_blockAssigner;
    SCChatLastInteractionManager *_lastInteractionManager;
    SCLazy *_nativeFeedManager;
    SCLazy *_usernameToSnapchatterFetcher;
    SCChatConversationBatchFetcher *_batchFetcher;
    SCChatSyncLatencyLogger *_syncLatencyLogger;
    _Bool _didDiskLoadStart;
}

- (void).cxx_destruct;
- (id)_checkAndCorrectConversationStore:(id)arg1;
- (void)_clearConversationForSnapchatter:(id)arg1;
- (void)_createGroupsOnServerIfNecessaryForConversationId:(id)arg1 mischiefCreateSource:(long long)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_createLocalConversationsIfNecessaryForUserIds:(id)arg1;
- (_Bool)_isValidUserAndConversationStore:(id)arg1;
- (CDUnknownBlockType)_loadedBlock;
- (void)_makeLocalConversationsShowOnFeedIfNecessaryForSnapchatters:(id)arg1;
- (void)_mergeConversationStoreLoadedFromDisk:(id)arg1;
- (void)_processPendingConversationAfterSetup;
- (void)_registerAllMediaForStore:(id)arg1;
- (void)_retryAllFailedSilentMessagesForStore:(id)arg1;
- (void)_setActiveConversationSource:(long long)arg1;
- (id)_validLocalConversationIdForSnapchatter:(id)arg1;
- (id)actionHandler;
- (id)actionMenuDataCoordinator;
- (_Bool)activeBackgroundedChatHasUnreadMessageOrCallInProgress;
- (id)activeConversationId;
- (long long)activeConversationSource;
- (void)addListener:(id)arg1;
- (id)animationDataCoordinator;
- (id)arroyoMessagingActionHandler;
- (id)arroyoNotificationProcessor;
- (id)chatContentDelivery;
- (id)chatMediaCache;
- (id)chatMessageSender;
- (id)chatNotificationProcessor;
- (id)chatRequestManager;
- (void)clear;
- (void)clearAllConversations;
- (void)clearGroupConversationById:(id)arg1;
- (void)clearOneOnOneConversationById:(id)arg1;
- (void)configureWithUserSession:(id)arg1 lazyDocObjectContext:(id)arg2 externalAPIProvider:(id)arg3 groupManager:(id)arg4 groupsDataCreator:(id)arg5 groupsDataTracker:(id)arg6 userInfoProvider:(id)arg7 snapchattersDataFetcher:(id)arg8 snapchattersDataMutator:(id)arg9 snapchattersDataTracker:(id)arg10 snapchattersPublicInfoFetcher:(id)arg11 messageViewModelFactory:(id)arg12 talkManager:(id)arg13 talkRPC:(id)arg14 lazyCustomStickerManager:(id)arg15 storiesDataCoordinator:(id)arg16 nativeSessionManager:(id)arg17 arroyoConversationIdsManager:(id)arg18 chatContentDelivery:(id)arg19 lastInteractionManager:(id)arg20 pinnedConversationsDataCoordinator:(id)arg21 nativeFeedManager:(id)arg22 usernameSnapchatterFetcher:(id)arg23 contextPreloader:(id)arg24 mediaSendTaskManager:(id)arg25 bitmojiManager:(id)arg26 bitmojiStickerManager:(id)arg27 userPreferences:(id)arg28;
- (id)conversationAPI;
- (id)conversationBatchFetcher;
- (void)conversationDidUpdate:(id)arg1;
- (id)conversationFetcher;
- (id)conversationMetadataUpdater;
- (void)createGroupIfNecessaryForConversationId:(id)arg1 mischiefCreateSource:(long long)arg2 completion:(CDUnknownBlockType)arg3;
- (void)createSimpleTicketWithTitle:(id)arg1 email:(id)arg2;
- (void)didBeginLeavingGroupWithId:(id)arg1;
- (void)didChangeInfoForGroupWithId:(id)arg1;
- (void)didCreateGroupOnServerWithId:(id)arg1 initialSojuMischief:(id)arg2;
@property _Bool didDiskLoadStart; // @synthesize didDiskLoadStart=_didDiskLoadStart;
- (void)didEndSnapchattersUpdateDataRequest:(id)arg1 withSuccess:(_Bool)arg2;
- (void)didFinishLoadingGroups;
- (void)didJoinGroupWithId:(id)arg1;
- (void)didReceiveMischiefs:(id)arg1 conversations:(id)arg2 username:(id)arg3 fetchContext:(id)arg4;
- (void)didReceiveWireMessage:(id)arg1;
- (void)didStartSnapchattersUpdateDataRequest:(id)arg1;
- (void)diskLoadFinished;
- (id)feedUpdater;
- (id)fetchConversationsVersionSync;
- (void)fetchConversationsVersionWithCallback:(CDUnknownBlockType)arg1;
- (void)getLastParticipantSentMessageById:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)groupActionHandler;
- (id)groupManager;
- (id)init;
- (_Bool)isActiveChatAGroupConversation;
- (_Bool)isConversationStoreLoaded;
- (void)loadFromDiskAsync:(_Bool)arg1;
- (void)markAsLoadedWithoutLoadingFromDisk;
- (id)mediaFileManager;
- (id)mediaMessageSender;
- (id)mediaPrefetcher;
- (id)mediaUploader;
- (id)metadataStore;
- (void)removeListener:(id)arg1;
- (void)resumeActiveConversationById:(id)arg1;
- (void)retryAllFailedSilentMessages;
- (_Bool)saveEmptyDataToDisk;
- (_Bool)saveState;
- (void)setActiveConversationById:(id)arg1 conversationSource:(long long)arg2;
- (_Bool)shouldLoadFromDiskImmediately;
- (id)syncLatencyLogger;
- (void)unsetActiveConversationById:(id)arg1;
- (id)username;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
