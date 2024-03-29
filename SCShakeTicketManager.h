//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class SCShakeUploadThrottleController;
@protocol OS_dispatch_queue;

@interface SCShakeTicketManager : NSObject
{
    NSObject<OS_dispatch_queue> *_workQueue;
    SCShakeUploadThrottleController *_mThrottleController;
}

+ (_Bool)isNetworkError:(long long)arg1;
+ (_Bool)isPermanentError:(id)arg1 error:(id)arg2;
+ (_Bool)shouldInfiniteRetry:(id)arg1 error:(id)arg2;
- (void).cxx_destruct;
- (id)_authorizedRequestPayload:(id)arg1;
- (id)_jsonStringFromUnsanitizedString:(id)arg1;
- (id)_unauthorizedRequestPayload:(id)arg1;
- (id)initWithQueue:(id)arg1;
- (void)uploadShakeLogFiles:(id)arg1 uploadUrl:(id)arg2 configuration:(id)arg3 onSuccess:(CDUnknownBlockType)arg4 onTransientError:(CDUnknownBlockType)arg5 onPermanentError:(CDUnknownBlockType)arg6;
- (void)uploadShakeTicket:(id)arg1 configuration:(id)arg2 onSuccess:(CDUnknownBlockType)arg3 onDuplicate:(CDUnknownBlockType)arg4 onTransientError:(CDUnknownBlockType)arg5 onPermanentError:(CDUnknownBlockType)arg6;

@end

