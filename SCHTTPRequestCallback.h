//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCNNetworkTypesHttpRequestCallback-Protocol.h"

@class NSURL, SCRequestTask;
@protocol SCNNetworkCallbackDelegate;

@interface SCHTTPRequestCallback : NSObject <SCNNetworkTypesHttpRequestCallback>
{
    SCRequestTask *_requestTask;
    long long _accumulatedBytesReceived;
    id <SCNNetworkCallbackDelegate> _networkCallbackDelegate;
    NSURL *_downloadLocation;
}

- (void).cxx_destruct;
- (void)_finishBandwidthUsageUpdateWithResponseInfo:(id)arg1;
- (void)cleanUpDownloadFileWithError:(id)arg1;
@property(readonly, copy, nonatomic) NSURL *downloadLocation; // @synthesize downloadLocation=_downloadLocation;
- (id)initWithRequestTask:(id)arg1 networkCallbackDelegate:(id)arg2;
- (id)initWithRequestTask:(id)arg1 networkCallbackDelegate:(id)arg2 useNativeNetworkManager:(_Bool)arg3;
- (void)onCanceled:(id)arg1 info:(id)arg2;
- (void)onFailed:(id)arg1 info:(id)arg2 error:(id)arg3;
- (void)onReadCompleted:(id)arg1 info:(id)arg2;
- (void)onResponseStarted:(id)arg1 info:(id)arg2;
- (void)onSucceeded:(id)arg1 info:(id)arg2 buffer:(id)arg3 bytesRead:(long long)arg4;
- (_Bool)setUpDownloadLocation;

@end

