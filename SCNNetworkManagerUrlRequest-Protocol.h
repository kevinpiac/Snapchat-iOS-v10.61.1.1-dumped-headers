//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class NSArray, NSDictionary, NSString, SCNNetworkManagerTrackingInfo;
@protocol SCNShimsDataProvider;

@protocol SCNNetworkManagerUrlRequest
- (long long)getConnectivity;
- (NSArray *)getContexts;
- (long long)getFallbackPriority;
- (NSDictionary *)getHeaders;
- (_Bool)getIsAuthenticated;
- (_Bool)getIsBigSizeMedia;
- (_Bool)getIsRelativePath;
- (_Bool)getIsUserInitiated;
- (NSString *)getKey;
- (NSDictionary *)getParameters;
- (id <SCNShimsDataProvider>)getPayload;
- (long long)getPriority;
- (NSString *)getRequestBatchId;
- (long long)getRequestMethod;
- (long long)getRequestType;
- (SCNNetworkManagerTrackingInfo *)getTrackingInfo;
- (NSString *)getUrl;
@end
