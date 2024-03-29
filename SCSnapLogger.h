//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCArchiveObjectManager-Protocol.h"
#import "SCSnapLogger-Protocol.h"

@class NSMutableDictionary, NSString, SCArchiveLoader, SCSnapLoggerListenerAnnouncer;

@interface SCSnapLogger : NSObject <SCArchiveObjectManager, SCSnapLogger>
{
    SCArchiveLoader *_loader;
    NSMutableDictionary *_snapEndToEndDelayEvents;
    SCSnapLoggerListenerAnnouncer *_listenerAnnouncer;
}

+ (id)path;
+ (id)sharedInstance;
- (void).cxx_destruct;
- (long long)_determineSendSource:(id)arg1;
- (CDUnknownBlockType)_loadedBlock;
- (void)_logChatMessageV3GeofilterDirectSnapViewWithMessage:(id)arg1 userSession:(id)arg2 snappableInviteAction:(long long)arg3;
- (void)_logDirectSnapSendWithCommonLoggingParameters:(id)arg1 correspondentID:(id)arg2 mischiefIDs:(id)arg3 groupInviteID:(id)arg4 mediaType:(long long)arg5 snapTime:(double)arg6 mischiefSnapIDs:(id)arg7 snapIdsAndTimestamps:(id)arg8 sendSource:(long long)arg9;
- (void)_logSnapEndToEndDeliveryDelayLoadStart:(id)arg1 mediaType:(id)arg2 sendStartTimestamp:(id)arg3 createTimestamp:(id)arg4;
- (id)_networkReachability;
- (double)_roundMessageDuration:(id)arg1;
- (long long)_sendSourceFromSnapMetadata:(id)arg1;
- (long long)_snapSourceWithSource:(long long)arg1;
- (id)_stringForPlaybackMethod:(long long)arg1;
- (void)clear;
- (void)createSnapEndToEndDeliveryDelayEvent:(id)arg1 snapType:(long long)arg2 notificationMethod:(long long)arg3 deliveryMethod:(long long)arg4;
- (id)getViewSnapMetricParameters:(long long)arg1 snapType:(long long)arg2 context:(long long)arg3 isVideo:(_Bool)arg4;
- (id)init;
@property(readonly, nonatomic) SCSnapLoggerListenerAnnouncer *listenerAnnouncer; // @synthesize listenerAnnouncer=_listenerAnnouncer;
- (void)loadFromDiskAsync:(_Bool)arg1;
- (void)logChatMessageV3DirectSnapViewWithMessage:(id)arg1 viewTimeSec:(double)arg2 contextSnapViewMetrics:(id)arg3 viewSource:(long long)arg4 userSession:(id)arg5 snappableInviteAction:(long long)arg6;
- (void)logDirectSnapReceiveV3:(id)arg1;
- (void)logDirectSnapReplayAvailableWithChatMessageV3:(id)arg1 cellViewPosition:(long long)arg2;
- (void)logDirectSnapReplayViewWithChatMessageV3:(id)arg1 cellViewPosition:(long long)arg2;
- (void)logDirectSnapScreenshotWithChatMessageV3:(id)arg1 cellViewPosition:(long long)arg2;
- (void)logDirectSnapSend:(id)arg1 correspondentID:(id)arg2 mischiefIDs:(id)arg3 mischiefSnapIDs:(id)arg4 groupInviteID:(id)arg5 snapIdsAndTimestamps:(id)arg6;
- (void)logDirectSnapSendWithMetricsEventInfo:(id)arg1 chatMessageMediaType:(long long)arg2 correspondentID:(id)arg3 mischiefIDs:(id)arg4 mischiefSnapIDs:(id)arg5 groupInviteID:(id)arg6 snapIdsAndTimestamps:(id)arg7 sendSource:(long long)arg8;
- (void)logSnapEndToEndDeliveryDelayLoadEnd:(id)arg1 responseBodySize:(long long)arg2 success:(_Bool)arg3;
- (void)logSnapEndToEndDeliveryDelayLoadStart:(id)arg1 mediaType:(long long)arg2 sendStartTimestamp:(id)arg3 createTimestamp:(id)arg4;
- (void)logSnapEndToEndDeliveryDelayLoadStart:(id)arg1 messageMediaType:(long long)arg2 sendStartTimestamp:(id)arg3 createTimestamp:(id)arg4;
- (void)logSnapSendLifeCyleEventForSnapId:(id)arg1 stepName:(id)arg2 finished:(_Bool)arg3;
- (void)logSnapViewFailedForChatV3ForSnapID:(id)arg1 withPlaybackMethod:(long long)arg2 withMediaReason:(long long)arg3 withReasonDetail:(id)arg4 isVideo:(_Bool)arg5 isBroadcast:(_Bool)arg6;
- (void)logSnapViewFailedForChatV3ForSnapID:(id)arg1 withPlaybackMethod:(long long)arg2 withPlaybackReason:(long long)arg3 withReasonDetail:(id)arg4 isVideo:(_Bool)arg5 isBroadcast:(_Bool)arg6;
- (void)markAsLoadedWithoutLoadingFromDisk;
- (_Bool)saveState;
- (_Bool)shouldLoadFromDiskImmediately;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

