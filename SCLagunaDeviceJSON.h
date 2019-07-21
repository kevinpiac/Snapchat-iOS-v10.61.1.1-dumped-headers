//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, SCSpectaclesFirmwareVersion, SCSpectaclesHardwareVersion;

@interface SCLagunaDeviceJSON : NSObject
{
    NSString *_serialNumber;
    long long _color;
    NSString *_displayName;
    NSString *_pairStatus;
    long long _firstPairedTimestamp;
    long long _lastPairedStatusUpdatedTimestamp;
    long long _lastNameUpdatedTimestamp;
    long long _deviceNumber;
    SCSpectaclesFirmwareVersion *_firmwareVersion;
    SCSpectaclesHardwareVersion *_hardwareVersion;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) long long color; // @synthesize color=_color;
@property(readonly, nonatomic) long long deviceNumber; // @synthesize deviceNumber=_deviceNumber;
@property(readonly, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
@property(readonly, nonatomic) SCSpectaclesFirmwareVersion *firmwareVersion; // @synthesize firmwareVersion=_firmwareVersion;
@property(readonly, nonatomic) long long firstPairedTimestamp; // @synthesize firstPairedTimestamp=_firstPairedTimestamp;
@property(readonly, nonatomic) SCSpectaclesHardwareVersion *hardwareVersion; // @synthesize hardwareVersion=_hardwareVersion;
- (id)initWithDictionary:(id)arg1;
- (id)initWithSerialNumber:(id)arg1 displayName:(id)arg2 color:(long long)arg3 pairStatus:(id)arg4 firstPairedTimestamp:(long long)arg5 lastNameUpdatedTimestamp:(long long)arg6 lastPairedStatusUpdatedTimestamp:(long long)arg7 deviceNumber:(long long)arg8 firmwareVersion:(id)arg9 hardwareVersion:(id)arg10;
@property(readonly, nonatomic) long long lastNameUpdatedTimestamp; // @synthesize lastNameUpdatedTimestamp=_lastNameUpdatedTimestamp;
@property(readonly, nonatomic) long long lastPairedStatusUpdatedTimestamp; // @synthesize lastPairedStatusUpdatedTimestamp=_lastPairedStatusUpdatedTimestamp;
@property(readonly, nonatomic) NSString *pairStatus; // @synthesize pairStatus=_pairStatus;
@property(readonly, nonatomic) NSString *serialNumber; // @synthesize serialNumber=_serialNumber;
- (id)toDictionary;
- (id)toServerLagunaDevice;

@end

