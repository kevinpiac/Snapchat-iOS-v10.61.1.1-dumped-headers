//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSIndexPath, SCBatchCaptureConfiguration, SCBatchCaptureSegment;

@protocol SCBatchCaptureConfigurationListener <NSObject>
- (void)batchCaptureConfiguration:(SCBatchCaptureConfiguration *)arg1 didAddSegment:(SCBatchCaptureSegment *)arg2;
- (void)batchCaptureConfiguration:(SCBatchCaptureConfiguration *)arg1 didDeleteSegment:(SCBatchCaptureSegment *)arg2 atIndex:(long long)arg3;
- (void)batchCaptureConfiguration:(SCBatchCaptureConfiguration *)arg1 didDeleteSnapAtIndexPath:(NSIndexPath *)arg2;
- (void)batchCaptureConfiguration:(SCBatchCaptureConfiguration *)arg1 didSplitSnapAtIndexPath:(NSIndexPath *)arg2 splitTime:(CDStruct_1b6d18a9)arg3;
- (void)batchCaptureConfigurationDidDeleteAllSegments:(SCBatchCaptureConfiguration *)arg1;
- (void)batchCaptureConfigurationWillDeleteAllSegments:(SCBatchCaptureConfiguration *)arg1;
@end
