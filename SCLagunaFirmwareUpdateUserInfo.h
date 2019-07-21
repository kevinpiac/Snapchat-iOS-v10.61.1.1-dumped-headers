//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCoding-Protocol.h"

@class NSDate, NSString, SCSpectaclesFirmwareVersion, SCSpectaclesHardwareVersion;

@interface SCLagunaFirmwareUpdateUserInfo : NSObject <NSCoding>
{
    _Bool _updateIsActive;
    NSString *_deviceId;
    SCSpectaclesHardwareVersion *_hardwareVersion;
    SCSpectaclesFirmwareVersion *_firmwareVersion;
    long long _deviceColor;
    NSString *_sessionId;
    NSDate *_sessionStartTime;
    SCSpectaclesFirmwareVersion *_targetFirmwareVersion;
    long long _downloadDurationInMs;
    long long _transferDurationInMs;
    long long _updateDurationInMs;
}

- (void).cxx_destruct;
@property(nonatomic) long long deviceColor; // @synthesize deviceColor=_deviceColor;
@property(copy, nonatomic) NSString *deviceId; // @synthesize deviceId=_deviceId;
@property(nonatomic) long long downloadDurationInMs; // @synthesize downloadDurationInMs=_downloadDurationInMs;
- (void)encodeWithCoder:(id)arg1;
@property(retain, nonatomic) SCSpectaclesFirmwareVersion *firmwareVersion; // @synthesize firmwareVersion=_firmwareVersion;
@property(retain, nonatomic) SCSpectaclesHardwareVersion *hardwareVersion; // @synthesize hardwareVersion=_hardwareVersion;
- (id)initWithCoder:(id)arg1;
@property(copy, nonatomic) NSString *sessionId; // @synthesize sessionId=_sessionId;
@property(retain, nonatomic) NSDate *sessionStartTime; // @synthesize sessionStartTime=_sessionStartTime;
@property(retain, nonatomic) SCSpectaclesFirmwareVersion *targetFirmwareVersion; // @synthesize targetFirmwareVersion=_targetFirmwareVersion;
@property(nonatomic) long long transferDurationInMs; // @synthesize transferDurationInMs=_transferDurationInMs;
@property(nonatomic) long long updateDurationInMs; // @synthesize updateDurationInMs=_updateDurationInMs;
@property(nonatomic) _Bool updateIsActive; // @synthesize updateIsActive=_updateIsActive;

@end

