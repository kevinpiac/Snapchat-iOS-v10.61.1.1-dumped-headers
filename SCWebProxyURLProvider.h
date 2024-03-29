//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCWebProxyURLProviding-Protocol.h"

@class NSString, SCLRUCache;
@protocol SCWebProxyURLProviderDelegate;

@interface SCWebProxyURLProvider : NSObject <SCWebProxyURLProviding>
{
    SCLRUCache *_requestInfoByRequestId;
    id <SCWebProxyURLProviderDelegate> _delegate;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) __weak id <SCWebProxyURLProviderDelegate> delegate; // @synthesize delegate=_delegate;
- (id)initWithDelegate:(id)arg1;
- (id)proxiedURLForRequestInfo:(id)arg1;
- (id)requestInfoForProxiedURL:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

