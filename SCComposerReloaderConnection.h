//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "GCDAsyncSocketDelegate-Protocol.h"
#import "SCNComposerDaemonClientDataSender-Protocol.h"

@class GCDAsyncSocket, NSString, SCComposerReloaderDiscoveredService, SCNComposerDaemonClient;
@protocol OS_dispatch_queue, SCComposerReloaderConnectionDelegate;

@interface SCComposerReloaderConnection : NSObject <GCDAsyncSocketDelegate, SCNComposerDaemonClientDataSender>
{
    GCDAsyncSocket *_socket;
    id <SCComposerReloaderConnectionDelegate> _delegate;
    SCComposerReloaderDiscoveredService *_service;
    NSObject<OS_dispatch_queue> *_queue;
    SCNComposerDaemonClient *_deamonClient;
    _Bool _debug;
    _Bool _connecting;
}

- (void).cxx_destruct;
@property(retain, nonatomic) SCNComposerDaemonClient *daemonClient;
@property(readonly, nonatomic) SCComposerReloaderDiscoveredService *discoveredService;
- (id)initWithDiscoveredService:(id)arg1 delegateQueue:(id)arg2 delegate:(id)arg3 debug:(_Bool)arg4;
@property(readonly, nonatomic) NSString *key;
- (void)readNext;
- (void)socket:(id)arg1 didConnectToHost:(id)arg2 port:(unsigned short)arg3;
- (void)socket:(id)arg1 didReadData:(id)arg2 withTag:(long long)arg3;
- (void)socket:(id)arg1 didWriteDataWithTag:(long long)arg2;
- (void)socketDidDisconnect:(id)arg1 withError:(id)arg2;
- (_Bool)startWithError:(id *)arg1;
- (void)stop;
- (void)submitData:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

