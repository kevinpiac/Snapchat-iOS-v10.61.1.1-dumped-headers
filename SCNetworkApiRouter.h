//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class SCNNetworkApiNetworkApi;
@protocol SCNNetworkCallbackDelegate;

@interface SCNetworkApiRouter : NSObject
{
    SCNNetworkApiNetworkApi *_nativeNetworkApi;
    id <SCNNetworkCallbackDelegate> _networkCallbackDelegate;
}

- (void).cxx_destruct;
- (void)cancelRequestTask:(id)arg1;
- (id)initWithNetworkApi:(id)arg1 networkCallbackDelegate:(id)arg2;
- (void)submitNativeHttpRequest:(id)arg1 withRequestTask:(id)arg2;
- (void)updateRankingSignalWithRequestTask:(id)arg1;
- (void)updateUILayoutOrder:(id)arg1 rootContext:(id)arg2 mediaContextType:(long long)arg3;
- (id)uploadDataProviderFromRequest:(id)arg1 failed:(_Bool *)arg2;

@end

