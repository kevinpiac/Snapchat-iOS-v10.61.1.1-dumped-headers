//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCSpectaclesPairingBLEAuthenticatorDelegate-Protocol.h"
#import "SCSpectaclesPairingBTConnectorDelegate-Protocol.h"
#import "SCSpectaclesPairingLagunaBTAuthenticatorDelegate-Protocol.h"
#import "SCSpectaclesPairingScannerDelegate-Protocol.h"
#import "SCSpectaclesPairingUserAssociatorDelegate-Protocol.h"
#import "SCSpectaclesPeripheralDelegate-Protocol.h"

@class NSMutableSet, NSString, SCSpectaclesBabyDevice, SCSpectaclesDeviceStore, SCSpectaclesEventListenerAnnouncer, SCSpectaclesPairingBTConnector, SCSpectaclesPairingCandidateCode, SCSpectaclesPairingLagunaBTAuthenticator, SCSpectaclesPairingScanner, SCSpectaclesPairingUserAssociator, SCWeakTimer;
@protocol SCPerforming, SCSpectaclesPairingBLEAuthenticator, SCSpectaclesTweaksConfigProvider;

@interface SCSpectaclesPairingManager : NSObject <SCSpectaclesPairingScannerDelegate, SCSpectaclesPairingBLEAuthenticatorDelegate, SCSpectaclesPairingBTConnectorDelegate, SCSpectaclesPairingLagunaBTAuthenticatorDelegate, SCSpectaclesPairingUserAssociatorDelegate, SCSpectaclesPeripheralDelegate>
{
    _Bool _shouldFilterRSSI;
    id <SCPerforming> _performer;
    SCSpectaclesEventListenerAnnouncer *_announcer;
    unsigned long long _state;
    SCSpectaclesDeviceStore *_deviceStore;
    NSString *_userDisplayName;
    SCSpectaclesPairingCandidateCode *_candidateCode;
    SCSpectaclesBabyDevice *_babyDevice;
    SCWeakTimer *_stateTransitionTimeout;
    SCWeakTimer *_watchdogTimer;
    SCSpectaclesPairingScanner *_scanner;
    id <SCSpectaclesPairingBLEAuthenticator> _bleAuthenticator;
    SCSpectaclesPairingBTConnector *_btConnector;
    SCSpectaclesPairingLagunaBTAuthenticator *_btAuthenticator;
    SCSpectaclesPairingUserAssociator *_userAssociator;
    NSMutableSet *_authProviders;
    id <SCSpectaclesTweaksConfigProvider> _tweaksConfigProvider;
}

- (void).cxx_destruct;
- (id)_activeHandler;
- (_Bool)_deviceStoreHasOtherPairedDevices;
- (_Bool)_isDeviceSupportedWithCandidateCode:(id)arg1;
- (void)_pairingBTAuthenticatorDidFailWithoutEaSession:(_Bool)arg1;
- (id)_previouslyPairedDevice;
- (_Bool)_readyForNameChoosing;
- (void)_startSearchWithUserDisplayName:(id)arg1 filterRSSI:(_Bool)arg2;
- (void)_startWatchdogTimer;
- (void)_timerKick;
- (void)_transitionToState:(unsigned long long)arg1;
- (void)addAuthenticationProvider:(id)arg1;
- (double)ambientData;
@property(nonatomic) __weak SCSpectaclesEventListenerAnnouncer *announcer; // @synthesize announcer=_announcer;
@property(retain, nonatomic) NSMutableSet *authProviders; // @synthesize authProviders=_authProviders;
@property(retain, nonatomic) SCSpectaclesBabyDevice *babyDevice; // @synthesize babyDevice=_babyDevice;
@property(retain, nonatomic) id <SCSpectaclesPairingBLEAuthenticator> bleAuthenticator; // @synthesize bleAuthenticator=_bleAuthenticator;
@property(retain, nonatomic) SCSpectaclesPairingLagunaBTAuthenticator *btAuthenticator; // @synthesize btAuthenticator=_btAuthenticator;
@property(retain, nonatomic) SCSpectaclesPairingBTConnector *btConnector; // @synthesize btConnector=_btConnector;
- (void)cancelSearchForNewDevices;
@property(retain, nonatomic) SCSpectaclesPairingCandidateCode *candidateCode; // @synthesize candidateCode=_candidateCode;
- (void)confirmKeepPreviousDevicePaired;
- (void)confirmUnpairPreviousDevice;
@property(retain, nonatomic) SCSpectaclesDeviceStore *deviceStore; // @synthesize deviceStore=_deviceStore;
- (id)initWithDeviceStore:(id)arg1 announcer:(id)arg2 centralManager:(id)arg3 tweaksConfigProvider:(id)arg4;
- (void)pairingBLEAuthenticatorDidExchangeEncryptionKey:(id)arg1;
- (void)pairingBLEAuthenticatorDidFail;
- (void)pairingBTAuthenticatorDidFail;
- (void)pairingBTAuthenticatorDidFailWithoutEaSession;
- (void)pairingBTAuthenticatorDidSucceed;
- (void)pairingBTConnectorDidConnectAccessory:(id)arg1;
- (void)pairingBTConnectorDidDetectOverload;
- (void)pairingBTConnectorDidFindAccessory;
- (void)pairingBTConnectorDidShowPicker;
- (void)pairingBTConnectorPickerDidCancel;
- (void)pairingBTConnectorPickerDidFail;
- (void)pairingBTConnectorPickerDidFailKeyMismatch;
- (id)pairingDisplayNameWithoutEmoji;
- (id)pairingEmoji;
- (void)pairingScannerDidConnectPeripheral:(id)arg1 candidateCode:(id)arg2;
- (void)pairingScannerDidDisconnectPeripheral:(id)arg1;
- (_Bool)pairingScannerDidFindBackupPairingWithCandidateCode:(id)arg1;
- (void)pairingScannerDidUpdateState:(long long)arg1;
- (void)pairingUserAssociatorDidSucceed;
@property(retain, nonatomic) id <SCPerforming> performer; // @synthesize performer=_performer;
- (void)peripheral:(id)arg1 didFailWithError:(id)arg2;
- (void)peripheral:(id)arg1 didReceiveEncryptionResponse:(id)arg2;
- (void)peripheral:(id)arg1 didReceiveResponse:(id)arg2;
- (void)peripheralDidOpenStream:(id)arg1;
- (void)peripheralRequiresEncryptionSetup:(id)arg1;
- (void)requirePeripheralName:(id)arg1;
- (void)restrictRSSIForFactory;
@property(retain, nonatomic) SCSpectaclesPairingScanner *scanner; // @synthesize scanner=_scanner;
- (void)sendEncryptionRequest:(id)arg1;
- (void)sendRequest:(id)arg1;
- (void)setPairingDeviceLocationEnabled:(_Bool)arg1;
- (void)setPairingDisplayName:(id)arg1;
@property(nonatomic) _Bool shouldFilterRSSI; // @synthesize shouldFilterRSSI=_shouldFilterRSSI;
@property(nonatomic) unsigned long long state; // @synthesize state=_state;
@property(retain, nonatomic) SCWeakTimer *stateTransitionTimeout; // @synthesize stateTransitionTimeout=_stateTransitionTimeout;
@property(retain, nonatomic) SCSpectaclesPairingUserAssociator *userAssociator; // @synthesize userAssociator=_userAssociator;
@property(copy, nonatomic) NSString *userDisplayName; // @synthesize userDisplayName=_userDisplayName;
@property(retain, nonatomic) SCWeakTimer *watchdogTimer; // @synthesize watchdogTimer=_watchdogTimer;
- (void)startFallbackSearchWithUserDisplayName:(id)arg1;
- (void)startSearchForNewDevicesWithUserDisplayName:(id)arg1 filterRSSI:(_Bool)arg2;
@property(readonly, nonatomic) id <SCSpectaclesTweaksConfigProvider> tweaksConfigProvider; // @synthesize tweaksConfigProvider=_tweaksConfigProvider;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

