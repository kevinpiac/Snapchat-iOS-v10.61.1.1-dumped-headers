//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate;

@interface SCStorageEventHandler : NSObject
{
    NSDate *_lastReported;
}

+ (id)shared;
- (void).cxx_destruct;
- (unsigned long long)_convertByteToKB:(unsigned long long)arg1;
- (unsigned long long)_convertMiBToKB:(double)arg1;
- (unsigned long long)_fileSystemMetricInKB:(id)arg1;
- (void)_reportCurrentOpenedFiles;
- (void)_reportDiskUsage:(id)arg1;
- (void)_reportDiskUsageToBlizzard:(id)arg1;
- (void)_reportLegacyDiskUsage:(id)arg1;
- (void)_reportUnsampledMetrics;
- (void)_sendDiskUsageEventsToBlizzard:(id)arg1;
- (id)_transformCacheMetricsToBlizzard:(id)arg1;
- (void)performStorageBackgroundedManagement:(id)arg1;

@end
