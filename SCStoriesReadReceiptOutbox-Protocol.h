//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class NSArray, NSObject;
@protocol OS_dispatch_queue;

@protocol SCStoriesReadReceiptOutbox
- (void)markAllInTransitReadReceiptsAsUnsentWithQueue:(NSObject<OS_dispatch_queue> *)arg1 completion:(void (^)(_Bool))arg2;
- (void)markAllUnsentAsInTransitWithQueue:(NSObject<OS_dispatch_queue> *)arg1 completion:(void (^)(_Bool, NSArray *))arg2;
- (void)markInTransitReadReceiptsAsUnsent:(NSArray *)arg1 queue:(NSObject<OS_dispatch_queue> *)arg2 completion:(void (^)(_Bool))arg3;
- (void)markUnsentAsInTransitWithMinBatchSize:(unsigned long long)arg1 maxBatchSize:(unsigned long long)arg2 queue:(NSObject<OS_dispatch_queue> *)arg3 completion:(void (^)(_Bool, NSArray *))arg4;
- (void)removeAllExpiredReadReceiptsWithQueue:(NSObject<OS_dispatch_queue> *)arg1 completion:(void (^)(_Bool))arg2;
- (void)removeInTransitReadReceipts:(NSArray *)arg1 queue:(NSObject<OS_dispatch_queue> *)arg2 completion:(void (^)(_Bool))arg3;
@end
