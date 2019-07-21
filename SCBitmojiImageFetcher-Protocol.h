//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSArray, NSObject, SCBitmojiImageParams;
@protocol OS_dispatch_queue, SCCanceling;

@protocol SCBitmojiImageFetcher <NSObject>
- (void)clearMemoryCache;
- (id <SCCanceling>)fetchBitmojiImage:(SCBitmojiImageParams *)arg1 contexts:(NSArray *)arg2 feature:(long long)arg3 completionQueue:(NSObject<OS_dispatch_queue> *)arg4 completionBlock:(void (^)(UIImage *, SCBitmojiImageParams *, SCBitmojiImageResponseContext *))arg5;
- (id <SCCanceling>)fetchBitmojiImageData:(SCBitmojiImageParams *)arg1 contexts:(NSArray *)arg2 feature:(long long)arg3 transform:(id (^)(NSData *, unsigned long long))arg4 completionQueue:(NSObject<OS_dispatch_queue> *)arg5 completionBlock:(void (^)(id, unsigned long long, SCBitmojiImageParams *, SCBitmojiImageResponseContext *))arg6;
- (id <SCCanceling>)fetchCurrentOrPrior:(SCBitmojiImageParams *)arg1 contexts:(NSArray *)arg2 feature:(long long)arg3 transform:(id (^)(NSData *, unsigned long long))arg4 completionQueue:(NSObject<OS_dispatch_queue> *)arg5 completionBlock:(void (^)(id, unsigned long long, SCBitmojiImageParams *, SCBitmojiImageResponseContext *))arg6;
- (_Bool)isBitmojiCached:(SCBitmojiImageParams *)arg1;
- (id <SCCanceling>)prefetchBitmojiImage:(SCBitmojiImageParams *)arg1 contexts:(NSArray *)arg2 feature:(long long)arg3 completionQueue:(NSObject<OS_dispatch_queue> *)arg4 completionBlock:(void (^)(void))arg5;
- (void)resetCache;
@end

