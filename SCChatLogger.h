//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCCPSessionLogger-Protocol.h"
#import "SCChatLogger-Protocol.h"
#import "SCEventListener-Protocol.h"
#import "SCGroupLogger-Protocol.h"

@class NSMutableDictionary, NSMutableSet, NSString;
@protocol SCPerforming;

@interface SCChatLogger : NSObject <SCChatLogger, SCGroupLogger, SCCPSessionLogger, SCEventListener>
{
    id <SCPerforming> _performer;
    NSMutableDictionary *_chatMetricsEventInfoDictionary;
    NSMutableDictionary *_chatMediaSendEvents;
    NSMutableDictionary *_snapTapToLoadEvents;
    NSMutableDictionary *_mediaIdsInProgress;
    NSMutableSet *_loggedMediaIdsInCurrentChatSession;
}

+ (long long)exitEvent:(unsigned long long)arg1;
+ (void)logSCAChatFriendRequestFromSource:(long long)arg1;
+ (void)logSCAChatMediaCardActionWithMediaType:(long long)arg1 mediaActionType:(id)arg2 actionResponse:(long long)arg3;
+ (void)logSCAChatMediaCardOpenWithType:(long long)arg1 metadataAvailable:(long long)arg2 withMediaOpen:(_Bool)arg3;
+ (void)logSCAChatMediaItemSelect:(id)arg1 withDrawerViewMode:(long long)arg2 withDrawerPosition:(unsigned long long)arg3 withEdit:(_Bool)arg4;
+ (void)logSCADrawerType:(long long)arg1 actionType:(long long)arg2 viewMode:(long long)arg3 sentItems:(long long)arg4 openedWithSearch:(_Bool)arg5 bitmojiTabVisible:(_Bool)arg6 previewIconProvider:(long long)arg7;
+ (void)logSCAStickerQuicksendMenuAction:(long long)arg1 stickerId:(id)arg2;
+ (long long)scaMediaType:(long long)arg1;
+ (id)sharedInstance;
- (void).cxx_destruct;
- (id)_addChatChatSendChatV3EventMetricsForMessage:(id)arg1 sendEvent:(id)arg2 chatPageSource:(long long)arg3 withMetricsEventsInfo:(id)arg4;
- (id)_addChatChatViewChatV3EventMetricsForMessage:(id)arg1 metricsEventInfo:(id)arg2 viewEvent:(id)arg3;
- (id)_addSCAChatChatSendChatSourceForSendEvent:(id)arg1 withMetricsEventInfo:(id)arg2;
- (id)_addSCAChatChatSendMediaEventMetricsForMessage:(id)arg1 sendEvent:(id)arg2 metricsEventInfo:(id)arg3;
- (id)_addSCAChatChatSendMessageParcelEventMetricsForMessage:(id)arg1 sendEvent:(id)arg2;
- (id)_addSCAChatChatSendNoteEventMetricsForMessage:(id)arg1 sendEvent:(id)arg2;
- (id)_addSCAChatChatSendStickerEventMetricsForMessage:(id)arg1 sendEvent:(id)arg2 metricsEventInfo:(id)arg3;
- (id)_addSCAChatChatSendTextEventMetricsForMessage:(id)arg1 sendEvent:(id)arg2;
- (long long)_determineSendSource:(id)arg1;
- (id)_getChatMediaLoadParameters:(long long)arg1 initialLoadState:(long long)arg2 isVideo:(_Bool)arg3;
- (_Bool)_isChatChatMetricsMessageType:(long long)arg1;
- (void)_logChatMediaLoadEnd:(id)arg1 result:(long long)arg2 errorReason:(id)arg3 parameters:(id)arg4;
- (void)_logChatMediaLoadStart:(id)arg1 isGroup:(_Bool)arg2;
- (void)_logChatMediaTapToLoad:(id)arg1 bodyType:(long long)arg2 mediaType:(id)arg3 sendingFlowVersion:(long long)arg4 error:(id)arg5;
- (void)_logSCAChatChatSendGeoStickerMetricsForMessage:(id)arg1 metricsEventInfo:(id)arg2;
- (void)_logSCAChatDirectSnapViewForSpeedwayStoryWithMessageV3:(id)arg1 mediaId:(id)arg2 viewTimeSec:(double)arg3 rollMinDegree:(double)arg4 rollMaxDegree:(double)arg5 pinchToZoomMillis:(double)arg6 inviteId:(id)arg7;
- (void)_logSCAChatDirectSnapViewWithStoryViewId:(id)arg1 mediaType:(long long)arg2 snapTimeSec:(double)arg3 snapTimeIsLoop:(_Bool)arg4 viewTimeSec:(double)arg5 ackTimeSec:(double)arg6 isLaguna:(_Bool)arg7 rollMinDegree:(double)arg8 rollMaxDegree:(double)arg9 pinchToZoomMillis:(double)arg10 mischiefId:(id)arg11 withAnimated:(_Bool)arg12 inviteId:(id)arg13;
- (void)_logSCAChatDirectStoryViewForSpeedWayStoryWithMessageV3:(id)arg1 mediaId:(id)arg2 viewTimeSec:(double)arg3 lastInteractionType:(unsigned long long)arg4;
- (void)_logSCAChatDirectStoryViewForSpeedWayStoryWithTimeView:(double)arg1 snapViewCount:(long long)arg2 snapCount:(long long)arg3 isLaguna:(_Bool)arg4 lastInteractionType:(unsigned long long)arg5 mischiefId:(id)arg6;
- (void)_logSCAChatSaveV3:(id)arg1;
- (void)_logSCAChatScreenshotV3:(id)arg1;
- (void)_logSCAChatSnapViewWithMessageType:(long long)arg1 mediaType:(long long)arg2 ackTimeSec:(double)arg3 source:(long long)arg4 isLaguna:(_Bool)arg5 withUserTag:(_Bool)arg6 rollMinDegree:(double)arg7 rollMaxDegree:(double)arg8 pinchToZoomMillis:(double)arg9 mischiefId:(id)arg10 conversationId:(id)arg11;
- (void)_logSCAChatSnapViewWithMessageV3:(id)arg1 rollMinDegree:(double)arg2 rollMaxDegree:(double)arg3 pinchToZoomMillis:(double)arg4;
- (void)_logSCAChatUnsaveV3:(id)arg1;
- (void)_logSentMessageV3:(id)arg1 success:(_Bool)arg2;
- (void)_logSnapTapToLoadCountStarted:(id)arg1 context:(id)arg2 bodyType:(long long)arg3 mediaType:(id)arg4 sendingFlowVersion:(long long)arg5;
- (void)_logSnapTapToLoadLatencyEnded:(id)arg1 context:(id)arg2 bodyType:(long long)arg3 mediaType:(id)arg4 sendingFlowVersion:(long long)arg5;
- (void)_logSnapTapToLoadLatencyStarted:(id)arg1 context:(id)arg2 bodyType:(long long)arg3 mediaType:(id)arg4 sendingFlowVersion:(long long)arg5;
- (void)_logUnsampledCounterEvent:(id)arg1 count:(unsigned long long)arg2 parameters:(id)arg3;
- (void)_logUnsampledTimedEventEnd:(id)arg1 uniqueId:(id)arg2 parameters:(id)arg3;
- (id)_networkReachability;
- (id)_parseError:(id)arg1;
- (void)_removeSCChatMetricsEventInfoForConsistentMessageId:(id)arg1;
- (long long)_scaMediaTypeForMediaCardAttributes:(id)arg1;
- (long long)_scaMediaTypeForMessageBodyType:(long long)arg1 mediaCardAttributes:(id)arg2 messageMediaType:(long long)arg3 storyShareMediaType:(id)arg4;
- (long long)_scaMessageTypeForMessageBodyType:(long long)arg1 mediaIsCustomSticker:(_Bool)arg2 nycSharePoiIdLength:(unsigned long long)arg3;
- (long long)_scaSourceTypeForMessageBodyType:(long long)arg1 parcelType:(id)arg2;
- (void)addSCChatMetricsEventInfo:(id)arg1 forConsistentMessageId:(id)arg2;
- (void)cancelLogBatchedChatMediaDownloadLoad:(id)arg1;
- (void)cancelLogBatchedChatMediaMediaProcessingLoad:(id)arg1;
- (void)cancelLogBatchedChatMediaUploadLoad:(id)arg1;
- (void)cancelLogChatMediaDrawerThumbnailLoad:(id)arg1;
- (void)cancelLogChatMediaDrawerVideoThumbnailGenerationLoad:(id)arg1;
- (void)cancelLogChatMediaVideoTranscoding:(id)arg1;
- (void)cancelLoggingChatMediaThumbnailLoadAndRender:(id)arg1;
- (void)cancelLoggingChatMediaThumbnailRenderLatency:(id)arg1;
- (void)cancelLoggingChatMediaVideoFullScreenLoad:(id)arg1;
- (id)chatMetricsEventInfoForConsistentMessageId:(id)arg1;
- (void)didReplyMediaFinishUploadingWithUploadId:(id)arg1 success:(_Bool)arg2;
- (void)didReplyMediaStartUploadingWithUploadId:(id)arg1 mediaType:(long long)arg2;
- (void)didTriggerEventWithEventName:(id)arg1 announcerIdentifier:(id)arg2 extraData:(id)arg3;
- (id)init;
- (void)logAVNotesCreation:(long long)arg1 withDuration:(double)arg2;
- (void)logBatchedChatMediaDownloadFinish:(id)arg1 batchSize:(unsigned long long)arg2;
- (void)logBatchedChatMediaDownloadStart:(id)arg1;
- (void)logBatchedChatMediaMediaProcessingFinish:(id)arg1 batchSize:(unsigned long long)arg2;
- (void)logBatchedChatMediaMediaProcessingStart:(id)arg1;
- (void)logBatchedChatMediaUploadFinish:(id)arg1 batchSize:(unsigned long long)arg2;
- (void)logBatchedChatMediaUploadStart:(id)arg1;
- (void)logBreadcrumb:(id)arg1;
- (void)logCap1On1MessagesWithMessagesCount:(long long)arg1 missingIterToken:(_Bool)arg2;
- (void)logChatActionMenuOpenedByGesture:(long long)arg1 messageBodyType:(long long)arg2 inGroupChat:(_Bool)arg3;
- (void)logChatConnectAttempt;
- (void)logChatConnectTimedOutAtStage:(id)arg1 didUseCachedIP:(_Bool)arg2;
- (void)logChatConnectedOnInterface:(id)arg1 afterAttempts:(unsigned long long)arg2;
- (void)logChatConnectedUntilStage:(id)arg1 afterInterval:(double)arg2 withIPv6:(_Bool)arg3 didUseCachedIP:(_Bool)arg4;
- (void)logChatMediaDismissed:(id)arg1 chatMediaType:(long long)arg2;
- (void)logChatMediaDownloadEnd:(id)arg1 chatMediaType:(long long)arg2 numBytes:(unsigned long long)arg3;
- (void)logChatMediaDownloadEnd:(id)arg1 chatMediaType:(long long)arg2 numBytes:(unsigned long long)arg3 additionalParams:(id)arg4;
- (void)logChatMediaDownloadEndWithRequest:(id)arg1 messageBodyType:(long long)arg2 success:(_Bool)arg3;
- (void)logChatMediaDownloadStart:(id)arg1;
- (void)logChatMediaDownloadStartWithRequest:(id)arg1;
- (void)logChatMediaDrawerThumbnailLoadFinish:(id)arg1 mediaType:(id)arg2;
- (void)logChatMediaDrawerThumbnailLoadStart:(id)arg1;
- (void)logChatMediaDrawerVideoThumbnailGenerationFinish:(id)arg1 videoSize:(double)arg2 videoDuration:(double)arg3;
- (void)logChatMediaExpanded:(id)arg1 chatMediaType:(long long)arg2;
- (void)logChatMediaFirstFrameLoadEnded:(id)arg1 chatMediaType:(long long)arg2;
- (void)logChatMediaFirstFrameLoadStarted:(id)arg1 chatMediaType:(long long)arg2;
- (void)logChatMediaLoadEnd:(id)arg1 result:(long long)arg2 errorReason:(id)arg3;
- (void)logChatMediaLoadFromCache:(id)arg1 isGroup:(_Bool)arg2 messageType:(long long)arg3 isVideo:(_Bool)arg4;
- (void)logChatMediaLoadLifeCycle:(id)arg1 stepName:(id)arg2;
- (void)logChatMediaLoadStart:(id)arg1 isGroup:(_Bool)arg2;
- (void)logChatMediaLoadUserAborted;
- (void)logChatMediaPlaybackAttempt:(id)arg1 bodyType:(long long)arg2 chatMediaType:(long long)arg3 isGroup:(_Bool)arg4 isFullscreen:(_Bool)arg5;
- (void)logChatMediaPlaybackFailure:(id)arg1 bodyType:(long long)arg2 chatMediaType:(long long)arg3 isGroup:(_Bool)arg4 isFullscreen:(_Bool)arg5;
- (void)logChatMediaSendCacheFetch:(id)arg1 bodyType:(long long)arg2 chatMessageMediaType:(long long)arg3 sendingFlowVersion:(long long)arg4 success:(_Bool)arg5;
- (void)logChatMediaSendEnd:(id)arg1 success:(_Bool)arg2;
- (void)logChatMediaSendFailed:(id)arg1 onStep:(long long)arg2 totalFailedRecipients:(long long)arg3;
- (void)logChatMediaSendStart:(id)arg1 mediaIds:(id)arg2 groupRecipientsCount:(long long)arg3 singleRecipientsCount:(long long)arg4 sendingFlowVersion:(long long)arg5 messageType:(long long)arg6 videoCount:(unsigned long long)arg7 isMultiSnap:(_Bool)arg8 sourceTab:(long long)arg9;
- (void)logChatMediaTapToLoad:(id)arg1 bodyType:(long long)arg2 chatMediaType:(long long)arg3 sendingFlowVersion:(long long)arg4 error:(id)arg5;
- (void)logChatMediaTapToLoad:(id)arg1 bodyType:(long long)arg2 chatMessageMediaType:(long long)arg3 sendingFlowVersion:(long long)arg4 error:(id)arg5;
- (void)logChatMediaTapToLoad:(id)arg1 bodyType:(long long)arg2 mediaType:(long long)arg3 sendingFlowVersion:(long long)arg4 error:(id)arg5;
- (void)logChatMediaThumbnailLoadAndRenderEnd:(id)arg1 chatMediaType:(long long)arg2 fromMischief:(_Bool)arg3;
- (void)logChatMediaThumbnailLoadAndRenderStart:(id)arg1 userInitiated:(_Bool)arg2;
- (void)logChatMediaThumbnailRender:(id)arg1 success:(_Bool)arg2 chatMediaType:(long long)arg3 mediaType:(id)arg4 fromMischief:(_Bool)arg5;
- (void)logChatMediaThumbnailRenderLatencyEnd:(id)arg1 chatMediaType:(long long)arg2 mediaType:(id)arg3 fromMischief:(_Bool)arg4;
- (void)logChatMediaThumbnailRenderLatencyStart:(id)arg1;
- (void)logChatMediaUploadEndWithRequest:(id)arg1 messageBodyType:(long long)arg2 success:(_Bool)arg3;
- (void)logChatMediaUploadStartWithRequest:(id)arg1;
- (void)logChatMediaVideoFullScreenLoadEnd:(id)arg1 chatMediaType:(long long)arg2;
- (void)logChatMediaVideoFullScreenLoadStart:(id)arg1;
- (void)logChatMediaVideoTranscodingFailure:(id)arg1 videoSize:(double)arg2 videoDuration:(double)arg3;
- (void)logChatMediaVideoTranscodingFinish:(id)arg1 videoSize:(double)arg2 videoDuration:(double)arg3;
- (void)logChatMediaVideoTranscodingStart:(id)arg1;
- (void)logChatPageChatCreateView:(double)arg1 viewTimeUntilChatStartSec:(double)arg2 exitEvent:(long long)arg3 sectionsAvailable:(id)arg4 sectionsFriendsSelected:(id)arg5 isGroupChat:(_Bool)arg6 isGroupButtonTapped:(_Bool)arg7 isGroupNamed:(_Bool)arg8 source:(long long)arg9;
- (void)logChatReachabilityChanged:(_Bool)arg1 isConnected:(_Bool)arg2 intervalSinceConnected:(double)arg3;
- (void)logChatSessionStartFailedWithGatewayReachable:(_Bool)arg1 triggerSource:(long long)arg2;
- (void)logChatSessionStartedWithTriggerSource:(long long)arg1;
- (void)logChatSessionsEstablished:(unsigned long long)arg1;
- (void)logChatSocketConnectFailedWithError:(id)arg1 ipv6:(_Bool)arg2 reachability:(_Bool)arg3;
- (void)logChatburgerV2View:(id)arg1 isGroup:(_Bool)arg2;
- (void)logChatburgerV2ViewExit:(id)arg1 isGroup:(_Bool)arg2;
- (void)logChatburgerView:(id)arg1;
- (void)logChatburgerViewExit:(id)arg1 hasPicture:(_Bool)arg2;
- (void)logDuplicateMessageWithMessageType:(id)arg1;
- (void)logFeedBadStateChangeByViewModel:(id)arg1;
- (void)logFirstPage1On1EmptyWithUsername:(id)arg1;
- (void)logForceToDoFullSyncOnStartupWithUsername:(id)arg1;
- (void)logInitialChatsLoadedWithUsername:(id)arg1 initialChatsCount:(long long)arg2;
- (void)logLateSnapPush:(id)arg1;
- (void)logMediaDownloadFailureEnd:(id)arg1 messageType:(long long)arg2 mediaType:(long long)arg3 statusCode:(long long)arg4 networkStats:(id)arg5;
- (void)logMediaDownloadStart:(id)arg1;
- (void)logMediaDownloadSuccessEnd:(id)arg1 messageType:(long long)arg2 mediaType:(long long)arg3 contentSize:(unsigned long long)arg4 networkStats:(id)arg5;
- (void)logMuteStoryWithStoryType:(long long)arg1 isMuted:(_Bool)arg2;
- (void)logOneOnOneChatNotificationMute:(_Bool)arg1 friendName:(id)arg2 source:(long long)arg3;
- (void)logPaginatedChatsLoadedWithUsername:(id)arg1 paginatedChatsCount:(long long)arg2;
- (void)logPingTime:(double)arg1;
- (void)logSCAChatCreateGroupWithMischiefId:(id)arg1 navigationAction:(long long)arg2 subpageName:(id)arg3 source:(long long)arg4;
- (void)logSCAChatCreateOneOnOneWithSource:(long long)arg1 storyTypeSpecific:(long long)arg2 exitEvent:(long long)arg3 conversationId:(id)arg4 recipientUsername:(id)arg5 navigationAction:(long long)arg6 subpageName:(id)arg7;
- (void)logSCAChatDirectSnapViewForSpeedwayStoryWithMessage:(id)arg1 mediaId:(id)arg2 viewTimeSec:(double)arg3 rollMinDegree:(double)arg4 rollMaxDegree:(double)arg5 pinchToZoomMillis:(double)arg6 inviteId:(id)arg7;
- (void)logSCAChatDirectStoryViewForSpeedWayStoryWithMessage:(id)arg1 mediaId:(id)arg2 viewTimeSec:(double)arg3 lastInteraction:(id)arg4;
- (void)logSCAChatErase:(id)arg1;
- (void)logSCAChatEraseModeUpdate:(unsigned long long)arg1;
- (void)logSCAChatMediaSaveToCameraRollWithConversationId:(id)arg1 messageBodyType:(long long)arg2 messageMediaType:(long long)arg3 storyShareMediaType:(id)arg4;
- (void)logSCAChatMischiefAddForMischiefId:(id)arg1 newUsernames:(id)arg2;
- (void)logSCAChatMischiefCreateForMischiefId:(id)arg1 recipientCount:(long long)arg2 chatSource:(long long)arg3;
- (void)logSCAChatMischiefCreateInviteForMischiefId:(id)arg1 inviteId:(id)arg2 inviteType:(long long)arg3;
- (void)logSCAChatMischiefJoinByInviteForMischiefId:(id)arg1 inviteId:(id)arg2;
- (void)logSCAChatMischiefLeaveForMischiefId:(id)arg1 recipientCount:(long long)arg2;
- (void)logSCAChatMischiefMuteForMischiefId:(id)arg1 isMuted:(_Bool)arg2 source:(long long)arg3;
- (void)logSCAChatMischiefNameSetForMischiefId:(id)arg1;
- (void)logSCAChatPageViewGroupWithTime:(double)arg1 mischiefId:(id)arg2;
- (void)logSCAChatPageViewOneOnOneWithTime:(double)arg1 recipientId:(id)arg2 storyViewType:(long long)arg3 conversationId:(id)arg4;
- (void)logSCAChatSave:(id)arg1;
- (void)logSCAChatScreenshot:(id)arg1;
- (void)logSCAChatSend:(id)arg1 chatPageSource:(long long)arg2;
- (void)logSCAChatSnapViewWithMessage:(id)arg1 rollMinDegree:(double)arg2 rollMaxDegree:(double)arg3 pinchToZoomMillis:(double)arg4;
- (void)logSCAChatUnsave:(id)arg1;
- (void)logSCAChatViewForMessage:(id)arg1 withMetricsEventInfo:(id)arg2;
- (void)logSCADataModelChatErase:(id)arg1;
- (void)logSCADataModelChatSave:(id)arg1;
- (void)logSCADataModelChatUnsave:(id)arg1;
- (void)logSCANewStoriesButtonTapWithNewStoriesButtonType:(long long)arg1;
- (void)logSCANewStoriesButtonViewWithNewStoriesButtonType:(long long)arg1;
- (void)logSentMessage:(id)arg1 success:(_Bool)arg2;
- (void)logSnapTapToLoadCountEnded:(id)arg1 error:(id)arg2;
- (void)logSnapTapToLoadCountStarted:(id)arg1 context:(id)arg2 bodyType:(long long)arg3 chatMessageMediaType:(long long)arg4 sendingFlowVersion:(long long)arg5;
- (void)logSnapTapToLoadCountStarted:(id)arg1 context:(id)arg2 bodyType:(long long)arg3 mediaType:(long long)arg4 sendingFlowVersion:(long long)arg5;
- (void)logSnapTapToLoadLatencyEnded:(id)arg1 context:(id)arg2 bodyType:(long long)arg3 chatMessageMediaType:(long long)arg4 sendingFlowVersion:(long long)arg5;
- (void)logSnapTapToLoadLatencyEnded:(id)arg1 context:(id)arg2 bodyType:(long long)arg3 mediaType:(long long)arg4 sendingFlowVersion:(long long)arg5;
- (void)logSnapTapToLoadLatencyStarted:(id)arg1 context:(id)arg2 bodyType:(long long)arg3 chatMessageMediaType:(long long)arg4 sendingFlowVersion:(long long)arg5;
- (void)logSnapTapToLoadLatencyStarted:(id)arg1 context:(id)arg2 bodyType:(long long)arg3 mediaType:(long long)arg4 sendingFlowVersion:(long long)arg5;
- (void)logSnapThumbnailFailed:(id)arg1 sendingFlowVersion:(long long)arg2 reason:(long long)arg3 error:(id)arg4;
- (void)logStaleGroupInfoForId:(id)arg1;
- (void)sccpStateDidChangeWithPreviousState:(long long)arg1 currentState:(long long)arg2 error:(id)arg3;
- (void)setChatMediaLoadParameters:(id)arg1 messageType:(long long)arg2 initialLoadState:(long long)arg3 isVideo:(_Bool)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
