//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCNNetworkManagerNetworkManager-Protocol.h"

@class SCQueuePerformer, SCSessionRequestManager;

@interface SCNNetworkManagerRequestManagerWrapper : NSObject <SCNNetworkManagerNetworkManager>
{
    SCSessionRequestManager *_requestManager;
    SCQueuePerformer *_queuePerformer;
    SCQueuePerformer *_progressiveUpdateQueuePerformer;
}

+ (id)_nativeConnectivityToString:(long long)arg1;
+ (id)_nativePriorityToString:(long long)arg1;
+ (long long)_platformConnectivityFromNativeConnectivity:(long long)arg1;
+ (long long)_platformPriorityFromNativePriority:(long long)arg1;
+ (id)_platformRequestFromNativeRequest:(id)arg1 requestKey:(id)arg2 requestContext:(id)arg3 priority:(long long)arg4 connectivity:(long long)arg5 httpHeaders:(id)arg6 requestMediaType:(long long)arg7;
+ (long long)_platformRequestMethodFromNativeRequestMethod:(long long)arg1;
+ (long long)_platformRequestTypeFromNativeRequestType:(long long)arg1;
- (void).cxx_destruct;
- (void)cancelRequest:(id)arg1;
- (id)initWithRequestManager:(id)arg1;
- (void)submit:(id)arg1 callback:(id)arg2 requestContext:(id)arg3 priority:(long long)arg4 connectivity:(long long)arg5 httpHeaders:(id)arg6 requestMediaType:(long long)arg7;
- (void)submitProgressiveDownloadRequest:(id)arg1 requestKey:(id)arg2 requestContext:(id)arg3 priority:(long long)arg4 connectivity:(long long)arg5 httpHeaders:(id)arg6 callback:(id)arg7;
- (void)updateRankingInfo:(id)arg1 priority:(long long)arg2 connectivity:(long long)arg3 contexts:(id)arg4;

@end

