//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSArray, SCLens, SCLensAsset, SCQueuePerformer;
@protocol SCLensDataFetcherListener;

@protocol SCLensDataFetcher <NSObject>
- (void)addListener:(id <SCLensDataFetcherListener>)arg1;
- (void)cancelDownloads;
- (void)clearCacheWithCompletionBlock:(void (^)(void))arg1;
- (void)fetchAsset:(SCLensAsset *)arg1 lens:(SCLens *)arg2 completionPerformer:(SCQueuePerformer *)arg3 completion:(void (^)(id))arg4;
- (void)fetchLenses:(NSArray *)arg1;
- (void)fetchLenses:(NSArray *)arg1 requestTiming:(long long)arg2;
- (void)pauseDownloads;
- (void)removeListener:(id <SCLensDataFetcherListener>)arg1;
- (void)resumeDownloads;
@end

