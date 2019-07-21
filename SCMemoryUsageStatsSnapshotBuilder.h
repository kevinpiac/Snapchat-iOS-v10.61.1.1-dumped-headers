//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface SCMemoryUsageStatsSnapshotBuilder : NSObject
{
    long long _memoryUsageXcodeInBytes;
    long long _memoryUsageInstrumentsInBytes;
    long long _memoryUsageMallocatedInBytes;
    long long _memoryUsageLegacyUsedInBytes;
    long long _memoryUsageFreeInBytes;
}

+ (id)memoryUsageStatsSnapshot;
+ (id)memoryUsageStatsSnapshotFromExistingMemoryUsageStatsSnapshot:(id)arg1;
- (id)build;
- (id)withMemoryUsageFreeInBytes:(long long)arg1;
- (id)withMemoryUsageInstrumentsInBytes:(long long)arg1;
- (id)withMemoryUsageLegacyUsedInBytes:(long long)arg1;
- (id)withMemoryUsageMallocatedInBytes:(long long)arg1;
- (id)withMemoryUsageXcodeInBytes:(long long)arg1;

@end
