//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCGtqNetworkRequest.h"

@class SCULGtqServeRequest;

@interface SCGtqServeUnlockablesNetworkRequest : SCGtqNetworkRequest
{
    SCULGtqServeRequest *_serveRequest;
}

- (void).cxx_destruct;
- (id)initWithGtqServeRequest:(id)arg1 host:(id)arg2 path:(id)arg3 referenceId:(id)arg4 additionalHTTPHeaders:(id)arg5 useGzipRequestCompression:(_Bool)arg6;
- (id)key;
- (id)toSCRequest;

@end

