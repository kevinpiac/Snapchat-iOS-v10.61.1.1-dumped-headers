//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class GRPCChannelConfiguration;

@interface GRPCChannel : NSObject
{
    GRPCChannelConfiguration *_configuration;
    struct grpc_channel *_unmanagedChannel;
}

- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithChannelConfiguration:(id)arg1;
- (struct grpc_call *)unmanagedCallWithPath:(id)arg1 completionQueue:(id)arg2 callOptions:(id)arg3;

@end

