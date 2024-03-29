//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCRequest.h"

@class NSData, NSDictionary, NSMutableURLRequest, NSString, NSURL;

@interface SCResumeableDownloadRequest : SCRequest
{
    NSData *_resumeData;
    NSDictionary *_additionalHTTPHeaders;
    NSMutableURLRequest *_urlRequest;
    NSDictionary *_parameters;
    _Bool _didInitWithUrl;
    NSString *_endpoint;
    NSURL *_endpointUrl;
    NSURL *_url;
    NSURL *_location;
}

- (void).cxx_destruct;
- (unsigned long long)approximateRequestSize;
- (void)cancelByProducingResumeData:(CDUnknownBlockType)arg1;
- (void)cleanUp;
- (id)description;
- (id)downloadTask;
- (id)downloadedData;
- (void)executeWithAuthenticator:(id)arg1 completionQueue:(id)arg2 completionBlock:(CDUnknownBlockType)arg3 preparationQueue:(id)arg4;
- (id)initWithEndpoint:(id)arg1 parameters:(id)arg2 additionalHTTPHeaders:(id)arg3 key:(id)arg4 contexts:(id)arg5 priority:(long long)arg6 fallbackPriority:(long long)arg7 connectivity:(long long)arg8 trackingInfo:(id)arg9;
- (id)initWithResumeData:(id)arg1 key:(id)arg2 contexts:(id)arg3 priority:(long long)arg4 fallbackPriority:(long long)arg5 connectivity:(long long)arg6 trackingInfo:(id)arg7;
- (id)initWithURL:(id)arg1 additionalHTTPHeaders:(id)arg2 key:(id)arg3 contexts:(id)arg4 priority:(long long)arg5 fallbackPriority:(long long)arg6 connectivity:(long long)arg7 trackingInfo:(id)arg8;
- (void)initializeURLRequestWithAuthenticator:(id)arg1;
@property(readonly, copy, nonatomic) NSURL *location; // @synthesize location=_location;
- (id)path;
- (void)setNativeDownloadLocation:(id)arg1;
- (double)timeoutInterval;
- (id)url;
- (id)urlRequest;

@end

