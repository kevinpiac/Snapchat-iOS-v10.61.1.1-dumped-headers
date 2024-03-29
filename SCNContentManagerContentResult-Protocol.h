//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class NSString, SCNContentManagerCancelableId, SCNContentManagerContentKey, SCNContentManagerContentRetrievalMetrics;
@protocol SCNContentManagerReadStream, SCNContentManagerWriteStream, SCNNetworkManagerNetworkStats;

@protocol SCNContentManagerContentResult
- (void)cancelWriteStreamRequest:(SCNContentManagerCancelableId *)arg1;
- (id <SCNContentManagerReadStream>)createReadStream;
- (void)free;
- (SCNContentManagerContentKey *)getContentKey;
- (long long)getErrorReason;
- (_Bool)getIsStreaming;
- (_Bool)getIsZipArchive;
- (SCNContentManagerContentRetrievalMetrics *)getMetrics;
- (id <SCNNetworkManagerNetworkStats>)getNetworkStats;
- (long long)getStatus;
- (NSString *)getStatusMessage;
- (long long)getTotalSize;
- (id <SCNContentManagerReadStream>)getZipEntryData:(NSString *)arg1;
- (SCNContentManagerCancelableId *)pushBytesToWriteStream:(id <SCNContentManagerWriteStream>)arg1 start:(long long)arg2 count:(long long)arg3;
@end

