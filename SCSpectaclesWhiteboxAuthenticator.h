//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface SCSpectaclesWhiteboxAuthenticator : NSObject
{
    _Bool _useV3Protocol;
    void *_ctx;
}

@property(nonatomic) void *ctx; // @synthesize ctx=_ctx;
- (void)dealloc;
- (_Bool)generateVerificationRequest:(id *)arg1 tag:(id *)arg2;
- (id)initWithAppNonce:(id)arg1 eyewearNonce:(id)arg2 sharedSecret:(id)arg3 useV3Protocol:(_Bool)arg4 callback:(CDUnknownFunctionPointerType)arg5;
- (long long)keyVersion;
- (_Bool)parseVerificationResponse:(id)arg1 tag:(id)arg2;
@property(nonatomic) _Bool useV3Protocol; // @synthesize useV3Protocol=_useV3Protocol;
- (id)verifyAuthenticityWithCert:(id)arg1;

@end

