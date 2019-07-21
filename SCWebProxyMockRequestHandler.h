//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCWebProxyRequestHandling-Protocol.h"

@class NSData, NSString;

@interface SCWebProxyMockRequestHandler : NSObject <SCWebProxyRequestHandling>
{
    NSData *_resourceData;
}

- (void).cxx_destruct;
- (void)handleProxyRequest:(id)arg1 urlProvider:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)handleStreamingProxyRequest:(id)arg1 urlProvider:(id)arg2 updateBlock:(CDUnknownBlockType)arg3;
- (void)handleUnexpectedConnectionClosedForProxyRequest:(id)arg1;
- (id)initWithResourceData:(id)arg1;
@property(readonly, nonatomic) NSData *resourceData; // @synthesize resourceData=_resourceData;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

