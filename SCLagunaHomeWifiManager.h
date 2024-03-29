//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCSpectaclesEventListener-Protocol.h"
#import "SCSpectaclesSsidEventListener-Protocol.h"

@class NSMutableArray, NSString, SCLagunaHomeWifiManagerEventListenerAnnouncer, SCQueuePerformer, SCSpectaclesDevice, SCSpectaclesManager, SCUserSession, SCWeakTimer;
@protocol SCSpectaclesAppLogger;

@interface SCLagunaHomeWifiManager : NSObject <SCSpectaclesEventListener, SCSpectaclesSsidEventListener>
{
    _Bool _specsRefreshTokenInvalid;
    unsigned long long _state;
    NSString *_currentWiFiSsid;
    NSMutableArray *_wifiAPList;
    SCUserSession *_userSession;
    SCSpectaclesManager *_spectaclesManager;
    id <SCSpectaclesAppLogger> _analyticsLogger;
    SCLagunaHomeWifiManagerEventListenerAnnouncer *_announcer;
    SCQueuePerformer *_performer;
    SCSpectaclesDevice *_device;
    SCWeakTimer *_pendingSnapsNotificationTimer;
}

+ (id)homeWifiStateToString:(unsigned long long)arg1;
- (void).cxx_destruct;
- (id)_connectedDevice;
- (void)_pendingSnapsNotificationTimeout:(id)arg1;
- (void)_requestAuthzCode:(id)arg1 clientId:(id)arg2;
- (void)_requestLastCloudUploadTime:(id)arg1;
- (void)_transitionToState:(unsigned long long)arg1;
- (id)_wifiApFromListWithSsid:(id)arg1;
- (void)addListener:(id)arg1;
@property(nonatomic) __weak id <SCSpectaclesAppLogger> analyticsLogger; // @synthesize analyticsLogger=_analyticsLogger;
@property(retain, nonatomic) SCLagunaHomeWifiManagerEventListenerAnnouncer *announcer; // @synthesize announcer=_announcer;
- (void)applicationWillEnterForeground:(id)arg1;
- (void)cancelShareWifiCredentials;
- (_Bool)currentFlowIsResharingCredentials;
@property(copy, nonatomic) NSString *currentWiFiSsid; // @synthesize currentWiFiSsid=_currentWiFiSsid;
@property(retain, nonatomic) SCSpectaclesDevice *device; // @synthesize device=_device;
- (_Bool)hasWifiNetworkRequiringCredentialsUpdate;
- (id)initWithUserSession:(id)arg1 spectaclesManager:(id)arg2 analyticsLogger:(id)arg3;
@property(retain, nonatomic) SCWeakTimer *pendingSnapsNotificationTimer; // @synthesize pendingSnapsNotificationTimer=_pendingSnapsNotificationTimer;
@property(retain, nonatomic) SCQueuePerformer *performer; // @synthesize performer=_performer;
- (void)removeListener:(id)arg1;
- (void)removeWifiNetwork:(id)arg1;
@property(nonatomic) _Bool specsRefreshTokenInvalid; // @synthesize specsRefreshTokenInvalid=_specsRefreshTokenInvalid;
@property(nonatomic) __weak SCSpectaclesManager *spectaclesManager; // @synthesize spectaclesManager=_spectaclesManager;
@property(nonatomic) unsigned long long state; // @synthesize state=_state;
@property(nonatomic) __weak SCUserSession *userSession; // @synthesize userSession=_userSession;
@property(retain, nonatomic) NSMutableArray *wifiAPList; // @synthesize wifiAPList=_wifiAPList;
- (void)spectaclesDevice:(id)arg1 didReceiveClientId:(id)arg2 requestAuthzCode:(_Bool)arg3;
- (void)spectaclesDevice:(id)arg1 didReceiveCloudUploadEvent:(unsigned long long)arg2;
- (void)spectaclesDevice:(id)arg1 didReceiveShareWifiCredentialsResponseStatus:(unsigned long long)arg2;
- (void)spectaclesDevice:(id)arg1 didReceiveWifiAPList:(id)arg2;
- (void)spectaclesDeviceDidUpdateState:(id)arg1;
- (void)startShareWifiCredentials;
- (_Bool)wifiAPNeedsCredentialsUpdate:(id)arg1;
- (void)wifiScannerDidUpdateWifiSsid:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

