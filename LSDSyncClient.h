//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SRWebSocketDelegate-Protocol.h"

@class AFHTTPClient, LSDAddress, NSData, NSString, NSTimer, SRWebSocket;
@protocol LSDSyncClientDataSource, LSDSyncClientDelegate;

@interface LSDSyncClient : NSObject <SRWebSocketDelegate>
{
    SRWebSocket *_webSocket;
    NSTimer *_pingTimer;
    LSDAddress *_syncServiceAddress;
    AFHTTPClient *_httpClient;
    NSData *_encryptionKey;
    NSData *_serverCertificate;
    _Bool _acceptAnyServerCertificate;
    id <LSDSyncClientDelegate> _delegate;
    id <LSDSyncClientDataSource> _dataSource;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool TLSEnabled;
@property(nonatomic) _Bool acceptAnyServerCertificate; // @synthesize acceptAnyServerCertificate=_acceptAnyServerCertificate;
- (void)connectWithAddress:(id)arg1 encryptionKey:(id)arg2;
- (void)connectWithAddress:(id)arg1 encryptionKey:(id)arg2 serverCertificate:(id)arg3;
@property(nonatomic) __weak id <LSDSyncClientDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property(nonatomic) __weak id <LSDSyncClientDelegate> delegate; // @synthesize delegate=_delegate;
- (void)disconnect;
- (void)downloadLensWithId:(id)arg1;
@property(readonly, nonatomic) _Bool encryptionEnabled;
- (id)parseProtobufObjectFromData:(id)arg1 protobufClass:(Class)arg2;
- (void)processWebSocketMessageFromData:(id)arg1;
- (void)sendPing;
- (void)webSocket:(id)arg1 didCloseWithCode:(long long)arg2 reason:(id)arg3 wasClean:(_Bool)arg4;
- (void)webSocket:(id)arg1 didFailWithError:(id)arg2;
- (void)webSocket:(id)arg1 didReceiveMessageWithData:(id)arg2;
- (void)webSocket:(id)arg1 didReceivePong:(id)arg2;
- (void)webSocketDidOpen:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

