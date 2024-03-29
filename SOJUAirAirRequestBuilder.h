//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSNumber, NSString, SOJUAirReportOption;

@interface SOJUAirAirRequestBuilder : NSObject
{
    NSString *_idValue;
    NSString *_reportType;
    NSString *_descriptionValue;
    NSString *_feature;
    NSString *_subFeature;
    NSString *_connectionType;
    NSNumber *_bandwidth;
    NSString *_shakeSensitivity;
    NSNumber *_deviceScore;
    NSString *_otherInfo;
    SOJUAirReportOption *_reportOption;
    NSArray *_notificationEmails;
    NSNumber *_appUsedMemory;
    NSNumber *_freeMemory;
    NSString *_blobData;
    NSString *_reportSource;
    NSString *_appLastChangeCommitHash;
    NSString *_userId;
    NSString *_deviceId;
}

+ (id)withJUAirAirRequest:(id)arg1;
- (void).cxx_destruct;
- (id)build;
- (id)setAppLastChangeCommitHash:(id)arg1;
- (id)setAppUsedMemory:(id)arg1;
- (id)setAppUsedMemoryValue:(long long)arg1;
- (id)setBandwidth:(id)arg1;
- (id)setBandwidthValue:(long long)arg1;
- (id)setBlobData:(id)arg1;
- (id)setConnectionType:(id)arg1;
- (id)setConnectionTypeEnum:(long long)arg1;
- (id)setDescriptionValue:(id)arg1;
- (id)setDeviceId:(id)arg1;
- (id)setDeviceScore:(id)arg1;
- (id)setDeviceScoreValue:(double)arg1;
- (id)setFeature:(id)arg1;
- (id)setFreeMemory:(id)arg1;
- (id)setFreeMemoryValue:(long long)arg1;
- (id)setIdValue:(id)arg1;
- (id)setNotificationEmails:(id)arg1;
- (id)setOtherInfo:(id)arg1;
- (id)setReportOption:(id)arg1;
- (id)setReportSource:(id)arg1;
- (id)setReportSourceEnum:(long long)arg1;
- (id)setReportType:(id)arg1;
- (id)setReportTypeEnum:(long long)arg1;
- (id)setShakeSensitivity:(id)arg1;
- (id)setShakeSensitivityEnum:(long long)arg1;
- (id)setSubFeature:(id)arg1;
- (id)setUserId:(id)arg1;

@end

