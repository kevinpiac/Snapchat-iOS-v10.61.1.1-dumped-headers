//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCComposerReloaderServiceDiscovery-Protocol.h"

@class NSString, NSTimer, NSURLSessionDataTask;
@protocol OS_dispatch_queue, SCComposerReloaderServiceDiscoveryDelegate;

@interface SCComposerReloaderRegistryDiscovery : NSObject <SCComposerReloaderServiceDiscovery>
{
    NSObject<OS_dispatch_queue> *_queue;
    NSString *_deviceUUID;
    double _reloaderStartDelay;
    NSTimer *_timer;
    NSURLSessionDataTask *_currentTask;
    long long _failedRequestCount;
    _Bool _debug;
    NSString *_currentUsername;
    id <SCComposerReloaderServiceDiscoveryDelegate> _delegate;
}

- (void).cxx_destruct;
- (id)baseURL;
@property(copy, nonatomic) NSString *currentUsername; // @synthesize currentUsername=_currentUsername;
@property(nonatomic) _Bool debug; // @synthesize debug=_debug;
@property(nonatomic) __weak id <SCComposerReloaderServiceDiscoveryDelegate> delegate; // @synthesize delegate=_delegate;
- (id)discoveredServicesFromWire:(struct ReloaderService)arg1;
- (void)handleResponse:(struct ListServicesResponse)arg1;
- (id)initWithQueue:(id)arg1 deviceUUID:(id)arg2;
- (void)scheduleSendRequest;
- (void)sendRequest;
- (void)startListening;
- (void)stopListening;
- (id)urlWithPath:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

