//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"
#import "NamedEvent-Protocol.h"

@class NSNumber, NSString;

@interface SCANetworkTransfer : NSObject <NamedEvent, NSCopying>
{
    NSNumber *requestSizeBytes;
    NSNumber *responseSizeBytes;
    NSNumber *networkTransferMs;
    NSNumber *firstBytesLatency;
    NSNumber *firstBytesLength;
    NSNumber *downloadManagerLatencyMs;
    NSNumber *networkStartTransferBytePerSec;
    NSNumber *networkEndTransferBytePerSec;
    NSNumber *numberOfConcurrentRequests;
    long long networkOperation;
    NSString *protocol;
}

- (void).cxx_destruct;
- (id)asDictionary;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (long long)getDownloadManagerLatencyMs;
- (id)getEventName;
- (long long)getEventQoS;
- (long long)getFirstBytesLatency;
- (long long)getFirstBytesLength;
- (long long)getNetworkEndTransferBytePerSec;
- (long long)getNetworkOperation;
- (long long)getNetworkStartTransferBytePerSec;
- (long long)getNetworkTransferMs;
- (long long)getNumberOfConcurrentRequests;
- (double)getPerEventSamplingRate;
- (double)getPerUserSamplingRate;
- (id)getProtocol;
- (double)getRequestSizeBytes;
- (double)getResponseSizeBytes;
- (id)init;
- (void)setDownloadManagerLatencyMs:(long long)arg1;
- (void)setFirstBytesLatency:(long long)arg1;
- (void)setFirstBytesLength:(long long)arg1;
- (void)setNetworkEndTransferBytePerSec:(long long)arg1;
- (void)setNetworkOperation:(long long)arg1;
- (void)setNetworkStartTransferBytePerSec:(long long)arg1;
- (void)setNetworkTransferMs:(long long)arg1;
- (void)setNumberOfConcurrentRequests:(long long)arg1;
- (void)setProtocol:(id)arg1;
- (void)setRequestSizeBytes:(double)arg1;
- (void)setResponseSizeBytes:(double)arg1;

@end

