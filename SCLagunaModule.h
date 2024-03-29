//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCUpdatesResponseListener-Protocol.h"
#import "SCUserSessionScoped-Protocol.h"

@class NSString, SCGalleryLagunaWifiController, SCLagunaFirmwareManager, SCLagunaHomeWifiManager, SCLagunaReleaseNoteStore, SCLagunaUsageRecorder, SCSpectaclesActivateDeviceFlow, SCSpectaclesAuxiliaryContentStore, SCSpectaclesLogger, SCSpectaclesManager, SCUserSession;
@protocol SCDownloadableContentManaging, SCSpectaclesAuxiliaryContentProvider, SCSpectaclesCrashLogger, SCSpectaclesTooltipProvider;

@interface SCLagunaModule : NSObject <SCUpdatesResponseListener, SCUserSessionScoped>
{
    _Bool _scrollingForPairingOnboarding;
    SCUserSession *_userSession;
    id <SCSpectaclesTooltipProvider> _tooltipProvider;
    id <SCDownloadableContentManaging> _resourceManager;
    SCSpectaclesManager *_spectaclesManager;
    SCLagunaFirmwareManager *_firmwareManager;
    SCGalleryLagunaWifiController *_wifiController;
    SCLagunaHomeWifiManager *_homeWifiManager;
    SCLagunaUsageRecorder *_usageRecorder;
    SCLagunaReleaseNoteStore *_releaseNoteStore;
    SCSpectaclesActivateDeviceFlow *_activateDeviceFlow;
    id <SCSpectaclesCrashLogger> _crashLogger;
    SCSpectaclesLogger *_analyticsLogger;
    SCSpectaclesAuxiliaryContentStore *_auxiliaryContentStore;
    id <SCSpectaclesAuxiliaryContentProvider> _auxiliaryContentProvider;
}

- (void).cxx_destruct;
- (id)_deviceListFromServerResponse:(id)arg1;
- (id)_newPairingOnboardingFlow:(id)arg1;
- (id)_newSettingsOnboardingFlow;
- (_Bool)_shouldDownloadHomeWifiAssets;
@property(retain, nonatomic) SCSpectaclesActivateDeviceFlow *activateDeviceFlow; // @synthesize activateDeviceFlow=_activateDeviceFlow;
@property(retain, nonatomic) SCSpectaclesLogger *analyticsLogger; // @synthesize analyticsLogger=_analyticsLogger;
@property(retain, nonatomic) id <SCSpectaclesAuxiliaryContentProvider> auxiliaryContentProvider; // @synthesize auxiliaryContentProvider=_auxiliaryContentProvider;
@property(retain, nonatomic) SCSpectaclesAuxiliaryContentStore *auxiliaryContentStore; // @synthesize auxiliaryContentStore=_auxiliaryContentStore;
@property(retain, nonatomic) id <SCSpectaclesCrashLogger> crashLogger; // @synthesize crashLogger=_crashLogger;
- (void)didReceiveUpdatesResponse:(id)arg1;
@property(retain, nonatomic) SCLagunaFirmwareManager *firmwareManager; // @synthesize firmwareManager=_firmwareManager;
@property(retain, nonatomic) SCLagunaHomeWifiManager *homeWifiManager; // @synthesize homeWifiManager=_homeWifiManager;
- (id)initWithUserSession:(id)arg1 resourceManager:(id)arg2 maniphestAdapter:(id)arg3 tooltipProvider:(id)arg4 auxiliaryContentProvider:(id)arg5;
- (void)invalidate;
- (id)newPairingOnboardingViewController:(id)arg1;
- (id)newSettingsOnboardingViewController;
- (id)newUpdateOnboardingViewController;
@property(retain, nonatomic) SCLagunaReleaseNoteStore *releaseNoteStore; // @synthesize releaseNoteStore=_releaseNoteStore;
@property(retain, nonatomic) id <SCDownloadableContentManaging> resourceManager; // @synthesize resourceManager=_resourceManager;
@property(nonatomic) _Bool scrollingForPairingOnboarding; // @synthesize scrollingForPairingOnboarding=_scrollingForPairingOnboarding;
@property(retain, nonatomic) SCSpectaclesManager *spectaclesManager; // @synthesize spectaclesManager=_spectaclesManager;
@property(retain, nonatomic) id <SCSpectaclesTooltipProvider> tooltipProvider; // @synthesize tooltipProvider=_tooltipProvider;
@property(retain, nonatomic) SCLagunaUsageRecorder *usageRecorder; // @synthesize usageRecorder=_usageRecorder;
@property(nonatomic) __weak SCUserSession *userSession; // @synthesize userSession=_userSession;
@property(retain, nonatomic) SCGalleryLagunaWifiController *wifiController; // @synthesize wifiController=_wifiController;
- (_Bool)shouldShowPairingOnboarding:(id)arg1;
- (_Bool)shouldShowUpdateOnboarding;
- (void)warmup;
- (void)warmupContextNotificationAssets;
- (void)warmupHomeWifiAssets;
- (void)warmupPairingAssets;
- (void)warmupPairingOnboarding:(id)arg1;
- (void)warmupSettingsIcons;
- (void)warmupSettingsOnboarding;
- (void)warmupUpdateOnboarding;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

