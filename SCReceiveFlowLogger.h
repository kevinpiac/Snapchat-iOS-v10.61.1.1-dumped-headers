//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCReceiveFlowLogging-Protocol.h"

@class NSString, SCReceiveFlowLogAggregator;
@protocol SCPerforming;

@interface SCReceiveFlowLogger : NSObject <SCReceiveFlowLogging>
{
    id <SCPerforming> _performer;
    SCReceiveFlowLogAggregator *_aggregator;
}

- (void).cxx_destruct;
- (void)_logStepWithMessageId:(id)arg1 mediaId:(id)arg2 loadStep:(long long)arg3 timestamp:(double)arg4 timestampType:(long long)arg5 result:(long long)arg6;
- (void)_logStepWithMessageId:(id)arg1 receiveStep:(long long)arg2 timestamp:(double)arg3 timestampType:(long long)arg4 result:(long long)arg5;
- (id)initWithMetricsEmitter:(id)arg1 performer:(id)arg2;
- (void)logDiscreteStepWithMessageId:(id)arg1 mediaId:(id)arg2 loadStep:(long long)arg3 timestamp:(double)arg4;
- (void)logDiscreteStepWithMessageId:(id)arg1 receiveStep:(long long)arg2 timestamp:(double)arg3;
- (void)logStepEndWithMessageId:(id)arg1 mediaId:(id)arg2 loadStep:(long long)arg3 timestamp:(double)arg4 result:(long long)arg5;
- (void)logStepEndWithMessageId:(id)arg1 receiveStep:(long long)arg2 timestamp:(double)arg3 result:(long long)arg4;
- (void)logStepStartWithMessageId:(id)arg1 mediaId:(id)arg2 loadStep:(long long)arg3 timestamp:(double)arg4;
- (void)logStepStartWithMessageId:(id)arg1 receiveStep:(long long)arg2 timestamp:(double)arg3;
- (void)setMetadataForMessageId:(id)arg1 messageBodyType:(id)arg2 mediaType:(long long)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

