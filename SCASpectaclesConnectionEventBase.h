//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCASpectaclesTemperatureTrackedEvent.h"

@class NSNumber, NSString;

@interface SCASpectaclesConnectionEventBase : SCASpectaclesTemperatureTrackedEvent
{
    NSNumber *isCharging;
    NSNumber *deviceBattery;
    NSNumber *deviceStorage;
    long long transferChannel;
    long long phoneWifiStatus;
    NSString *pairingSessionId;
    NSString *transferSessionId;
    NSString *updateSessionId;
}

- (void).cxx_destruct;
- (id)asDictionary;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (long long)getDeviceBattery;
- (long long)getDeviceStorage;
- (id)getEventName;
- (long long)getEventQoS;
- (_Bool)getIsCharging;
- (id)getPairingSessionId;
- (double)getPerUserSamplingRate;
- (long long)getPhoneWifiStatus;
- (long long)getTransferChannel;
- (id)getTransferSessionId;
- (id)getUpdateSessionId;
- (id)init;
- (void)setDeviceBattery:(long long)arg1;
- (void)setDeviceStorage:(long long)arg1;
- (void)setIsCharging:(_Bool)arg1;
- (void)setPairingSessionId:(id)arg1;
- (void)setPhoneWifiStatus:(long long)arg1;
- (void)setTransferChannel:(long long)arg1;
- (void)setTransferSessionId:(id)arg1;
- (void)setUpdateSessionId:(id)arg1;

@end
