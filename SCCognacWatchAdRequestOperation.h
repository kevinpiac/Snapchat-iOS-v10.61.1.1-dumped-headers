//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCCognacWVJBRequestOperation.h"

#import "SCCognacAdsManagerDelegate-Protocol.h"

@class NSString, SCCognacAdItem, SCCognacAdStatusManager, SCCognacAdsPersistenceService, SCCognacAppViewLifeCycleListenerAnnouncer, SCCognacOperaDataSource, SCCognacWatchAdRequestBody, SCOperaViewController, WKWebViewJavascriptBridge;

@interface SCCognacWatchAdRequestOperation : SCCognacWVJBRequestOperation <SCCognacAdsManagerDelegate>
{
    SCCognacWatchAdRequestBody *_requestBody;
    SCCognacAdItem *_currentAdItem;
    NSString *_appId;
    SCOperaViewController *_operaVC;
    SCCognacAppViewLifeCycleListenerAnnouncer *_viewLifeCycleAnnouncer;
    WKWebViewJavascriptBridge *_bridge;
    SCCognacAdsPersistenceService *_persistenceService;
    SCCognacOperaDataSource *_dataSource;
    SCCognacAdStatusManager *_adStatusManager;
}

- (void).cxx_destruct;
- (void)_callbackForInvalidSlotId;
- (void)_callbackForMediaNotLoaded;
- (void)_callbackForOperaPlayerFail;
- (void)_callbackForOperaPlayerOvertaken;
- (void)_callbackForRateLimit;
- (void)_completeViewingRewardedAds;
- (void)_handleAdItemUpdateCompletionWithSuccess:(_Bool)arg1;
- (void)_logAdBlizzardEventWithEventName:(id)arg1 extraParam:(id)arg2;
- (_Bool)_validateState;
@property(retain, nonatomic) SCCognacAdStatusManager *adStatusManager; // @synthesize adStatusManager=_adStatusManager;
- (void)adsManagerDidFailToPresent:(id)arg1;
- (void)adsManagerDidFinishPresenting:(id)arg1;
- (void)adsManagerDidFinishViewing:(id)arg1;
@property(copy, nonatomic) NSString *appId; // @synthesize appId=_appId;
@property(retain, nonatomic) WKWebViewJavascriptBridge *bridge; // @synthesize bridge=_bridge;
- (void)callbackWithResponse:(id)arg1;
@property(retain, nonatomic) SCCognacOperaDataSource *dataSource; // @synthesize dataSource=_dataSource;
- (void)logAdPlaybackEventWithSlotId:(id)arg1 requestId:(id)arg2 failReasons:(id)arg3 success:(_Bool)arg4;
- (void)logAdViewEventWithSlotId:(id)arg1 requestId:(id)arg2 failReasons:(id)arg3 success:(_Bool)arg4;
@property(retain, nonatomic) SCOperaViewController *operaVC; // @synthesize operaVC=_operaVC;
@property(retain, nonatomic) SCCognacAdsPersistenceService *persistenceService; // @synthesize persistenceService=_persistenceService;
- (void)run;
@property(retain, nonatomic) SCCognacAppViewLifeCycleListenerAnnouncer *viewLifeCycleAnnouncer; // @synthesize viewLifeCycleAnnouncer=_viewLifeCycleAnnouncer;
- (void)teardown;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

