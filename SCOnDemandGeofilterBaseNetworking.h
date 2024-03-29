//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSString, SCOnDemandGeofilterAuthToken, SCOnDemandGeofilterEventsLogger, SCSessionRequestManager, SCUserSession;

@interface SCOnDemandGeofilterBaseNetworking : NSObject
{
    SCUserSession *_userSession;
    SCOnDemandGeofilterAuthToken *_authTokenManager;
    NSMutableDictionary *_eventStartTimes;
    SCSessionRequestManager *_sessionRequestManager;
    NSString *_baseURL;
    SCOnDemandGeofilterEventsLogger *_logger;
}

- (void).cxx_destruct;
- (id)_authorizationHeader;
- (id)_cacheKeyForEndpoint:(unsigned long long)arg1;
@property(readonly, nonatomic) NSString *baseURL; // @synthesize baseURL=_baseURL;
- (id)initWithUserSession:(id)arg1 logger:(id)arg2;
@property(readonly, nonatomic) SCOnDemandGeofilterEventsLogger *logger; // @synthesize logger=_logger;
@property(readonly, nonatomic) SCSessionRequestManager *sessionRequestManager; // @synthesize sessionRequestManager=_sessionRequestManager;
- (void)submitDownloadRequest:(id)arg1 success:(CDUnknownBlockType)arg2 failure:(CDUnknownBlockType)arg3;
- (void)submitRequest:(id)arg1 preloadFromCache:(_Bool)arg2 success:(CDUnknownBlockType)arg3 failure:(CDUnknownBlockType)arg4;
- (void)submitRequest:(id)arg1 success:(CDUnknownBlockType)arg2 failure:(CDUnknownBlockType)arg3;

@end

