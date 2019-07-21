//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCLagunaFirmwareTagStoreDelegate-Protocol.h"
#import "SCSpectaclesEventListener-Protocol.h"
#import "SCSpectaclesFirmwareDownloaderDelegate-Protocol.h"

@class NSDate, NSMutableSet, NSString, SCFeatureSettingsManager, SCLagunaFirmwareTagStore, SCLagunaFirmwareUpdateEventListenerAnnouncer, SCLagunaReleaseNoteStore, SCSessionRequestManager, SCSpectaclesActivateDeviceFlow, SCSpectaclesDevice, SCSpectaclesFirmwareDownloader, SCSpectaclesFirmwareVersion, SCSpectaclesManager;
@protocol SCLagunaManiphestAdapter, SCPerforming, SCSpectaclesAppLogger;

@interface SCLagunaFirmwareManager : NSObject <SCSpectaclesFirmwareDownloaderDelegate, SCSpectaclesEventListener, SCLagunaFirmwareTagStoreDelegate>
{
    id <SCPerforming> _performer;
    SCSpectaclesManager *_spectaclesManager;
    SCSpectaclesActivateDeviceFlow *_activateDeviceFlow;
    id <SCSpectaclesAppLogger> _analyticsLogger;
    id <SCLagunaManiphestAdapter> _maniphestAdapter;
    SCSpectaclesFirmwareDownloader *_firmwareDownloader;
    SCLagunaFirmwareTagStore *_tagStore;
    SCSessionRequestManager *_requestManager;
    SCFeatureSettingsManager *_featureSettingsManager;
    SCLagunaReleaseNoteStore *_releaseNoteStore;
    SCSpectaclesDevice *_targetDevice;
    unsigned long long _currentState;
    unsigned long long _currentUpdateProgress;
    _Bool _sawTransferUpdate;
    NSString *_sessionId;
    SCSpectaclesFirmwareVersion *_newFirmwareVersion;
    SCSpectaclesFirmwareVersion *_oldFirmwareVersion;
    SCSpectaclesFirmwareVersion *_intermediateVersion;
    NSString *_newFirmwareHash;
    NSString *_oldFirmwareHash;
    NSString *_intermediateFirmwareHash;
    unsigned long long _numRevertDevice;
    _Bool _updateIsActive;
    _Bool _completedIntermediateUpdate;
    NSDate *_updateStartedDate;
    NSDate *_updateDownloadedDate;
    NSDate *_updateTransferredDate;
    NSMutableSet *_passiveUpdatedDevices;
    SCLagunaFirmwareUpdateEventListenerAnnouncer *_eventAnnouncer;
}

+ (id)_errorStringForFailureReason:(unsigned long long)arg1;
+ (_Bool)deviceHasEnoughBatteryForFirmwareUpdate:(id)arg1;
+ (_Bool)deviceIsTooColdForFirmwareUpdate:(id)arg1;
+ (_Bool)deviceIsTooHotForFirmwareUpdate:(id)arg1;
+ (_Bool)phoneStorageIsTooLowForFirmwareUpdate;
+ (long long)requiredBatteryLevelForFirmwareUpdate:(id)arg1;
- (void).cxx_destruct;
- (id)_activeAnnouncer;
- (id)_analyticsUserInfo;
- (void)_attemptFlashUpdate;
- (void)_attemptRemoveFirmwareFile;
- (void)_attemptStartUpdatingDevice:(id)arg1;
- (void)_failCurrentUpdate:(unsigned long long)arg1;
- (id)_firmwareFilePath;
- (_Bool)_hasValidUpdateParameters;
- (void)_logFirmwareUpdateFailureWithUserInfo:(id)arg1 reason:(unsigned long long)arg2 errorString:(id)arg3;
- (void)_logFirmwareUpdateFinished:(_Bool)arg1 error:(id)arg2;
- (void)_logFirmwareUpdateSuccessWithUserInfo:(id)arg1;
- (void)_prefetchNewFirmwareVersion;
- (void)_revertFirmwareBinary;
- (void)_showAlertWithTitle:(id)arg1 description:(id)arg2;
- (void)_showMetadataFetchFailureMessage:(id)arg1;
- (id)_specsConnectionInfo;
- (void)_startCheckingForUpdate;
- (void)_startCheckingUpdateFailureTimer;
- (void)_startDownloadingPatch;
- (void)_startFlashUpdateFailureTimer;
- (void)_startPassiveUpdates;
- (void)_startPrepareUpdateFailureTimer;
- (void)_startProgressTimer;
- (void)_startTransferUpdateFailureTimer;
- (void)_startUpdatingDevice:(id)arg1 updateIsActive:(_Bool)arg2;
- (void)_startUpdatingPatch;
- (void)_succeedCurrentUpdate;
- (void)_succeedIntermediateUpdate;
- (_Bool)_targetDeviceActivelyUpdating;
- (_Bool)_targetDeviceCheckingDownloadingOrTransferring;
- (void)_transitionToState:(unsigned long long)arg1;
- (unsigned long long)_updateStateForManagerState:(unsigned long long)arg1;
- (double)_updateWindowDuration;
- (id)_updateWindowStart;
- (void)addListener:(id)arg1;
- (_Bool)checkUpdateForDevice:(id)arg1;
- (void)dealloc;
@property(retain, nonatomic) SCLagunaFirmwareUpdateEventListenerAnnouncer *eventAnnouncer; // @synthesize eventAnnouncer=_eventAnnouncer;
- (void)firmwareDownloader:(id)arg1 didDownloadPatchToPath:(id)arg2;
- (void)firmwareDownloader:(id)arg1 didFailMetadataFetch:(long long)arg2;
- (void)firmwareDownloader:(id)arg1 didFetchTargetDigest:(id)arg2 targetVersion:(id)arg3 intermediateDigest:(id)arg4 intermediateVersion:(id)arg5;
- (void)firmwareDownloaderDidFailPatchDownload:(id)arg1;
- (id)initWithRequestManager:(id)arg1 featureSettingsManager:(id)arg2 spectaclesManager:(id)arg3 activateDeviceFlow:(id)arg4 releaseNoteStore:(id)arg5 analyticsLogger:(id)arg6 maniphestAdapter:(id)arg7;
- (void)mockSpectaclesFirmwareUpdateFailure;
- (void)mockSpectaclesFirmwareUpdateSuccess;
- (void)prefetchNewFirmwareVersion;
- (void)removeListener:(id)arg1;
- (void)showHighTemperatureAlert;
- (void)showLowBatteryAlertForDevice:(id)arg1;
- (void)showLowStorageAlert;
- (void)showLowTemperatureAlert;
- (void)showUpdateAlertForDevice:(id)arg1;
- (void)spectaclesDevice:(id)arg1 didCompletedScheduledUpdateWithUserInfo:(id)arg2 error:(id)arg3;
- (void)spectaclesDevice:(id)arg1 didFetchFirmwareUpdateDigest:(id)arg2;
- (void)spectaclesDevice:(id)arg1 didUpdateInfo:(unsigned long long)arg2;
- (void)spectaclesDevice:(id)arg1 onFirmwareUpdate:(unsigned long long)arg2 progress:(float)arg3;
- (void)spectaclesDeviceDidPair:(id)arg1;
- (void)spectaclesDeviceDidUpdateState:(id)arg1;
- (void)spectaclesTransferSession:(id)arg1 onTransferUpdate:(unsigned long long)arg2;
- (_Bool)startUpdatingDevice:(id)arg1;
- (unsigned long long)stateForDevice:(id)arg1;
- (void)tagStoreDidFailFetchingLatestVersion:(id)arg1;
- (void)tagStoreDidFetchLatestVersion:(id)arg1;
- (_Bool)updateAvailableForDevice:(id)arg1;
- (id)updateFirmwareVersionForDevice:(id)arg1;
- (id)updateMetadataForDevice:(id)arg1;
- (unsigned long long)updateProgressForDevice:(id)arg1;
- (_Bool)updateRequiredForDevice:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

