//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class NSData, NSObject;
@protocol OS_dispatch_queue;

@protocol SCCachableMedia
- (void)dataFromCacheCompletionQueue:(NSObject<OS_dispatch_queue> *)arg1 completionBlock:(void (^)(NSString *, NSData *))arg2;
- (void)saveDataToCache:(NSData *)arg1 completionQueue:(NSObject<OS_dispatch_queue> *)arg2 completionBlock:(void (^)(NSString *))arg3;
@end

