//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, SCAdInteractionHistoryTracker, SCAdShake2ReportLogger, SCSnapAds, SCSnapAdsAdLifecycleWatermarkEventsTracker, SCSnapAdsIdentifier, SCUserSession;

@interface SCAdTrackerHelper : NSObject
{
    SCSnapAds *_snapAdsApi;
    SCSnapAdsAdLifecycleWatermarkEventsTracker *_lifecycleTracker;
    SCAdShake2ReportLogger *_shake2ReportLogger;
    SCAdInteractionHistoryTracker *_interactionHistoryTracker;
    SCUserSession *_userSession;
    SCSnapAdsIdentifier *_currentAdIdentifier;
    NSString *_sessionId;
}

- (void).cxx_destruct;
- (void)_checkAudioMuted;
- (void)_reportPlaybackStreamingMetrics:(id)arg1 adRequestClientId:(id)arg2;
- (void)_swipedFromTopSnap:(_Bool)arg1 adResponse:(id)arg2 snapIndex:(long long)arg3 adViewContext:(id)arg4 adSessionId:(id)arg5 context:(id)arg6;
- (void)_updateDeepLinkFallbackWebView:(id)arg1 params:(id)arg2 snapIndex:(long long)arg3;
- (void)_updateDeepLinkSwiped:(id)arg1 params:(id)arg2 snapIndex:(long long)arg3;
- (void)_updateLongformVideoViewed:(id)arg1 params:(id)arg2 snapIndex:(long long)arg3;
- (void)_updateTopSnapImageViewed:(id)arg1 params:(id)arg2 snapIndex:(long long)arg3;
- (void)_updateTopSnapVideoViewed:(id)arg1 params:(id)arg2 snapIndex:(long long)arg3;
- (void)_updateWebViewViewed:(id)arg1 params:(id)arg2 snapIndex:(long long)arg3;
- (void)_updateWindowFocusChange:(_Bool)arg1 context:(id)arg2 snapIndex:(long long)arg3 adIdentifier:(id)arg4;
- (void)didChangeAudioVolume:(double)arg1 adRequestClientId:(id)arg2 snapIndex:(long long)arg3;
- (void)didSwipeUpOnCard:(id)arg1 snapIndex:(long long)arg2;
- (id)generatoAdTrackInfo:(id)arg1;
- (id)initWithUserSession:(id)arg1 sessionId:(id)arg2;
- (void)onAdScreenshot:(id)arg1 snapIndex:(long long)arg2;
- (void)onHide:(id)arg1 adViewContext:(id)arg2 snapIndex:(long long)arg3 context:(id)arg4 fromSwipeUp:(_Bool)arg5;
- (void)onHide:(id)arg1 viewContext:(id)arg2 isNoFill:(_Bool)arg3;
- (_Bool)trackCloseViewEventWithContext:(id)arg1 adViewContext:(id)arg2 params:(id)arg3 adResponse:(id)arg4 lastInteraction:(id)arg5 snapIndex:(long long)arg6 adSessionId:(id)arg7 topSnapBackgroundType:(unsigned long long)arg8;
- (void)trackLongPressEventwithAdRequestClientId:(id)arg1 context:(id)arg2 snapIndex:(long long)arg3;
- (void)trackNoFill:(id)arg1 viewContext:(id)arg2 isUnskippableAd:(_Bool)arg3;
- (void)trackOpenViewLoadedEventWithAdRequestClientId:(id)arg1 context:(id)arg2 lastInteraction:(id)arg3 snapIndex:(long long)arg4 isUnSkippableAd:(_Bool)arg5 adResponse:(id)arg6;
- (void)trackWebViewDPALoadPerformanceMetrics:(id)arg1 adResponse:(id)arg2 context:(id)arg3;
- (void)trackWebViewDPAOperationMetrics:(id)arg1 context:(id)arg2;
- (void)trackWebViewPerformanceMetrics:(id)arg1 adId:(id)arg2 adProductType:(unsigned long long)arg3 adServeRequestId:(id)arg4 serveItemId:(id)arg5 context:(id)arg6;
- (void)updateAudioVolume:(double)arg1;
- (void)updateVideoLoadingInfo:(id)arg1 loadedOnEntry:(_Bool)arg2 loadedOnExit:(_Bool)arg3 mediaWaitTimeInSec:(double)arg4;

@end

