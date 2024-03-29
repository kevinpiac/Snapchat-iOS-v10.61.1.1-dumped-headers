//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCoding-Protocol.h"

@class NSDictionary, NSString;

@interface SCSecurityProxyCredentials : NSObject <NSCoding>
{
    NSDictionary *_proxyTokens;
}

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithProxyToken:(id)arg1 expiration:(id)arg2;
- (id)initWithProxyToken:(id)arg1 expiration:(id)arg2 targetEndpoint:(id)arg3;
- (_Bool)isValid;
- (_Bool)isValidForEndpoint:(id)arg1;
@property(readonly, copy, nonatomic) NSString *proxyToken;
- (void)removeTokenForEndpoint:(id)arg1;
- (id)tokenForEndpoint:(id)arg1;
- (void)updateToken:(id)arg1 expiration:(id)arg2 targetEndpoint:(id)arg3;

@end

