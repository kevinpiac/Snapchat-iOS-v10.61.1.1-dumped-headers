//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCStreamingURLProviding-Protocol.h"

@class NSString;
@protocol SCStreamingDelegate, SCStreamingRequestExtraInfoProviding, SCWebProxyURLProviding;

@interface SCStreamingURLProvider : NSObject <SCStreamingURLProviding>
{
    id <SCWebProxyURLProviding> _urlProvider;
    id <SCStreamingRequestExtraInfoProviding> _extraInfoProvider;
    id <SCStreamingDelegate> _streamingDelegate;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) __weak id <SCStreamingRequestExtraInfoProviding> extraInfoProvider; // @synthesize extraInfoProvider=_extraInfoProvider;
- (id)initWithURLProvider:(id)arg1 extraInfoProvider:(id)arg2 streamingDelegate:(id)arg3;
@property(readonly, nonatomic) __weak id <SCStreamingDelegate> streamingDelegate; // @synthesize streamingDelegate=_streamingDelegate;
- (id)streamingURLForRequestInfo:(id)arg1;
@property(readonly, nonatomic) id <SCWebProxyURLProviding> urlProvider; // @synthesize urlProvider=_urlProvider;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
