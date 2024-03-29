//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCASpectaclesTrackedEvent.h"

@class NSNumber;

@interface SCASpectaclesNrfNotification : SCASpectaclesTrackedEvent
{
    NSNumber *ambaTemperature;
    NSNumber *nordicTemperature;
    NSNumber *coulombCtrlTemperature;
    NSNumber *imageSensorTemperature;
    NSNumber *wifiTemperature;
    NSNumber *qcaTemperature;
    NSNumber *deviceBattery;
    NSNumber *deviceStorage;
    long long notificationType;
    long long firmwareCrashSource;
}

- (void).cxx_destruct;
- (id)asDictionary;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (long long)getAmbaTemperature;
- (long long)getCoulombCtrlTemperature;
- (long long)getDeviceBattery;
- (long long)getDeviceStorage;
- (id)getEventName;
- (long long)getEventQoS;
- (long long)getFirmwareCrashSource;
- (long long)getImageSensorTemperature;
- (long long)getNordicTemperature;
- (long long)getNotificationType;
- (double)getPerUserSamplingRate;
- (long long)getQcaTemperature;
- (long long)getWifiTemperature;
- (id)init;
- (void)setAmbaTemperature:(long long)arg1;
- (void)setCoulombCtrlTemperature:(long long)arg1;
- (void)setDeviceBattery:(long long)arg1;
- (void)setDeviceStorage:(long long)arg1;
- (void)setFirmwareCrashSource:(long long)arg1;
- (void)setImageSensorTemperature:(long long)arg1;
- (void)setNordicTemperature:(long long)arg1;
- (void)setNotificationType:(long long)arg1;
- (void)setQcaTemperature:(long long)arg1;
- (void)setWifiTemperature:(long long)arg1;

@end

