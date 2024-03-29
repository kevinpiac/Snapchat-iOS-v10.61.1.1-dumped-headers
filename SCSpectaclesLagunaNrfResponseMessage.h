//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCSpectaclesResponseMessage.h"

@class VLKNrfResponse;

@interface SCSpectaclesLagunaNrfResponseMessage : SCSpectaclesResponseMessage
{
    VLKNrfResponse *_nrfResponse;
}

+ (id)_descriptionForFailureReason:(int)arg1;
- (void).cxx_destruct;
- (_Bool)ambaCrashed;
- (id)ambaTemperature;
- (id)backgroundUpdateFailureReason;
- (id)backgroundUpdateParameters;
- (id)batteryLevel;
- (long long)bluetoothEvent;
- (_Bool)charging;
- (_Bool)contentCleared;
- (id)coulombCounterTemperature;
- (id)crashReports;
- (id)description;
- (long long)deviceColor;
- (id)firmwareDigest;
- (long long)firmwareUpdateResponseType;
- (id)firmwareVersion;
- (id)hardwareVersion;
- (_Bool)hasBluetoothEvent;
- (_Bool)hasCharging;
- (_Bool)hasDeviceColor;
- (_Bool)hasFirmwareUpdateResponse;
- (_Bool)hasHasSpaceToRecord;
- (_Bool)hasNrfError;
- (_Bool)hasPatchApplied;
- (_Bool)hasSpaceToRecord;
- (_Bool)hasWifiState;
- (id)initWithNrfResponse:(id)arg1 request:(id)arg2;
- (id)ipAddress;
- (id)mediaCount;
- (id)nordicTemperature;
- (unsigned long long)nrfErrorType;
@property(readonly, nonatomic) VLKNrfResponse *nrfResponse; // @synthesize nrfResponse=_nrfResponse;
- (_Bool)patchApplied;
- (long long)responseStatus;
- (id)serialNumber;
- (id)storagePercentage;
- (_Bool)videoRecordingHasStarted;
- (id)voltageLevel;
- (_Bool)wifiOn;
- (id)wifiTemperature;

@end

