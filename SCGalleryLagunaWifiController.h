//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCSpectaclesEventListener-Protocol.h"

@class NSArray, NSString, NSTimer, SCBaseAlertView, SCGalleryLagunaWifiControllerEventListenerAnnouncer, SCSpectaclesDevice, SCSpectaclesManager;
@protocol SCSpectaclesAppLogger;

@interface SCGalleryLagunaWifiController : NSObject <SCSpectaclesEventListener>
{
    _Bool _wasAWDLEnabled;
    _Bool _hasTriedToConnectWifi;
    _Bool _hasConnectedWifi;
    long long _state;
    SCSpectaclesManager *_spectaclesManager;
    id <SCSpectaclesAppLogger> _analyticsLogger;
    SCGalleryLagunaWifiControllerEventListenerAnnouncer *_announcer;
    SCBaseAlertView *_wifiPopup;
    CDUnknownBlockType _backgroundCancelBlock;
    NSTimer *_wifiDelayRetryTimer;
    SCSpectaclesDevice *_device;
    NSString *_ssidPassword;
    NSArray *_hdContentUUIDs;
    unsigned long long _getHdStartSource;
}

+ (id)_generateSsidPassword;
+ (id)_wifiSettingsUrlString;
- (void).cxx_destruct;
- (void)_appendHdContentUUIDs:(id)arg1;
- (void)_dismissWifiPopup;
- (void)_displayFailurePopup;
- (void)_displayRetryPopup;
- (void)_displayWifiPopup;
- (id)_getHdSessionAnalyticsInfo;
- (void)_handleAppBackground:(id)arg1;
- (void)_handleAppForeground:(id)arg1;
- (void)_promptToJoinSpectaclesWifi;
- (void)_resetCancelTimer;
- (void)_startWifiConnection;
- (void)_startWifiDelayRetryTimer;
- (void)_stopCancelTimer;
- (void)_transitionToState:(long long)arg1;
- (void)_wifiDelayRetryTimeout:(id)arg1;
- (void)addListener:(id)arg1;
@property(nonatomic) __weak id <SCSpectaclesAppLogger> analyticsLogger; // @synthesize analyticsLogger=_analyticsLogger;
@property(retain, nonatomic) SCGalleryLagunaWifiControllerEventListenerAnnouncer *announcer; // @synthesize announcer=_announcer;
@property(copy, nonatomic) CDUnknownBlockType backgroundCancelBlock; // @synthesize backgroundCancelBlock=_backgroundCancelBlock;
- (void)cancelWifiConnection;
- (void)dealloc;
@property(retain, nonatomic) SCSpectaclesDevice *device; // @synthesize device=_device;
- (void)dismissWifiView;
@property(nonatomic) unsigned long long getHdStartSource; // @synthesize getHdStartSource=_getHdStartSource;
@property(nonatomic) _Bool hasConnectedWifi; // @synthesize hasConnectedWifi=_hasConnectedWifi;
@property(nonatomic) _Bool hasTriedToConnectWifi; // @synthesize hasTriedToConnectWifi=_hasTriedToConnectWifi;
@property(retain, nonatomic) NSArray *hdContentUUIDs; // @synthesize hdContentUUIDs=_hdContentUUIDs;
- (id)initWithSpectaclesManager:(id)arg1 analyticsLogger:(id)arg2;
- (void)removeListener:(id)arg1;
@property(nonatomic) __weak SCSpectaclesManager *spectaclesManager; // @synthesize spectaclesManager=_spectaclesManager;
@property(copy, nonatomic) NSString *ssidPassword; // @synthesize ssidPassword=_ssidPassword;
@property(nonatomic) long long state; // @synthesize state=_state;
@property(nonatomic) _Bool wasAWDLEnabled; // @synthesize wasAWDLEnabled=_wasAWDLEnabled;
@property(retain, nonatomic) NSTimer *wifiDelayRetryTimer; // @synthesize wifiDelayRetryTimer=_wifiDelayRetryTimer;
@property(nonatomic) __weak SCBaseAlertView *wifiPopup; // @synthesize wifiPopup=_wifiPopup;
- (void)spectaclesDevice:(id)arg1 didUpdateInfo:(unsigned long long)arg2;
- (void)spectaclesDeviceDidUpdateState:(id)arg1;
- (void)spectaclesOnPairingStateUpdate:(unsigned long long)arg1 deviceInformation:(id)arg2;
- (void)spectaclesTransferSession:(id)arg1 onTransferUpdate:(unsigned long long)arg2;
- (void)startWifiFlowForDevice:(id)arg1 hdContentUUIDs:(id)arg2 getHdStartSource:(unsigned long long)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

