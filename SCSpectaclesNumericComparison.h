//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface SCSpectaclesNumericComparison : NSObject
{
    struct EyewearPairing *_eyewearPairing;
}

- (_Bool)checkEyewearVerificationMessage:(id)arg1;
- (void)dealloc;
@property(nonatomic) struct EyewearPairing *eyewearPairing; // @synthesize eyewearPairing=_eyewearPairing;
- (id)getAppVerificationMessage:(id)arg1 appNonce:(id)arg2 eyewearUUID:(id)arg3 eyewearNonce:(id)arg4;
- (id)init;
- (_Bool)setSharedSecret:(id)arg1;
- (_Bool)setVerificationCode:(id)arg1;

@end
