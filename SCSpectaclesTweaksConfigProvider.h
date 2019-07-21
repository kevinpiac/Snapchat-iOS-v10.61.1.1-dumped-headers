//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCSpectaclesTweaksConfigProvider-Protocol.h"

@class NSString;

@interface SCSpectaclesTweaksConfigProvider : NSObject <SCSpectaclesTweaksConfigProvider>
{
}

- (_Bool)disableBluetooth;
- (_Bool)disableContentDeletion;
- (_Bool)disableEncryption;
- (_Bool)disableHevc;
- (_Bool)disableProdAuthentication;
- (_Bool)keepAliveInBackground;
- (unsigned long long)mockBatteryLevelStatus;
- (long long)mockCoulombCounterTemperature;
- (long long)mockDeviceBatteryLevel;
- (long long)mockGuppyBatteryLevel;
- (unsigned long long)mockStorageLevelStatus;
- (unsigned long long)mockTemperatureStatus;
- (id)newportBurstFrame;
- (_Bool)newportEnableBurst;
- (_Bool)newportEnabled;
- (_Bool)restrictRSSIWhenScanning;
- (_Bool)setupBleNotifications;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

