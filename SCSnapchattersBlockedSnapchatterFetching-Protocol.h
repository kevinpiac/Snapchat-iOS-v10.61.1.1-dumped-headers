//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class NSObject, NSString;
@protocol OS_dispatch_queue;

@protocol SCSnapchattersBlockedSnapchatterFetching
- (void)blockedSnapchatterWithUserId:(NSString *)arg1 completionQueue:(NSObject<OS_dispatch_queue> *)arg2 completionHandler:(void (^)(SCSnapchatter *, NSError *))arg3;
- (void)blockedSnapchatterWithUsername:(NSString *)arg1 completionQueue:(NSObject<OS_dispatch_queue> *)arg2 completionHandler:(void (^)(SCSnapchatter *, NSError *))arg3;
- (void)blockedSnapchattersWithCompletionQueue:(NSObject<OS_dispatch_queue> *)arg1 completionHandler:(void (^)(NSArray *, NSError *))arg2;
@end

