//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface SCNNetworkHttpRequestConverter : NSObject
{
}

+ (long long)FetchPriorityWithRequest:(id)arg1;
+ (long long)HttpMethodWithSCRequestMethod:(long long)arg1;
+ (long long)NetworkConnectivityWithReachabilityStatus:(long long)arg1;
+ (id)httpResponseHeaderForUrlResponseInfo:(id)arg1;
+ (id)httpURLResponseWithUrlResponseInfo:(id)arg1;
+ (long long)mediaContextTypeWithRequestType:(id)arg1;
+ (id)nativeHttpRequestWithRequestTask:(id)arg1;
+ (long long)prefetchConsumptionLikelihookWithMediaContextType:(long long)arg1 appState:(long long)arg2 enableLensControl:(_Bool)arg3 enableStoryControl:(_Bool)arg4 enablAdControl:(_Bool)arg5;
+ (id)rankingSignalsWithRequest:(id)arg1;
+ (id)statusCodeErrorForRequest:(id)arg1 response:(id)arg2;
+ (id)uiPageInfoListWithDisplayContextList:(id)arg1;
+ (id)uiPageInfoWithDisplayContext:(id)arg1;

@end

