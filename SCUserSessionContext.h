//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class SOJULoginResponse;

@interface SCUserSessionContext : NSObject
{
    unsigned long long _underlyingEnum;
    SOJULoginResponse *_fromLogIn_logInResponse;
    SOJULoginResponse *_fromRegistration_registrationResponse;
}

+ (id)fromLogInWithResponse:(id)arg1;
+ (id)fromRegistrationWithResponse:(id)arg1;
+ (id)resumed;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)initWithUnderlyingEnum:(unsigned long long)arg1 logInResponse:(id)arg2 registrationResponse:(id)arg3;
- (_Bool)isEqual:(id)arg1;
- (_Bool)isEqualToContext:(id)arg1;
@property(readonly, nonatomic) _Bool isFromLogIn;
@property(readonly, nonatomic) _Bool isFromRegistration;
@property(readonly, nonatomic) _Bool isResumed;
- (void)matchFromLogIn:(CDUnknownBlockType)arg1;
- (void)matchFromRegistration:(CDUnknownBlockType)arg1;
- (void)matchResumed:(CDUnknownBlockType)arg1;
- (void)matchResumed:(CDUnknownBlockType)arg1 fromLogIn:(CDUnknownBlockType)arg2 fromRegistration:(CDUnknownBlockType)arg3;

@end

