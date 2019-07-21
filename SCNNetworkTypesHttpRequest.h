//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, SCNNetworkTypesDeprecatedHttpRequestInfo, SCNNetworkTypesHttpParams, SCNNetworkTypesHttpRequestKey;

@interface SCNNetworkTypesHttpRequest : NSObject
{
    _Bool _usesDeprecatedHttpRequestInfo;
    SCNNetworkTypesHttpRequestKey *_key;
    NSString *_url;
    SCNNetworkTypesHttpParams *_httpParams;
    SCNNetworkTypesDeprecatedHttpRequestInfo *_deprecatedHttpRequestInfo;
}

+ (id)HttpRequestWithKey:(id)arg1 url:(id)arg2 httpParams:(id)arg3 usesDeprecatedHttpRequestInfo:(_Bool)arg4 deprecatedHttpRequestInfo:(id)arg5;
- (void).cxx_destruct;
@property(readonly, nonatomic) SCNNetworkTypesDeprecatedHttpRequestInfo *deprecatedHttpRequestInfo; // @synthesize deprecatedHttpRequestInfo=_deprecatedHttpRequestInfo;
- (id)description;
@property(readonly, nonatomic) SCNNetworkTypesHttpParams *httpParams; // @synthesize httpParams=_httpParams;
- (id)initWithKey:(id)arg1 url:(id)arg2 httpParams:(id)arg3 usesDeprecatedHttpRequestInfo:(_Bool)arg4 deprecatedHttpRequestInfo:(id)arg5;
@property(readonly, nonatomic) SCNNetworkTypesHttpRequestKey *key; // @synthesize key=_key;
@property(readonly, nonatomic) NSString *url; // @synthesize url=_url;
@property(readonly, nonatomic) _Bool usesDeprecatedHttpRequestInfo; // @synthesize usesDeprecatedHttpRequestInfo=_usesDeprecatedHttpRequestInfo;

@end
