//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCWebProxyLayer.h"

@protocol SCStreamingResponseCaching, SCWebProxyCacheLayerDelegate;

@interface SCWebProxyCacheLayer : SCWebProxyLayer
{
    id <SCWebProxyCacheLayerDelegate> _delegate;
    id <SCStreamingResponseCaching> _responseCache;
    double _ttl;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) __weak id <SCWebProxyCacheLayerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)handleProxyRequest:(id)arg1 urlProvider:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)handleStreamingProxyRequest:(id)arg1 urlProvider:(id)arg2 updateBlock:(CDUnknownBlockType)arg3;
- (id)initWithRequestHandler:(id)arg1 delegate:(id)arg2 responseCache:(id)arg3 ttl:(double)arg4;
@property(readonly, nonatomic) id <SCStreamingResponseCaching> responseCache; // @synthesize responseCache=_responseCache;
@property(readonly, nonatomic) double ttl; // @synthesize ttl=_ttl;

@end

