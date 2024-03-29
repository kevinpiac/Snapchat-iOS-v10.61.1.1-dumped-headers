//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSArray, NSDictionary, NSString, SCSnapAdsAdServeRequest, SCSnapAdsIdentifier, SCSnapAdsServeResponse;

@protocol SCSnapAdsOperationMetricsAdapter <NSObject>
- (void)logAdvertiserIdStatus:(NSString *)arg1 requestType:(unsigned long long)arg2 isPrimary:(_Bool)arg3;
- (void)logRequestFailedReason:(long long)arg1 adIdentifier:(SCSnapAdsIdentifier *)arg2 requestType:(unsigned long long)arg3 isPrimary:(_Bool)arg4;
- (void)requestResolvedAdIdentifiers:(NSArray *)arg1 requestType:(unsigned long long)arg2 statusCode:(long long)arg3 requestURL:(NSString *)arg4 requestLatencyInSec:(double)arg5 adProductType:(unsigned long long)arg6 isPrimary:(_Bool)arg7;
- (void)requestSubmittedAdIdentifier:(SCSnapAdsIdentifier *)arg1 requestType:(unsigned long long)arg2 requestURL:(NSString *)arg3 targetingParams:(NSDictionary *)arg4 debugViewParams:(NSDictionary *)arg5 isPrimary:(_Bool)arg6;
- (void)serveItemsMoreThanRequested:(unsigned long long)arg1 isPrimary:(_Bool)arg2;
- (void)serveRequestFailed:(SCSnapAdsAdServeRequest *)arg1 errorResponseType:(unsigned long long)arg2 requestType:(unsigned long long)arg3 failedReason:(long long)arg4 isPrimary:(_Bool)arg5;
- (void)serveRequestSubmitted:(SCSnapAdsAdServeRequest *)arg1 requestURL:(NSString *)arg2 requestType:(unsigned long long)arg3 debugViewParams:(NSDictionary *)arg4 isPrimary:(_Bool)arg5;
- (void)serveResponseFinishesDeserializing:(unsigned long long)arg1 responseSize:(long long)arg2 deserializationLatency:(double)arg3 serveItemsCount:(long long)arg4 isPrimary:(_Bool)arg5;
- (void)serveResponseResolved:(SCSnapAdsServeResponse *)arg1 isPrimary:(_Bool)arg2;
- (void)serveResponseStartsDeserializing:(SCSnapAdsAdServeRequest *)arg1 isPrimary:(_Bool)arg2;
- (void)trackRequestFailureErrorStatusCode:(long long)arg1 requestURL:(NSString *)arg2 requestType:(unsigned long long)arg3 requestLatencyInSec:(double)arg4 adType:(NSString *)arg5 adProductType:(unsigned long long)arg6 adIdentifier:(SCSnapAdsIdentifier *)arg7 isPrimary:(_Bool)arg8;
- (void)trackRequestSubmitted:(long long)arg1 adProductType:(unsigned long long)arg2 endpointSourceType:(long long)arg3 isPrimary:(_Bool)arg4;
- (void)trackRequestSuccessRequestURL:(NSString *)arg1 adIdentifier:(SCSnapAdsIdentifier *)arg2 requestType:(unsigned long long)arg3 requestLatencyInSec:(double)arg4 adType:(NSString *)arg5 adProductType:(unsigned long long)arg6 isPrimary:(_Bool)arg7;
@end

