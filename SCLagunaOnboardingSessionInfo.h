//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, SCSpectaclesFirmwareVersion, SCSpectaclesHardwareVersion;

@interface SCLagunaOnboardingSessionInfo : NSObject
{
    unsigned long long _onboardingSource;
    double _sessionDurationSec;
    NSString *_pairingSessionId;
    NSString *_deviceId;
    SCSpectaclesFirmwareVersion *_firmwareVersion;
    SCSpectaclesHardwareVersion *_hardwareVersion;
    unsigned long long _page;
    long long _deviceColor;
}

- (void).cxx_destruct;
@property(nonatomic) long long deviceColor; // @synthesize deviceColor=_deviceColor;
@property(copy, nonatomic) NSString *deviceId; // @synthesize deviceId=_deviceId;
@property(retain, nonatomic) SCSpectaclesFirmwareVersion *firmwareVersion; // @synthesize firmwareVersion=_firmwareVersion;
@property(retain, nonatomic) SCSpectaclesHardwareVersion *hardwareVersion; // @synthesize hardwareVersion=_hardwareVersion;
@property(nonatomic) unsigned long long onboardingSource; // @synthesize onboardingSource=_onboardingSource;
@property(nonatomic) unsigned long long page; // @synthesize page=_page;
@property(copy, nonatomic) NSString *pairingSessionId; // @synthesize pairingSessionId=_pairingSessionId;
@property(nonatomic) double sessionDurationSec; // @synthesize sessionDurationSec=_sessionDurationSec;

@end

