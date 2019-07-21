//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface Cronet : NSObject
{
}

+ (_Bool)addPublicKeyPinsForHost:(id)arg1 pinHashes:(id)arg2 includeSubdomains:(_Bool)arg3 expirationDate:(id)arg4 error:(id *)arg5;
+ (_Bool)addQuicHint:(id)arg1 port:(int)arg2 altPort:(int)arg3;
+ (void)checkNotStarted;
+ (void)configureCronetEnvironmentForTesting:(struct CronetEnvironment *)arg1;
+ (id)createCronetErrorWithCode:(int)arg1 userInfo:(id)arg2;
+ (id)createIllegalArgumentErrorWithArgument:(id)arg1 reason:(id)arg2;
+ (id)createUnsupportedConfigurationError:(id)arg1;
+ (void)enableTestCertVerifierForTesting;
+ (id)getAcceptLanguages;
+ (id)getAcceptLanguagesFromPreferredLanguages:(id)arg1;
+     // Error parsing type: ^{SingleThreadTaskRunner=^^?{AtomicRefCount={atomic<int>=Ai}}}16@0:8, name: getFileThreadRunnerForTesting
+ (struct stream_engine *)getGlobalEngine;
+ (id)getGlobalMetricsDeltas;
+ (unsigned long long)getMetricsMapSize;
+ (id)getNetLogPathForFile:(id)arg1;
+     // Error parsing type: ^{SingleThreadTaskRunner=^^?{AtomicRefCount={atomic<int>=Ai}}}16@0:8, name: getNetworkThreadRunnerForTesting
+ (id)getUserAgent;
+ (void)initialize;
+ (void)installIntoSessionConfiguration:(id)arg1;
+ (void)preventStrippingCronetBidirectionalStream;
+ (void)preventStrippingNativeCronetModules;
+ (void)registerHttpProtocolHandler;
+ (void)setAcceptLanguages:(id)arg1;
+ (void)setBrotliEnabled:(_Bool)arg1;
+ (void)setEnablePublicKeyPinningBypassForLocalTrustAnchors:(_Bool)arg1;
+ (void)setExperimentalOptions:(id)arg1;
+ (void)setHostResolverRulesForTesting:(id)arg1;
+ (void)setHttp2Enabled:(_Bool)arg1;
+ (void)setHttpCacheType:(long long)arg1;
+ (void)setMetricsEnabled:(_Bool)arg1;
+ (void)setMockCertVerifierForTesting:(unique_ptr_33e8c17e)arg1;
+ (void)setNetworkThreadPriority:(double)arg1;
+ (void)setQuicEnabled:(_Bool)arg1;
+ (void)setRequestFilterBlock:(CDUnknownBlockType)arg1;
+ (void)setSslKeyLogFileName:(id)arg1;
+ (void)setUserAgent:(id)arg1 partial:(_Bool)arg2;
+ (void)shutdownForTesting;
+ (void)start;
+ (void)startInternal;
+ (_Bool)startNetLogToFile:(id)arg1 logBytes:(_Bool)arg2;
+ (void)stopNetLog;
+ (void)unregisterHttpProtocolHandler;
+ (void)unswizzleForTesting;

@end

