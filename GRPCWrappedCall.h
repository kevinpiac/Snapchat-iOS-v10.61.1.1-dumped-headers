//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class GRPCPooledChannel;

@interface GRPCWrappedCall : NSObject
{
    GRPCPooledChannel *_pooledChannel;
    struct grpc_call *_call;
}

- (void).cxx_destruct;
- (void)cancel;
- (void)channelDisconnected;
- (void)dealloc;
- (id)initWithUnmanagedCall:(struct grpc_call *)arg1 pooledChannel:(id)arg2;
- (void)startBatchWithOperations:(id)arg1;
- (void)startBatchWithOperations:(id)arg1 errorHandler:(CDUnknownBlockType)arg2;

@end

