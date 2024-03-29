//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class SCFideliusBatchAckRetryExecutor, SCFideliusBatchClearRetryExecutor, SCFideliusLogger;
@protocol SCFideliusDataProvider, SCPerforming;

@interface SCFideliusAckRetryService : NSObject
{
    id <SCFideliusDataProvider> _dataSource;
    SCFideliusLogger *_logger;
    id <SCPerforming> _performer;
    SCFideliusBatchAckRetryExecutor *_ackRetryExecutor;
    SCFideliusBatchClearRetryExecutor *_clearRetryExecutor;
}

- (void).cxx_destruct;
- (void)_addToQueue:(id)arg1;
- (id)_keyForSnap:(id)arg1 recipientId:(id)arg2;
- (id)_retrySingleSnap:(id)arg1 friendId:(id)arg2 friendKeys:(id)arg3 source:(id)arg4;
- (id)_retrySingleSnapInClear:(id)arg1 friendId:(id)arg2 source:(id)arg3;
- (id)initWithDataSource:(id)arg1 useFakePerformer:(_Bool)arg2 logger:(id)arg3;
- (void)processRetries:(id)arg1 source:(id)arg2;

@end

