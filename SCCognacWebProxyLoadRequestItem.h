//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, SCCognacWebProxyDownloadRequest, SCCognacWebProxyLoadRequest;
@protocol OS_dispatch_queue;

@interface SCCognacWebProxyLoadRequestItem : NSObject
{
    _Bool _cancelled;
    SCCognacWebProxyLoadRequest *_request;
    NSObject<OS_dispatch_queue> *_completionQueue;
    CDUnknownBlockType _completionBlock;
    NSString *_cacheKey;
    SCCognacWebProxyDownloadRequest *_downloadRequest;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *cacheKey; // @synthesize cacheKey=_cacheKey;
@property(nonatomic) _Bool cancelled; // @synthesize cancelled=_cancelled;
@property(copy, nonatomic) CDUnknownBlockType completionBlock; // @synthesize completionBlock=_completionBlock;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *completionQueue; // @synthesize completionQueue=_completionQueue;
@property(retain, nonatomic) SCCognacWebProxyDownloadRequest *downloadRequest; // @synthesize downloadRequest=_downloadRequest;
@property(retain, nonatomic) SCCognacWebProxyLoadRequest *request; // @synthesize request=_request;

@end

