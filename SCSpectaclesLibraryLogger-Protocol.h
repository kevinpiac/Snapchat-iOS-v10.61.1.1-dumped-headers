//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSDate, NSNumber, NSString, NSUUID, SCSpectaclesConnectionInfo, SCSpectaclesContent, SCSpectaclesContentMetadata, SCSpectaclesDevice, SCSpectaclesFirmwareVersion, SCSpectaclesTransferSession;

@protocol SCSpectaclesLibraryLogger <NSObject>
- (void)logContentCaptureForSession:(SCSpectaclesTransferSession *)arg1 metadata:(SCSpectaclesContentMetadata *)arg2 contentId:(NSString *)arg3;
- (void)logCorruptContent:(NSString *)arg1 device:(SCSpectaclesDevice *)arg2 corruptionSource:(unsigned long long)arg3;
- (void)logDebugReport:(NSString *)arg1 deviceId:(NSString *)arg2 firmwareErrorType:(NSString *)arg3 firmwareCrashType:(NSString *)arg4 transferSessionId:(NSString *)arg5 pairingSessionId:(NSString *)arg6 updateSessionId:(NSString *)arg7 firmwareVersion:(NSString *)arg8 hardwareVersion:(NSString *)arg9 frameColor:(long long)arg10;
- (void)logDeviceStatusUpdate:(SCSpectaclesDevice *)arg1 videoCount:(long long)arg2;
- (void)logDeviceUnpaired:(SCSpectaclesDevice *)arg1 reason:(unsigned long long)arg2;
- (void)logFileTransferForSession:(SCSpectaclesTransferSession *)arg1 timeSinceTransferBegan:(NSNumber *)arg2;
- (void)logMetadataTransferForSession:(SCSpectaclesTransferSession *)arg1 timeSinceTransferBegan:(NSNumber *)arg2 fileSize:(long long)arg3 contentId:(NSString *)arg4;
- (void)logNrfUnexpectedResponse:(SCSpectaclesDevice *)arg1 reason:(unsigned long long)arg2;
- (void)logRealTimeBatchTransferWithBatchId:(NSString *)arg1 deviceStorage:(NSNumber *)arg2 numberOfHdVideoBeingTransferred:(NSNumber *)arg3 firmwareVersion:(SCSpectaclesFirmwareVersion *)arg4 transferChannel:(NSString *)arg5 deviceBatteryAtStart:(NSNumber *)arg6 deviceBatteryAtEnd:(NSNumber *)arg7 timeOfTransferStartUtc:(NSDate *)arg8 timeOfTransferEndUtc:(NSDate *)arg9 deviceID:(NSString *)arg10 isCharging:(_Bool)arg11 bluetoothBootTimeInMs:(NSNumber *)arg12 wifiBootTimeInMs:(NSNumber *)arg13 nordicTemperature:(NSNumber *)arg14 coulombControlTemperature:(NSNumber *)arg15 ambaTemperature:(NSNumber *)arg16 wifiTemperature:(NSNumber *)arg17 temperatureReportUpdateUtc:(NSDate *)arg18 wifiConnectionStatus:(unsigned long long)arg19 transferType:(unsigned long long)arg20 isAutomaticTransfer:(_Bool)arg21;
- (void)logRealTimeCaptureEventBatch;
- (void)logRealTimeCaptureEventForContent:(SCSpectaclesContent *)arg1 name:(NSString *)arg2 metadata:(SCSpectaclesContentMetadata *)arg3;
- (void)logSpectaclesConnectionFailureForTransfer:(SCSpectaclesConnectionInfo *)arg1 failureReason:(NSString *)arg2;
- (void)logSpectaclesConnectionStartForTransfer:(SCSpectaclesConnectionInfo *)arg1;
- (void)logSpectaclesConnectionSuccessForTransfer:(SCSpectaclesConnectionInfo *)arg1;
- (void)logTransferFailureWithTransferChannel:(long long)arg1 transferBatchID:(NSUUID *)arg2;
- (void)logTransferSessionFinished:(SCSpectaclesTransferSession *)arg1 hdVideos:(long long)arg2 photos:(long long)arg3 wifiConnectionStatus:(unsigned long long)arg4;
- (void)logTransferSessionInterrupted:(SCSpectaclesTransferSession *)arg1 reason:(unsigned long long)arg2 hdVideos:(long long)arg3 photos:(long long)arg4 wifiConnectionStatus:(unsigned long long)arg5;
- (void)logTransferSessionStart:(SCSpectaclesTransferSession *)arg1 bluetoothBootTimeInMs:(NSNumber *)arg2 wifiBootTimeInMs:(NSNumber *)arg3 wifiConnectionStatus:(unsigned long long)arg4;
@end

