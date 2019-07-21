//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SRSecurityPolicy.h"

@class NSArray;

@interface SRPinningSecurityPolicy : SRSecurityPolicy
{
    NSArray *_pinnedCertificates;
}

- (void).cxx_destruct;
- (_Bool)evaluateServerTrust:(struct __SecTrust *)arg1 forDomain:(id)arg2;
- (id)initWithCertificates:(id)arg1;
@property(readonly, copy, nonatomic) NSArray *pinnedCertificates; // @synthesize pinnedCertificates=_pinnedCertificates;

@end

