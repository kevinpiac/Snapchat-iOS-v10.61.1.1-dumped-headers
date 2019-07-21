//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCSpectaclesContentMetadata.h"

@class VLKVideoMetadata;

@interface SCSpectaclesLagunaContentMetadata : SCSpectaclesContentMetadata
{
    VLKVideoMetadata *_underlyingProto;
}

- (void).cxx_destruct;
- (id)ambaTemperature;
- (id)ambientLightIntensity;
- (id)batterySoc;
- (id)bleConnected;
- (id)bleUUID;
- (unsigned long long)buttonPressType;
- (unsigned long long)contentType;
- (id)description;
- (id)endEvIndex;
- (id)firmwareVersion;
- (id)initWithData:(id)arg1;
- (_Bool)isHEVC;
- (id)location;
- (id)multisnapGroupID;
- (id)nordicLastBootSession;
- (id)nordicTemperature;
- (id)randBytes;
- (id)rawData;
- (id)sensorBeginTemperature;
- (id)sensorCurrentAgc;
- (id)sensorCurrentDgc;
- (id)sensorEndTemperature;
- (unsigned long long)serializedSize;
@property(retain, nonatomic) VLKVideoMetadata *underlyingProto; // @synthesize underlyingProto=_underlyingProto;
- (id)snapcodeDetected;
- (id)startEvIndex;
- (id)storagePercentage;
- (id)timeOfCapture;
- (id)userAssociated;
- (id)videoDuration;

@end
