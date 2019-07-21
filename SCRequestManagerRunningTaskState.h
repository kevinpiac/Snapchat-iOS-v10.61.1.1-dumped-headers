//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCRequestConcurrencyObserver-Protocol.h"

@class NSMutableDictionary, NSString, SCQueuePerformer, SCRequestConcurrencyCounter;

@interface SCRequestManagerRunningTaskState : NSObject <SCRequestConcurrencyObserver>
{
    SCRequestConcurrencyCounter *_concurrencyCounter;
    SCQueuePerformer *_performer;
    NSMutableDictionary *_requestConcurrencyLoggingDict;
    NSMutableDictionary *_requestDataTransmitConcurrencyLoggingDict;
    long long _totalRequestConcurrencyReceivingData;
    long long _downloadRequestConcurrency;
    long long _metadataRequestConcurrency;
    long long _totalRequestConcurrencySendingData;
    long long _uploadRequestConcurrency;
    long long _analyticsRequestConcurrency;
    long long _analyticsV2RequestConcurrency;
}

- (void).cxx_destruct;
- (id)_calculateAverageConcurrencyForRequest:(id)arg1 withFinishTimestamp:(double)arg2;
- (id)_calculateAverageConcurrencyForRequest:(id)arg1 withFinishTimestamp:(double)arg2 includeTTFB:(_Bool)arg3;
- (id)_calculateAverageTransmitConcurrencyForRequest:(id)arg1 withFinishTimestamp:(double)arg2;
- (void)_updateRequestConcurrencyWithRequestType:(long long)arg1 requestStart:(_Bool)arg2;
- (void)addContext:(id)arg1 toTask:(id)arg2;
@property long long analyticsRequestConcurrency; // @synthesize analyticsRequestConcurrency=_analyticsRequestConcurrency;
@property long long analyticsV2RequestConcurrency; // @synthesize analyticsV2RequestConcurrency=_analyticsV2RequestConcurrency;
@property long long downloadRequestConcurrency; // @synthesize downloadRequestConcurrency=_downloadRequestConcurrency;
- (id)finishRequest:(id)arg1 requestType:(id)arg2 requestId:(id)arg3;
- (void)finishRunningTask:(id)arg1;
- (id)init;
@property long long metadataRequestConcurrency; // @synthesize metadataRequestConcurrency=_metadataRequestConcurrency;
- (unsigned long long)numOfAnalyticTasks;
- (unsigned long long)numOfBatchSmallDLTasks;
- (unsigned long long)numOfLargeDLTasks;
- (unsigned long long)numOfLargeDLTasksInContext:(id)arg1;
- (unsigned long long)numOfLargeDLTasksInContext:(id)arg1 URLSessionPriority:(float)arg2;
- (unsigned long long)numOfLargeDLTasksInURLSessionPriority:(float)arg1;
- (unsigned long long)numOfMetadataTasks;
- (unsigned long long)numOfRunningInContextDownloadTasks;
- (unsigned long long)numOfRunningLargeInContextDownloadTasks;
- (unsigned long long)numOfSmallDLTasks;
- (unsigned long long)numOfUploadTasks;
- (void)removeContext:(id)arg1 toTask:(id)arg2;
- (void)reset;
@property long long totalRequestConcurrencyReceivingData; // @synthesize totalRequestConcurrencyReceivingData=_totalRequestConcurrencyReceivingData;
@property long long totalRequestConcurrencySendingData; // @synthesize totalRequestConcurrencySendingData=_totalRequestConcurrencySendingData;
@property long long uploadRequestConcurrency; // @synthesize uploadRequestConcurrency=_uploadRequestConcurrency;
- (void)startReceivingDataForRequest:(id)arg1 requestType:(id)arg2 requestId:(id)arg3;
- (void)startRequest:(id)arg1 requestType:(id)arg2 requestId:(id)arg3;
- (void)startRunningTask:(id)arg1;
- (void)startSendingDataForRequest:(id)arg1 requestType:(id)arg2 requestId:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
